/*
 * XREFs of PsGetIoPriorityThread @ 0x1403031B0
 * Callers:
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 *     PfFileInfoNotify @ 0x140301AC0 (PfFileInfoNotify.c)
 *     EtwpTraceThreadRundown @ 0x1403044A0 (EtwpTraceThreadRundown.c)
 *     ExpWorkerThread @ 0x1403047F0 (ExpWorkerThread.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1403280A0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiIssueFlowThroughFault @ 0x14033D9E4 (MiIssueFlowThroughFault.c)
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 *     MiFinishMdlForMappedFileFault @ 0x14034EE44 (MiFinishMdlForMappedFileFault.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14035EFF0 (IopBuildAsynchronousFsdRequest.c)
 *     FsRtlpWaitForIoAtEof @ 0x140376284 (FsRtlpWaitForIoAtEof.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     CcAsyncCopyRead @ 0x1403AAC00 (CcAsyncCopyRead.c)
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x1403E69D4 (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     IoRetrievePriorityInfo @ 0x140410680 (IoRetrievePriorityInfo.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14045316C (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404DB798 (CcBoostLowPriorityWorkerThread.c)
 *     PfSnBeginScenario @ 0x140826530 (PfSnBeginScenario.c)
 *     EtwTraceThread @ 0x1408F592C (EtwTraceThread.c)
 *     MiLogRelocationRva @ 0x1409441D4 (MiLogRelocationRva.c)
 *     NtQueryInformationThread @ 0x1409C32F0 (NtQueryInformationThread.c)
 *     MmPrefetchVirtualAddresses @ 0x1409C6940 (MmPrefetchVirtualAddresses.c)
 *     NtSetInformationVirtualMemory @ 0x1409FCFF0 (NtSetInformationVirtualMemory.c)
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
