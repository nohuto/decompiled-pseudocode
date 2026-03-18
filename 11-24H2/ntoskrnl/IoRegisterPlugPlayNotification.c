/*
 * XREFs of IoRegisterPlugPlayNotification @ 0x1409ED860
 * Callers:
 *     HalpAddDevice @ 0x1406FE8E0 (HalpAddDevice.c)
 *     PopRegisterTargetDeviceProtection @ 0x14074BC44 (PopRegisterTargetDeviceProtection.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14074C4D4 (PopRegisterCoolingExtensionProtection.c)
 *     PopConnectToPolicyDevice @ 0x14075A3DC (PopConnectToPolicyDevice.c)
 *     SmKmStoreFileCreate @ 0x14079A748 (SmKmStoreFileCreate.c)
 *     ExpAcquirePrmInterface @ 0x1407BF2A8 (ExpAcquirePrmInterface.c)
 *     CmpHiveCacheSubscribePnpNotifications @ 0x1407D8E4C (CmpHiveCacheSubscribePnpNotifications.c)
 *     PoInitDriverServices @ 0x140C2CEDC (PoInitDriverServices.c)
 *     SbpWaitForVmbus @ 0x140C5EFF8 (SbpWaitForVmbus.c)
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     PnpGetRelatedTargetDevice @ 0x1403750B4 (PnpGetRelatedTargetDevice.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140418730 (ObReferenceObjectByPointerWithTag.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404566C0 (PsGetServerSiloServiceSessionId.c)
 *     Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage @ 0x14047DAD0 (Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     IopGetSessionIdFromSymbolicName @ 0x1406F9184 (IopGetSessionIdFromSymbolicName.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x140734038 (PiRegisterKernelSoftRestartNotification.c)
 *     PnpDeferNotification @ 0x1408B3660 (PnpDeferNotification.c)
 *     IoGetDeviceInterfaces @ 0x140966D40 (IoGetDeviceInterfaces.c)
 *     PnpInitializeNotifyEntry @ 0x1409ED73C (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x1409EEDB0 (PnpNotifyDriverCallback.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  GUID *v20; // r12
  char *v21; // rax
  char **v22; // rdx
  WCHAR *v23; // rsi
  unsigned __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _FAST_MUTEX *v26; // rcx
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
                                      (__int64)Pool2,
                                      3,
                                      (__int64)CallbackRoutine,
                                      (__int64)Context,
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
                  v26 = &PnpTargetDeviceNotifyLock;
                  *(_QWORD *)Pool2->Data4 = v18;
                  *v18 = Pool2;
                  *(_QWORD *)(v17 + 480) = Pool2;
                  goto LABEL_31;
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
                                (__int64)Pool2,
                                2,
                                (__int64)CallbackRoutine,
                                (__int64)Context,
                                (__int64)DriverObject,
                                (__int64)&PnpDeviceClassNotifyLock);
        if ( RelatedTargetDevice < 0 )
          goto LABEL_14;
        v20 = Pool2 + 5;
        Pool2[5] = *(GUID *)EventCategoryData;
        RelatedTargetDevice = PnpDeferNotification((__int64)Pool2);
        if ( RelatedTargetDevice >= 0 )
        {
          ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
          v21 = (char *)&PnpDeviceClassNotifyList
              + 16
              * ((v20->Data1 + *(_DWORD *)&Pool2[5].Data2 + *(_DWORD *)Pool2[5].Data4 + *(_DWORD *)&Pool2[5].Data4[4])
               % 0xD);
          v22 = (char **)*((_QWORD *)v21 + 1);
          if ( *v22 == v21 )
          {
            *(_QWORD *)&Pool2->Data1 = v21;
            *(_QWORD *)Pool2->Data4 = v22;
            *v22 = (char *)Pool2;
            *((_QWORD *)v21 + 1) = Pool2;
            KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
            if ( (v9 & 1) == 0 )
            {
LABEL_32:
              *NotificationEntry = Pool2;
              return RelatedTargetDevice;
            }
            v34 = 3145729;
            DestinationString = 0LL;
            SymbolicLinkList = 0LL;
            memset(v37, 0, sizeof(v37));
            v35 = GUID_DEVICE_INTERFACE_ARRIVAL;
            v36 = *v20;
            RelatedTargetDevice = IoGetDeviceInterfaces(Pool2 + 5, 0LL, 0, &SymbolicLinkList);
            if ( RelatedTargetDevice >= 0 )
            {
              v23 = SymbolicLinkList;
              if ( *SymbolicLinkList )
              {
                do
                {
                  RtlInitUnicodeString(&DestinationString, v23);
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
                  v23 += ((unsigned __int64)DestinationString.Length >> 1) + 1;
                }
                while ( *v23 );
                v23 = SymbolicLinkList;
              }
              ExFreePoolWithTag(v23, 0);
              goto LABEL_32;
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
                                (__int64)CallbackRoutine,
                                (__int64)Context,
                                (__int64)DriverObject,
                                (__int64)&PnpHwProfileNotifyLock);
        if ( RelatedTargetDevice < 0 )
          goto LABEL_14;
        RelatedTargetDevice = PnpDeferNotification((__int64)Pool2);
        if ( RelatedTargetDevice >= 0 )
        {
          ExAcquireFastMutex(&PnpHwProfileNotifyLock);
          v30 = (GUID **)qword_140FD8FC0;
          if ( *(PVOID **)qword_140FD8FC0 == &PnpProfileNotifyList )
          {
            *(_QWORD *)&Pool2->Data1 = &PnpProfileNotifyList;
            v26 = &PnpHwProfileNotifyLock;
            *(_QWORD *)Pool2->Data4 = v30;
            *v30 = Pool2;
            qword_140FD8FC0 = (__int64)Pool2;
LABEL_31:
            KeReleaseGuardedMutex(v26);
            goto LABEL_32;
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
