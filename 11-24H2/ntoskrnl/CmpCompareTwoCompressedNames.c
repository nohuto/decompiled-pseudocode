/*
 * XREFs of CmpCompareTwoCompressedNames @ 0x14086CFA0
 * Callers:
 *     CmpFindSubKeyInRoot @ 0x140842980 (CmpFindSubKeyInRoot.c)
 *     CmpFindNameInListWithStatus @ 0x14086C510 (CmpFindNameInListWithStatus.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408734B0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpDoCompareKeyName @ 0x140874690 (CmpDoCompareKeyName.c)
 *     CmpFindNameInListCellWithStatus @ 0x1408757B0 (CmpFindNameInListCellWithStatus.c)
 *     CmpCompareInIndex @ 0x140884480 (CmpCompareInIndex.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140A285D0 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     CmpCompareKeysByName @ 0x140A4D6E4 (CmpCompareKeysByName.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x140AA463C (CmpFindKcbInHashEntryByCompressedName.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408441F0 (RtlUpcaseUnicodeChar.c)
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
