/*
 * XREFs of HalpDmaFreeMapRegisters @ 0x14038A214
 * Callers:
 *     IoFreeMapRegistersV2 @ 0x14038A060 (IoFreeMapRegistersV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x14038A12C (HalpDmaProcessMapRegisterQueueV2.c)
 *     IoFreeMapRegistersV3 @ 0x14038C590 (IoFreeMapRegistersV3.c)
 *     HalpDmaFreeCrashdumpRegistersInternal @ 0x1404A9334 (HalpDmaFreeCrashdumpRegistersInternal.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14053B3B0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpDmaFreeCrashDumpRegisters @ 0x14053BAF0 (HalpDmaFreeCrashDumpRegisters.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     HalpDmaReturnToContiguousPool @ 0x1402EA454 (HalpDmaReturnToContiguousPool.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     HalpDmaAcquireBufferMappings @ 0x140389C1C (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaReturnToScatterPool @ 0x14038A920 (HalpDmaReturnToScatterPool.c)
 *     MmUnmapReservedMapping @ 0x140433320 (MmUnmapReservedMapping.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpDmaFreeMapRegisters(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // r13
  _QWORD *v7; // rbx
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int8 v11; // r14
  volatile __int64 *v12; // rdi
  unsigned __int8 v13; // si
  bool v14; // zf
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  char v17; // si
  char v18; // r14
  unsigned __int8 CurrentIrql; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  PMDL MemoryDescriptorList[2]; // [rsp+48h] [rbp-38h] BYREF
  PSLIST_ENTRY ListEntry[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v23; // [rsp+68h] [rbp-18h]
  __int64 v24; // [rsp+78h] [rbp-8h]
  _QWORD *v26; // [rsp+D8h] [rbp+58h]

  v4 = 0LL;
  result = a3;
  v6 = a2;
  v24 = 0LL;
  *(_OWORD *)MemoryDescriptorList = 0LL;
  v7 = (_QWORD *)a2;
  v8 = 0;
  *(_OWORD *)ListEntry = 0LL;
  v23 = 0LL;
  while ( v8 < (unsigned int)result )
  {
    v26 = (_QWORD *)v7[1];
    v9 = v7[6];
    if ( (v9 & 0x20) != 0 )
    {
      v16 = v9 & 0xFFFFFFFFFFFFFFDFuLL;
      v17 = 0;
      v18 = 0;
      v7[6] = v16;
      CurrentIrql = 0;
      if ( (v16 & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > 2u )
          KeBugCheckEx(0xACu, 0x1000uLL, 0xEF03uLL, 0LL, 0LL);
        if ( CurrentIrql >= 2u )
        {
          v17 = 1;
        }
        else
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(a2) = 2;
            LOBYTE(v4) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(v4, a2);
          }
          v17 = 1;
          v18 = 1;
        }
        HalpDmaAcquireBufferMappings(v4, (__int64)v7, 1u, (__int64)MemoryDescriptorList);
      }
      if ( (v7[6] & 0xFFFFFFFFFFFFF000uLL) != 0 )
        memset_0((void *)(v7[6] & 0xFFFFFFFFFFFFF000uLL), 0, 0x1000uLL);
      if ( v17 && MemoryDescriptorList[0] )
      {
        if ( (_BYTE)v24 )
        {
          MmUnmapReservedMapping(MemoryDescriptorList[1], 0x446C6148u, MemoryDescriptorList[0]);
          if ( !byte_140E3EC78 )
          {
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&ListEntry[1], a2);
            a2 = (__int64)ListEntry[0];
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&ListEntry[0][1].Next + 2, 0xFFFFFFFF) == 1
              && !_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 28), 1, 0) )
            {
              RtlpInterlockedPushEntrySList(&stru_140E3EC80, (PSLIST_ENTRY)a2);
            }
          }
        }
        else
        {
          MmUnmapLockedPages(MemoryDescriptorList[1], MemoryDescriptorList[0]);
        }
        if ( (*(_BYTE *)(v6 + 48) & 0x10) != 0 )
          *(_QWORD *)(v6 + 48) = *(_DWORD *)(v6 + 48) & 0xFEF;
      }
      if ( v18 )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(a2) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
        }
        __writecr8(CurrentIrql);
      }
    }
    a2 = v7[6];
    v4 = *(_QWORD *)(a1 + 160);
    v10 = a2 & 4;
    v7[7] = v7;
    if ( !*(_BYTE *)(a1 + 442) )
    {
      v15 = (unsigned __int64)v7;
      if ( !v10 )
        v4 = a1;
LABEL_22:
      HalpDmaReturnToContiguousPool(v4, v15, 0);
      goto LABEL_14;
    }
    if ( (a2 & 4) != 0 )
    {
      v14 = (a2 & 8) == 0;
      v15 = (unsigned __int64)v7;
      if ( !v14 )
      {
        HalpDmaReturnToScatterPool(v4, v7, 0LL);
        goto LABEL_14;
      }
      goto LABEL_22;
    }
    memset(&LockHandle, 0, sizeof(LockHandle));
    v11 = KeGetCurrentIrql();
    if ( v11 != 15 )
    {
      LockHandle.LockQueue.Next = 0LL;
      v12 = (volatile __int64 *)(a1 + 128);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 128);
      v13 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        LOBYTE(v4) = v13;
        KiRaiseIrqlProcessIrqlFlags(v4, a2);
      }
      LockHandle.OldIrql = v13;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        a2 = _InterlockedExchange64(v12, (__int64)&LockHandle);
        if ( a2 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, (_QWORD *)a2);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v12);
      }
    }
    v7[1] = *(_QWORD *)(a1 + 32);
    ++*(_DWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 32) = v7;
    if ( v11 != 15 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_14:
    v7 = v26;
    ++v8;
    result = a3;
  }
  return result;
}
