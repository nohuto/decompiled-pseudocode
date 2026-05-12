/*
 * XREFs of NvmeControllerCompleteAllRequests @ 0x1400EBA14
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     NvmeAdapterCompleteAllRequestsForSurpriseRemove @ 0x1400CD54C (NvmeAdapterCompleteAllRequestsForSurpriseRemove.c)
 *     NvmeControllerProcessPendingRequestForResetRecovery @ 0x14013761C (NvmeControllerProcessPendingRequestForResetRecovery.c)
 * Callees:
 *     NvmeCompleteSubmissionQueueRequests @ 0x1400E9958 (NvmeCompleteSubmissionQueueRequests.c)
 */

char __fastcall NvmeControllerCompleteAllRequests(__int64 a1, char a2, int a3)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *(unsigned __int16 *)(a1 + 22); i = (unsigned int)(i + 1) )
    NvmeCompleteSubmissionQueueRequests(*(_QWORD *)(a1 + 728) + 192 * i, a2, a3);
  return NvmeCompleteSubmissionQueueRequests(*(_QWORD *)(a1 + 712), a2, a3);
}
