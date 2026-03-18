/*
 * XREFs of MmOutSwapProcess @ 0x1402F1C40
 * Callers:
 *     KiOutSwapProcesses @ 0x1402F1A54 (KiOutSwapProcesses.c)
 * Callees:
 *     MiGetVmAccessLoggingPartition @ 0x140209E80 (MiGetVmAccessLoggingPartition.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiEmptyPageAccessLog @ 0x140322FE0 (MiEmptyPageAccessLog.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiMakeTransitionPte @ 0x140339DF0 (MiMakeTransitionPte.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040FDB8 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeWaitForGate @ 0x140418844 (KeWaitForGate.c)
 *     KeFlushProcessTb @ 0x14045CF7C (KeFlushProcessTb.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1404D5BE8 (MiReleaseOutSwappedProcessCommit.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReleaseCommitForResetPages @ 0x14065ED04 (MiReleaseCommitForResetPages.c)
 *     MiOutSwapFreeSoftWslePxe @ 0x140685CB8 (MiOutSwapFreeSoftWslePxe.c)
 */

__int64 __fastcall MmOutSwapProcess(struct _EPROCESS *a1)
{
  __int64 p_Vm; // rsi
  char v3; // al
  volatile unsigned __int64 *p_ActualWslePages; // r12
  void **p_AccessLog; // rbx
  void **p_CommitReleaseContext; // rdx
  __int64 result; // rax
  KIRQL v8; // al
  __int64 v9; // rdx
  char v10; // cl
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  ULONG *VmAccessLoggingPartition; // rax
  __int64 v15; // r8
  __int64 v16; // rbx
  ULONG_PTR v17; // r14
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 TransitionPte; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // r10
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  __int16 v27; // [rsp+20h] [rbp-28h] BYREF
  char v28; // [rsp+22h] [rbp-26h]
  char v29; // [rsp+23h] [rbp-25h]
  int v30; // [rsp+24h] [rbp-24h]
  _QWORD v31[4]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int EntireFlags; // [rsp+90h] [rbp+48h] BYREF
  int v33; // [rsp+98h] [rbp+50h] BYREF
  int v34; // [rsp+A0h] [rbp+58h] BYREF

  p_Vm = (__int64)&a1->Vm;
  v3 = a1->Vm.Instance.Flags.EntireFlags & 0xF;
  v29 = 0;
  if ( v3 == 1 )
  {
    p_ActualWslePages = (volatile unsigned __int64 *)&unk_140E38538;
    p_AccessLog = (void **)&unk_140E38528;
    p_CommitReleaseContext = (void **)&unk_140E38520;
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
  result = *(_QWORD *)(p_Vm + 144);
  if ( result == 1 && (EntireFlags & 0x2000000) == 0 )
  {
    v27 = 263;
    v31[1] = v31;
    v28 = 6;
    v31[0] = v31;
    v30 = 0;
    v8 = ExAcquireSpinLockExclusive(&dword_140E37180);
    while ( 1 )
    {
      LOBYTE(EntireFlags) = v8;
      v10 = (unsigned __int8)BYTE1(*(_DWORD *)(p_Vm + 184)) >> 4;
      if ( (*(_DWORD *)(p_Vm + 184) & 0x600) == 0 )
        break;
      if ( v10 )
        goto LABEL_38;
      LOBYTE(v9) = EntireFlags;
      *(_QWORD *)(p_Vm + 104) = &v27;
      MiReleaseSpinLockExclusive(&dword_140E37180, v9);
      KeWaitForGate(&v27, 18LL);
      v8 = ExAcquireSpinLockExclusive(&dword_140E37180);
      *(_QWORD *)(p_Vm + 104) = 0LL;
    }
    if ( !v10 )
    {
      _InterlockedOr((volatile signed __int32 *)&a1->500, 0x80u);
      v11 = (_QWORD *)(p_Vm + 24);
      v12 = *(_QWORD *)(p_Vm + 24);
      if ( *(_QWORD *)(v12 + 8) != p_Vm + 24 || (v13 = *(_QWORD **)(p_Vm + 32), (_QWORD *)*v13 != v11) )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      LOBYTE(v12) = EntireFlags;
      *v11 = 0LL;
      MiReleaseSpinLockExclusive(&dword_140E37180, v12);
      if ( *p_AccessLog )
      {
        VmAccessLoggingPartition = MiGetVmAccessLoggingPartition(p_Vm);
        MiEmptyPageAccessLog(VmAccessLoggingPartition, v15);
        *p_AccessLog = 0LL;
      }
      v33 = 0;
      while ( !(unsigned int)KeIsEmptyAffinityEx(a1->Pcb.ActiveProcessors) )
        KeYieldProcessorEx(&v33);
      KeFlushProcessTb(a1->Pcb.DirectoryTableBase);
      if ( a1->Vm.Shared.ShadowMapping )
        KeFlushProcessTb(a1->Pcb.UserDirectoryTableBase);
      v16 = a1->Pcb.DirectoryTableBase >> 12;
      v17 = 48 * v16 - 0x220000000000LL;
      v18 = -1LL;
      v19 = MiMapPageInHyperSpaceWorker(v16, (unsigned __int8 *)&EntireFlags, 0x80000000);
      if ( *p_ActualWslePages )
      {
        v20 = ((unsigned __int64)(8 * (unsigned int)((unsigned __int64)(qword_140E38918 + 0x8000000000LL) >> 39)
                                + 2109657088) >> 3) & 0x1FF;
        v18 = (*(_QWORD *)(v19 + 8 * v20) >> 12) & 0xFFFFFFFFFFLL;
        *(_QWORD *)(v19 + 8 * v20) = CLFS_LSN_NULL_EXT;
      }
      TransitionPte = MiMakeTransitionPte(v16, 4LL);
      LOBYTE(v22) = 17;
      *(_QWORD *)(v24 + 8 * v23) = TransitionPte;
      v25 = TransitionPte;
      MiUnmapPageInHyperSpaceWorker(v24, v22, 0x80000000LL);
      if ( v18 != -1 )
      {
        MiOutSwapFreeSoftWslePxe(a1, v18);
        MiLockAndDecrementShareCount(v17, 2);
      }
      MiLockAndDecrementShareCount(v17, 2);
      if ( KiIrqlFlags )
      {
        LOBYTE(v26) = EntireFlags;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v26);
      }
      __writecr8((unsigned __int8)EntireFlags);
      LOBYTE(EntireFlags) = ExAcquireSpinLockExclusive(&dword_140E37180);
      v34 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v34);
        while ( *(__int64 *)(v17 + 24) < 0 );
      }
      *(_QWORD *)(v17 + 8) = &a1->PageDirectoryPte;
      a1->PageDirectoryPte = v25;
      *(_QWORD *)(p_Vm + 128) = 0LL;
      *(_QWORD *)(p_Vm + 136) = 0LL;
      *(_QWORD *)(p_Vm + 144) = 0LL;
      *(_QWORD *)(p_Vm + 152) = 0LL;
      MiDecrementShareCountEx(v17, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
LABEL_38:
    LOBYTE(v9) = EntireFlags;
    return MiReleaseSpinLockExclusive(&dword_140E37180, v9);
  }
  return result;
}
