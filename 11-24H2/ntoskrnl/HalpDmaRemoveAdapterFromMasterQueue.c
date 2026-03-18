/*
 * XREFs of HalpDmaRemoveAdapterFromMasterQueue @ 0x14053C744
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x140392950 (HalpAllocateDmaResourcesInternal.c)
 *     HalCancelAdapterChannelDmaThin @ 0x14049D310 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannel @ 0x14054E9D0 (HalCancelAdapterChannel.c)
 *     HalCancelAdapterChannelDmarThin @ 0x140551890 (HalCancelAdapterChannelDmarThin.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     Feature_CvmAdapterQueueLockPerf__private_IsEnabledDeviceUsageNoInline @ 0x14053C12C (Feature_CvmAdapterQueueLockPerf__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall HalpDmaRemoveAdapterFromMasterQueue(__int64 a1)
{
  __int64 v1; // rsi
  char v3; // bl
  __int64 v4; // rax
  _QWORD **v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD **v8; // rcx
  _QWORD *v10; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 160);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0;
  if ( !(unsigned int)Feature_CvmAdapterQueueLockPerf__private_IsEnabledDeviceUsageNoInline()
    || (v4 = 160LL, !HalpDmaCvmConfiguration) )
  {
    v4 = 128LL;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + v4), &LockHandle);
  v5 = (_QWORD **)(v1 + (*(_BYTE *)(a1 + 442) != 0 ? 184LL : 168LL));
  v6 = *v5;
  if ( *v5 != v5 )
  {
    v7 = (_QWORD *)(a1 + 168);
    while ( 1 )
    {
      v8 = (_QWORD **)*v6;
      if ( v6 == v7 )
        break;
      v6 = (_QWORD *)*v6;
      if ( v8 == v5 )
        goto LABEL_8;
    }
    if ( v8[1] != v6 || (v10 = (_QWORD *)v6[1], (_QWORD *)*v10 != v6) )
      __fastfail(3u);
    *v10 = v8;
    v3 = 1;
    v8[1] = v10;
  }
LABEL_8:
  Feature_CvmAdapterQueueLockPerf__private_IsEnabledDeviceUsageNoInline();
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
