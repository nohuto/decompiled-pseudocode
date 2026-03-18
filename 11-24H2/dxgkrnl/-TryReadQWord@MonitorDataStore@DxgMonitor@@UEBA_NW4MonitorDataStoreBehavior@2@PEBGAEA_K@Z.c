/*
 * XREFs of ?TryReadQWord@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBGAEA_K@Z @ 0x14027E850
 * Callers:
 *     <none>
 * Callees:
 *     ??$TryReadData@_K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEA_K@Z @ 0x14027DEC8 (--$TryReadData@_K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEA_K@Z.c)
 */

char __fastcall DxgMonitor::MonitorDataStore::TryReadQWord(__int64 a1, char a2, const WCHAR *a3, _QWORD *a4)
{
  return DxgMonitor::MonitorDataStore::TryReadData<unsigned __int64>(a1, a2, a3, a4);
}
