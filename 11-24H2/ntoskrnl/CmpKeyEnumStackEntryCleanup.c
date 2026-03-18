/*
 * XREFs of CmpKeyEnumStackEntryCleanup @ 0x140916D1C
 * Callers:
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140915814 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackReset @ 0x140916688 (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackCleanup @ 0x140916A64 (CmpKeyEnumStackCleanup.c)
 * Callees:
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryCleanup(_QWORD *a1)
{
  unsigned int *v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rbp
  unsigned int *v7; // rdi
  __int64 v8; // rcx
  unsigned int *v9; // rdx
  __int64 v10; // rcx

  if ( a1[1] )
  {
    v2 = (unsigned int *)(a1 + 2);
    v3 = *a1;
    if ( (*(_BYTE *)(v3 + 140) & 1) != 0 )
      result = HvpReleaseCellFlat(v3, (__int64)v2);
    else
      result = HvpReleaseCellPaged(v3, v2);
  }
  v5 = a1 + 10;
  v6 = 2LL;
  v7 = (unsigned int *)(a1 + 12);
  do
  {
    if ( *(v5 - 5) )
    {
      v8 = *a1;
      v9 = v7 - 10;
      if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
        result = HvpReleaseCellFlat(v8, (__int64)v9);
      else
        result = HvpReleaseCellPaged(v8, v9);
    }
    if ( *v5 )
    {
      v10 = *a1;
      if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
        result = HvpReleaseCellFlat(v10, (__int64)v7);
      else
        result = HvpReleaseCellPaged(v10, v7);
    }
    v7 += 2;
    ++v5;
    --v6;
  }
  while ( v6 );
  return result;
}
