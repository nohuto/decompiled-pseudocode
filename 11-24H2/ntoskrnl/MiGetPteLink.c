/*
 * XREFs of MiGetPteLink @ 0x1403A7E10
 * Callers:
 *     MiConvertContiguousPages @ 0x1403932BC (MiConvertContiguousPages.c)
 *     MiChangePageAttributeBatch @ 0x1403A8860 (MiChangePageAttributeBatch.c)
 *     MiPerformFinalZeroing @ 0x1404F5E44 (MiPerformFinalZeroing.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPteLink(unsigned __int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( qword_140E2DCC0 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140E2DCC0;
  }
  return a1 >> 25;
}
