/*
 * XREFs of MiGetPageFileHigh @ 0x1404123B0
 * Callers:
 *     MiFreeReservationRun @ 0x140A32FB4 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPageFileHigh(unsigned __int64 a1)
{
  if ( qword_140E2DCC0 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140E2DCC0;
  return HIDWORD(a1);
}
