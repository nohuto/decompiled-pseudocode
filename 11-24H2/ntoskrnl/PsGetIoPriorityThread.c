/*
 * XREFs of PsGetIoPriorityThread @ 0x14022BEB0
 * Callers:
 *     PfFileInfoNotify @ 0x14022A7B0 (PfFileInfoNotify.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14025DD60 (IopBuildAsynchronousFsdRequest.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     CcAsyncCopyRead @ 0x140273E20 (CcAsyncCopyRead.c)
 *     KiAbProcessThreadLocks @ 0x140280FD0 (KiAbProcessThreadLocks.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14029F070 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     FsRtlpWaitForIoAtEof @ 0x1402E1598 (FsRtlpWaitForIoAtEof.c)
 *     ExpWorkerThread @ 0x14032F2A0 (ExpWorkerThread.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x1403E2874 (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     MiFinishMdlForMappedFileFault @ 0x1403F1ED8 (MiFinishMdlForMappedFileFault.c)
 *     IoRetrievePriorityInfo @ 0x1404068D0 (IoRetrievePriorityInfo.c)
 *     MiIssueFlowThroughFault @ 0x140426F68 (MiIssueFlowThroughFault.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14047AADC (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404D48A8 (CcBoostLowPriorityWorkerThread.c)
 *     EtwTraceThread @ 0x1408FCF28 (EtwTraceThread.c)
 *     MmPrefetchVirtualAddresses @ 0x140936A20 (MmPrefetchVirtualAddresses.c)
 *     MiLogRelocationRva @ 0x14093E524 (MiLogRelocationRva.c)
 *     PfSnBeginScenario @ 0x140948770 (PfSnBeginScenario.c)
 *     NtQueryInformationThread @ 0x1409910D0 (NtQueryInformationThread.c)
 *     NtSetInformationVirtualMemory @ 0x1409E3F70 (NtSetInformationVirtualMemory.c)
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
