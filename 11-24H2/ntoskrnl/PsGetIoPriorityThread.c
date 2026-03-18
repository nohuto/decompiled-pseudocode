/*
 * XREFs of PsGetIoPriorityThread @ 0x140276920
 * Callers:
 *     ExpWorkerThread @ 0x140207CC0 (ExpWorkerThread.c)
 *     MiFinishMdlForMappedFileFault @ 0x14023A108 (MiFinishMdlForMappedFileFault.c)
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     MiIssueFlowThroughFault @ 0x14023B720 (MiIssueFlowThroughFault.c)
 *     KiAbProcessThreadLocks @ 0x1402509C0 (KiAbProcessThreadLocks.c)
 *     PfFileInfoNotify @ 0x140275220 (PfFileInfoNotify.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14028F470 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     CcAsyncCopyRead @ 0x1402A94F0 (CcAsyncCopyRead.c)
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1403754A0 (IopBuildAsynchronousFsdRequest.c)
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x1403EF8F4 (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     FsRtlpWaitForIoAtEof @ 0x14040D308 (FsRtlpWaitForIoAtEof.c)
 *     IoRetrievePriorityInfo @ 0x14040E6D0 (IoRetrievePriorityInfo.c)
 *     EtwpTraceThreadRundown @ 0x140433490 (EtwpTraceThreadRundown.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14047FE9C (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404DAE88 (CcBoostLowPriorityWorkerThread.c)
 *     EtwTraceThread @ 0x1408A6918 (EtwTraceThread.c)
 *     MiLogRelocationRva @ 0x1408F567C (MiLogRelocationRva.c)
 *     MmPrefetchVirtualAddresses @ 0x140953070 (MmPrefetchVirtualAddresses.c)
 *     PfSnBeginScenario @ 0x140960CB0 (PfSnBeginScenario.c)
 *     NtQueryInformationThread @ 0x1409A7C80 (NtQueryInformationThread.c)
 *     NtSetInformationVirtualMemory @ 0x1409E8FB0 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetIoPriorityThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  int v3; // edx

  result = (*(_DWORD *)(a1 + 1440) >> 9) & 7;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 672LL);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 1084);
    if ( (int)result >= v3 )
      result = (unsigned int)v3;
  }
  if ( (int)result < 2 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(a1 + 1504) )
      return 2LL;
  }
  return result;
}
