/*
 * XREFs of StorDelayExecution @ 0x14002AE80
 * Callers:
 *     StorReset @ 0x140040430 (StorReset.c)
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     WaitForNVMeCommandCompleteWithCustomTimeout @ 0x1400BFF70 (WaitForNVMeCommandCompleteWithCustomTimeout.c)
 *     NvmeAdapterWaitForOutstandingIoComplete @ 0x1400DAD70 (NvmeAdapterWaitForOutstandingIoComplete.c)
 *     NvmeAdapterDisableFabricController @ 0x1400E18E4 (NvmeAdapterDisableFabricController.c)
 *     NvmeAdapterEnableFabricController @ 0x1400E20B4 (NvmeAdapterEnableFabricController.c)
 *     NvmeControllerCompletionDpcQuiesce @ 0x1400EBA8C (NvmeControllerCompletionDpcQuiesce.c)
 *     NvmeControllerCompletionQueuePollingQuiesce @ 0x1400EBBC0 (NvmeControllerCompletionQueuePollingQuiesce.c)
 *     NvmeControllerPowerDown @ 0x1400F2358 (NvmeControllerPowerDown.c)
 *     NvmeControllerRemove @ 0x1400F3DCC (NvmeControllerRemove.c)
 *     NvmeControllerReset @ 0x1400F488C (NvmeControllerReset.c)
 *     NvmeControllerStorMQQuiesceCompletionDPCs @ 0x1400F5410 (NvmeControllerStorMQQuiesceCompletionDPCs.c)
 *     NvmeControllerSubmissionQueueCompletionQuiesce @ 0x1400F56D0 (NvmeControllerSubmissionQueueCompletionQuiesce.c)
 *     NvmeControllerSubmissionQueueQuiesce @ 0x1400F5990 (NvmeControllerSubmissionQueueQuiesce.c)
 *     NvmeControllerWaitForOutstandingIoComplete @ 0x1400F5D14 (NvmeControllerWaitForOutstandingIoComplete.c)
 *     NvmeNamespaceWaitForOutstandingIoComplete @ 0x1401152E0 (NvmeNamespaceWaitForOutstandingIoComplete.c)
 *     NvmeNamespaceWaitForPendingRequestsDrain @ 0x14011536C (NvmeNamespaceWaitForPendingRequestsDrain.c)
 * Callees:
 *     <none>
 */

void __fastcall StorDelayExecution(ULONG MicroSeconds)
{
  __int64 v1; // rbx
  __int64 Timer; // rax
  void *v3; // rbx
  union _LARGE_INTEGER Interval; // [rsp+48h] [rbp+10h] BYREF

  v1 = MicroSeconds;
  if ( KeGetCurrentIrql() >= 2u || (unsigned int)v1 < StorMinimumTimeInterval / 0xAu )
  {
    KeStallExecutionProcessor(v1);
  }
  else
  {
    Interval.QuadPart = -10 * v1;
    if ( (unsigned int)v1 < StorMaximumTimeInterval / 0xAu
      && (Timer = ExAllocateTimer(0LL, 0LL, 4LL), (v3 = (void *)Timer) != 0LL) )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExSetTimer)(
        Timer,
        (union _LARGE_INTEGER)Interval.QuadPart,
        0LL,
        0LL);
      KeWaitForSingleObject(v3, Executive, 0, 0, 0LL);
      ExDeleteTimer(v3, 0LL, 0LL, 0LL);
    }
    else
    {
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
}
