/*
 * XREFs of MiGetNodeSystemInformation @ 0x14046BFBC
 * Callers:
 *     MiCreatePerNodeZeroingConductor @ 0x1407FF8C0 (MiCreatePerNodeZeroingConductor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeSystemInformation(unsigned int a1)
{
  return *(_QWORD *)(384LL * a1 + qword_140E2DC38 + 376);
}
