/*
 * XREFs of CmpCompareTwoCompressedNames @ 0x1408712D0
 * Callers:
 *     CmpFindSubKeyInRoot @ 0x14083EC40 (CmpFindSubKeyInRoot.c)
 *     CmpFindNameInListWithStatus @ 0x140870840 (CmpFindNameInListWithStatus.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408777E0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1408789C0 (CmpDoCompareKeyName.c)
 *     CmpFindNameInListCellWithStatus @ 0x140879AE0 (CmpFindNameInListCellWithStatus.c)
 *     CmpCompareInIndex @ 0x140888330 (CmpCompareInIndex.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140A1D050 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     CmpCompareKeysByName @ 0x140A44274 (CmpCompareKeysByName.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x140A9F9CC (CmpFindKcbInHashEntryByCompressedName.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpCompareTwoCompressedNames(
        unsigned __int8 *a1,
        unsigned __int16 a2,
        unsigned __int8 *a3,
        unsigned __int16 a4)
{
  unsigned int v8; // r14d
  unsigned int v9; // r15d

  while ( a2 && a4 )
  {
    v8 = *a1++;
    v9 = *a3++;
    if ( (_WORD)v8 != (_WORD)v9 )
    {
      if ( v8 >= 0x61 )
      {
        if ( v8 > 0x7A )
          LOWORD(v8) = RtlUpcaseUnicodeChar(v8);
        else
          LOWORD(v8) = v8 - 32;
      }
      if ( v9 >= 0x61 )
      {
        if ( v9 > 0x7A )
          LOWORD(v9) = RtlUpcaseUnicodeChar(v9);
        else
          LOWORD(v9) = v9 - 32;
      }
      if ( (unsigned __int16)v8 != (unsigned __int16)v9 )
        return (unsigned __int16)v8 - (unsigned int)(unsigned __int16)v9;
    }
    --a2;
    --a4;
  }
  return a2 - (unsigned int)a4;
}
