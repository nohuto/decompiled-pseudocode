/*
 * XREFs of HalpDmaReturnToContiguousPool @ 0x14037CF3C
 * Callers:
 *     HalpDmaFreeMapRegisters @ 0x1403908D4 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaReturnPageToOwner @ 0x140390E84 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaReturnPageToSource @ 0x14054F8CC (HalpDmaReturnPageToSource.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlClearBits @ 0x14037CD40 (RtlClearBits.c)
 */

void __fastcall HalpDmaReturnToContiguousPool(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 *v4; // rdx
  int v7; // r9d
  unsigned __int64 v8; // r10
  ULONG v9; // ebx
  unsigned __int8 CurrentIrql; // si
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = *(__int64 **)(a1 + 48);
  v7 = 0;
  while ( v4 )
  {
    v8 = v4[2];
    if ( v8 <= a2 && a2 < v8 + 72LL * *((unsigned int *)v4 + 2) )
    {
      v9 = v7 + 954437177 * ((__int64)(a2 - v8) >> 3);
      goto LABEL_6;
    }
    v7 += *((_DWORD *)v4 + 2);
    v4 = (__int64 *)*v4;
  }
  v9 = -1;
LABEL_6:
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  RtlClearBits(*(PRTL_BITMAP *)(a1 + 24), v9, 1u);
  if ( a3 )
    ++*(_DWORD *)(a1 + 216);
  if ( CurrentIrql != 15 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
