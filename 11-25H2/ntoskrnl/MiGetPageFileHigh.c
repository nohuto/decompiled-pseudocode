/*
 * XREFs of MiGetPageFileHigh @ 0x1404295F0
 * Callers:
 *     MiFreeReservationRun @ 0x140A39448 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPageFileHigh(unsigned __int64 a1)
{
  if ( qword_140E2D940 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140E2D940;
  return HIDWORD(a1);
}
