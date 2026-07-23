/*
 * XREFs of HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x14038AD70
 * Callers:
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x14038AD1C (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     HalpDmaLinkContiguousTranslations @ 0x14038AF38 (HalpDmaLinkContiguousTranslations.c)
 */

__int64 __fastcall HalpDmaAllocateContiguousPagesFromContiguousPoolV2(
        __int64 a1,
        __int64 a2,
        ULONG a3,
        char a4,
        char a5,
        ULONG *a6)
{
  __int64 v9; // rbp
  ULONG ClearBitsAndSet; // esi
  __int64 result; // rax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  ULONG v14; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 128), &LockHandle);
  if ( a5 )
  {
    v12 = *(_DWORD *)(a2 + 216);
    v9 = a2;
    v13 = *(_DWORD *)(a2 + 220);
    if ( v12 <= v13 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_6:
      *a6 = 0;
      return 0LL;
    }
    v14 = v12 - v13;
    if ( a3 > v14 )
      a3 = v14;
  }
  ClearBitsAndSet = -1;
  if ( a3 )
  {
    while ( 1 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(*(PRTL_BITMAP *)(a2 + 24), a3, 0);
      if ( ClearBitsAndSet != -1 )
        break;
      if ( !a4 )
      {
        a3 >>= 1;
        if ( a3 )
          continue;
      }
      goto LABEL_5;
    }
    if ( a5 )
      *(_DWORD *)(v9 + 216) -= a3;
  }
LABEL_5:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( ClearBitsAndSet == -1 )
    goto LABEL_6;
  result = HalpDmaLinkContiguousTranslations(a2, ClearBitsAndSet, a3);
  *a6 = a3;
  return result;
}
