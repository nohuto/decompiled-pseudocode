/*
 * XREFs of HalpDmaQueueAdapter @ 0x1404D3844
 * Callers:
 *     HalAllocateAdapterChannelV2 @ 0x14038740C (HalAllocateAdapterChannelV2.c)
 *     HalBuildScatterGatherListV2 @ 0x1403879B0 (HalBuildScatterGatherListV2.c)
 *     IoFreeAdapterChannelV2 @ 0x140388C50 (IoFreeAdapterChannelV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x14038A12C (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalpAllocateDmaResourcesInternal @ 0x14038C280 (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall HalpDmaQueueAdapter(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 160);
  v2 = (_QWORD *)(a1 + 168);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !HalpDmaCvmConfiguration )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 128), &LockHandle);
    if ( *(_BYTE *)(a1 + 442) )
      v6 = v1 + 184;
    else
      v6 = v1 + 168;
    v7 = *(_QWORD **)(v6 + 8);
    if ( *v7 == v6 )
    {
      *v2 = v6;
      v2[1] = v7;
      *v7 = v2;
      *(_QWORD *)(v6 + 8) = v2;
      goto LABEL_8;
    }
LABEL_10:
    __fastfail(3u);
  }
  v4 = v1 + (*(_BYTE *)(a1 + 442) != 0 ? 184LL : 168LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 160), &LockHandle);
  v5 = *(_QWORD **)(v4 + 8);
  if ( *v5 != v4 )
    goto LABEL_10;
  *v2 = v4;
  v2[1] = v5;
  *v5 = v2;
  *(_QWORD *)(v4 + 8) = v2;
LABEL_8:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
