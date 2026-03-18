/*
 * XREFs of MiGetNodeSystemInformation @ 0x1404713EC
 * Callers:
 *     MiCreatePerNodeZeroingConductor @ 0x1407FF17C (MiCreatePerNodeZeroingConductor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeSystemInformation(unsigned int a1)
{
  return *(_QWORD *)(384LL * a1 + qword_140E2DAF8 + 376);
}
