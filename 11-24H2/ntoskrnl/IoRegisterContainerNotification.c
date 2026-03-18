/*
 * XREFs of IoRegisterContainerNotification @ 0x140715330
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     IopGetDevicePDO @ 0x1402D488C (IopGetDevicePDO.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetSessionObjectById @ 0x1403493A0 (PsGetSessionObjectById.c)
 *     IopSetFileObjectExtensionFlag @ 0x140434650 (IopSetFileObjectExtensionFlag.c)
 *     ExUnregisterCallback @ 0x1404ADD30 (ExUnregisterCallback.c)
 *     ExRegisterCallback @ 0x1404B3D50 (ExRegisterCallback.c)
 *     IopGetSessionIdFromPDO @ 0x140A11704 (IopGetSessionIdFromPDO.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoRegisterContainerNotification(
        IO_CONTAINER_NOTIFICATION_CLASS NotificationClass,
        PIO_CONTAINER_NOTIFICATION_FUNCTION CallbackFunction,
        PVOID NotificationInformation,
        ULONG NotificationInformationLength,
        PVOID CallbackRegistration)
{
  PIO_CONTAINER_NOTIFICATION_FUNCTION v6; // r15
  NTSTATUS v7; // ebx
  __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  PVOID *v13; // rcx
  PVOID *v14; // rax
  _QWORD *Pool2; // rax
  _QWORD *v16; // rdi
  PVOID v17; // rbp
  void *SessionObjectById; // r12
  void *v19; // r14
  signed __int64 v20; // rdx
  ULONG_PTR v21; // rtt
  _DWORD *DevicePDO; // rax
  void *v23; // r15
  _QWORD *v24; // rax

  v6 = CallbackFunction;
  v7 = 0;
  if ( NotificationClass >= IoMaxContainerNotificationClass )
    return -1073741585;
  if ( NotificationInformationLength != 32 || *(_DWORD *)NotificationInformation != 32 )
    return -1073741582;
  v9 = *((_QWORD *)NotificationInformation + 1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire((__int64)&IopSessionNotificationLock, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&IopSessionNotificationLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&IopSessionNotificationLock, (__int64)v11, (__int64)&IopSessionNotificationLock);
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
  v13 = (PVOID *)IopSessionNotificationQueueHead;
  if ( IopSessionNotificationQueueHead != &IopSessionNotificationQueueHead )
  {
    while ( v13 != &IopSessionNotificationQueueHead )
    {
      v14 = v13;
      v13 = (PVOID *)*v13;
      if ( v14[5] == (PVOID)v9 )
      {
        v7 = -1073741791;
        goto LABEL_24;
      }
    }
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  v16 = Pool2;
  if ( Pool2 )
  {
    v17 = ExRegisterCallback(IopSessionCallbackObject, IopDispatchSessionNotifications, Pool2);
    if ( !v17 )
    {
      v7 = -1073741670;
      goto LABEL_22;
    }
    SessionObjectById = 0LL;
    switch ( *(_WORD *)v9 )
    {
      case 3:
        v19 = *(void **)(v9 + 8);
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 312) + 32LL) & 0x400) != 0 )
        {
          DevicePDO = IopGetDevicePDO(v9);
          v23 = DevicePDO;
          if ( DevicePDO )
          {
            IopGetSessionIdFromPDO(DevicePDO);
            SessionObjectById = PsGetSessionObjectById();
            ObfDereferenceObject(v23);
          }
          v6 = CallbackFunction;
        }
        *(_DWORD *)(*(_QWORD *)(v9 + 312) + 32LL) |= 0x1000u;
        break;
      case 4:
        v19 = (void *)v9;
        break;
      case 5:
        v19 = *(void **)(*(_QWORD *)(v9 + 8) + 8LL);
        v7 = IopSetFileObjectExtensionFlag(v9, 2u);
        if ( v7 < 0 )
        {
LABEL_22:
          ExFreePoolWithTag(v16, 0);
          if ( v17 )
            ExUnregisterCallback(v17);
          goto LABEL_24;
        }
        break;
      default:
        v7 = -1073741583;
        goto LABEL_22;
    }
    PsReferenceSiloContext(v19);
    v16[5] = v9;
    v16[2] = v19;
    v16[4] = v17;
    v16[8] = *((_QWORD *)NotificationInformation + 3);
    *((_DWORD *)v16 + 14) = *((_DWORD *)NotificationInformation + 4);
    v16[3] = v6;
    v16[6] = SessionObjectById;
    *(_QWORD *)CallbackRegistration = v17;
    v24 = (_QWORD *)qword_140F8CAD8;
    if ( *(PVOID **)qword_140F8CAD8 != &IopSessionNotificationQueueHead )
      __fastfail(3u);
    *v16 = &IopSessionNotificationQueueHead;
    v16[1] = v24;
    *v24 = v16;
    qword_140F8CAD8 = (__int64)v16;
    goto LABEL_24;
  }
  v7 = -1073741670;
LABEL_24:
  _m_prefetchw(&IopSessionNotificationLock);
  v20 = IopSessionNotificationLock - 16;
  if ( (IopSessionNotificationLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v20 = 0LL;
  if ( (IopSessionNotificationLock & 2) != 0
    || (v21 = IopSessionNotificationLock,
        v21 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&IopSessionNotificationLock,
                 v20,
                 IopSessionNotificationLock)) )
  {
    ExfReleasePushLock(&IopSessionNotificationLock);
  }
  KeAbPostRelease((ULONG_PTR)&IopSessionNotificationLock);
  KeLeaveCriticalRegion();
  return v7;
}
