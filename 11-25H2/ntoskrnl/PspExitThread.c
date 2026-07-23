/*
 * XREFs of PspExitThread @ 0x1408F49D0
 * Callers:
 *     KiSchedulerApcTerminate @ 0x1408F47B0 (KiSchedulerApcTerminate.c)
 *     PspTerminateThreadByPointer @ 0x1408F48F0 (PspTerminateThreadByPointer.c)
 *     NtTerminateProcess @ 0x140A6C390 (NtTerminateProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     PspRevertContainerImpersonation @ 0x140308400 (PspRevertContainerImpersonation.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x14031A800 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeQuerySystemTimePrecise @ 0x14031ABA0 (KeQuerySystemTimePrecise.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     KeTerminateThread @ 0x1403AB638 (KeTerminateThread.c)
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14041D30C (ExfAcquireReleasePushLockExclusive.c)
 *     ExTimerRundown @ 0x1404380AC (ExTimerRundown.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     PsSessionGetWin32Callouts @ 0x14047422C (PsSessionGetWin32Callouts.c)
 *     KeQuerySystemTimeUnsafe @ 0x140478190 (KeQuerySystemTimeUnsafe.c)
 *     KiRundownMutants @ 0x14047E8DC (KiRundownMutants.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     RtlpFlsSlotDataValidateEmpty @ 0x14048C064 (RtlpFlsSlotDataValidateEmpty.c)
 *     PspUpdateCalloutParameters @ 0x1404EBC50 (PspUpdateCalloutParameters.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KeUnsecureThread @ 0x1405B3DC0 (KeUnsecureThread.c)
 *     ZwFreeVirtualMemory @ 0x14069B500 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     DbgkExitProcess @ 0x1406FB3B8 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x1406FB474 (DbgkExitThread.c)
 *     PspCatchCriticalBreak @ 0x140769208 (PspCatchCriticalBreak.c)
 *     LpcRequestPort @ 0x1408B03E0 (LpcRequestPort.c)
 *     PspClearProcessThreadCidRefs @ 0x1408E08D8 (PspClearProcessThreadCidRefs.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     PspCallThreadNotifyRoutines @ 0x1408F38C0 (PspCallThreadNotifyRoutines.c)
 *     PspThreadIndexCleanup @ 0x1408F5210 (PspThreadIndexCleanup.c)
 *     IoCancelThreadIo @ 0x1408F526C (IoCancelThreadIo.c)
 *     CmNotifyRunDown @ 0x1408F53C0 (CmNotifyRunDown.c)
 *     PspEmptyPropertySet @ 0x1408F56C4 (PspEmptyPropertySet.c)
 *     KeRundownApcQueues @ 0x1408F56FC (KeRundownApcQueues.c)
 *     PspSchedulerSharedDataRegionSlotFree @ 0x1408F57BC (PspSchedulerSharedDataRegionSlotFree.c)
 *     EtwTraceThread @ 0x1408F592C (EtwTraceThread.c)
 *     PsCaptureExceptionPort @ 0x1408F62C8 (PsCaptureExceptionPort.c)
 *     MmDeleteTeb @ 0x1408F6330 (MmDeleteTeb.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1408F65EC (PspFreeCurrentThreadUserShadowStack.c)
 *     ExCallCallBack @ 0x14091E61C (ExCallCallBack.c)
 *     PspExitLastThread @ 0x14091ECC8 (PspExitLastThread.c)
 *     RtlpFlsDataCleanup @ 0x140A08404 (RtlpFlsDataCleanup.c)
 *     PoDeletePowerRequest @ 0x140A35B50 (PoDeletePowerRequest.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspExitThread(int a1)
{
  struct _KTHREAD *BugCheckParameter4; // rdi
  ULONG_PTR v3; // r14
  ULONG_PTR v4; // r8
  __int64 v5; // rdx
  signed __int32 *v6; // r8
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v8; // r12
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 DirectoryTableBase_high; // rcx
  _QWORD *InitialStack; // r13
  void *v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *Teb; // rbx
  void *v18; // rcx
  __int16 v19; // ax
  char v20; // al
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rbx
  unsigned __int64 v25; // rbx
  struct _KTHREAD *Thread; // rcx
  ULONG_PTR LastXStateSaveDebugInfo; // r9
  _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 v30; // rcx
  struct _KTHREAD *v31; // rax
  struct _LIST_ENTRY *v32; // rbx
  __int64 ProcessServerSilo; // rax
  int v34; // eax
  _QWORD *v35; // rbx
  signed __int32 v36[8]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 *v37; // [rsp+30h] [rbp-C8h]
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
  PspClearProcessThreadCidRefs(
    (__int64)BugCheckParameter4,
    *(_QWORD *)&BugCheckParameter4[1].CurrentRunTime,
    (ULONG_PTR)BugCheckParameter4);
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
  PspEmptyPropertySet(&BugCheckParameter4[1].WaitBlockFill11[88]);
  PspRevertContainerImpersonation((ULONG_PTR)BugCheckParameter4, v5, v6);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&BugCheckParameter4[1].WaitStatus);
  Blink = BugCheckParameter4[1].ApcState.ApcListHead[1].Blink;
  if ( Blink )
  {
    PoDeletePowerRequest(Blink);
    BugCheckParameter4[1].ApcState.ApcListHead[1].Blink = 0LL;
  }
  v8 = 0;
  BugCheckParameter4[1].Timer.DueTime.LowPart = a1;
  if ( (PerfGlobalGroupMask[0] & 2) != 0 )
    EtwTraceThread(BugCheckParameter4, 0LL, 0LL);
  --BugCheckParameter4->KernelApcDisable;
  if ( (*(_DWORD *)(v3 + 1532) & 1) == 0 || *(_QWORD *)(v3 + 1600) )
    PspCallThreadNotifyRoutines((__int64)BugCheckParameter4, 0, 0);
  v9 = KeAbPreAcquire(v3 + 456, 0LL);
  v37 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 456), 0LL) )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v3 + 456), v9, v3 + 456);
    v9 = v37;
  }
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  --*(_DWORD *)(v3 + 896);
  if ( (*(_DWORD *)(v3 + 1532) & 1) == 0 || *(_QWORD *)(v3 + 1600) )
  {
    if ( !*(_DWORD *)(v3 + 896) )
      v8 = 1;
  }
  else if ( (*(_DWORD *)(v3 + 2012) & 2) != 0 && !*(_DWORD *)(v3 + 896) )
  {
    v8 = 1;
  }
  if ( v8 )
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 500), 0x2000008u);
    LOBYTE(v10) = 1;
    PspExitLastThread(0LL, v10, v3, BugCheckParameter4, a1);
  }
  else
  {
    if ( a1 != -1073741749 )
      *(_DWORD *)(v3 + 908) = a1;
    PspUnlockProcessExclusive(v3, (__int64)BugCheckParameter4);
  }
  DirectoryTableBase_high = -3LL;
  if ( BugCheckParameter4[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
  {
    v32 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
    if ( v32 == (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall()
      || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v32[-2].Blink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v32 - 48) >> 8)] != PsJobType
      || (HIDWORD(v32[97].Flink) & 2) == 0 )
    {
      KeBugCheckEx(0x1CBu, (ULONG_PTR)BugCheckParameter4, (ULONG_PTR)v32, v3, 1uLL);
    }
    ObfDereferenceObjectWithTag(v32, 0x6D497350u);
  }
  if ( *(_QWORD *)(v3 + 776) && (BugCheckParameter4->MiscFlags & 0x400) == 0 )
  {
    if ( v8 )
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
  if ( v8 )
    PspExitLastThread(1LL, 0LL, v3, BugCheckParameter4, a1);
  InitialStack = BugCheckParameter4[1].InitialStack;
  if ( InitialStack )
  {
    *(_QWORD *)&v39[0] = 0x600300008LL;
    *((_QWORD *)&v40 + 1) = *(_QWORD *)&BugCheckParameter4[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v34 = LpcRequestPort(InitialStack[1], (__int64)v39);
        if ( v34 != -1073741801 && v34 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject((PVOID)InitialStack[1]);
      v35 = (_QWORD *)*InitialStack;
      ExFreePoolWithTag(InitialStack, 0x70547350u);
      InitialStack = v35;
    }
    while ( v35 );
  }
  if ( (*(_DWORD *)(&BugCheckParameter4[1].SwapListEntry + 1) & 2) != 0 )
  {
    v13 = (void *)PsCaptureExceptionPort(v3);
    if ( v13 )
    {
      *(_QWORD *)&v39[0] = 0x600300008LL;
      *((_QWORD *)&v40 + 1) = *(_QWORD *)&BugCheckParameter4[1].Header.Lock;
      while ( 1 )
      {
        v14 = LpcRequestPort((__int64)v13, (__int64)v39);
        if ( v14 != -1073741801 && v14 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(v13);
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
      ExCallCallBack(Win32Callouts, 1LL, &v45);
    }
  }
  if ( v8 )
    PspExitLastThread(2LL, 0LL, v3, BugCheckParameter4, 0);
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
  PspSchedulerSharedDataRegionSlotFree(BugCheckParameter4);
  Teb = (unsigned int *)BugCheckParameter4->Teb;
  v37 = (__int64 *)Teb;
  if ( Teb )
  {
    BugCheckParameter4->Teb = 0LL;
    --BugCheckParameter4->KernelApcDisable;
    _InterlockedOr(v36, 0);
    if ( ((__int64)BugCheckParameter4[1].WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)&BugCheckParameter4[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)BugCheckParameter4);
    if ( (BugCheckParameter4->MiscFlags & 0x400) == 0 && (*(_DWORD *)(v3 + 500) & 0x40000008) == 0 )
    {
      if ( (*(_DWORD *)(&BugCheckParameter4[1].SwapListEntry + 1) & 2) != 0 )
      {
        BaseAddress = (PVOID)*((_QWORD *)Teb + 655);
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        if ( *(_QWORD *)(v3 + 784) )
        {
          v19 = *(_WORD *)(v3 + 1772);
          if ( v19 == 332 || (v21 = v19 == 452, v20 = 0, v21) )
            v20 = 1;
          if ( v20 )
          {
            v42 = (PVOID)Teb[2947];
            v38 = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v42, &v38, 0x8000u);
          }
        }
      }
      v18 = (void *)*((_QWORD *)Teb + 725);
      if ( v18 )
        ObCloseHandle(v18, 1);
      if ( (*(_BYTE *)(&BugCheckParameter4[1].SwapListEntry + 1) & 2) != 0
        && (BugCheckParameter4->MiscFlags & 0x100000) != 0 )
      {
        PspFreeCurrentThreadUserShadowStack();
      }
      MmDeleteTeb(v3, Teb);
    }
  }
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise(&BugCheckParameter4[1].Header.WaitListHead.Flink);
  else
    BugCheckParameter4[1].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
  if ( v8 )
    PspExitLastThread(3LL, 0LL, v3, BugCheckParameter4, 0);
  KeRundownApcQueues(BugCheckParameter4);
  if ( BugCheckParameter4->SchedulerApc.SystemArgument2 && PspLegoNotifyRoutine )
    guard_dispatch_icall_no_overrides(BugCheckParameter4);
  v23 = *(_DWORD *)&BugCheckParameter4[1].UserAffinityPrimaryGroup;
  if ( (v23 & 1) == 0 )
    __int2c();
  v24 = *(_QWORD *)&BugCheckParameter4[1].UserAffinityPrimaryGroup;
  *(_DWORD *)&BugCheckParameter4[1].UserAffinityPrimaryGroup = v23 | 2;
  v25 = v24 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v25 )
  {
    if ( !RtlpFlsSlotDataValidateEmpty(v22, v25) )
      __fastfail(0x46u);
    v31 = KeGetCurrentThread();
    --v31->SpecialApcDisable;
    RtlpFlsDataCleanup(v30, v25, 2LL);
    KeLeaveGuardedRegion();
  }
  PspThreadIndexCleanup(BugCheckParameter4, v8);
  Thread = BugCheckParameter4[1].WaitBlock[3].Thread;
  if ( Thread )
  {
    ExFreePoolWithTag(Thread, 0x63537350u);
    BugCheckParameter4[1].WaitBlock[3].Thread = 0LL;
  }
  LastXStateSaveDebugInfo = BugCheckParameter4[1].LastXStateSaveDebugInfo;
  if ( (unsigned __int64 *)LastXStateSaveDebugInfo != &BugCheckParameter4[1].LastXStateSaveDebugInfo )
    KeBugCheckEx(0x1C6u, 0x14uLL, (ULONG_PTR)BugCheckParameter4, LastXStateSaveDebugInfo, 0LL);
  return KeTerminateThread((ULONG_PTR)BugCheckParameter4);
}
