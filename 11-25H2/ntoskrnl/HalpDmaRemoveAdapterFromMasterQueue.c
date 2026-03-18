/*
 * XREFs of HalpDmaRemoveAdapterFromMasterQueue @ 0x140539F40
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x140331C00 (HalpAllocateDmaResourcesInternal.c)
 *     HalCancelAdapterChannelDmaThin @ 0x14049E1F0 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannel @ 0x14054C0C0 (HalCancelAdapterChannel.c)
 *     HalCancelAdapterChannelDmarThin @ 0x14054EF90 (HalCancelAdapterChannelDmarThin.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 */

char __fastcall HalpDmaRemoveAdapterFromMasterQueue(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // r8
  char v4; // bl
  _QWORD *i; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 160);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 128), &LockHandle);
  v3 = (_QWORD *)(v1 + (*(_BYTE *)(a1 + 442) != 0 ? 176LL : 160LL));
  v4 = 0;
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v6 = (_QWORD *)*i;
    if ( i == (_QWORD *)(a1 + 168) )
    {
      if ( (_QWORD *)v6[1] != i || (v7 = (_QWORD *)i[1], (_QWORD *)*v7 != i) )
        __fastfail(3u);
      *v7 = v6;
      v4 = 1;
      v6[1] = v7;
      break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
