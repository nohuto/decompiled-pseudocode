/*
 * XREFs of PnpDeviceEventWorker @ 0x1409ED430
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     IoSetActivityIdThread @ 0x140451750 (IoSetActivityIdThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PnpNotifyHwProfileChange @ 0x14071E214 (PnpNotifyHwProfileChange.c)
 *     PnpAllocateAndEnableEventWatchdog @ 0x1409B9634 (PnpAllocateAndEnableEventWatchdog.c)
 *     PnpProcessTargetDeviceEvent @ 0x1409EB044 (PnpProcessTargetDeviceEvent.c)
 *     PnpActivatePdcForDeviceEvent @ 0x1409EB79C (PnpActivatePdcForDeviceEvent.c)
 *     PnpNotifyDeviceClassChange @ 0x1409EC16C (PnpNotifyDeviceClassChange.c)
 *     PnpProcessDeferredRegistrations @ 0x1409EC30C (PnpProcessDeferredRegistrations.c)
 *     PnpProcessCustomDeviceEvent @ 0x1409EC484 (PnpProcessCustomDeviceEvent.c)
 *     PiUEventNotifyUserMode @ 0x1409ECA04 (PiUEventNotifyUserMode.c)
 *     PnpCompleteDeviceEvent @ 0x1409ED2C0 (PnpCompleteDeviceEvent.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x1409ED83C (PnpDisableAndFreeEventWatchdog.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeviceEventWorker(PVOID P)
{
  char v2; // si
  __int64 v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // edi
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  PVOID Pa; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  struct _LIST_ENTRY v20; // [rsp+48h] [rbp-30h] BYREF

  v20 = 0LL;
  DestinationString = 0LL;
  *(_QWORD *)&PnpDeviceEventThread = KeGetCurrentThread();
  if ( KeWaitForSingleObject((PVOID)(PnpDeviceEventList + 8), Executive, 0, 0, 0LL) < 0 )
  {
    ExAcquireFastMutex(&PnpNotificationInProgressLock);
    KeSetEvent(&PnpEventQueueEmpty, 0, 0);
    BYTE3(NlsMbOemCodePageTag) = 0;
    KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
    *(_QWORD *)&PnpDeviceEventThread = 0LL;
    return;
  }
  while ( 1 )
  {
    v2 = 0;
    ExAcquireFastMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
    v3 = PnpDeviceEventList;
    v4 = (_QWORD *)(PnpDeviceEventList + 120);
    v5 = *(_QWORD **)(PnpDeviceEventList + 120);
    if ( v5 == (_QWORD *)(PnpDeviceEventList + 120) )
      break;
    if ( (_QWORD *)v5[1] != v4 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    v5[1] = v5;
    *v5 = v5;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v3 + 64));
    Pa = v5;
    v7 = *(_QWORD *)&CPER_EMPTY_GUID.Data1 - v5[11];
    if ( *(_QWORD *)&CPER_EMPTY_GUID.Data1 == v5[11] )
      v7 = *(_QWORD *)CPER_EMPTY_GUID.Data4 - v5[12];
    if ( v7 )
    {
      v20 = *(struct _LIST_ENTRY *)(v5 + 11);
      IoSetActivityIdThread(&v20);
      v2 = 1;
    }
    v8 = v5[20];
    v9 = 0;
    if ( v8 && !*(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL) )
      v9 = -1073741810;
    if ( PnpShutdownEvent.Header.SignalState
      && !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
    {
      v9 = -1073741431;
      goto LABEL_15;
    }
    if ( v9 >= 0 )
    {
      v5[13] = PnpAllocateAndEnableEventWatchdog((__int64)v5);
      PnpActivatePdcForDeviceEvent((__int64)v5);
      v10 = *((_DWORD *)v5 + 34);
      if ( v10 > 6 )
      {
        v15 = v10 - 7;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 && (unsigned int)(v17 - 1) >= 2 )
              goto LABEL_44;
            v14 = PiUEventNotifyUserMode((__int64)v5);
LABEL_28:
            v9 = v14;
          }
        }
      }
      else
      {
        if ( v10 == 6 )
          goto LABEL_14;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( !v12 )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)v5 + 92);
              PnpNotifyDeviceClassChange((__int128 *)(v5 + 15), (_DWORD *)v5 + 42, (__int64)&DestinationString);
LABEL_33:
              PiUEventNotifyUserMode((__int64)v5);
              v9 = 0;
LABEL_15:
              PnpDisableAndFreeEventWatchdog(Pa);
              PnpCompleteDeviceEvent(Pa, v9);
              goto LABEL_16;
            }
            v13 = v12 - 1;
            if ( v13 )
            {
              if ( v13 != 1 )
              {
LABEL_44:
                v9 = -1073741823;
                goto LABEL_15;
              }
              goto LABEL_33;
            }
            v14 = PnpProcessCustomDeviceEvent(&Pa);
          }
          else
          {
            v14 = PnpProcessTargetDeviceEvent((const void **)&Pa);
          }
          goto LABEL_28;
        }
        v9 = PiUEventNotifyUserMode((__int64)v5);
        if ( v9 >= 0 )
          PnpNotifyHwProfileChange((GUID *)(v5 + 15), (_DWORD *)v5[6], (UNICODE_STRING *)v5[7]);
      }
    }
LABEL_14:
    if ( v9 != 259 )
      goto LABEL_15;
LABEL_16:
    PnpProcessDeferredRegistrations();
    if ( v2 )
      IoSetActivityIdThread(0LL);
  }
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  KeSetEvent(&PnpEventQueueEmpty, 0, 0);
  BYTE3(NlsMbOemCodePageTag) = 0;
  PnpProcessDeferredRegistrations();
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
  if ( P )
    ExFreePoolWithTag(P, 0x4C706E50u);
  *(_QWORD *)&PnpDeviceEventThread = 0LL;
  KeReleaseMutex((PRKMUTEX)(PnpDeviceEventList + 8), 0);
}
