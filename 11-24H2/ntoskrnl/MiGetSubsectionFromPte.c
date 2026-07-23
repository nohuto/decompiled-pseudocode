/*
 * XREFs of MiGetSubsectionFromPte @ 0x14040F1E0
 * Callers:
 *     MiCreateFileOnlyImageFixupList @ 0x140AB2AE0 (MiCreateFileOnlyImageFixupList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionFromPte(__int64 a1)
{
  if ( qword_140E2DCC0 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140E2DCC0;
  return a1 >> 16;
}
