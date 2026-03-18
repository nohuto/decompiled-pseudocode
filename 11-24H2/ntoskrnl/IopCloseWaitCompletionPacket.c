/*
 * XREFs of IopCloseWaitCompletionPacket @ 0x1404E5B40
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     IopCancelWaitCompletionPacket @ 0x1404285C4 (IopCancelWaitCompletionPacket.c)
 *     Feature_1806129466__private_IsEnabledDeviceUsageNoInline @ 0x1405970A0 (Feature_1806129466__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall IopCloseWaitCompletionPacket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v4; // rsi
  KIRQL v6; // bp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  KSPIN_LOCK *v10; // rbx
  KIRQL v11; // bp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a4 == 1 )
  {
    v4 = (KSPIN_LOCK *)(a2 + 96);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    if ( (unsigned int)Feature_1806129466__private_IsEnabledDeviceUsageNoInline(v8, v7, v9) )
      *(_BYTE *)(a2 + 105) = 1;
    v10 = *(KSPIN_LOCK **)(a2 + 88);
    if ( v10 )
      ObfReferenceObjectWithTag(*(PVOID *)(a2 + 88), 0x746C6644u);
    KeReleaseSpinLock(v4, v6);
    if ( v10 )
    {
      KeAcquireInStackQueuedSpinLock(v10 + 8, &LockHandle);
      v11 = KeAcquireSpinLockRaiseToDpc(v4);
      Feature_1806129466__private_IsEnabledDeviceUsageNoInline(v13, v12, v14);
      if ( !*(_BYTE *)(a2 + 104) || !IopCancelWaitCompletionPacket((struct _KWAIT_BLOCK *)a2, 1, v11) )
        KeReleaseSpinLock(v4, v11);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ObfDereferenceObjectWithTag(v10, 0x746C6644u);
    }
  }
}
