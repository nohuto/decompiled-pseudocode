/*
 * XREFs of ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x1801807D8
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1801809F0 (-ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV-$function@$$A6AXPEAXK_.c)
 *     ??_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z @ 0x180181278 (--_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z.c)
 */

void __fastcall CProcessResourceAttributionReporter::CheckAndReportHighResourceUsage(
        CProcessResourceAttributionReporter *this)
{
  __int64 v3; // rcx
  unsigned int v4; // edx
  _QWORD v5[9]; // [rsp+20h] [rbp-48h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+70h] [rbp+8h] BYREF

  ListEntry = 0LL;
  v5[0] = off_18030A740;
  v5[1] = &ListEntry;
  v3 = *((_QWORD *)this + 7);
  v5[7] = v5;
  CProcessAttributionObserver::ForEachChangedProcessAttribution(v3, this, v5);
  if ( ListEntry )
  {
    InterlockedPushEntrySList((PSLIST_HEADER)this + 1, ListEntry);
    ListEntry = 0LL;
    if ( !_InterlockedExchange((volatile __int32 *)this + 16, 1) )
      SubmitThreadpoolWork(*((PTP_WORK *)this + 1));
    if ( ListEntry )
      CProcessResourceAttributionReporter::HighResourceUsageReport::`scalar deleting destructor'(
        (CProcessResourceAttributionReporter::HighResourceUsageReport *)ListEntry,
        v4);
  }
}
