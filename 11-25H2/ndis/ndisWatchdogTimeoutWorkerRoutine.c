/*
 * XREFs of ndisWatchdogTimeoutWorkerRoutine @ 0x14014D0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportTimeout@NdisWatchdogState@@QEAAXXZ @ 0x14014CDAC (-ReportTimeout@NdisWatchdogState@@QEAAXXZ.c)
 */

void __fastcall ndisWatchdogTimeoutWorkerRoutine(struct _KEVENT *a1)
{
  NdisWatchdogState::ReportTimeout(a1);
}
