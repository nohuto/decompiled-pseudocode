/*
 * XREFs of HalpDmaFreeMapRegisters @ 0x140336C24
 * Callers:
 *     IoFreeMapRegistersV3 @ 0x140331F10 (IoFreeMapRegistersV3.c)
 *     IoFreeMapRegistersV2 @ 0x140336A70 (IoFreeMapRegistersV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x140336B3C (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalpDmaFreeCrashdumpRegistersInternal @ 0x1404ADB04 (HalpDmaFreeCrashdumpRegistersInternal.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14053B280 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpDmaFreeCrashDumpRegisters @ 0x14053B9C0 (HalpDmaFreeCrashDumpRegisters.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     HalpDmaAcquireBufferMappings @ 0x1403368EC (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaReturnToScatterPool @ 0x1403372FC (HalpDmaReturnToScatterPool.c)
 *     HalpDmaReturnToContiguousPool @ 0x140337CE4 (HalpDmaReturnToContiguousPool.c)
 *     MmUnmapReservedMapping @ 0x140411E60 (MmUnmapReservedMapping.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rax
  char v17; // si
  char v18; // r14
  unsigned __int8 CurrentIrql; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  PMDL MemoryDescriptorList[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v22[4]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+78h] [rbp-8h]
  _QWORD *v25; // [rsp+D8h] [rbp+58h]

  v4 = 0LL;
  result = a3;
  v6 = a2;
  v23 = 0LL;
  *(_OWORD *)MemoryDescriptorList = 0LL;
  v7 = (_QWORD *)a2;
  v8 = 0;
  memset(v22, 0, sizeof(v22));
  while ( v8 < (unsigned int)result )
  {
    v25 = (_QWORD *)v7[1];
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
            LOBYTE(v4) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(v4);
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
        if ( (_BYTE)v23 )
        {
          MmUnmapReservedMapping(MemoryDescriptorList[1], 0x446C6148u, MemoryDescriptorList[0]);
          if ( !byte_140E3E8F8 )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&v22[1]);
            a2 = v22[0];
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22[0] + 24LL), 0xFFFFFFFF) == 1
              && !_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 28), 1, 0) )
            {
              RtlpInterlockedPushEntrySList(&stru_140E3E900, (PSLIST_ENTRY)a2);
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
      v15 = v7;
      if ( !v10 )
        v4 = a1;
LABEL_20:
      HalpDmaReturnToContiguousPool(v4, v15, 0LL);
      goto LABEL_14;
    }
    if ( (a2 & 4) != 0 )
    {
      v14 = (a2 & 8) == 0;
      v15 = v7;
      if ( !v14 )
      {
        HalpDmaReturnToScatterPool(v4, v7, 0LL);
        goto LABEL_14;
      }
      goto LABEL_20;
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
        LOBYTE(v4) = v13;
        KiRaiseIrqlProcessIrqlFlags(v4);
      }
      LockHandle.OldIrql = v13;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        a2 = _InterlockedExchange64(v12, (__int64)&LockHandle);
        if ( a2 )
          KxWaitForLockOwnerShip((struct _KPRCB *)&LockHandle, (struct _KPRCB **)a2);
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
    v7 = v25;
    ++v8;
    result = a3;
  }
  return result;
}
