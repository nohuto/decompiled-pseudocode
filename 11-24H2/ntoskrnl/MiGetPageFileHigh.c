/*
 * XREFs of MiGetPageFileHigh @ 0x14041DFE0
 * Callers:
 *     MiFreeReservationRun @ 0x140A3D6A4 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPageFileHigh(unsigned __int64 a1)
{
  if ( qword_140E2DB80 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140E2DB80;
  return HIDWORD(a1);
}
