/*
 * XREFs of ?TryReadDWord@MonitorDataStore@DxgMonitor@@UEBA_NPEAXPEBGAEAK@Z @ 0x1402772F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEAK@Z @ 0x1403D9384 (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEAK@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorDataStore::TryReadDWord(
        DxgMonitor::MonitorDataStore *this,
        void *a2,
        const unsigned __int16 *a3,
        unsigned int *a4)
{
  return DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(this, a2, a3, a4);
}
