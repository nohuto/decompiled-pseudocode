/*
 * XREFs of IoUnregisterContainerNotification @ 0x1407155F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExUnregisterCallback @ 0x1404ADD30 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterContainerNotification(PVOID CallbackRegistration)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  signed __int8 v4; // cf
  _QWORD *v5; // rbx
  PVOID *v6; // rax
  PVOID *v7; // rbx
  PVOID *v8; // rcx
  PVOID **v9; // rax
  signed __int64 v10; // rdx
  ULONG_PTR v11; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&IopSessionNotificationLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&IopSessionNotificationLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&IopSessionNotificationLock, (__int64)v3, (__int64)&IopSessionNotificationLock);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
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
