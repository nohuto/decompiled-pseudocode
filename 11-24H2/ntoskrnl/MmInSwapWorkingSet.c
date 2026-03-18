/*
 * XREFs of MmInSwapWorkingSet @ 0x140404E48
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140AD16D4 (PspChangeProcessExecutionState.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItemToPartition @ 0x1402A7F70 (ExQueueWorkItemToPartition.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x140367B34 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiGetWorkingSetSwapSupport @ 0x140405F90 (MiGetWorkingSetSwapSupport.c)
 *     MiProcessWsInSwapSupport @ 0x140406864 (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     VmCheckLargePageInswap @ 0x14079E548 (VmCheckLargePageInswap.c)
 *     VmPrefetchVirtualAddresses @ 0x14079E6C8 (VmPrefetchVirtualAddresses.c)
 *     EtwTraceWorkingSetSwap @ 0x140A06D04 (EtwTraceWorkingSetSwap.c)
 *     MiContractWsSwapPageFile @ 0x140A07248 (MiContractWsSwapPageFile.c)
 *     MiFreeWorkingSetSwapContext @ 0x140A3D5EC (MiFreeWorkingSetSwapContext.c)
 *     MiInSwapStore @ 0x140A4CDC4 (MiInSwapStore.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInSwapWorkingSet(PEPROCESS Process)
{
  struct _LIST_ENTRY **p_Blink; // rbp
  void **v3; // rsi
  __int64 v4; // r13
  __int64 WorkingSetSwapSupport; // rax
  unsigned __int8 v6; // dl
  __int64 *v7; // rdi
  _QWORD *v8; // r15
  _QWORD *v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // ebx

  p_Blink = &Process[2].ReadyListHead.Blink;
  v3 = 0LL;
  EtwTraceWorkingSetSwap(Process);
  v4 = *((_QWORD *)qword_140E2FF88 + HIWORD(Process[2].ProcessListEntry.Blink));
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1184));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(p_Blink);
  v7 = (__int64 *)WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    if ( WorkingSetSwapSupport == 1 )
    {
      v13 = -1073740682;
    }
    else if ( WorkingSetSwapSupport == 2 )
    {
      v13 = -1073741558;
    }
    else
    {
      v8 = &unk_140E38758;
      v9 = &unk_140E38758;
      if ( ((_DWORD)p_Blink[23] & 0xF) != 1 )
        v9 = p_Blink + 27;
      *v9 = 1LL;
      MiReleaseSpinLockExclusive((_DWORD *)(v4 + 1184), v6);
      if ( *(_DWORD *)(v4 + 1204) != -1 )
        MiInSwapStore(Process);
      v11 = 0;
      if ( Process[3].ProcessListEntry.Blink && *(_QWORD *)(*v7 + 16) )
      {
        v3 = (void **)MiReAllocateWorkingSetSwapSupport(*v7, v10);
        if ( v3 )
          v11 = (*(_BYTE *)(*v7 + 32) & 1) == 0;
        if ( (unsigned int)VmCheckLargePageInswap(Process) )
          v11 |= 4u;
      }
      MiProcessWsInSwapSupport(*v7, v11);
      if ( v3 )
        VmPrefetchVirtualAddresses(*v3);
      v12 = v7[7];
      if ( v12 )
        MiProcessWsInSwapSupport(v12, 1LL);
      if ( v7[1] )
      {
        v7[2] = 0LL;
        v7[4] = (__int64)MiInSwapSharedWorkingSetWorker;
        v7[5] = (__int64)v7;
        ObfReferenceObjectWithTag(Process, 0x73576D4Du);
        v7[6] = (__int64)Process;
        ExQueueWorkItemToPartition((ULONG_PTR)(v7 + 2), 3, 0xFFFFFFFF, *(_QWORD *)(v4 + 184));
      }
      else
      {
        MiFreeWorkingSetSwapContext(v4, v7);
      }
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1184));
      if ( MiGetWorkingSetSwapSupport(p_Blink) == 1 )
      {
        if ( ((_DWORD)p_Blink[23] & 0xF) != 1 )
          v8 = p_Blink + 27;
        *v8 = 0LL;
      }
      v13 = 0;
    }
  }
  else
  {
    v13 = -1073741275;
  }
  MiReleaseSpinLockExclusive((_DWORD *)(v4 + 1184), v6);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  MiContractWsSwapPageFile(v4);
  EtwTraceWorkingSetSwap(Process);
  return v13;
}
