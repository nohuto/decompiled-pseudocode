/*
 * XREFs of ?TryReadQWord@MonitorDataStore@DxgMonitor@@UEBA_NPEAXPEBGAEA_K@Z @ 0x14027E830
 * Callers:
 *     <none>
 * Callees:
 *     ??$TryReadData@_K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEA_K@Z @ 0x14027DDCC (--$TryReadData@_K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEA_K@Z.c)
 */

char __fastcall DxgMonitor::MonitorDataStore::TryReadQWord(
        DxgMonitor::MonitorDataStore *this,
        void *a2,
        const unsigned __int16 *a3,
        unsigned __int64 *a4)
{
  return DxgMonitor::MonitorDataStore::TryReadData<unsigned __int64>((__int64)this, a2, a3, a4);
}
