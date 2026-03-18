/*
 * XREFs of AreHashesEqual @ 0x14014D364
 * Callers:
 *     ?Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x14014D2C8 (-Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z.c)
 *     ?AnyHashPresentInCurrent@CMonitorTopology@@QEAA_NAEBUMonitorId@1@@Z @ 0x1401CC9BC (-AnyHashPresentInCurrent@CMonitorTopology@@QEAA_NAEBUMonitorId@1@@Z.c)
 *     ?ContainsHash@MonitorId@CMonitorTopology@@QEBA_NAEBUD3DKMT_HASH@@PEAI@Z @ 0x14021ED08 (-ContainsHash@MonitorId@CMonitorTopology@@QEBA_NAEBUD3DKMT_HASH@@PEAI@Z.c)
 *     ?ValidateTopology@CMonitorTopology@@SAXPEBV1@@Z @ 0x1402ABCB4 (-ValidateTopology@CMonitorTopology@@SAXPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall AreHashesEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x14uLL) == 20;
}
