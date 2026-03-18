/*
 * XREFs of SeCaptureSubjectContextEx @ 0x14083FC40
 * Callers:
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     CmQueryLayeredKey @ 0x140462148 (CmQueryLayeredKey.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404AA1D4 (ExCpuSetResourceManagerAccessCheck.c)
 *     PsOpenThread @ 0x14083F680 (PsOpenThread.c)
 *     CmQueryKey @ 0x140877890 (CmQueryKey.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     CmpIsSystemEntity @ 0x14090D660 (CmpIsSystemEntity.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     ExCheckFullProcessInformationAccess @ 0x14095F62C (ExCheckFullProcessInformationAccess.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140987584 (MiIsUserQueryVmCallerTrusted.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A09994 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140A09D98 (ObpCaptureBoundaryDescriptor.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 *     VfUtilIsLocalSystem @ 0x140B83404 (VfUtilIsLocalSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

void __stdcall SeCaptureSubjectContextEx(PETHREAD Thread, PEPROCESS Process, PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  PETHREAD v5; // rdi
  _QWORD *v6; // rax
  signed __int64 *p_WaitBlockList; // r14
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v9; // rbp
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
        ExfAcquirePushLockSharedEx(p_WaitBlockList, 0, v9, (__int64)p_WaitBlockList);
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
      KeLeaveCriticalRegionThread();
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
