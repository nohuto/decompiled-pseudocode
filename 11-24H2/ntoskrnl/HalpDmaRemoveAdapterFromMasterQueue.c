/*
 * XREFs of HalpDmaRemoveAdapterFromMasterQueue @ 0x140539FD0
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x14038C280 (HalpAllocateDmaResourcesInternal.c)
 *     HalCancelAdapterChannelDmaThin @ 0x140498110 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannel @ 0x14054C310 (HalCancelAdapterChannel.c)
 *     HalCancelAdapterChannelDmarThin @ 0x14054F1D0 (HalCancelAdapterChannelDmarThin.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall HalpDmaRemoveAdapterFromMasterQueue(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD **v3; // rdx
  char v4; // bl
  _QWORD *v5; // rax
  _QWORD **v6; // rcx
  _QWORD *v8; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 160);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)((HalpDmaCvmConfiguration != 0 ? 0x20 : 0) + v1 + 128), &LockHandle);
  v3 = (_QWORD **)(v1 + (*(_BYTE *)(a1 + 442) != 0 ? 184LL : 168LL));
  v4 = 0;
  v5 = *v3;
  if ( *v3 != v3 )
  {
    while ( 1 )
    {
      v6 = (_QWORD **)*v5;
      if ( v5 == (_QWORD *)(a1 + 168) )
        break;
      v5 = (_QWORD *)*v5;
      if ( v6 == v3 )
        goto LABEL_4;
    }
    if ( v6[1] != v5 || (v8 = (_QWORD *)v5[1], (_QWORD *)*v8 != v5) )
      __fastfail(3u);
    *v8 = v6;
    v4 = 1;
    v6[1] = v8;
  }
LABEL_4:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
