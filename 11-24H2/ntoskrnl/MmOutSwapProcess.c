/*
 * XREFs of MmOutSwapProcess @ 0x1402DDEEC
 * Callers:
 *     KiOutSwapProcesses @ 0x1402DDD00 (KiOutSwapProcesses.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x14020C9F0 (MiEmptyPageAccessLog.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeTransitionPte @ 0x140347DF0 (MiMakeTransitionPte.c)
 *     MiGetVmAccessLoggingPartition @ 0x140351780 (MiGetVmAccessLoggingPartition.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140424B70 (MiReleaseOutSwappedProcessCommit.c)
 *     KeFlushProcessTb @ 0x140450FD8 (KeFlushProcessTb.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReleaseCommitForResetPages @ 0x14066B9B8 (MiReleaseCommitForResetPages.c)
 *     MiOutSwapFreeSoftWslePxe @ 0x1406921E8 (MiOutSwapFreeSoftWslePxe.c)
 */

__int64 __fastcall MmOutSwapProcess(struct _EPROCESS *a1)
{
  _MMSUPPORT_FULL *p_Vm; // rsi
  char v3; // al
  volatile unsigned __int64 *p_ActualWslePages; // r12
  void **p_AccessLog; // rbx
  void **p_CommitReleaseContext; // rdx
  __int64 result; // rax
  KIRQL v8; // al
  char v9; // cl
  unsigned __int8 v10; // dl
  _LIST_ENTRY *p_WorkingSetExpansionLinks; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v14; // dl
  __int64 VmAccessLoggingPartition; // rax
  unsigned __int64 *v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // r15
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 TransitionPte; // rax
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r10
  unsigned __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int16 v34; // [rsp+20h] [rbp-28h] BYREF
  char v35; // [rsp+22h] [rbp-26h]
  char v36; // [rsp+23h] [rbp-25h]
  int v37; // [rsp+24h] [rbp-24h]
  _QWORD v38[4]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int EntireFlags; // [rsp+90h] [rbp+48h] BYREF
  int v40; // [rsp+98h] [rbp+50h] BYREF
  int v41; // [rsp+A0h] [rbp+58h] BYREF

  p_Vm = &a1->Vm;
  v3 = a1->Vm.Instance.Flags.EntireFlags & 0xF;
  v36 = 0;
  if ( v3 == 1 )
  {
    p_ActualWslePages = (volatile unsigned __int64 *)&unk_140E388B8;
    p_AccessLog = (void **)&unk_140E388A8;
    p_CommitReleaseContext = (void **)&unk_140E388A0;
  }
  else
  {
    p_ActualWslePages = &a1->Vm.Shared.ActualWslePages;
    p_AccessLog = &a1->Vm.Shared.AccessLog;
    p_CommitReleaseContext = &a1->Vm.Shared.CommitReleaseContext;
  }
  _InterlockedOr((volatile signed __int32 *)&a1->500, 0x40u);
  EntireFlags = a1->Vm.Instance.Flags.EntireFlags;
  if ( (HIBYTE(EntireFlags) & 0x30) == 0x10 )
  {
    MiReleaseOutSwappedProcessCommit(a1);
  }
  else if ( (HIBYTE(EntireFlags) & 0x30) == 0x20 && *((_QWORD *)*p_CommitReleaseContext + 5) )
  {
    MiReleaseCommitForResetPages(a1);
  }
  result = p_Vm->Instance.WorkingSetSize;
  if ( result == 1 && (EntireFlags & 0x2000000) == 0 )
  {
    v34 = 263;
    v38[1] = v38;
    v35 = 6;
    v38[0] = v38;
    v37 = 0;
    v8 = ExAcquireSpinLockExclusive(&SpinLock);
    while ( 1 )
    {
      LOBYTE(EntireFlags) = v8;
      v9 = (unsigned __int8)BYTE1(p_Vm->Instance.Flags.EntireFlags) >> 4;
      if ( (p_Vm->Instance.Flags.EntireFlags & 0x600) == 0 )
        break;
      if ( v9 )
        return MiReleaseSpinLockExclusive(&SpinLock, EntireFlags);
      v10 = EntireFlags;
      p_Vm->Instance.ExitOutswapGate = (_KGATE *)&v34;
      MiReleaseSpinLockExclusive(&SpinLock, v10);
      KeWaitForGate((__int64)&v34, 18LL);
      v8 = ExAcquireSpinLockExclusive(&SpinLock);
      p_Vm->Instance.ExitOutswapGate = 0LL;
    }
    if ( !v9 )
    {
      _InterlockedOr((volatile signed __int32 *)&a1->500, 0x80u);
      p_WorkingSetExpansionLinks = &p_Vm->Instance.WorkingSetExpansionLinks;
      Flink = p_Vm->Instance.WorkingSetExpansionLinks.Flink;
      if ( Flink->Blink != &p_Vm->Instance.WorkingSetExpansionLinks
        || (Blink = p_Vm->Instance.WorkingSetExpansionLinks.Blink, Blink->Flink != p_WorkingSetExpansionLinks) )
      {
        __fastfail(3u);
      }
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      v14 = EntireFlags;
      p_WorkingSetExpansionLinks->Flink = 0LL;
      MiReleaseSpinLockExclusive(&SpinLock, v14);
      if ( *p_AccessLog )
      {
        VmAccessLoggingPartition = MiGetVmAccessLoggingPartition(p_Vm);
        MiEmptyPageAccessLog(VmAccessLoggingPartition, v16);
        *p_AccessLog = 0LL;
      }
      v40 = 0;
      while ( !(unsigned int)KeIsEmptyAffinityEx(a1->Pcb.ActiveProcessors) )
        KeYieldProcessorEx(&v40);
      KeFlushProcessTb(a1->Pcb.DirectoryTableBase);
      if ( a1->Vm.Shared.ShadowMapping )
        KeFlushProcessTb(a1->Pcb.UserDirectoryTableBase);
      v17 = a1->Pcb.DirectoryTableBase >> 12;
      v18 = 48 * v17 - 0x220000000000LL;
      v19 = -1LL;
      v20 = MiMapPageInHyperSpaceWorker(v17, (unsigned __int8 *)&EntireFlags, 0x80000000);
      if ( *p_ActualWslePages )
      {
        v21 = ((unsigned __int64)(8 * (unsigned int)((unsigned __int64)(qword_140E38C98 + 0x8000000000LL) >> 39)
                                + 2109657088) >> 3) & 0x1FF;
        v19 = (*(_QWORD *)(v20 + 8 * v21) >> 12) & 0xFFFFFFFFFFLL;
        *(_QWORD *)(v20 + 8 * v21) = CLFS_LSN_NULL_EXT;
      }
      TransitionPte = MiMakeTransitionPte(v17, 4LL);
      LOBYTE(v23) = 17;
      *(_QWORD *)(v25 + 8 * v24) = TransitionPte;
      v26 = TransitionPte;
      MiUnmapPageInHyperSpaceWorker(v25, v23, 0x80000000LL);
      if ( v19 != -1 )
      {
        MiOutSwapFreeSoftWslePxe(a1, v19);
        MiLockAndDecrementShareCount(v18, 2LL, v29, v30);
      }
      MiLockAndDecrementShareCount(v18, 2LL, v27, v28);
      if ( KiIrqlFlags )
      {
        LOBYTE(v31) = EntireFlags;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v31);
      }
      __writecr8((unsigned __int8)EntireFlags);
      LOBYTE(EntireFlags) = ExAcquireSpinLockExclusive(&SpinLock);
      v41 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v41);
        while ( *(__int64 *)(v18 + 24) < 0 );
      }
      *(_QWORD *)(v18 + 8) = &a1->PageDirectoryPte;
      a1->PageDirectoryPte = v26;
      p_Vm->Instance.WorkingSetLeafSize = 0LL;
      p_Vm->Instance.WorkingSetLeafPrivateSize = 0LL;
      p_Vm->Instance.WorkingSetSize = 0LL;
      p_Vm->Instance.WorkingSetPrivateSize = 0LL;
      MiDecrementShareCountEx(v18, 0LL, v32, v33);
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return MiReleaseSpinLockExclusive(&SpinLock, EntireFlags);
  }
  return result;
}
