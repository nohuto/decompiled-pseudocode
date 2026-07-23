/*
 * XREFs of HalpIvtpLegacyInitializeReservedDomain @ 0x140B55534
 * Callers:
 *     IvtInitializeReservedDomains @ 0x140B55618 (IvtInitializeReservedDomains.c)
 * Callees:
 *     IvtLegacyAllocateTranslationStructures @ 0x14056CF38 (IvtLegacyAllocateTranslationStructures.c)
 *     IvtLegacyUpdateTranslationStructures @ 0x14056E58C (IvtLegacyUpdateTranslationStructures.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpIvtpLegacyInitializeReservedDomain(__int64 a1, int *a2)
{
  _QWORD *v2; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // [rsp+20h] [rbp-59h]
  int v12; // [rsp+28h] [rbp-51h]
  __int64 v13; // [rsp+38h] [rbp-41h]
  _DWORD v14[10]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v15; // [rsp+78h] [rbp-1h]
  int v16; // [rsp+80h] [rbp+7h]
  __int64 *v17; // [rsp+E8h] [rbp+6Fh] BYREF
  int v18; // [rsp+F0h] [rbp+77h] BYREF
  int v19; // [rsp+F4h] [rbp+7Bh]

  v2 = (_QWORD *)*((_QWORD *)a2 + 1);
  v17 = 0LL;
  if ( *(_DWORD *)*v2 == 1 )
  {
    if ( *(unsigned __int16 *)(*v2 + 8LL) == *(_DWORD *)(a1 + 252) )
    {
      memset_0(v14, 0, 0x70uLL);
      v6 = v2[3];
      v16 = *a2;
      v15 = v2[2];
      v14[0] = 1;
      v14[1] = 2;
      result = IvtLegacyAllocateTranslationStructures(a1, v6, (__int64)v14, v7, v11, &v17);
      v5 = result;
      if ( (int)result < 0 )
        return result;
      v10 = *v2;
      v19 = 0;
      v18 = *(unsigned __int16 *)(v10 + 12);
      IvtLegacyUpdateTranslationStructures(a1, &v18, v9, v17, 4, v12, (__int64)v14, v13, 1);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return 0;
  }
  return v5;
}
