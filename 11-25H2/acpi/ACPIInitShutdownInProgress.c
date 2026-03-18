/*
 * XREFs of ACPIInitShutdownInProgress @ 0x14006747C
 * Callers:
 *     ACPINotifyOsShutdownWorker @ 0x1400675B0 (ACPINotifyOsShutdownWorker.c)
 *     AcpiShutdownNotificationTimerWorkItem @ 0x140067B50 (AcpiShutdownNotificationTimerWorkItem.c)
 * Callees:
 *     ACPIInternalEvaluateOST @ 0x140061980 (ACPIInternalEvaluateOST.c)
 */

BOOLEAN __fastcall ACPIInitShutdownInProgress(char *DeferredContext)
{
  KeInitializeDpc((PRKDPC)(DeferredContext + 72), AcpiShutdownNotificationTimerCallback, DeferredContext);
  KeInitializeTimer((PKTIMER)(DeferredContext + 8));
  *((_QWORD *)DeferredContext + 20) = 0LL;
  *((_QWORD *)DeferredContext + 22) = AcpiShutdownNotificationTimerWorkItem;
  *((_QWORD *)DeferredContext + 23) = DeferredContext;
  ACPIInternalEvaluateOST(*((_QWORD *)DeferredContext + 25), 129, 129);
  return KeSetTimer((PKTIMER)(DeferredContext + 8), (LARGE_INTEGER)-100000000LL, (PKDPC)(DeferredContext + 72));
}
