/*
 * XREFs of ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18017FF80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z @ 0x18017FFF0 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageRe.c)
 *     ??_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z @ 0x180181278 (--_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z.c)
 */

void __fastcall CProcessResourceAttributionReporter::ReportHighResourceUsageWorker(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_WORK Work)
{
  struct CProcessResourceAttributionReporter::HighResourceUsageReport *v4; // rdi
  CProcessResourceAttributionReporter::HighResourceUsageReport *v5; // rbx
  unsigned int v6; // edx

  v4 = (struct CProcessResourceAttributionReporter::HighResourceUsageReport *)InterlockedFlushSList((PSLIST_HEADER)Context + 1);
  while ( v4 )
  {
    v5 = v4;
    CProcessResourceAttributionReporter::ReportHighResourceUsageWorker(
      (CProcessResourceAttributionReporter *)Context,
      v4);
    v4 = *(struct CProcessResourceAttributionReporter::HighResourceUsageReport **)v4;
    CProcessResourceAttributionReporter::HighResourceUsageReport::`scalar deleting destructor'(v5, v6);
  }
  _InterlockedExchange((volatile __int32 *)Context + 16, 0);
}
