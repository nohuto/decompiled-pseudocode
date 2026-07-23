/*
 * XREFs of HalpDmaReturnToContiguousPool @ 0x1402EA454
 * Callers:
 *     HalpDmaFreeMapRegisters @ 0x14038A214 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaReturnPageToOwner @ 0x14038A7B4 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaReturnPageToSource @ 0x14054D20C (HalpDmaReturnPageToSource.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
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
