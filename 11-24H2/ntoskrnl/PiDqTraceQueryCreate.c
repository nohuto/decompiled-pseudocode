/*
 * XREFs of PiDqTraceQueryCreate @ 0x1409F2944
 * Callers:
 *     PiDqIrpQueryCreate @ 0x1409F2380 (PiDqIrpQueryCreate.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x14041D840 (PsGetCurrentThreadProcessId.c)
 *     McTemplateK0pqzzzzzzz_EtwWriteTransfer @ 0x1404AF0D4 (McTemplateK0pqzzzzzzz_EtwWriteTransfer.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpConvertDevpropcompkeyArrayToString @ 0x140720D08 (PnpConvertDevpropcompkeyArrayToString.c)
 *     FilterConvertToString @ 0x140824AB0 (FilterConvertToString.c)
 *     PiDqConvertObjectTypeToString @ 0x140A9067C (PiDqConvertObjectTypeToString.c)
 *     PiDqConvertQueryFlagsToString @ 0x140AB820C (PiDqConvertQueryFlagsToString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqTraceQueryCreate(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // rdi
  _WORD *v4; // rsi
  char *v5; // r13
  _WORD *v6; // r15
  char *v7; // r12
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // eax
  char *Pool2; // rax
  unsigned int v12; // ecx
  char *v13; // rdx
  char *v14; // rax
  __int64 v15; // rax
  void *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rax
  char *v19; // rax
  unsigned int v20; // ecx
  char *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // [rsp+20h] [rbp-58h]
  __int64 v24[3]; // [rsp+60h] [rbp-18h] BYREF
  unsigned int v26; // [rsp+C8h] [rbp+50h] BYREF
  const wchar_t *v27; // [rsp+D0h] [rbp+58h]
  char *v28; // [rsp+D8h] [rbp+60h]

  v1 = 0;
  if ( byte_140EEFF62 >= 0 )
    return (unsigned int)v1;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0LL;
  v28 = 0LL;
  v24[0] = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v1 = PiDqConvertObjectTypeToString(*(unsigned int *)(v3 + 16), v24);
  if ( v1 < 0 )
    return (unsigned int)v1;
  v8 = *(_DWORD *)(v3 + 20);
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        return (unsigned int)-1073741811;
      v10 = *(_DWORD *)(v3 + 24);
      v27 = L"Instances";
      if ( v10 <= 2 )
        return (unsigned int)-1073741811;
      Pool2 = (char *)ExAllocatePool2(0x100uLL, 2LL * v10, 0x58706E50u);
      v7 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      memmove(Pool2, *(const void **)(v3 + 32), 2LL * *(unsigned int *)(v3 + 24));
      v12 = *(_DWORD *)(v3 + 24) - 2;
      if ( *(_DWORD *)(v3 + 24) != 2 )
      {
        v13 = &v7[2 * v12];
        v27 = L"Instances";
        do
        {
          if ( !*(_WORD *)v13 )
            *(_WORD *)v13 = 32;
          v13 -= 2;
          --v12;
        }
        while ( v12 );
      }
      v28 = v7;
    }
    else
    {
      v14 = *(char **)(v3 + 24);
      v27 = L"Instance";
      v28 = v14;
    }
  }
  else
  {
    v27 = L"Type";
  }
  v26 = 512;
  v15 = ExAllocatePool2(0x100uLL, 0x200uLL, 0x58706E50u);
  v16 = (void *)v15;
  if ( !v15 )
    goto LABEL_27;
  v1 = PiDqConvertQueryFlagsToString(*(unsigned int *)(v3 + 40), v15, 512LL, &v26);
  if ( v1 == -1073741789 )
  {
    ExFreePoolWithTag(v16, 0x58706E50u);
    v17 = ExAllocatePool2(0x100uLL, v26, 0x58706E50u);
    v16 = (void *)v17;
    if ( !v17 )
      goto LABEL_27;
    v1 = PiDqConvertQueryFlagsToString(*(unsigned int *)(v3 + 40), v17, v26, &v26);
  }
  if ( v1 >= 0 )
  {
    if ( (*(_DWORD *)(v3 + 40) & 4) != 0 )
    {
      v18 = *(unsigned int *)(v3 + 48);
      if ( (unsigned int)v18 <= 2 )
      {
        v1 = -1073741811;
        goto LABEL_52;
      }
      v19 = (char *)ExAllocatePool2(0x100uLL, 2 * v18, 0x58706E50u);
      v1 = 0;
      v5 = v19;
      if ( !v19 )
        goto LABEL_27;
      memmove(v19, *(const void **)(v3 + 56), 2LL * *(unsigned int *)(v3 + 48));
      v20 = *(_DWORD *)(v3 + 48) - 2;
      if ( *(_DWORD *)(v3 + 48) != 2 )
      {
        v21 = &v5[2 * v20];
        do
        {
          if ( !*(_WORD *)v21 )
            *(_WORD *)v21 = 32;
          v21 -= 2;
          --v20;
        }
        while ( v20 );
        v4 = 0LL;
      }
    }
    else
    {
      v1 = 0;
    }
    if ( *(_DWORD *)(v3 + 64) )
    {
      v26 = 512;
      v6 = (_WORD *)ExAllocatePool2(0x100uLL, 0x200uLL, 0x58706E50u);
      if ( !v6 )
        goto LABEL_27;
      v1 = PnpConvertDevpropcompkeyArrayToString(*(_QWORD *)(v3 + 72), *(_DWORD *)(v3 + 64), v6, 0x200u, &v26);
      if ( v1 == -1073741789 )
      {
        ExFreePoolWithTag(v6, 0x58706E50u);
        v6 = (_WORD *)ExAllocatePool2(0x100uLL, v26, 0x58706E50u);
        if ( !v6 )
          goto LABEL_27;
        v1 = PnpConvertDevpropcompkeyArrayToString(*(_QWORD *)(v3 + 72), *(_DWORD *)(v3 + 64), v6, v26, &v26);
      }
      if ( v1 < 0 )
        goto LABEL_52;
      v1 = 0;
    }
    if ( !*(_DWORD *)(v3 + 80) )
      goto LABEL_50;
    v26 = 512;
    v4 = (_WORD *)ExAllocatePool2(0x100uLL, 0x200uLL, 0x58706E50u);
    if ( v4 )
    {
      v1 = FilterConvertToString(*(_DWORD *)(v3 + 80), *(_QWORD *)(v3 + 88), 0x200u, v4, &v26);
      if ( v1 != -1073741789 )
      {
LABEL_48:
        if ( v1 < 0 )
          goto LABEL_52;
        v1 = 0;
LABEL_50:
        if ( byte_140EEFF62 < 0 )
        {
          LODWORD(v23) = PsGetCurrentThreadProcessId();
          v1 = McTemplateK0pqzzzzzzz_EtwWriteTransfer(
                 v24[0],
                 v22,
                 (const GUID *)v3,
                 a1,
                 v23,
                 v24[0],
                 v27,
                 v28,
                 v16,
                 v5,
                 v6,
                 v4);
        }
        goto LABEL_52;
      }
      ExFreePoolWithTag(v4, 0x58706E50u);
      v4 = (_WORD *)ExAllocatePool2(0x100uLL, v26, 0x58706E50u);
      if ( v4 )
      {
        v1 = FilterConvertToString(*(_DWORD *)(v3 + 80), *(_QWORD *)(v3 + 88), v26, v4, &v26);
        goto LABEL_48;
      }
    }
LABEL_27:
    v1 = -1073741670;
  }
LABEL_52:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x58706E50u);
  if ( v16 )
    ExFreePoolWithTag(v16, 0x58706E50u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x58706E50u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x58706E50u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x58706E50u);
  return (unsigned int)v1;
}
