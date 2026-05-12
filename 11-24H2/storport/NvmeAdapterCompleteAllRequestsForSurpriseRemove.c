/*
 * XREFs of NvmeAdapterCompleteAllRequestsForSurpriseRemove @ 0x1400CD54C
 * Callers:
 *     NvmeControllerDetectCommandTimeout @ 0x140136F70 (NvmeControllerDetectCommandTimeout.c)
 *     NvmeControllerResetRecovery @ 0x140137858 (NvmeControllerResetRecovery.c)
 *     NvmeAdapterSurpriseRemovalIrp @ 0x14019DCB8 (NvmeAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     NvmeControllerCancelAllIoCompletionDPCs @ 0x1400EB5E8 (NvmeControllerCancelAllIoCompletionDPCs.c)
 *     NvmeControllerCompleteAllRequests @ 0x1400EBA14 (NvmeControllerCompleteAllRequests.c)
 *     NvmeControllerCompletionDpcQuiesce @ 0x1400EBA8C (NvmeControllerCompletionDpcQuiesce.c)
 *     NvmeControllerCompletionQueuePollingQuiesce @ 0x1400EBBC0 (NvmeControllerCompletionQueuePollingQuiesce.c)
 *     NvmeControllerSubmissionQueueQuiesce @ 0x1400F5990 (NvmeControllerSubmissionQueueQuiesce.c)
 */

__int64 __fastcall NvmeAdapterCompleteAllRequestsForSurpriseRemove(__int64 a1)
{
  NvmeControllerSubmissionQueueQuiesce(*(_QWORD *)(a1 + 1136));
  NvmeControllerCancelAllIoCompletionDPCs(*(_QWORD *)(a1 + 1136));
  NvmeControllerCompletionQueuePollingQuiesce(*(_QWORD *)(a1 + 1136));
  NvmeControllerCompletionDpcQuiesce(*(_QWORD *)(a1 + 1136));
  return NvmeControllerCompleteAllRequests(*(_QWORD *)(a1 + 1136), 0LL, 3221225486LL);
}
