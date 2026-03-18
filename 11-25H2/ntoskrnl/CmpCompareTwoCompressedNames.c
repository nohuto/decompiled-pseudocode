/*
 * XREFs of CmpCompareTwoCompressedNames @ 0x14086BDB0
 * Callers:
 *     CmpFindSubKeyInRoot @ 0x140846440 (CmpFindSubKeyInRoot.c)
 *     CmpFindNameInListWithStatus @ 0x14086B314 (CmpFindNameInListWithStatus.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x140877170 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpDoCompareKeyName @ 0x140878B80 (CmpDoCompareKeyName.c)
 *     CmpFindNameInListCellWithStatus @ 0x140879440 (CmpFindNameInListCellWithStatus.c)
 *     CmpCompareInIndex @ 0x14087A510 (CmpCompareInIndex.c)
 *     CmpCompareKeysByName @ 0x1409775D8 (CmpCompareKeysByName.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140977970 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x140A9EE14 (CmpFindKcbInHashEntryByCompressedName.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x140848120 (RtlUpcaseUnicodeChar.c)
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
