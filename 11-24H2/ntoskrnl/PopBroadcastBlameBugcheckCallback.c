/*
 * XREFs of PopBroadcastBlameBugcheckCallback @ 0x140B5F640
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1404251D0 (KiQueryUnbiasedInterruptTime.c)
 *     PopIrpWatchdogBugcheck @ 0x1405CD0D8 (PopIrpWatchdogBugcheck.c)
 */

void __fastcall PopBroadcastBlameBugcheckCallback(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r12
  __int64 v4; // rdi
  unsigned __int64 v5; // r14
  __int64 UnbiasedInterruptTime; // r13
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rbp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+38h] [rbp-40h] BYREF

  memset(&v11, 0, sizeof(v11));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140F0BDF0 + 1, &v11);
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  v3 = (_QWORD *)(a2 + 432);
  v4 = 0LL;
  v5 = 0LL;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v7 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    do
    {
      v8 = v7[15];
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 72LL * *(char *)(v8 + 66) + 200);
        KxAcquireSpinLock((PKSPIN_LOCK)(v9 + 288));
        if ( *(_DWORD *)(v9 + 296) == 1 && *(_QWORD *)(v9 + 48) - UnbiasedInterruptTime >= v5 )
        {
          v5 = *(_QWORD *)(v9 + 48) - UnbiasedInterruptTime;
          v4 = v8;
        }
        KxReleaseSpinLock((volatile signed __int64 *)(v9 + 288));
      }
      v7 = (_QWORD *)*v7;
    }
    while ( v7 != v3 );
    if ( v4 && v5 >= 0x11E1A300 )
      PopIrpWatchdogBugcheck(*(_QWORD *)(v4 + 72LL * *(char *)(v4 + 66) + 200));
  }
  PopIrpLockThread = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeReleaseInStackQueuedSpinLock(&v11);
}
