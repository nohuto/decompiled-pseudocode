/*
 * XREFs of HalpDmaDequeueAdapter @ 0x140390CA0
 * Callers:
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1403907EC (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x1403927A8 (HalpDmaProcessMapRegisterQueueV3.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     Feature_CvmAdapterQueueLockPerf__private_IsEnabledDeviceUsageNoInline @ 0x14053C12C (Feature_CvmAdapterQueueLockPerf__private_IsEnabledDeviceUsageNoInline.c)
 */

_QWORD *__fastcall HalpDmaDequeueAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD **v10; // rcx
  _QWORD *v11; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a2;
  v5 = 0LL;
  if ( !(unsigned int)Feature_CvmAdapterQueueLockPerf__private_IsEnabledDeviceUsageNoInline(a1, a2, a3)
    || !HalpDmaCvmConfiguration )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    if ( v3 )
      v10 = (_QWORD **)(a1 + 184);
    else
      v10 = (_QWORD **)(a1 + 168);
    v8 = *v10;
    if ( *v10 == v10 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    if ( (_QWORD **)v8[1] == v10 )
    {
      v11 = (_QWORD *)*v8;
      if ( *(_QWORD **)(*v8 + 8LL) == v8 )
      {
        *v10 = v11;
        v11[1] = v10;
        goto LABEL_15;
      }
    }
LABEL_19:
    __fastfail(3u);
  }
  v6 = (_QWORD *)(a1 + (v3 != 0 ? 184LL : 168LL));
  if ( (_QWORD *)*v6 == v6 )
    return 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 160), &LockHandle);
  v8 = (_QWORD *)*v6;
  if ( (_QWORD *)*v6 != v6 )
  {
    if ( (_QWORD *)v8[1] == v6 )
    {
      v9 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) == v8 )
      {
        *v6 = v9;
        *(_QWORD *)(v9 + 8) = v6;
LABEL_15:
        v5 = v8 - 21;
        goto LABEL_16;
      }
    }
    goto LABEL_19;
  }
LABEL_16:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
