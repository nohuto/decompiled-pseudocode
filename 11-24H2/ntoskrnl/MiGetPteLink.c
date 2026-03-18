/*
 * XREFs of MiGetPteLink @ 0x140268350
 * Callers:
 *     MiChangePageAttributeBatch @ 0x1402668E4 (MiChangePageAttributeBatch.c)
 *     MiConvertContiguousPages @ 0x140268C24 (MiConvertContiguousPages.c)
 *     MiPerformFinalZeroing @ 0x1404F8564 (MiPerformFinalZeroing.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPteLink(unsigned __int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( qword_140E2DB80 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140E2DB80;
  }
  return a1 >> 25;
}
