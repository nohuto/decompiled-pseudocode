/*
 * XREFs of ExfReleaseRundownProtection @ 0x14020DE80
 * Callers:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     PfFileInfoNotify @ 0x14022A7B0 (PfFileInfoNotify.c)
 *     ExpApplyPriorityBoost @ 0x14022CFA0 (ExpApplyPriorityBoost.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x14022DE70 (PsBoostThreadOutstandingIoQoS.c)
 *     ExpBoostIoAfterAcquire @ 0x14022DEF0 (ExpBoostIoAfterAcquire.c)
 *     SmKmStoreDereference @ 0x14022FA28 (SmKmStoreDereference.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14022FA80 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     PfSnActiveTraceGetNext @ 0x1402F4C40 (PfSnActiveTraceGetNext.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     PfSnLogPageFault @ 0x14034E5A0 (PfSnLogPageFault.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     PfpRpFileKeyUpdate @ 0x14083FEE0 (PfpRpFileKeyUpdate.c)
 *     ObpCloseHandle @ 0x140846A30 (ObpCloseHandle.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x140847240 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ObGetProcessHandleCount @ 0x14085E360 (ObGetProcessHandleCount.c)
 *     PspWriteTebImpersonationInfo @ 0x1408E87D0 (PspWriteTebImpersonationInfo.c)
 *     NtQueryWnfStateData @ 0x140901E30 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1409027E0 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140904520 (ExpWnfDispatchKernelSubscription.c)
 *     EtwpCovSampReleaseSamplerRundown @ 0x140922E54 (EtwpCovSampReleaseSamplerRundown.c)
 *     EtwpCoverageSamplerQuery @ 0x1409454F0 (EtwpCoverageSamplerQuery.c)
 *     ObpCallPreOperationCallbacks @ 0x140977CD0 (ObpCallPreOperationCallbacks.c)
 *     ObpCallPostOperationCallbacks @ 0x1409780DC (ObpCallPostOperationCallbacks.c)
 *     ObDereferenceProcessHandleTable @ 0x1409DEF50 (ObDereferenceProcessHandleTable.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 */

void __stdcall ExfReleaseRundownProtection(PEX_RUNDOWN_REF RunRef)
{
  unsigned __int64 Count; // r8
  bool v2; // zf
  signed __int64 v3; // rax
  unsigned __int64 v4; // r8

  _m_prefetchw(RunRef);
  Count = RunRef->Count;
  while ( (Count & 1) == 0 )
  {
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, Count - 2, Count);
    v2 = Count == v3;
    Count = v3;
    if ( v2 )
      return;
  }
  v4 = Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) == 1
    && !_interlockedbittestandreset((volatile signed __int32 *)(v4 + 32), 0) )
  {
    KeSetEvent((PRKEVENT)(v4 + 8), 0, 0);
  }
}
