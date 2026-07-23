/*
 * XREFs of MmInSwapWorkingSet @ 0x1403C6A50
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140ACFA40 (PspChangeProcessExecutionState.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1403C4138 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiProcessWsInSwapSupport @ 0x1403C67DC (MiProcessWsInSwapSupport.c)
 *     MiGetWorkingSetSwapSupport @ 0x1403C84EC (MiGetWorkingSetSwapSupport.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     VmCheckLargePageInswap @ 0x14079E658 (VmCheckLargePageInswap.c)
 *     VmPrefetchVirtualAddresses @ 0x14079E7D8 (VmPrefetchVirtualAddresses.c)
 *     EtwTraceWorkingSetSwap @ 0x140A03234 (EtwTraceWorkingSetSwap.c)
 *     MiContractWsSwapPageFile @ 0x140A03778 (MiContractWsSwapPageFile.c)
 *     MiFreeWorkingSetSwapContext @ 0x140A32EFC (MiFreeWorkingSetSwapContext.c)
 *     MiInSwapStore @ 0x140A43954 (MiInSwapStore.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  v4 = *((_QWORD *)qword_140E300C8 + HIWORD(Process[2].ProcessListEntry.Blink));
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
      v8 = &unk_140E38898;
      v9 = &unk_140E38898;
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
        MiProcessWsInSwapSupport(v12, 1u);
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
