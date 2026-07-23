/*
 * XREFs of IoUnregisterContainerNotification @ 0x140713180
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExUnregisterCallback @ 0x1404A8640 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterContainerNotification(PVOID CallbackRegistration)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rbx
  PVOID *v6; // rax
  PVOID *v7; // rbx
  PVOID *v8; // rcx
  PVOID **v9; // rax
  signed __int64 v10; // rdx
  ULONG_PTR v11; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)&IopSessionNotificationLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&IopSessionNotificationLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&IopSessionNotificationLock, v3, (__int64)&IopSessionNotificationLock);
  if ( v5 )
    v5[10] = 1;
  v6 = (PVOID *)IopSessionNotificationQueueHead;
  if ( IopSessionNotificationQueueHead != &IopSessionNotificationQueueHead )
  {
    while ( v6 != &IopSessionNotificationQueueHead )
    {
      v7 = v6;
      v6 = (PVOID *)*v6;
      if ( v7[4] == CallbackRegistration )
      {
        ObfDereferenceObject(v7[2]);
        ExUnregisterCallback(CallbackRegistration);
        v8 = (PVOID *)*v7;
        if ( *((PVOID **)*v7 + 1) != v7 || (v9 = (PVOID **)v7[1], *v9 != v7) )
          __fastfail(3u);
        *v9 = v8;
        v8[1] = v9;
        ExFreePoolWithTag(v7, 0);
        break;
      }
    }
  }
  _m_prefetchw(&IopSessionNotificationLock);
  v10 = IopSessionNotificationLock - 16;
  if ( (IopSessionNotificationLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v10 = 0LL;
  if ( (IopSessionNotificationLock & 2) != 0
    || (v11 = IopSessionNotificationLock,
        v11 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&IopSessionNotificationLock,
                 v10,
                 IopSessionNotificationLock)) )
  {
    ExfReleasePushLock(&IopSessionNotificationLock);
  }
  KeAbPostRelease((ULONG_PTR)&IopSessionNotificationLock);
  KeLeaveCriticalRegion();
}
