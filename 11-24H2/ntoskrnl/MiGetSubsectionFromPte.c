/*
 * XREFs of MiGetSubsectionFromPte @ 0x14041B6A0
 * Callers:
 *     MiCreateFileOnlyImageFixupList @ 0x140AB861C (MiCreateFileOnlyImageFixupList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionFromPte(__int64 a1)
{
  if ( qword_140E2DB80 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140E2DB80;
  return a1 >> 16;
}
