/*
 * XREFs of HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x1404DA268
 * Callers:
 *     HalpDmaAllocateScatterPagesFromContiguousPool @ 0x1403336A8 (HalpDmaAllocateScatterPagesFromContiguousPool.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlFindClearBitsAndSet @ 0x140338AF0 (RtlFindClearBitsAndSet.c)
 *     RtlNumberOfSetBits @ 0x140395F40 (RtlNumberOfSetBits.c)
 *     HalpDmaIndexToTranslationEntry @ 0x14048AD0C (HalpDmaIndexToTranslationEntry.c)
 */

__int64 __fastcall HalpDmaAllocateScatterPagesFromContiguousPoolV3(
        __int64 a1,
        __int64 a2,
        ULONG a3,
        char a4,
        char a5,
        ULONG *a6)
{
  __int64 v9; // r15
  unsigned int v10; // eax
  unsigned int v11; // ecx
  ULONG v12; // eax
  _RTL_BITMAP *v13; // rbx
  __int64 result; // rax
  __int64 v15; // r14
  __int64 v16; // rbp
  ULONG v17; // ebx
  ULONG v18; // r10d
  ULONG ClearBitsAndSet; // eax
  __int64 v20; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 128), &LockHandle);
  if ( a5 )
  {
    v10 = *(_DWORD *)(a2 + 208);
    v9 = a2;
    v11 = *(_DWORD *)(a2 + 212);
    if ( v10 <= v11 )
    {
LABEL_7:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_8:
      *a6 = 0;
      return 0LL;
    }
    v12 = v10 - v11;
    if ( a3 > v12 )
      a3 = v12;
  }
  if ( a4 )
  {
    v13 = *(_RTL_BITMAP **)(a2 + 24);
    if ( v13->SizeOfBitMap - RtlNumberOfSetBits(v13) < a3 )
      goto LABEL_7;
  }
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  if ( a3 )
  {
    do
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(*(PRTL_BITMAP *)(a2 + 24), 1u, v18);
      if ( ClearBitsAndSet == -1 )
        break;
      v20 = HalpDmaIndexToTranslationEntry(a2, ClearBitsAndSet, 0LL);
      if ( v15 )
        *(_QWORD *)(v16 + 8) = v20;
      else
        v15 = v20;
      ++v17;
      v16 = v20;
    }
    while ( v17 < a3 );
    if ( v16 )
      *(_QWORD *)(v16 + 8) = 0LL;
  }
  if ( a5 )
    *(_DWORD *)(v9 + 208) -= v17;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v17 )
    goto LABEL_8;
  result = v15;
  *a6 = v17;
  return result;
}
