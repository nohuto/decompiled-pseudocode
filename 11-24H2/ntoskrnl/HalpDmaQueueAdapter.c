/*
 * XREFs of HalpDmaQueueAdapter @ 0x1404D9E04
 * Callers:
 *     HalAllocateAdapterChannelV2 @ 0x14038DACC (HalAllocateAdapterChannelV2.c)
 *     HalBuildScatterGatherListV2 @ 0x14038E070 (HalBuildScatterGatherListV2.c)
 *     IoFreeAdapterChannelV2 @ 0x14038F310 (IoFreeAdapterChannelV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1403907EC (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalpAllocateDmaResourcesInternal @ 0x140392950 (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     Feature_CvmAdapterQueueLockPerf__private_IsEnabledDeviceUsageNoInline @ 0x14053C12C (Feature_CvmAdapterQueueLockPerf__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall HalpDmaQueueAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 160);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !(unsigned int)Feature_CvmAdapterQueueLockPerf__private_IsEnabledDeviceUsageNoInline(a1, a2, a3)
    || !HalpDmaCvmConfiguration )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 128), &LockHandle);
    v8 = (_QWORD *)(a1 + 168);
    if ( *(_BYTE *)(a1 + 442) )
      v9 = v3 + 184;
    else
      v9 = v3 + 168;
    v10 = *(_QWORD **)(v9 + 8);
    if ( *v10 == v9 )
    {
      *v8 = v9;
      *(_QWORD *)(a1 + 176) = v10;
      *v10 = v8;
      *(_QWORD *)(v9 + 8) = v8;
      goto LABEL_9;
    }
LABEL_11:
    __fastfail(3u);
  }
  v5 = v3 + (*(_BYTE *)(a1 + 442) != 0 ? 184LL : 168LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 160), &LockHandle);
  v6 = *(_QWORD **)(v5 + 8);
  v7 = (_QWORD *)(a1 + 168);
  if ( *v6 != v5 )
    goto LABEL_11;
  *v7 = v5;
  *(_QWORD *)(a1 + 176) = v6;
  *v6 = v7;
  *(_QWORD *)(v5 + 8) = v7;
LABEL_9:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
