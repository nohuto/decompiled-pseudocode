/*
 * XREFs of DpiMiracastInterfaceChange @ 0x14007E760
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140042008 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkFreeUnicodeString @ 0x140231224 (DxgkFreeUnicodeString.c)
 *     DpiGetDeviceInstanceId @ 0x140243934 (DpiGetDeviceInstanceId.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x140245598 (DpiMiracastSendSyncUserModeRequest.c)
 *     DpiGetDevicePropertyDataString @ 0x1403EE810 (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x1403F11AC (DpiGetDevicePropertyString.c)
 */

__int64 __fastcall DpiMiracastInterfaceChange(char *NotificationStructure, PVOID Context)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r13
  char v9; // r15
  char v10; // r12
  void *Pool2; // rax
  __int64 v12; // rdi
  __int64 result; // rax
  const UNICODE_STRING *v14; // rdx
  NTSTATUS DeviceObjectPointer; // eax
  PKEVENT v16; // rax
  int v17; // r15d
  const void **v18; // rbx
  int DevicePropertyDataString; // eax
  __int64 v20; // r9
  unsigned int v21; // r12d
  unsigned int v22; // r15d
  unsigned __int64 v23; // rdx
  char *v24; // rax
  char *v25; // r9
  unsigned __int16 v26; // ax
  int DeviceInstanceId; // eax
  int v28; // eax
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int16 v43; // ax
  void *v44; // rcx
  NTSTATUS v45; // eax
  __int64 v46; // rbx
  NTSTATUS LocallyUniqueId; // eax
  NTSTATUS v48; // eax
  __int64 *v49; // rax
  NTSTATUS v50; // eax
  _QWORD DestinationString[3]; // [rsp+48h] [rbp-C0h] BYREF
  void *EventHandle; // [rsp+60h] [rbp-A8h] BYREF
  __m256i SourceString; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v54; // [rsp+88h] [rbp-80h]
  _OWORD v55[9]; // [rsp+98h] [rbp-70h] BYREF

  memset(v55, 0, 0x88uLL);
  memset(&SourceString.m256i_u64[1], 0, 24);
  if ( NotificationStructure )
  {
    v4 = *(_QWORD *)(NotificationStructure + 20) - *(_QWORD *)&GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data1;
    if ( !v4 )
      v4 = *(_QWORD *)(NotificationStructure + 28) - *(_QWORD *)GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data4;
    if ( !v4 )
    {
      v5 = *((_QWORD *)NotificationStructure + 5);
      if ( v5 )
      {
        v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
        if ( !v6 )
          v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
        if ( v6 )
          return 0LL;
        EventHandle = 0LL;
        v54 = 0LL;
        v7 = *(unsigned __int16 *)(v5 + 2) + 792LL;
        HIDWORD(DestinationString[0]) = 0;
        DeviceAttachmentBaseRef = 0LL;
        BYTE2(DestinationString[0]) = 0;
        v9 = 0;
        v10 = 0;
        Pool2 = (void *)ExAllocatePool2(64LL, v7, 1953656900LL, v3);
        v12 = (__int64)Pool2;
        if ( !Pool2 )
        {
          WdLogSingleEntry1(6LL, -1073741801LL);
          WdLogGlobalForLineNumber = 2466;
          return 0LL;
        }
        memset(Pool2, 0, 0x318uLL);
        *(_DWORD *)(v12 + 16) = 1953656900;
        *(_DWORD *)(v12 + 20) = 14;
        *(_DWORD *)(v12 + 420) = -1;
        *(_DWORD *)(v12 + 456) = -1;
        *(_QWORD *)(v12 + 24) = 1LL;
        *(_QWORD *)(v12 + 88) = 0LL;
        *(_DWORD *)(v12 + 32) = 1;
        *(_QWORD *)(v12 + 40) = 0LL;
        *(_DWORD *)(v12 + 48) = 0;
        KeInitializeEvent((PRKEVENT)(v12 + 56), SynchronizationEvent, 0);
        KeInitializeDpc((PRKDPC)(v12 + 520), (PKDEFERRED_ROUTINE)DpiMiracastChunkInfoCallbackDpc, (PVOID)v12);
        v14 = (const UNICODE_STRING *)*((_QWORD *)NotificationStructure + 5);
        *(_WORD *)(v12 + 144) = 0;
        *(_WORD *)(v12 + 146) = v14->MaximumLength;
        *(_QWORD *)(v12 + 152) = v12 + 792;
        RtlCopyUnicodeString((PUNICODE_STRING)(v12 + 144), v14);
        DeviceObjectPointer = IoGetDeviceObjectPointer(
                                (PUNICODE_STRING)(v12 + 144),
                                0x80000000,
                                (PFILE_OBJECT *)(v12 + 176),
                                (PDEVICE_OBJECT *)(v12 + 184));
        if ( DeviceObjectPointer < 0 )
        {
          WdLogSingleEntry1(2LL, DeviceObjectPointer);
          WdLogGlobalForLineNumber = 2525;
LABEL_37:
          v29 = *(void **)(v12 + 336);
          if ( v29 )
          {
            ExFreePoolWithTag(v29, 0);
            *(_QWORD *)(v12 + 336) = 0LL;
          }
          v30 = *(void **)(v12 + 344);
          if ( v30 )
          {
            ExFreePoolWithTag(v30, 0);
            *(_QWORD *)(v12 + 344) = 0LL;
          }
          v31 = *(void **)(v12 + 352);
          if ( v31 )
          {
            ExFreePoolWithTag(v31, 0);
            *(_QWORD *)(v12 + 352) = 0LL;
          }
          v32 = *(void **)(v12 + 360);
          if ( v32 )
          {
            ExFreePoolWithTag(v32, 0);
            *(_QWORD *)(v12 + 360) = 0LL;
          }
          v33 = *(void **)(v12 + 368);
          if ( v33 )
          {
            ExFreePoolWithTag(v33, 0);
            *(_QWORD *)(v12 + 368) = 0LL;
          }
          if ( v9 )
            ObfDereferenceObject(*(PVOID *)(v12 + 176));
          v34 = *(void **)(v12 + 464);
          if ( v34 )
            ObfDereferenceObject(v34);
          if ( *(_QWORD *)(v12 + 136) )
            RtlFreeUnicodeString((PUNICODE_STRING)(v12 + 128));
          if ( !BYTE2(DestinationString[0]) )
            goto LABEL_57;
          KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)&SourceString.m256i_u64[1]);
          v35 = *(_QWORD *)v12;
          if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) == v12 )
          {
            v36 = *(_QWORD **)(v12 + 8);
            if ( *v36 == v12 )
            {
              *v36 = v35;
              *(_QWORD *)(v35 + 8) = v36;
              KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&SourceString.m256i_u64[1]);
LABEL_57:
              ExFreePoolWithTag((PVOID)v12, 0);
LABEL_74:
              if ( DeviceAttachmentBaseRef )
                ObfDereferenceObject(DeviceAttachmentBaseRef);
              if ( v10 )
                ReleaseMiniportListMutex();
              return 0LL;
            }
          }
LABEL_78:
          __fastfail(3u);
        }
        v9 = 1;
        v16 = IoCreateNotificationEvent(0LL, &EventHandle);
        *(_QWORD *)(v12 + 464) = v16;
        if ( !v16 )
        {
          WdLogSingleEntry1(2LL, -1073741801LL);
          WdLogGlobalForLineNumber = 2548;
          goto LABEL_37;
        }
        ObfReferenceObject(v16);
        ZwClose(EventHandle);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(v12 + 184));
        if ( (int)DpiGetDevicePropertyDataString(
                    DeviceAttachmentBaseRef,
                    (DEVPROPKEY *)&DEVPKEY_DeviceContainer_Manufacturer,
                    v12 + 336,
                    (__int64)DestinationString + 4) >= 0
          || (v17 = 0,
              (int)DpiGetDevicePropertyString(
                     DeviceAttachmentBaseRef,
                     DevicePropertyManufacturer,
                     (__int64)DestinationString + 4) >= 0) )
        {
          v17 = HIDWORD(DestinationString[0]);
        }
        v18 = (const void **)(v12 + 344);
        DevicePropertyDataString = DpiGetDevicePropertyDataString(
                                     DeviceAttachmentBaseRef,
                                     (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelName,
                                     v12 + 344,
                                     (__int64)DestinationString + 4);
        v21 = HIDWORD(DestinationString[0]);
        if ( DevicePropertyDataString < 0 )
          v21 = 0;
        HIDWORD(DestinationString[0]) = v21;
        v22 = v21 + v17;
        if ( v22 )
        {
          v23 = v22 + 4LL;
          if ( v23 < 0xFFFF )
          {
            v24 = (char *)ExAllocatePool2(64LL, v23, 1953656900LL, v20);
            *(_QWORD *)(v12 + 352) = v24;
            v25 = v24;
            if ( v24 )
            {
              *(_OWORD *)&DestinationString[1] = 0LL;
              if ( v22 == v21 )
              {
                v26 = DestinationString[1];
              }
              else
              {
                memmove(v24, *(const void **)(v12 + 336), v22 - v21);
                *(_WORD *)(*(_QWORD *)(v12 + 352) + 2 * ((unsigned __int64)(v22 - v21) >> 1)) = 0;
                RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], *(PCWSTR *)(v12 + 352));
                v18 = (const void **)(v12 + 344);
                *(_WORD *)(*(_QWORD *)(v12 + 352) + 2 * ((unsigned __int64)LOWORD(DestinationString[1]) >> 1)) = 32;
                v25 = *(char **)(v12 + 352);
                v26 = LOWORD(DestinationString[1]) + 2;
                LOWORD(DestinationString[1]) += 2;
              }
              WORD1(DestinationString[1]) = v22 + 4;
              if ( v21 )
              {
                memmove(&v25[2 * ((unsigned __int64)v26 >> 1)], *v18, v21);
                v26 = DestinationString[1];
              }
              *(_WORD *)(*(_QWORD *)(v12 + 352) + 2 * ((unsigned __int64)(v21 + v26) >> 1)) = 0;
            }
          }
        }
        DpiGetDevicePropertyDataString(
          DeviceAttachmentBaseRef,
          (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelNumber,
          v12 + 360,
          (__int64)DestinationString + 4);
        DpiGetDevicePropertyDataString(
          DeviceAttachmentBaseRef,
          (DEVPROPKEY *)&DEVPKEY_Device_FriendlyName,
          v12 + 368,
          (__int64)DestinationString + 4);
        SourceString.m256i_i64[0] = 0LL;
        DeviceInstanceId = DpiGetDeviceInstanceId(DeviceAttachmentBaseRef);
        if ( DeviceInstanceId < 0 )
        {
          WdLogSingleEntry1(2LL, DeviceInstanceId);
          v10 = 0;
          WdLogGlobalForLineNumber = 2731;
LABEL_36:
          v9 = 1;
          goto LABEL_37;
        }
        RtlInitUnicodeString((PUNICODE_STRING)(v12 + 160), (PCWSTR)SourceString.m256i_i64[0]);
        v28 = DpiMiracastSendSyncUserModeRequest(v12, 2295808LL);
        if ( v28 >= 0 )
        {
          if ( *((_QWORD *)&v54 + 1) >= 0x88uLL )
          {
            v37 = v55[1];
            *(_OWORD *)(v12 + 204) = v55[0];
            v38 = v55[2];
            *(_OWORD *)(v12 + 220) = v37;
            v39 = v55[3];
            *(_OWORD *)(v12 + 236) = v38;
            v40 = v55[4];
            *(_OWORD *)(v12 + 252) = v39;
            v41 = v55[5];
            *(_OWORD *)(v12 + 268) = v40;
            v42 = v55[6];
            *(_OWORD *)(v12 + 284) = v41;
            *(_OWORD *)(v12 + 300) = v42;
            v43 = v55[8];
            *(_OWORD *)(v12 + 316) = v55[7];
            *(_WORD *)(v12 + 332) = v43;
            v44 = (void *)DWORD1(v55[8]);
            *(_WORD *)(v12 + 332) = 0;
            v45 = PsLookupProcessByProcessId(v44, (PEPROCESS *)(v12 + 104));
            if ( v45 >= 0 )
            {
              ObfDereferenceObject(*(PVOID *)(v12 + 104));
              AcquireMiniportListMutex();
              v46 = qword_14015E200;
              v10 = 1;
              while ( (__int64 *)v46 != &qword_14015E200 )
              {
                if ( !RtlCompareUnicodeString(
                        *((PCUNICODE_STRING *)NotificationStructure + 5),
                        (PCUNICODE_STRING)(v46 + 144),
                        0) )
                  goto LABEL_35;
                v46 = *(_QWORD *)v46;
              }
              LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)(v12 + 96));
              if ( LocallyUniqueId >= 0 )
              {
                v48 = IoRegisterDeviceInterface(
                        DeviceAttachmentBaseRef,
                        &GUID_DEVINTERFACE_MIRACAST_DISPLAY_ARRIVAL,
                        0LL,
                        (PUNICODE_STRING)(v12 + 128));
                if ( v48 >= 0 )
                {
                  KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)&SourceString.m256i_u64[1]);
                  v49 = (__int64 *)qword_14015E208;
                  if ( *(__int64 **)qword_14015E208 != &qword_14015E200 )
                    goto LABEL_78;
                  *(_QWORD *)v12 = &qword_14015E200;
                  *(_QWORD *)(v12 + 8) = v49;
                  *v49 = v12;
                  qword_14015E208 = v12;
                  BYTE2(DestinationString[0]) = 1;
                  KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&SourceString.m256i_u64[1]);
                  v50 = IoRegisterPlugPlayNotification(
                          EventCategoryTargetDeviceChange,
                          0,
                          *(PVOID *)(v12 + 176),
                          (PDRIVER_OBJECT)g_pDriverObject,
                          DpiMiracastTargetDeviceChange,
                          (PVOID)v12,
                          (PVOID *)(v12 + 400));
                  if ( v50 >= 0 )
                  {
                    IoSetDeviceInterfaceState((PUNICODE_STRING)(v12 + 128), 1u);
                    goto LABEL_74;
                  }
                  WdLogSingleEntry1(2LL, v50);
                  WdLogGlobalForLineNumber = 2909;
                }
                else
                {
                  WdLogSingleEntry1(2LL, v48);
                  WdLogGlobalForLineNumber = 2870;
                }
              }
              else
              {
                WdLogSingleEntry1(2LL, LocallyUniqueId);
                WdLogGlobalForLineNumber = 2851;
              }
              goto LABEL_35;
            }
            WdLogSingleEntry1(2LL, v45);
            WdLogGlobalForLineNumber = 2798;
          }
          else
          {
            WdLogSingleEntry1(2LL, -1073741811LL);
            WdLogGlobalForLineNumber = 2769;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v28);
          WdLogGlobalForLineNumber = 2759;
        }
        v10 = 0;
LABEL_35:
        DxgkFreeUnicodeString(v12 + 160);
        goto LABEL_36;
      }
    }
  }
  WdLogSingleEntry1(2LL, -1073741585LL);
  result = 3221225711LL;
  WdLogGlobalForLineNumber = 2427;
  return result;
}
