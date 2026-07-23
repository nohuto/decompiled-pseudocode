/*
 * XREFs of IopCloseWaitCompletionPacket @ 0x14041B150
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IopCancelWaitCompletionPacket @ 0x14041B244 (IopCancelWaitCompletionPacket.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall IopCloseWaitCompletionPacket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rsi
  KIRQL v6; // al
  KSPIN_LOCK *v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  KIRQL v10; // bp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a4 == 1 )
  {
    v4 = (volatile signed __int64 *)(a2 + 96);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    v7 = *(KSPIN_LOCK **)(a2 + 88);
    v8 = v6;
    *(_BYTE *)(a2 + 105) = 1;
    if ( v7 )
      ObfReferenceObjectWithTag(v7, 0x746C6644u);
    KxReleaseSpinLock(v4);
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = v8;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
    }
    __writecr8(v8);
    if ( v7 )
    {
      KeAcquireInStackQueuedSpinLock(v7 + 8, &LockHandle);
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4);
      if ( !*(_BYTE *)(a2 + 104) || !(unsigned __int8)IopCancelWaitCompletionPacket((struct _KWAIT_BLOCK *)a2) )
        KeReleaseSpinLock((PKSPIN_LOCK)v4, v10);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    }
  }
}
