/*
 * XREFs of IoRegisterPlugPlayNotification @ 0x14096BD60
 * Callers:
 *     HalpAddDevice @ 0x1406F2AF0 (HalpAddDevice.c)
 *     PopRegisterTargetDeviceProtection @ 0x14073FB74 (PopRegisterTargetDeviceProtection.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140740404 (PopRegisterCoolingExtensionProtection.c)
 *     PopConnectToPolicyDevice @ 0x14074DE04 (PopConnectToPolicyDevice.c)
 *     SmKmStoreFileCreate @ 0x14078B380 (SmKmStoreFileCreate.c)
 *     ExpAcquirePrmInterface @ 0x1407AFAD8 (ExpAcquirePrmInterface.c)
 *     CmpHiveCacheSubscribePnpNotifications @ 0x1407C9654 (CmpHiveCacheSubscribePnpNotifications.c)
 *     PoInitDriverServices @ 0x140C1BDD8 (PoInitDriverServices.c)
 *     SbpWaitForVmbus @ 0x140C4DC78 (SbpWaitForVmbus.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PnpGetRelatedTargetDevice @ 0x14035E4A8 (PnpGetRelatedTargetDevice.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14041B630 (ObReferenceObjectByPointerWithTag.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404565D0 (PsGetServerSiloServiceSessionId.c)
 *     Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage @ 0x14047CDDC (Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     IopGetSessionIdFromSymbolicName @ 0x1406ED544 (IopGetSessionIdFromSymbolicName.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x140727DA0 (PiRegisterKernelSoftRestartNotification.c)
 *     IoGetDeviceInterfaces @ 0x140956550 (IoGetDeviceInterfaces.c)
 *     PnpDeferNotification @ 0x14096A28C (PnpDeferNotification.c)
 *     PnpNotifyDriverCallback @ 0x14096D2C0 (PnpNotifyDriverCallback.c)
 *     PnpInitializeNotifyEntry @ 0x140A30D60 (PnpInitializeNotifyEntry.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoRegisterPlugPlayNotification(
        IO_NOTIFICATION_EVENT_CATEGORY EventCategory,
        ULONG EventCategoryFlags,
        PVOID EventCategoryData,
        PDRIVER_OBJECT DriverObject,
        PDRIVER_NOTIFICATION_CALLBACK_ROUTINE CallbackRoutine,
        PVOID Context,
        PVOID *NotificationEntry)
{
  char v9; // r13
  NTSTATUS result; // eax
  __int32 v12; // ebx
  __int32 v13; // ebx
  __int32 v14; // ebx
  NTSTATUS RelatedTargetDevice; // ebx
  GUID *Pool2; // rdi
  __int64 v17; // r14
  GUID **v18; // rdx
  void *v19; // rcx
  struct _FAST_MUTEX *v20; // rcx
  GUID *v21; // r12
  char *v22; // rax
  char **v23; // rdx
  WCHAR *v24; // rsi
  unsigned __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG v27; // edx
  int SessionIdFromSymbolicName; // eax
  __int64 v29; // rax
  GUID **v30; // rax
  __int64 v31; // [rsp+30h] [rbp-51h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+38h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-41h] BYREF
  int v34; // [rsp+50h] [rbp-31h] BYREF
  GUID v35; // [rsp+54h] [rbp-2Dh]
  GUID v36; // [rsp+64h] [rbp-1Dh]
  _BYTE v37[12]; // [rsp+74h] [rbp-Dh] BYREF

  v9 = EventCategoryFlags;
  *NotificationEntry = 0LL;
  result = ObReferenceObjectByPointerWithTag(DriverObject, 0, IoDriverObjectType, 0, 0x4E706E50u);
  if ( result >= 0 )
  {
    if ( EventCategory == EventCategoryReserved )
      goto LABEL_39;
    v12 = EventCategory - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( !v14 )
        {
          v31 = 0LL;
          RelatedTargetDevice = PnpGetRelatedTargetDevice((PFILE_OBJECT)EventCategoryData, &v31);
          if ( RelatedTargetDevice >= 0 )
          {
            Pool2 = (GUID *)ExAllocatePool2(0x100uLL);
            if ( Pool2 )
            {
              RelatedTargetDevice = PnpInitializeNotifyEntry(
                                      (_DWORD)Pool2,
                                      3,
                                      (_DWORD)CallbackRoutine,
                                      (_DWORD)Context,
                                      (__int64)DriverObject,
                                      (__int64)&PnpTargetDeviceNotifyLock);
              if ( RelatedTargetDevice < 0 )
              {
                ExFreePoolWithTag(Pool2, 0x43706E50u);
                v19 = *(void **)(v31 + 32);
              }
              else
              {
                *(_QWORD *)&Pool2[5].Data1 = EventCategoryData;
                v17 = v31;
                *(_QWORD *)Pool2[5].Data4 = *(_QWORD *)(v31 + 32);
                RelatedTargetDevice = PnpDeferNotification((__int64)Pool2);
                if ( RelatedTargetDevice >= 0 )
                {
                  ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
                  v18 = *(GUID ***)(v17 + 480);
                  if ( *v18 != (GUID *)(v17 + 472) )
                    goto LABEL_11;
                  *(_QWORD *)&Pool2->Data1 = v17 + 472;
                  v20 = &PnpTargetDeviceNotifyLock;
                  *(_QWORD *)Pool2->Data4 = v18;
                  *v18 = Pool2;
                  *(_QWORD *)(v17 + 480) = Pool2;
                  goto LABEL_19;
                }
                ExFreePoolWithTag(Pool2, 0x43706E50u);
                v19 = *(void **)(v17 + 32);
              }
              ObfDereferenceObject(v19);
              goto LABEL_14;
            }
            ObfDereferenceObject(*(PVOID *)(v31 + 32));
            goto LABEL_41;
          }
LABEL_14:
          ObfDereferenceObjectWithTag(DriverObject, 0x4E706E50u);
          return RelatedTargetDevice;
        }
        if ( v14 == 1 )
        {
          RelatedTargetDevice = PiRegisterKernelSoftRestartNotification(
                                  (__int64)DriverObject,
                                  (int)CallbackRoutine,
                                  (int)Context,
                                  NotificationEntry);
          if ( RelatedTargetDevice >= 0 )
            return RelatedTargetDevice;
          goto LABEL_14;
        }
LABEL_39:
        RelatedTargetDevice = -1073741585;
        goto LABEL_14;
      }
      Pool2 = (GUID *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        RelatedTargetDevice = PnpInitializeNotifyEntry(
                                (_DWORD)Pool2,
                                2,
                                (_DWORD)CallbackRoutine,
                                (_DWORD)Context,
                                (__int64)DriverObject,
                                (__int64)&PnpDeviceClassNotifyLock);
        if ( RelatedTargetDevice < 0 )
          goto LABEL_14;
        v21 = Pool2 + 5;
        Pool2[5] = *(GUID *)EventCategoryData;
        RelatedTargetDevice = PnpDeferNotification((__int64)Pool2);
        if ( RelatedTargetDevice >= 0 )
        {
          ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
          v22 = (char *)&PnpDeviceClassNotifyList
              + 16
              * ((v21->Data1 + *(_DWORD *)&Pool2[5].Data2 + *(_DWORD *)Pool2[5].Data4 + *(_DWORD *)&Pool2[5].Data4[4])
               % 0xD);
          v23 = (char **)*((_QWORD *)v22 + 1);
          if ( *v23 == v22 )
          {
            *(_QWORD *)&Pool2->Data1 = v22;
            *(_QWORD *)Pool2->Data4 = v23;
            *v23 = (char *)Pool2;
            *((_QWORD *)v22 + 1) = Pool2;
            KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
            if ( (v9 & 1) == 0 )
              goto LABEL_20;
            v34 = 3145729;
            DestinationString = 0LL;
            SymbolicLinkList = 0LL;
            memset(v37, 0, sizeof(v37));
            v35 = GUID_DEVICE_INTERFACE_ARRIVAL;
            v36 = *v21;
            RelatedTargetDevice = IoGetDeviceInterfaces(Pool2 + 5, 0LL, 0, &SymbolicLinkList);
            if ( RelatedTargetDevice >= 0 )
            {
              v24 = SymbolicLinkList;
              if ( *SymbolicLinkList )
              {
                do
                {
                  RtlInitUnicodeString(&DestinationString, v24);
                  *(_QWORD *)&v37[4] = &DestinationString;
                  CurrentServerSilo = PsGetCurrentServerSilo();
                  if ( *(_DWORD *)&Pool2[1].Data2 == (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo)
                    || (SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName(), SessionIdFromSymbolicName == -1)
                    || *(_DWORD *)&Pool2[1].Data2 == SessionIdFromSymbolicName )
                  {
                    Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage();
                    CurrentThread = KeGetCurrentThread();
                    --CurrentThread->KernelApcDisable;
                    ExAcquireResourceExclusiveLite(*(PERESOURCE *)Pool2[4].Data4, 1u);
                    PnpNotifyDriverCallback(Pool2, &v34, &v31);
                    Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage();
                    ExReleaseResourceLite(*(PERESOURCE *)Pool2[4].Data4);
                    KeLeaveCriticalRegion();
                  }
                  v24 += ((unsigned __int64)DestinationString.Length >> 1) + 1;
                }
                while ( *v24 );
                v24 = SymbolicLinkList;
              }
              ExFreePoolWithTag(v24, 0);
              goto LABEL_20;
            }
            goto LABEL_14;
          }
LABEL_11:
          __fastfail(3u);
        }
        v27 = 1148218960;
        goto LABEL_34;
      }
    }
    else
    {
      v29 = ExAllocatePool2(0x100uLL);
      Pool2 = (GUID *)v29;
      if ( v29 )
      {
        RelatedTargetDevice = PnpInitializeNotifyEntry(
                                v29,
                                1,
                                (_DWORD)CallbackRoutine,
                                (_DWORD)Context,
                                (__int64)DriverObject,
                                (__int64)&PnpHwProfileNotifyLock);
        if ( RelatedTargetDevice < 0 )
          goto LABEL_14;
        RelatedTargetDevice = PnpDeferNotification((__int64)Pool2);
        if ( RelatedTargetDevice >= 0 )
        {
          ExAcquireFastMutex(&PnpHwProfileNotifyLock);
          v30 = (GUID **)qword_140FD8FF0;
          if ( *(PVOID **)qword_140FD8FF0 == &PnpProfileNotifyList )
          {
            *(_QWORD *)&Pool2->Data1 = &PnpProfileNotifyList;
            v20 = &PnpHwProfileNotifyLock;
            *(_QWORD *)Pool2->Data4 = v30;
            *v30 = Pool2;
            qword_140FD8FF0 = (__int64)Pool2;
LABEL_19:
            KeReleaseGuardedMutex(v20);
LABEL_20:
            *NotificationEntry = Pool2;
            return RelatedTargetDevice;
          }
          goto LABEL_11;
        }
        v27 = 963669584;
LABEL_34:
        ExFreePoolWithTag(Pool2, v27);
        goto LABEL_14;
      }
    }
LABEL_41:
    RelatedTargetDevice = -1073741670;
    goto LABEL_14;
  }
  return result;
}
