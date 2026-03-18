/*
 * XREFs of MmOutSwapProcess @ 0x14042D50C
 * Callers:
 *     KiOutSwapProcesses @ 0x14042D320 (KiOutSwapProcesses.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiEmptyPageAccessLog @ 0x140244260 (MiEmptyPageAccessLog.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140266854 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiMakeTransitionPte @ 0x1402E67B0 (MiMakeTransitionPte.c)
 *     MiGetVmAccessLoggingPartition @ 0x140399050 (MiGetVmAccessLoggingPartition.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     KeIsEmptyAffinityEx @ 0x1403B55D0 (KeIsEmptyAffinityEx.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     KeWaitForGate @ 0x140415DEC (KeWaitForGate.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14042D608 (MiReleaseOutSwappedProcessCommit.c)
 *     KeFlushProcessTb @ 0x14045BC40 (KeFlushProcessTb.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReleaseCommitForResetPages @ 0x14066A7E8 (MiReleaseCommitForResetPages.c)
 *     MiOutSwapFreeSoftWslePxe @ 0x140691118 (MiOutSwapFreeSoftWslePxe.c)
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
  char v9; // cl
  unsigned __int8 v10; // dl
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  unsigned __int8 v14; // dl
  ULONG *VmAccessLoggingPartition; // rax
  unsigned __int64 *v16; // r8
  __int64 v17; // rbx
  ULONG_PTR v18; // r14
  __int64 v19; // r15
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 TransitionPte; // rax
  __int64 v23; // r9
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  __int16 v27; // [rsp+20h] [rbp-28h] BYREF
  char v28; // [rsp+22h] [rbp-26h]
  char v29; // [rsp+23h] [rbp-25h]
  int v30; // [rsp+24h] [rbp-24h]
  _QWORD v31[4]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int EntireFlags; // [rsp+90h] [rbp+48h] BYREF
  unsigned int v33; // [rsp+98h] [rbp+50h] BYREF
  unsigned int v34; // [rsp+A0h] [rbp+58h] BYREF

  p_Vm = (__int64)&a1->Vm;
  v3 = a1->Vm.Instance.Flags.EntireFlags & 0xF;
  v29 = 0;
  if ( v3 == 1 )
  {
    p_ActualWslePages = (volatile unsigned __int64 *)&unk_140E38778;
    p_AccessLog = (void **)&unk_140E38768;
    p_CommitReleaseContext = (void **)&unk_140E38760;
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
    v8 = ExAcquireSpinLockExclusive(&dword_140E373C0);
    while ( 1 )
    {
      LOBYTE(EntireFlags) = v8;
      v9 = (unsigned __int8)BYTE1(*(_DWORD *)(p_Vm + 184)) >> 4;
      if ( (*(_DWORD *)(p_Vm + 184) & 0x600) == 0 )
        break;
      if ( v9 )
        return MiReleaseSpinLockExclusive(&dword_140E373C0, EntireFlags);
      v10 = EntireFlags;
      *(_QWORD *)(p_Vm + 104) = &v27;
      MiReleaseSpinLockExclusive(&dword_140E373C0, v10);
      KeWaitForGate((__int64)&v27, 18LL, 0);
      v8 = ExAcquireSpinLockExclusive(&dword_140E373C0);
      *(_QWORD *)(p_Vm + 104) = 0LL;
    }
    if ( !v9 )
    {
      _InterlockedOr((volatile signed __int32 *)&a1->500, 0x80u);
      v11 = (_QWORD *)(p_Vm + 24);
      v12 = *(_QWORD *)(p_Vm + 24);
      if ( *(_QWORD *)(v12 + 8) != p_Vm + 24 || (v13 = *(_QWORD **)(p_Vm + 32), (_QWORD *)*v13 != v11) )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      v14 = EntireFlags;
      *v11 = 0LL;
      MiReleaseSpinLockExclusive(&dword_140E373C0, v14);
      if ( *p_AccessLog )
      {
        VmAccessLoggingPartition = MiGetVmAccessLoggingPartition(p_Vm);
        MiEmptyPageAccessLog((__int64)VmAccessLoggingPartition, v16);
        *p_AccessLog = 0LL;
      }
      v33 = 0;
      while ( !(unsigned int)KeIsEmptyAffinityEx(&a1->Pcb.ActiveProcessors->Count) )
        KeYieldProcessorEx(&v33);
      KeFlushProcessTb(a1->Pcb.DirectoryTableBase);
      if ( a1->Vm.Shared.ShadowMapping )
        KeFlushProcessTb(a1->Pcb.UserDirectoryTableBase);
      v17 = a1->Pcb.DirectoryTableBase >> 12;
      v18 = 48 * v17 - 0x220000000000LL;
      v19 = -1LL;
      v20 = MiMapPageInHyperSpaceWorker(v17, (unsigned __int8 *)&EntireFlags, 0x80000000LL);
      if ( *p_ActualWslePages )
      {
        v21 = ((unsigned __int64)(8 * (unsigned int)((unsigned __int64)(qword_140E38B58 + 0x8000000000LL) >> 39)
                                + 2109657088) >> 3) & 0x1FF;
        v19 = (*(_QWORD *)(v20 + 8 * v21) >> 12) & 0xFFFFFFFFFFLL;
        *(_QWORD *)(v20 + 8 * v21) = CLFS_LSN_NULL_EXT;
      }
      TransitionPte = MiMakeTransitionPte(v17, 4);
      *(_QWORD *)(v24 + 8 * v23) = TransitionPte;
      v25 = TransitionPte;
      MiUnmapPageInHyperSpaceWorker(v24, 0x11u, 0x80000000);
      if ( v19 != -1 )
      {
        MiOutSwapFreeSoftWslePxe(a1, v19);
        MiLockAndDecrementShareCount(v18, 2);
      }
      MiLockAndDecrementShareCount(v18, 2);
      if ( KiIrqlFlags )
      {
        LOBYTE(v26) = EntireFlags;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v26);
      }
      __writecr8((unsigned __int8)EntireFlags);
      LOBYTE(EntireFlags) = ExAcquireSpinLockExclusive(&dword_140E373C0);
      v34 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v34);
        while ( *(__int64 *)(v18 + 24) < 0 );
      }
      *(_QWORD *)(v18 + 8) = &a1->PageDirectoryPte;
      a1->PageDirectoryPte = v25;
      *(_QWORD *)(p_Vm + 128) = 0LL;
      *(_QWORD *)(p_Vm + 136) = 0LL;
      *(_QWORD *)(p_Vm + 144) = 0LL;
      *(_QWORD *)(p_Vm + 152) = 0LL;
      MiDecrementShareCountEx(v18, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return MiReleaseSpinLockExclusive(&dword_140E373C0, EntireFlags);
  }
  return result;
}
