/*
 * XREFs of MiGetSubsectionFromPte @ 0x14041E1A0
 * Callers:
 *     MiCreateFileOnlyImageFixupList @ 0x140AB4254 (MiCreateFileOnlyImageFixupList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionFromPte(__int64 a1)
{
  if ( qword_140E2D940 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140E2D940;
  return a1 >> 16;
}
