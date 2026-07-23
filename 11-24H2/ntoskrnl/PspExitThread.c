/*
 * XREFs of PspExitThread @ 0x1408FDFF0
 * Callers:
 *     KiSchedulerApcTerminate @ 0x1408FDDD0 (KiSchedulerApcTerminate.c)
 *     PspTerminateThreadByPointer @ 0x1408FDF10 (PspTerminateThreadByPointer.c)
 *     NtTerminateProcess @ 0x140ACF260 (NtTerminateProcess.c)
 * Callees:
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     ExTimerRundown @ 0x14027DA04 (ExTimerRundown.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PspRevertContainerImpersonation @ 0x1402D21C0 (PspRevertContainerImpersonation.c)
 *     KeTerminateThread @ 0x1402D5BB8 (KeTerminateThread.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     KeQuerySystemTimePrecise @ 0x14036D140 (KeQuerySystemTimePrecise.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1403B4ED0 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14040880C (ExfAcquireReleasePushLockExclusive.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     PsSessionGetWin32Callouts @ 0x140463D20 (PsSessionGetWin32Callouts.c)
 *     KeQuerySystemTimeUnsafe @ 0x140473F10 (KeQuerySystemTimeUnsafe.c)
 *     KiRundownMutants @ 0x1404793A8 (KiRundownMutants.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     RtlpFlsSlotDataValidateEmpty @ 0x140486560 (RtlpFlsSlotDataValidateEmpty.c)
 *     PspUpdateCalloutParameters @ 0x1404E64C0 (PspUpdateCalloutParameters.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KeUnsecureThread @ 0x1405B5290 (KeUnsecureThread.c)
 *     ZwFreeVirtualMemory @ 0x1406A7770 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     DbgkExitProcess @ 0x140704E58 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x140704F14 (DbgkExitThread.c)
 *     PspCatchCriticalBreak @ 0x140778FB8 (PspCatchCriticalBreak.c)
 *     LpcRequestPort @ 0x1408971D0 (LpcRequestPort.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     MmDeleteTeb @ 0x1408D96BC (MmDeleteTeb.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1408D9978 (PspFreeCurrentThreadUserShadowStack.c)
 *     PspExitLastThread @ 0x1408F27B8 (PspExitLastThread.c)
 *     ExCallCallBack @ 0x1408F47CC (ExCallCallBack.c)
 *     PspCallThreadNotifyRoutines @ 0x1408FCCC0 (PspCallThreadNotifyRoutines.c)
 *     EtwTraceThread @ 0x1408FCF28 (EtwTraceThread.c)
 *     PspSchedulerSharedDataRegionSlotFree @ 0x1408FDB5C (PspSchedulerSharedDataRegionSlotFree.c)
 *     KeRundownApcQueues @ 0x1408FDCCC (KeRundownApcQueues.c)
 *     PspEmptyPropertySet @ 0x1408FDD8C (PspEmptyPropertySet.c)
 *     PspThreadIndexCleanup @ 0x1408FE880 (PspThreadIndexCleanup.c)
 *     IoCancelThreadIo @ 0x1408FE8DC (IoCancelThreadIo.c)
 *     CmNotifyRunDown @ 0x1408FEA30 (CmNotifyRunDown.c)
 *     PspClearProcessThreadCidRefs @ 0x1408FF228 (PspClearProcessThreadCidRefs.c)
 *     RtlpFlsDataCleanup @ 0x140A0A908 (RtlpFlsDataCleanup.c)
 *     PsCaptureExceptionPort @ 0x140A15A5C (PsCaptureExceptionPort.c)
 *     PoDeletePowerRequest @ 0x140A31CC0 (PoDeletePowerRequest.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspExitThread(int a1)
{
  struct _KTHREAD *BugCheckParameter4; // rdi
  ULONG_PTR v3; // r14
  ULONG_PTR v4; // r8
  __int64 v5; // r9
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v7; // r12
  char *v8; // rax
  __int64 DirectoryTableBase_high; // rcx
  _QWORD *InitialStack; // r13
  void *v11; // rbx
  int v12; // eax
  _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 Teb; // rbx
  void *v18; // rcx
  __int16 v19; // ax
  char v20; // al
  bool v21; // zf
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rbx
  unsigned __int64 v26; // rbx
  struct _KTHREAD *Thread; // rcx
  ULONG_PTR LastXStateSaveDebugInfo; // r9
  __int64 v30; // rcx
  struct _KTHREAD *v31; // rax
  int v32; // eax
  _QWORD *v33; // rbx
  struct _LIST_ENTRY *v34; // rbx
  __int64 ProcessServerSilo; // rax
  signed __int32 v36[8]; // [rsp+0h] [rbp-F8h] BYREF
  char *v37; // [rsp+30h] [rbp-C8h]
  ULONG_PTR v38; // [rsp+38h] [rbp-C0h] BYREF
  _OWORD v39[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v40; // [rsp+60h] [rbp-98h]
  PVOID BaseAddress; // [rsp+70h] [rbp-88h] BYREF
  PVOID v42; // [rsp+78h] [rbp-80h] BYREF
  _KPROCESS *Process; // [rsp+80h] [rbp-78h]
  struct _KTHREAD *v44; // [rsp+88h] [rbp-70h]
  __int128 v45; // [rsp+90h] [rbp-68h] BYREF
  struct _KTHREAD *v46; // [rsp+A0h] [rbp-58h]
  int v47; // [rsp+A8h] [rbp-50h]
  __int64 v48; // [rsp+B0h] [rbp-48h]
  int v49; // [rsp+B8h] [rbp-40h]
  PMDL MemoryDescriptorList; // [rsp+110h] [rbp+18h] BYREF
  ULONG_PTR RegionSize; // [rsp+118h] [rbp+20h] BYREF

  memset(v39, 0, sizeof(v39));
  v40 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0;
  BugCheckParameter4 = KeGetCurrentThread();
  v44 = BugCheckParameter4;
  Process = BugCheckParameter4->Process;
  v3 = (ULONG_PTR)Process;
  PspClearProcessThreadCidRefs(BugCheckParameter4, *(_QWORD *)&BugCheckParameter4[1].CurrentRunTime, BugCheckParameter4);
  v4 = (ULONG_PTR)BugCheckParameter4->ApcState.Process;
  if ( Process != (_KPROCESS *)v4 )
    KeBugCheckEx(5u, (ULONG_PTR)Process, v4, BugCheckParameter4->ApcStateIndex, (ULONG_PTR)BugCheckParameter4);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
  __writecr8(0LL);
  if ( (*((_DWORD *)&BugCheckParameter4[1].SwapListEntry + 3) & 1) != 0 )
    KeBugCheckEx(0xE9u, (ULONG_PTR)BugCheckParameter4, 0LL, 0LL, 0LL);
  if ( BugCheckParameter4->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x20u, 0LL, BugCheckParameter4->CombinedApcDisable, 0LL, 1uLL);
  if ( BugCheckParameter4[1].ApcState.ApcListHead[1].Flink )
  {
    KeSetThreadChargeOnlySchedulingGroup((__int64)BugCheckParameter4, 0LL);
    ObfDereferenceObjectWithTag(BugCheckParameter4[1].ApcState.ApcListHead[1].Flink, 0x79517350u);
    BugCheckParameter4[1].ApcState.ApcListHead[1].Flink = 0LL;
  }
  PspEmptyPropertySet(&BugCheckParameter4[1].WaitBlock[1].SparePtr);
  PspRevertContainerImpersonation((__int64)BugCheckParameter4);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&BugCheckParameter4[1].WaitStatus);
  Blink = BugCheckParameter4[1].ApcState.ApcListHead[1].Blink;
  if ( Blink )
  {
    PoDeletePowerRequest(Blink);
    BugCheckParameter4[1].ApcState.ApcListHead[1].Blink = 0LL;
  }
  v7 = 0;
  BugCheckParameter4[1].Timer.DueTime.LowPart = a1;
  if ( (PerfGlobalGroupMask[0] & 2) != 0 )
    EtwTraceThread((__int64)BugCheckParameter4, 0LL, 0);
  --BugCheckParameter4->KernelApcDisable;
  if ( (*(_DWORD *)(v3 + 1532) & 1) == 0 || *(_QWORD *)(v3 + 1600) )
    PspCallThreadNotifyRoutines(BugCheckParameter4, 0LL, 0LL, v5);
  v8 = (char *)KeAbPreAcquire(v3 + 456, 0LL);
  v37 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 456), 0LL) )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v3 + 456), v8, v3 + 456);
    v8 = v37;
  }
  if ( v8 )
    v8[10] = 1;
  --*(_DWORD *)(v3 + 896);
  if ( (*(_DWORD *)(v3 + 1532) & 1) == 0 || *(_QWORD *)(v3 + 1600) )
  {
    if ( !*(_DWORD *)(v3 + 896) )
      v7 = 1;
  }
  else if ( (*(_DWORD *)(v3 + 2012) & 2) != 0 && !*(_DWORD *)(v3 + 896) )
  {
    v7 = 1;
  }
  if ( v7 )
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 500), 0x2000008u);
    PspExitLastThread(0LL, 1, v3, BugCheckParameter4, a1);
  }
  else
  {
    if ( a1 != -1073741749 )
      *(_DWORD *)(v3 + 908) = a1;
    PspUnlockProcessExclusive(v3);
  }
  DirectoryTableBase_high = -3LL;
  if ( BugCheckParameter4[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
  {
    v34 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
    if ( v34 == (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall()
      || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v34[-2].Blink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v34 - 48) >> 8)] != PsJobType
      || (HIDWORD(v34[97].Flink) & 2) == 0 )
    {
      KeBugCheckEx(0x1CBu, (ULONG_PTR)BugCheckParameter4, (ULONG_PTR)v34, v3, 1uLL);
    }
    ObfDereferenceObjectWithTag(v34, 0x6D497350u);
  }
  if ( *(_QWORD *)(v3 + 776) && (BugCheckParameter4->MiscFlags & 0x400) == 0 )
  {
    if ( v7 )
      DbgkExitProcess(*(_DWORD *)(v3 + 1364));
    else
      DbgkExitThread(a1);
  }
  if ( (*(_BYTE *)(v3 + 368) & 1) != 0 )
  {
    MemoryDescriptorList = 0LL;
    if ( (int)KeUnsecureThread((__int64)&MemoryDescriptorList) >= 0 )
    {
      MmUnlockPages(MemoryDescriptorList);
      ExFreePoolWithTag(MemoryDescriptorList, 0x65537350u);
    }
  }
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( (*(_DWORD *)(&BugCheckParameter4[1].SwapListEntry + 1) & 0x20) != 0 )
    {
      DirectoryTableBase_high = HIDWORD(BugCheckParameter4->Process[1].DirectoryTableBase);
      if ( (DirectoryTableBase_high & 0x40000008) == 0 )
      {
        ProcessServerSilo = PsGetProcessServerSilo(v3);
        PspCatchCriticalBreak(
          (__int64)"Critical thread 0x%p (in %s) exited\n",
          (ULONG_PTR)BugCheckParameter4,
          (const char *)(v3 + 824),
          ProcessServerSilo,
          a1);
      }
    }
  }
  if ( v7 )
    PspExitLastThread(1LL, 0, v3, BugCheckParameter4, a1);
  InitialStack = BugCheckParameter4[1].InitialStack;
  if ( InitialStack )
  {
    *(_QWORD *)&v39[0] = 0x600300008LL;
    *((_QWORD *)&v40 + 1) = *(_QWORD *)&BugCheckParameter4[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v32 = LpcRequestPort(InitialStack[1], (__int64)v39);
        if ( v32 != -1073741801 && v32 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject((PVOID)InitialStack[1]);
      v33 = (_QWORD *)*InitialStack;
      ExFreePoolWithTag(InitialStack, 0x70547350u);
      InitialStack = v33;
    }
    while ( v33 );
  }
  if ( (*(_DWORD *)(&BugCheckParameter4[1].SwapListEntry + 1) & 2) != 0 )
  {
    v11 = (void *)PsCaptureExceptionPort(v3);
    if ( v11 )
    {
      *(_QWORD *)&v39[0] = 0x600300008LL;
      *((_QWORD *)&v40 + 1) = *(_QWORD *)&BugCheckParameter4[1].Header.Lock;
      while ( 1 )
      {
        v12 = LpcRequestPort((__int64)v11, (__int64)v39);
        if ( v12 != -1073741670 && v12 != -1073741801 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(v11);
    }
  }
  if ( BugCheckParameter4->WaitBlock[2].SparePtr )
  {
    v46 = BugCheckParameter4;
    v47 = 1;
    v49 = 0;
    v48 = 0LL;
    if ( (unsigned int)PspUpdateCalloutParameters(1, (__int64)&v45, 0, 0LL) )
    {
      Win32Callouts = PsSessionGetWin32Callouts();
      ExCallCallBack((signed __int64 *)Win32Callouts, 1LL, (__int64)&v45, v14);
    }
  }
  if ( v7 )
    PspExitLastThread(2LL, 0, v3, BugCheckParameter4, 0);
  if ( (*((_DWORD *)&BugCheckParameter4->0 + 1) & 0x40) == 0 )
    KeBugCheckEx(0x94u, 0LL, (ULONG_PTR)BugCheckParameter4, 0LL, 0LL);
  v15 = *(_QWORD *)&BugCheckParameter4[1].UserAffinityPrimaryGroup;
  *(_DWORD *)&BugCheckParameter4[1].UserAffinityPrimaryGroup |= 1u;
  if ( v15 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    RtlpFlsDataCleanup(DirectoryTableBase_high, v15, 1LL);
    KeLeaveGuardedRegion();
  }
  IoCancelThreadIo();
  ExTimerRundown();
  CmNotifyRunDown(BugCheckParameter4);
  KiRundownMutants((ULONG_PTR)KeGetCurrentThread());
  PspSchedulerSharedDataRegionSlotFree((__int64)BugCheckParameter4);
  Teb = (unsigned __int64)BugCheckParameter4->Teb;
  v37 = (char *)Teb;
  if ( Teb )
  {
    BugCheckParameter4->Teb = 0LL;
    --BugCheckParameter4->KernelApcDisable;
    _InterlockedOr(v36, 0);
    if ( ((__int64)BugCheckParameter4[1].WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)&BugCheckParameter4[1].WaitBlockList);
    KeLeaveCriticalRegionThread();
    if ( (BugCheckParameter4->MiscFlags & 0x400) == 0 && (*(_DWORD *)(v3 + 500) & 0x40000008) == 0 )
    {
      if ( (*(_DWORD *)(&BugCheckParameter4[1].SwapListEntry + 1) & 2) != 0 )
      {
        BaseAddress = *(PVOID *)(Teb + 5240);
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        if ( *(_QWORD *)(v3 + 784) )
        {
          v19 = *(_WORD *)(v3 + 1772);
          if ( v19 == 332 || (v21 = v19 == 452, v20 = 0, v21) )
            v20 = 1;
          if ( v20 )
          {
            v42 = (PVOID)*(unsigned int *)(Teb + 11788);
            v38 = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v42, &v38, 0x8000u);
          }
        }
      }
      v18 = *(void **)(Teb + 5800);
      if ( v18 )
        ObCloseHandle(v18, 1);
      if ( (*(_BYTE *)(&BugCheckParameter4[1].SwapListEntry + 1) & 2) != 0
        && (BugCheckParameter4->MiscFlags & 0x100000) != 0 )
      {
        PspFreeCurrentThreadUserShadowStack();
      }
      MmDeleteTeb((struct _KPROCESS *)v3, Teb);
    }
  }
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise(&BugCheckParameter4[1].Header.WaitListHead.Flink);
  else
    BugCheckParameter4[1].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
  if ( v7 )
    PspExitLastThread(3LL, 0, v3, BugCheckParameter4, 0);
  KeRundownApcQueues((__int64)BugCheckParameter4);
  if ( BugCheckParameter4->SchedulerApc.SystemArgument2 && PspLegoNotifyRoutine )
    guard_dispatch_icall_no_overrides(BugCheckParameter4, v22);
  v24 = *(_DWORD *)&BugCheckParameter4[1].UserAffinityPrimaryGroup;
  if ( (v24 & 1) == 0 )
    __int2c();
  v25 = *(_QWORD *)&BugCheckParameter4[1].UserAffinityPrimaryGroup;
  *(_DWORD *)&BugCheckParameter4[1].UserAffinityPrimaryGroup = v24 | 2;
  v26 = v25 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v26 )
  {
    if ( !RtlpFlsSlotDataValidateEmpty(v23, v26) )
      __fastfail(0x46u);
    v31 = KeGetCurrentThread();
    --v31->SpecialApcDisable;
    RtlpFlsDataCleanup(v30, v26, 2LL);
    KeLeaveGuardedRegion();
  }
  PspThreadIndexCleanup(BugCheckParameter4, v7);
  Thread = BugCheckParameter4[1].WaitBlock[3].Thread;
  if ( Thread )
  {
    ExFreePoolWithTag(Thread, 0x63537350u);
    BugCheckParameter4[1].WaitBlock[3].Thread = 0LL;
  }
  LastXStateSaveDebugInfo = BugCheckParameter4[1].LastXStateSaveDebugInfo;
  if ( (unsigned __int64 *)LastXStateSaveDebugInfo != &BugCheckParameter4[1].LastXStateSaveDebugInfo )
    KeBugCheckEx(0x1C6u, 0x14uLL, (ULONG_PTR)BugCheckParameter4, LastXStateSaveDebugInfo, 0LL);
  return KeTerminateThread((char *)BugCheckParameter4);
}
