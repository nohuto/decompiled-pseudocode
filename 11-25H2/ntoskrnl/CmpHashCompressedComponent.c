/*
 * XREFs of CmpHashCompressedComponent @ 0x140846FC0
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041D4E4 (CmDeleteLayeredKey.c)
 *     CmpPartialPromoteSubkeys @ 0x1407D4420 (CmpPartialPromoteSubkeys.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140975494 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpCheckLeaf @ 0x140A18B3C (CmpCheckLeaf.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x140848120 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpHashCompressedComponent(unsigned __int8 *a1, int a2)
{
  unsigned int v2; // ebx
  int i; // esi
  WCHAR v5; // ax

  v2 = 0;
  for ( i = a2; i; --i )
  {
    v5 = *a1;
    if ( (unsigned __int8)v5 >= 0x61u )
    {
      if ( (unsigned __int8)v5 > 0x7Au )
        v5 = RtlUpcaseUnicodeChar(*a1);
      else
        v5 -= 32;
    }
    ++a1;
    v2 = v5 + 37 * v2;
  }
  return v2;
}
