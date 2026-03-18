/*
 * XREFs of ExfReleaseRundownProtection @ 0x1402456A0
 * Callers:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     PfFileInfoNotify @ 0x140275220 (PfFileInfoNotify.c)
 *     ExpApplyPriorityBoost @ 0x140277A10 (ExpApplyPriorityBoost.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x1402788E0 (PsBoostThreadOutstandingIoQoS.c)
 *     ExpBoostIoAfterAcquire @ 0x140278960 (ExpBoostIoAfterAcquire.c)
 *     SmKmStoreDereference @ 0x14027A498 (SmKmStoreDereference.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14027A4F0 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     PfSnLogPageFault @ 0x1402ECF60 (PfSnLogPageFault.c)
 *     PfSnActiveTraceGetNext @ 0x140434970 (PfSnActiveTraceGetNext.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     ObDuplicateObject @ 0x14083FFB0 (ObDuplicateObject.c)
 *     PfpRpFileKeyUpdate @ 0x140843C20 (PfpRpFileKeyUpdate.c)
 *     ObpCloseHandle @ 0x14084A770 (ObpCloseHandle.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x14084AF80 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     NtQueryWnfStateData @ 0x1408ABBD0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408AC580 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1408AE2C0 (ExpWnfDispatchKernelSubscription.c)
 *     ObGetProcessHandleCount @ 0x1408ECB30 (ObGetProcessHandleCount.c)
 *     EtwpCovSampReleaseSamplerRundown @ 0x140900574 (EtwpCovSampReleaseSamplerRundown.c)
 *     PspWriteTebImpersonationInfo @ 0x140911080 (PspWriteTebImpersonationInfo.c)
 *     ObpCallPostOperationCallbacks @ 0x140940A78 (ObpCallPostOperationCallbacks.c)
 *     EtwpCoverageSamplerQuery @ 0x14095DA30 (EtwpCoverageSamplerQuery.c)
 *     ObpCallPreOperationCallbacks @ 0x1409A65F0 (ObpCallPreOperationCallbacks.c)
 *     ObDereferenceProcessHandleTable @ 0x1409E44F0 (ObDereferenceProcessHandleTable.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
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
