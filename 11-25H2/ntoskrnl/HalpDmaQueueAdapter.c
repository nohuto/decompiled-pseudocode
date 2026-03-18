/*
 * XREFs of HalpDmaQueueAdapter @ 0x14049DCFC
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x140331C00 (HalpAllocateDmaResourcesInternal.c)
 *     HalAllocateAdapterChannelV2 @ 0x140333C24 (HalAllocateAdapterChannelV2.c)
 *     HalBuildScatterGatherListV2 @ 0x1403346B0 (HalBuildScatterGatherListV2.c)
 *     IoFreeAdapterChannelV2 @ 0x140335920 (IoFreeAdapterChannelV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x140336B3C (HalpDmaProcessMapRegisterQueueV2.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall HalpDmaQueueAdapter(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 160);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 128), &LockHandle);
  v3 = (_QWORD *)(a1 + 168);
  if ( *(_BYTE *)(a1 + 442) )
    v4 = v1 + 176;
  else
    v4 = v1 + 160;
  v5 = *(_QWORD **)(v4 + 8);
  if ( *v5 != v4 )
    __fastfail(3u);
  *v3 = v4;
  *(_QWORD *)(a1 + 176) = v5;
  *v5 = v3;
  *(_QWORD *)(v4 + 8) = v3;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
