/*
 * XREFs of IopCleanupNotifications @ 0x1404A0DB4
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1403B1BD0 (IopDeleteFileObjectExtension.c)
 *     IopDeleteDevice @ 0x1409BD4C0 (IopDeleteDevice.c)
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExUnregisterCallback @ 0x1404A8640 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopCleanupNotifications(PVOID a1, PVOID a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v5; // rax
  signed __int8 v6; // cf
  char *v7; // rbx
  PVOID *v8; // rdi
  PVOID *v9; // rbx
  PVOID v10; // rcx
  signed __int64 v11; // rdx
  ULONG_PTR v12; // rtt
  PVOID *v13; // rcx
  PVOID **v14; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (char *)KeAbPreAcquire((__int64)&IopSessionNotificationLock, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&IopSessionNotificationLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&IopSessionNotificationLock, v5, (__int64)&IopSessionNotificationLock);
  if ( v7 )
    v7[10] = 1;
  v8 = (PVOID *)IopSessionNotificationQueueHead;
  while ( v8 != &IopSessionNotificationQueueHead )
  {
    v9 = v8;
    v8 = (PVOID *)*v8;
    v10 = v9[2];
    if ( v10 == a1 && (!a2 || v9[5] == a2) )
    {
      ObfDereferenceObjectWithTag(v10, 0x746C6644u);
      ExUnregisterCallback(v9[4]);
      v13 = (PVOID *)*v9;
      if ( *((PVOID **)*v9 + 1) != v9 || (v14 = (PVOID **)v9[1], *v14 != v9) )
        __fastfail(3u);
      *v14 = v13;
      v13[1] = v14;
      ExFreePoolWithTag(v9, 0);
    }
  }
  _m_prefetchw(&IopSessionNotificationLock);
  v11 = IopSessionNotificationLock - 16;
  if ( (IopSessionNotificationLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( (IopSessionNotificationLock & 2) != 0
    || (v12 = IopSessionNotificationLock,
        v12 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&IopSessionNotificationLock,
                 v11,
                 IopSessionNotificationLock)) )
  {
    ExfReleasePushLock(&IopSessionNotificationLock);
  }
  KeAbPostRelease((ULONG_PTR)&IopSessionNotificationLock);
  KeLeaveCriticalRegion();
}
