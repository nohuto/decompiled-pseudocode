/*
 * XREFs of CmpKeyEnumStackEntryAdvance @ 0x14090A844
 * Callers:
 *     CmpKeyEnumStackAdvanceInternal @ 0x14090A540 (CmpKeyEnumStackAdvanceInternal.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpDoFindSubKeyByNumber @ 0x14090ABD0 (CmpDoFindSubKeyByNumber.c)
 *     CmpCompareKeysByName @ 0x140A44274 (CmpCompareKeysByName.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryAdvance(_QWORD *a1)
{
  __int64 result; // rax
  int v3; // r8d
  __int64 v4; // rcx
  _QWORD *v5; // rsi
  _QWORD *v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int *v10; // rbp
  unsigned int v11; // r8d
  unsigned int *v12; // rdi
  __int64 v13; // rdx
  unsigned int SubKeyByNumber; // eax
  ULONG_PTR v15; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = 0;
  v4 = 0LL;
  v5 = a1 + 10;
  v6 = a1 + 10;
  v7 = 2LL;
  while ( v4 < 2 )
  {
    result = a1[15];
    if ( *v6 == result )
    {
      v8 = *a1;
      v9 = v3;
      v10 = (unsigned int *)&a1[v3 + 12];
      if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
        result = HvpReleaseCellFlat(v8, (__int64)v10);
      else
        result = HvpReleaseCellPaged(v8, v10);
      a1[v9 + 10] = 0LL;
      v11 = *((_DWORD *)a1 + v9 + 6);
      *((_DWORD *)a1 + v9 + 18) = -1;
      *((_DWORD *)a1 + v9 + 6) = ++v11;
      if ( v11 < *((_DWORD *)a1 + v9 + 8) )
      {
        SubKeyByNumber = CmpDoFindSubKeyByNumber(*a1);
        *((_DWORD *)a1 + v9 + 18) = SubKeyByNumber;
        v15 = *a1;
        if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
          result = HvpGetCellFlat(v15, SubKeyByNumber, v10);
        else
          result = HvpGetCellPaged(v15, SubKeyByNumber, v10);
        a1[v9 + 10] = result;
      }
      break;
    }
    ++v3;
    ++v4;
    ++v6;
  }
  a1[15] = 0LL;
  v12 = (unsigned int *)(a1 + 9);
  *((_DWORD *)a1 + 28) = -1;
  do
  {
    if ( *v5 )
    {
      v13 = a1[15];
      if ( !v13 || (result = CmpCompareKeysByName(*v5, v13), (int)result < 0) )
      {
        a1[15] = *v5;
        result = *v12;
        *((_DWORD *)a1 + 28) = result;
      }
    }
    ++v5;
    ++v12;
    --v7;
  }
  while ( v7 );
  return result;
}
