/*
 * XREFs of MiGetPteLink @ 0x1403B7C30
 * Callers:
 *     MiConvertContiguousPages @ 0x140224560 (MiConvertContiguousPages.c)
 *     MiChangePageAttributeBatch @ 0x1403B70F4 (MiChangePageAttributeBatch.c)
 *     MiPerformFinalZeroing @ 0x1404F5DB0 (MiPerformFinalZeroing.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPteLink(unsigned __int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( qword_140E2D940 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140E2D940;
  }
  return a1 >> 25;
}
