/*
 * XREFs of MmInSwapWorkingSet @ 0x140454FFC
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140AC7CBC (PspChangeProcessExecutionState.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     ExQueueWorkItemToPartition @ 0x1403AC7C0 (ExQueueWorkItemToPartition.c)
 *     MiGetWorkingSetSwapSupport @ 0x1403D82C4 (MiGetWorkingSetSwapSupport.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1403D986C (MiReAllocateWorkingSetSwapSupport.c)
 *     MiProcessWsInSwapSupport @ 0x140455294 (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     VmCheckLargePageInswap @ 0x14078F188 (VmCheckLargePageInswap.c)
 *     VmPrefetchVirtualAddresses @ 0x14078F308 (VmPrefetchVirtualAddresses.c)
 *     EtwTraceWorkingSetSwap @ 0x140A04C08 (EtwTraceWorkingSetSwap.c)
 *     MiContractWsSwapPageFile @ 0x140A0514C (MiContractWsSwapPageFile.c)
 *     MiFreeWorkingSetSwapContext @ 0x140A39390 (MiFreeWorkingSetSwapContext.c)
 *     MiInSwapStore @ 0x140A4A81C (MiInSwapStore.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  unsigned int v10; // ebx
  __int64 v11; // rcx
  unsigned int v12; // ebx

  p_Blink = &Process[2].ReadyListHead.Blink;
  v3 = 0LL;
  EtwTraceWorkingSetSwap(Process);
  v4 = *((_QWORD *)qword_140E2FD48 + HIWORD(Process[2].ProcessListEntry.Blink));
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1184));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport((__int64)p_Blink);
  v7 = (__int64 *)WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    if ( WorkingSetSwapSupport == 1 )
    {
      v12 = -1073740682;
    }
    else if ( WorkingSetSwapSupport == 2 )
    {
      v12 = -1073741558;
    }
    else
    {
      v8 = &unk_140E38518;
      v9 = &unk_140E38518;
      if ( ((_DWORD)p_Blink[23] & 0xF) != 1 )
        v9 = p_Blink + 27;
      *v9 = 1LL;
      MiReleaseSpinLockExclusive((_DWORD *)(v4 + 1184), v6);
      if ( *(_DWORD *)(v4 + 1204) != -1 )
        MiInSwapStore(Process);
      v10 = 0;
      if ( Process[3].ProcessListEntry.Blink && *(_QWORD *)(*v7 + 16) )
      {
        v3 = (void **)MiReAllocateWorkingSetSwapSupport(*v7);
        if ( v3 )
          v10 = (*(_BYTE *)(*v7 + 32) & 1) == 0;
        if ( (unsigned int)VmCheckLargePageInswap(Process) )
          v10 |= 4u;
      }
      MiProcessWsInSwapSupport(*v7, v10);
      if ( v3 )
        VmPrefetchVirtualAddresses(*v3);
      v11 = v7[7];
      if ( v11 )
        MiProcessWsInSwapSupport(v11, 1LL);
      if ( v7[1] )
      {
        v7[2] = 0LL;
        v7[4] = (__int64)MiInSwapSharedWorkingSetWorker;
        v7[5] = (__int64)v7;
        ObfReferenceObjectWithTag(Process, 0x73576D4Du);
        v7[6] = (__int64)Process;
        ExQueueWorkItemToPartition(v7 + 2, 3, 0xFFFFFFFF, *(_QWORD *)(v4 + 184));
      }
      else
      {
        MiFreeWorkingSetSwapContext(v4, v7);
      }
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1184));
      if ( MiGetWorkingSetSwapSupport((__int64)p_Blink) == 1 )
      {
        if ( ((_DWORD)p_Blink[23] & 0xF) != 1 )
          v8 = p_Blink + 27;
        *v8 = 0LL;
      }
      v12 = 0;
    }
  }
  else
  {
    v12 = -1073741275;
  }
  MiReleaseSpinLockExclusive((_DWORD *)(v4 + 1184), v6);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  MiContractWsSwapPageFile(v4);
  EtwTraceWorkingSetSwap(Process);
  return v12;
}
