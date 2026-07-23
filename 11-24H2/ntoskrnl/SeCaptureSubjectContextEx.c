/*
 * XREFs of SeCaptureSubjectContextEx @ 0x14083BF00
 * Callers:
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403B5184 (ExCpuSetResourceManagerAccessCheck.c)
 *     CmQueryLayeredKey @ 0x140457758 (CmQueryLayeredKey.c)
 *     PsOpenThread @ 0x14083B940 (PsOpenThread.c)
 *     CmQueryKey @ 0x14087BBC0 (CmQueryKey.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     CmpIsSystemEntity @ 0x1408E4D80 (CmpIsSystemEntity.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409470EC (ExCheckFullProcessInformationAccess.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x14096FD94 (MiIsUserQueryVmCallerTrusted.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A05EC4 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140A062C8 (ObpCaptureBoundaryDescriptor.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 *     VfUtilIsLocalSystem @ 0x140B85404 (VfUtilIsLocalSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __stdcall SeCaptureSubjectContextEx(PETHREAD Thread, PEPROCESS Process, PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  PETHREAD v5; // rdi
  _QWORD *v6; // rax
  signed __int64 *p_WaitBlockList; // r14
  struct _KTHREAD *CurrentThread; // r15
  char *v9; // rbp
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
      v9 = (char *)KeAbPreAcquire((__int64)&Thread[1].WaitBlockList, 0LL);
      if ( _InterlockedCompareExchange64(p_WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(p_WaitBlockList, 0, v9, (__int64)p_WaitBlockList);
      if ( v9 )
        v9[10] = 1;
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
