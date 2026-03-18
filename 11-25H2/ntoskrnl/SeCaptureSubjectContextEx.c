/*
 * XREFs of SeCaptureSubjectContextEx @ 0x1408436C0
 * Callers:
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     CmQueryLayeredKey @ 0x140462ABC (CmQueryLayeredKey.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404A9208 (ExCpuSetResourceManagerAccessCheck.c)
 *     ExCheckFullProcessInformationAccess @ 0x140824EB8 (ExCheckFullProcessInformationAccess.c)
 *     CmpIsSystemEntity @ 0x1408416A0 (CmpIsSystemEntity.c)
 *     PsOpenThread @ 0x1408430F0 (PsOpenThread.c)
 *     CmQueryKey @ 0x14087AC40 (CmQueryKey.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1409D1878 (MiIsUserQueryVmCallerTrusted.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A06724 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140A06B28 (ObpCaptureBoundaryDescriptor.c)
 *     ExpCheckWakeTimerAccess @ 0x140A95FE8 (ExpCheckWakeTimerAccess.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 *     VfUtilIsLocalSystem @ 0x140B73424 (VfUtilIsLocalSystem.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 */

void __stdcall SeCaptureSubjectContextEx(PETHREAD Thread, PEPROCESS Process, PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  PETHREAD v5; // rdi
  _QWORD *v6; // rax
  signed __int64 *p_WaitBlockList; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 *v9; // rbp
  struct _KTHREAD *v10; // rbp

  v5 = Thread;
  SubjectContext->ProcessAuditId = Process[1].Header.WaitListHead.Flink;
  if ( Thread )
  {
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      p_WaitBlockList = (signed __int64 *)&Thread[1].WaitBlockList;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v9 = KeAbPreAcquire((__int64)&Thread[1].WaitBlockList, 0LL);
      if ( _InterlockedCompareExchange64(p_WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(p_WaitBlockList, 0, v9, (unsigned __int64)p_WaitBlockList);
      if ( v9 )
        *((_BYTE *)v9 + 10) = 1;
      if ( (*(_DWORD *)(&v5[1].SwapListEntry + 1) & 8) != 0 )
      {
        v10 = (struct _KTHREAD *)(*(_QWORD *)((char *)&v5[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v10, 0x75536553u);
        SubjectContext->ImpersonationLevel = *((_DWORD *)&v5[1].0 + 1) & 3;
      }
      else
      {
        v10 = 0LL;
      }
      if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(p_WaitBlockList);
      KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      Thread = v10;
    }
    else
    {
      Thread = 0LL;
    }
  }
  SubjectContext->ClientToken = Thread;
  v6 = (_QWORD *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x75536553u);
  SubjectContext->PrimaryToken = v6;
  if ( SeTokenLeakTracking )
  {
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
}
