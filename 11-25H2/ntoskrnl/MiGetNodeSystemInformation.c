/*
 * XREFs of MiGetNodeSystemInformation @ 0x140473778
 * Callers:
 *     MiCreatePerNodeZeroingConductor @ 0x1407EF2C8 (MiCreatePerNodeZeroingConductor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeSystemInformation(unsigned int a1)
{
  return *(_QWORD *)(384LL * a1 + qword_140E2D8B8 + 376);
}
