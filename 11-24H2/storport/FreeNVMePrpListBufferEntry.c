/*
 * XREFs of FreeNVMePrpListBufferEntry @ 0x14011A2E0
 * Callers:
 *     NvmeCompleteSubmissionQueueRequests @ 0x1400E9958 (NvmeCompleteSubmissionQueueRequests.c)
 *     NvmeControllerRequeueSQPendingRequests @ 0x1400F41F8 (NvmeControllerRequeueSQPendingRequests.c)
 *     NvmeSendSplitIo @ 0x140124340 (NvmeSendSplitIo.c)
 *     NvmeSubmitIoToSQ @ 0x140126050 (NvmeSubmitIoToSQ.c)
 * Callees:
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

PSLIST_ENTRY __fastcall FreeNVMePrpListBufferEntry(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v5; // rdi

  v3 = *(_DWORD *)(a3 + 32);
  v5 = a2;
  if ( v3 )
  {
    memset_0(*(void **)(a3 + 16), 0, 8LL * v3);
    *(_DWORD *)(a3 + 32) = 0;
  }
  return ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 880) + 8 * v5), (PSLIST_ENTRY)a3);
}
