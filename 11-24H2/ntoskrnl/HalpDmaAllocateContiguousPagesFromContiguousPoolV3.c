/*
 * XREFs of HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x140539AF8
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x14038AD1C (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     HalpDmaLinkContiguousTranslations @ 0x14038AF38 (HalpDmaLinkContiguousTranslations.c)
 */

__int64 __fastcall HalpDmaAllocateContiguousPagesFromContiguousPoolV3(
        __int64 a1,
        __int64 a2,
        ULONG a3,
        char a4,
        char a5,
        ULONG *a6)
{
  __int64 v9; // rbp
  unsigned int v10; // eax
  unsigned int v11; // ecx
  __int64 result; // rax
  ULONG v13; // eax
  ULONG ClearBitsAndSet; // esi
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 128), &LockHandle);
  if ( a5 )
  {
    v10 = *(_DWORD *)(a2 + 216);
    v9 = a2;
    v11 = *(_DWORD *)(a2 + 220);
    if ( v10 <= v11 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_4:
      *a6 = 0;
      return 0LL;
    }
    v13 = v10 - v11;
    if ( a3 > v13 )
      a3 = v13;
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
      goto LABEL_14;
    }
    if ( a5 )
      *(_DWORD *)(v9 + 216) -= a3;
  }
LABEL_14:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( ClearBitsAndSet == -1 )
    goto LABEL_4;
  result = HalpDmaLinkContiguousTranslations(a2, ClearBitsAndSet, a3);
  v15 = 0LL;
  v16 = result;
  if ( a3 )
  {
    v17 = a3;
    do
    {
      v15 = v16;
      v16 = *(_QWORD *)(v16 + 8);
      --v17;
    }
    while ( v17 );
  }
  *(_QWORD *)(v15 + 8) = 0LL;
  *a6 = a3;
  return result;
}
