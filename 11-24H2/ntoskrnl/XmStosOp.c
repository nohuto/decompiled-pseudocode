/*
 * XREFs of XmStosOp @ 0x140460EA0
 * Callers:
 *     <none>
 * Callees:
 *     XmGetStringAddressRange @ 0x1404610D8 (XmGetStringAddressRange.c)
 *     XmSetSourceValue @ 0x140461CF8 (XmSetSourceValue.c)
 *     XmStoreResult @ 0x140461F4C (XmStoreResult.c)
 *     XmGetStringAddress @ 0x140574D6C (XmGetStringAddress.c)
 */

unsigned __int64 __fastcall XmStosOp(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  unsigned int v8; // edi
  unsigned __int64 v9; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  unsigned int v13; // r9d
  bool v14; // zf
  int v15; // r9d
  __int64 StringAddress; // rax
  __int64 v17; // rdx
  unsigned int v18; // [rsp+40h] [rbp+8h] BYREF

  XmSetSourceValue(a1, a1 + 24);
  if ( !*(_BYTE *)(v2 + 139) )
  {
    StringAddress = XmGetStringAddress(v2, 0LL, 7LL);
    v17 = *(unsigned int *)(a1 + 108);
    *(_QWORD *)(a1 + 88) = StringAddress;
    return XmStoreResult(a1, v17);
  }
  if ( *(_BYTE *)(v2 + 137) )
  {
    v4 = *(_DWORD *)(v2 + 28);
    *(_DWORD *)(v2 + 28) = 0;
  }
  else
  {
    v4 = *(unsigned __int16 *)(v2 + 28);
    *(_WORD *)(v2 + 28) = 0;
  }
  v5 = *(_DWORD *)(v2 + 120);
  if ( !v5 )
  {
    v6 = *(unsigned __int8 *)(a1 + 108) | (*(unsigned __int8 *)(a1 + 108) << 8);
    v7 = v6 << 16;
LABEL_6:
    v8 = v7 | v6;
    goto LABEL_7;
  }
  if ( v5 == 1 )
  {
    v7 = *(unsigned __int16 *)(a1 + 108);
    v6 = v7 << 16;
    goto LABEL_6;
  }
  v8 = *(_DWORD *)(a1 + 108);
LABEL_7:
  v9 = (unsigned int)(v5 + 1);
  result = 4 / v9;
  v11 = 4 % v9;
  v12 = 4 / v9;
  while ( v4 )
  {
    v18 = v4;
    result = XmGetStringAddressRange(a1, v11, v3, &v18);
    v13 = v18;
    v4 -= v18;
    v14 = (*(_DWORD *)(a1 + 16) & 0x400) == 0;
    *(_QWORD *)(a1 + 88) = result;
    if ( !v14 )
    {
      result -= v13 * (*(_DWORD *)(a1 + 120) + 1);
      *(_QWORD *)(a1 + 88) = result;
    }
    while ( v13 )
    {
      if ( v13 < (unsigned int)v12 || (result & 3) != 0 )
      {
        XmStoreResult(a1, v8);
        *(_QWORD *)(a1 + 88) += *(unsigned int *)(a1 + 120) + 1LL;
        v13 = v15 - 1;
      }
      else
      {
        *(_DWORD *)result = v8;
        *(_QWORD *)(a1 + 88) += 4LL;
        v13 -= v12;
      }
      result = *(_QWORD *)(a1 + 88);
    }
  }
  return result;
}
