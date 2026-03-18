/*
 * XREFs of PspExitThread @ 0x1408A7D90
 * Callers:
 *     KiSchedulerApcTerminate @ 0x1408A7B70 (KiSchedulerApcTerminate.c)
 *     PspTerminateThreadByPointer @ 0x1408A7CB0 (PspTerminateThreadByPointer.c)
 *     NtTerminateProcess @ 0x14093B030 (NtTerminateProcess.c)
 * Callees:
 *     ExTimerRundown @ 0x14024D3F4 (ExTimerRundown.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402A0C10 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PspRevertContainerImpersonation @ 0x1402A2A90 (PspRevertContainerImpersonation.c)
 *     KeTerminateThread @ 0x1402A6488 (KeTerminateThread.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeQuerySystemTimePrecise @ 0x14034EC60 (KeQuerySystemTimePrecise.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140418A5C (ExfAcquireReleasePushLockExclusive.c)
 *     PsAttachSiloToCurrentThread @ 0x14043CF50 (PsAttachSiloToCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 *     PspUnlockProcessExclusive @ 0x140462E74 (PspUnlockProcessExclusive.c)
 *     PsSessionGetWin32Callouts @ 0x14046B2A0 (PsSessionGetWin32Callouts.c)
 *     KeQuerySystemTimeUnsafe @ 0x140477918 (KeQuerySystemTimeUnsafe.c)
 *     KiRundownMutants @ 0x14047E1B8 (KiRundownMutants.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 *     RtlpFlsSlotDataValidateEmpty @ 0x14048B78C (RtlpFlsSlotDataValidateEmpty.c)
 *     PspUpdateCalloutParameters @ 0x1404EEDCC (PspUpdateCalloutParameters.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KeUnsecureThread @ 0x1405B7CB0 (KeUnsecureThread.c)
 *     ZwFreeVirtualMemory @ 0x1406A67D0 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     DbgkExitProcess @ 0x140707298 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x140707354 (DbgkExitThread.c)
 *     PspCatchCriticalBreak @ 0x140778EB8 (PspCatchCriticalBreak.c)
 *     LpcRequestPort @ 0x14088DDB0 (LpcRequestPort.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     PspCallThreadNotifyRoutines @ 0x1408A66B0 (PspCallThreadNotifyRoutines.c)
 *     EtwTraceThread @ 0x1408A6918 (EtwTraceThread.c)
 *     PspSchedulerSharedDataRegionSlotFree @ 0x1408A7904 (PspSchedulerSharedDataRegionSlotFree.c)
 *     KeRundownApcQueues @ 0x1408A7A74 (KeRundownApcQueues.c)
 *     PspEmptyPropertySet @ 0x1408A7B34 (PspEmptyPropertySet.c)
 *     PspThreadIndexCleanup @ 0x1408A8620 (PspThreadIndexCleanup.c)
 *     IoCancelThreadIo @ 0x1408A867C (IoCancelThreadIo.c)
 *     CmNotifyRunDown @ 0x1408A87D0 (CmNotifyRunDown.c)
 *     PspClearProcessThreadCidRefs @ 0x1408A8FC8 (PspClearProcessThreadCidRefs.c)
 *     MmDeleteTeb @ 0x1408DB490 (MmDeleteTeb.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1408DB74C (PspFreeCurrentThreadUserShadowStack.c)
 *     ExCallCallBack @ 0x1409358AC (ExCallCallBack.c)
 *     PspExitLastThread @ 0x1409374F0 (PspExitLastThread.c)
 *     RtlpFlsDataCleanup @ 0x140A0B6C8 (RtlpFlsDataCleanup.c)
 *     PsCaptureExceptionPort @ 0x140A2095C (PsCaptureExceptionPort.c)
 *     PoDeletePowerRequest @ 0x140A3C4E0 (PoDeletePowerRequest.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 DirectoryTableBase_high; // rcx
  _QWORD *InitialStack; // r13
  void *v13; // rbx
  int v14; // eax
  union _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 v16; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *Teb; // rbx
  void *v19; // rcx
  __int16 v20; // ax
  char v21; // al
  bool v22; // zf
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rbx
  unsigned __int64 v29; // rbx
  struct _KTHREAD *Thread; // rcx
  ULONG_PTR LastXStateSaveDebugInfo; // r9
  __int64 v33; // rcx
  struct _KTHREAD *v34; // rax
  int v35; // eax
  _QWORD *v36; // rbx
  struct _LIST_ENTRY *v37; // rbx
  __int64 ProcessServerSilo; // rax
  signed __int32 v39[8]; // [rsp+0h] [rbp-F8h] BYREF
  _QWORD *v40; // [rsp+30h] [rbp-C8h]
  ULONG_PTR v41; // [rsp+38h] [rbp-C0h] BYREF
  _OWORD v42[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v43; // [rsp+60h] [rbp-98h]
  PVOID BaseAddress; // [rsp+70h] [rbp-88h] BYREF
  PVOID v45; // [rsp+78h] [rbp-80h] BYREF
  _KPROCESS *Process; // [rsp+80h] [rbp-78h]
  struct _KTHREAD *v47; // [rsp+88h] [rbp-70h]
  __int128 v48; // [rsp+90h] [rbp-68h] BYREF
  struct _KTHREAD *v49; // [rsp+A0h] [rbp-58h]
  int v50; // [rsp+A8h] [rbp-50h]
  __int64 v51; // [rsp+B0h] [rbp-48h]
  int v52; // [rsp+B8h] [rbp-40h]
  PMDL MemoryDescriptorList; // [rsp+110h] [rbp+18h] BYREF
  ULONG_PTR RegionSize; // [rsp+118h] [rbp+20h] BYREF

  memset(v42, 0, sizeof(v42));
  v43 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0;
  BugCheckParameter4 = KeGetCurrentThread();
  v47 = BugCheckParameter4;
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
  if ( (PerfGlobalGroupMask & 2) != 0 )
    EtwTraceThread((__int64)BugCheckParameter4, 0LL, 0);
  --BugCheckParameter4->KernelApcDisable;
  if ( (*(_DWORD *)(v3 + 1532) & 1) == 0 || *(_QWORD *)(v3 + 1600) )
    PspCallThreadNotifyRoutines(BugCheckParameter4, 0, 0);
  v9 = KeAbPreAcquire(v3 + 456, 0LL);
  v40 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 456), 0LL) )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v3 + 456), (__int64)v9, v3 + 456);
    v9 = v40;
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
    PspUnlockProcessExclusive(v3);
  }
  DirectoryTableBase_high = -3LL;
  if ( BugCheckParameter4[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
  {
    v37 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
    if ( v37 == (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall()
      || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v37[-2].Blink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v37 - 48) >> 8)] != PsJobType
      || (HIDWORD(v37[97].Flink) & 2) == 0 )
    {
      KeBugCheckEx(0x1CBu, (ULONG_PTR)BugCheckParameter4, (ULONG_PTR)v37, v3, 1uLL);
    }
    ObfDereferenceObjectWithTag(v37, 0x6D497350u);
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
    *(_QWORD *)&v42[0] = 0x600300008LL;
    *((_QWORD *)&v43 + 1) = *(_QWORD *)&BugCheckParameter4[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v35 = LpcRequestPort(InitialStack[1], (__int64)v42);
        if ( v35 != -1073741801 && v35 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject((PVOID)InitialStack[1]);
      v36 = (_QWORD *)*InitialStack;
      ExFreePoolWithTag(InitialStack, 0x70547350u);
      InitialStack = v36;
    }
    while ( v36 );
  }
  if ( (*(_DWORD *)(&BugCheckParameter4[1].SwapListEntry + 1) & 2) != 0 )
  {
    v13 = (void *)PsCaptureExceptionPort(v3);
    if ( v13 )
    {
      *(_QWORD *)&v42[0] = 0x600300008LL;
      *((_QWORD *)&v43 + 1) = *(_QWORD *)&BugCheckParameter4[1].Header.Lock;
      while ( 1 )
      {
        v14 = LpcRequestPort((__int64)v13, (__int64)v42);
        if ( v14 != -1073741670 && v14 != -1073741801 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(v13);
    }
  }
  if ( BugCheckParameter4->WaitBlock[2].SparePtr )
  {
    v49 = BugCheckParameter4;
    v50 = 1;
    v52 = 0;
    v51 = 0LL;
    if ( (unsigned int)PspUpdateCalloutParameters(1, (__int64)&v48, 0, 0LL) )
    {
      Win32Callouts = PsSessionGetWin32Callouts();
      ExCallCallBack(Win32Callouts, 1LL, &v48);
    }
  }
  if ( v8 )
    PspExitLastThread(2LL, 0LL, v3, BugCheckParameter4, 0);
  if ( (*((_DWORD *)&BugCheckParameter4->0 + 1) & 0x40) == 0 )
    KeBugCheckEx(0x94u, 0LL, (ULONG_PTR)BugCheckParameter4, 0LL, 0LL);
  v16 = *(_QWORD *)&BugCheckParameter4[1].UserAffinityPrimaryGroup;
  *(_DWORD *)&BugCheckParameter4[1].UserAffinityPrimaryGroup |= 1u;
  if ( v16 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    RtlpFlsDataCleanup(DirectoryTableBase_high, v16, 1LL);
    KeLeaveGuardedRegion();
  }
  IoCancelThreadIo();
  ExTimerRundown();
  CmNotifyRunDown(BugCheckParameter4);
  KiRundownMutants((ULONG_PTR)KeGetCurrentThread());
  PspSchedulerSharedDataRegionSlotFree((__int64)BugCheckParameter4);
  Teb = (unsigned int *)BugCheckParameter4->Teb;
  v40 = Teb;
  if ( Teb )
  {
    BugCheckParameter4->Teb = 0LL;
    --BugCheckParameter4->KernelApcDisable;
    _InterlockedOr(v39, 0);
    if ( ((__int64)BugCheckParameter4[1].WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)&BugCheckParameter4[1].WaitBlockList);
    KeLeaveCriticalRegionThread();
    if ( (BugCheckParameter4->MiscFlags & 0x400) == 0 && (*(_DWORD *)(v3 + 500) & 0x40000008) == 0 )
    {
      if ( (*(_DWORD *)(&BugCheckParameter4[1].SwapListEntry + 1) & 2) != 0 )
      {
        BaseAddress = (PVOID)*((_QWORD *)Teb + 655);
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        if ( *(_QWORD *)(v3 + 784) )
        {
          v20 = *(_WORD *)(v3 + 1772);
          if ( v20 == 332 || (v22 = v20 == 452, v21 = 0, v22) )
            v21 = 1;
          if ( v21 )
          {
            v45 = (PVOID)Teb[2947];
            v41 = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v45, &v41, 0x8000u);
          }
        }
      }
      v19 = (void *)*((_QWORD *)Teb + 725);
      if ( v19 )
        ObCloseHandle(v19, 1);
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
  KeRundownApcQueues((__int64)BugCheckParameter4);
  if ( BugCheckParameter4->SchedulerApc.SystemArgument2 && PspLegoNotifyRoutine )
    guard_dispatch_icall_no_overrides(BugCheckParameter4, v23, v25, v26);
  v27 = *(_DWORD *)&BugCheckParameter4[1].UserAffinityPrimaryGroup;
  if ( (v27 & 1) == 0 )
    __int2c();
  v28 = *(_QWORD *)&BugCheckParameter4[1].UserAffinityPrimaryGroup;
  *(_DWORD *)&BugCheckParameter4[1].UserAffinityPrimaryGroup = v27 | 2;
  v29 = v28 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v29 )
  {
    if ( !RtlpFlsSlotDataValidateEmpty(v24, v29) )
      __fastfail(0x46u);
    v34 = KeGetCurrentThread();
    --v34->SpecialApcDisable;
    RtlpFlsDataCleanup(v33, v29, 2LL);
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
  return KeTerminateThread((char *)BugCheckParameter4);
}
