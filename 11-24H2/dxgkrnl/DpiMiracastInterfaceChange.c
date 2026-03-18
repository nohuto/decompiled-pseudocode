/*
 * XREFs of DpiMiracastInterfaceChange @ 0x14007EDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkFreeUnicodeString @ 0x140237C00 (DxgkFreeUnicodeString.c)
 *     DpiGetDeviceInstanceId @ 0x14024A744 (DpiGetDeviceInstanceId.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x14024C3A8 (DpiMiracastSendSyncUserModeRequest.c)
 *     DpiGetDevicePropertyDataString @ 0x1403E8B38 (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x1403EB254 (DpiGetDevicePropertyString.c)
 */

__int64 __fastcall DpiMiracastInterfaceChange(char *NotificationStructure, PVOID Context)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r13
  char v8; // r15
  char v9; // r12
  void *Pool2; // rax
  __int64 v11; // rdi
  __int64 result; // rax
  const UNICODE_STRING *v13; // rdx
  NTSTATUS DeviceObjectPointer; // eax
  PKEVENT v15; // rax
  int v16; // r15d
  const void **v17; // rbx
  int DevicePropertyDataString; // eax
  unsigned int v19; // r12d
  unsigned int v20; // r15d
  unsigned __int64 v21; // rdx
  char *v22; // rax
  char *v23; // r9
  unsigned __int16 v24; // ax
  int DeviceInstanceId; // eax
  int v26; // eax
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int16 v41; // ax
  void *v42; // rcx
  NTSTATUS v43; // eax
  __int64 v44; // rbx
  NTSTATUS LocallyUniqueId; // eax
  NTSTATUS v46; // eax
  __int64 *v47; // rax
  NTSTATUS v48; // eax
  _QWORD DestinationString[3]; // [rsp+48h] [rbp-C0h] BYREF
  void *EventHandle; // [rsp+60h] [rbp-A8h] BYREF
  __m256i SourceString; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v52; // [rsp+88h] [rbp-80h]
  _OWORD v53[9]; // [rsp+98h] [rbp-70h] BYREF

  memset(v53, 0, 0x88uLL);
  memset(&SourceString.m256i_u64[1], 0, 24);
  if ( NotificationStructure )
  {
    v3 = *(_QWORD *)(NotificationStructure + 20) - *(_QWORD *)&GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data1;
    if ( !v3 )
      v3 = *(_QWORD *)(NotificationStructure + 28) - *(_QWORD *)GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data4;
    if ( !v3 )
    {
      v4 = *((_QWORD *)NotificationStructure + 5);
      if ( v4 )
      {
        v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
        if ( !v5 )
          v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
        if ( v5 )
          return 0LL;
        EventHandle = 0LL;
        v52 = 0LL;
        v6 = *(unsigned __int16 *)(v4 + 2) + 792LL;
        HIDWORD(DestinationString[0]) = 0;
        DeviceAttachmentBaseRef = 0LL;
        BYTE2(DestinationString[0]) = 0;
        v8 = 0;
        v9 = 0;
        Pool2 = (void *)ExAllocatePool2(64LL, v6, 1953656900LL);
        v11 = (__int64)Pool2;
        if ( !Pool2 )
        {
          WdLogSingleEntry1(6LL, -1073741801LL);
          WdLogGlobalForLineNumber = 2466;
          return 0LL;
        }
        memset(Pool2, 0, 0x318uLL);
        *(_DWORD *)(v11 + 16) = 1953656900;
        *(_DWORD *)(v11 + 20) = 14;
        *(_DWORD *)(v11 + 420) = -1;
        *(_DWORD *)(v11 + 456) = -1;
        *(_QWORD *)(v11 + 24) = 1LL;
        *(_QWORD *)(v11 + 88) = 0LL;
        *(_DWORD *)(v11 + 32) = 1;
        *(_QWORD *)(v11 + 40) = 0LL;
        *(_DWORD *)(v11 + 48) = 0;
        KeInitializeEvent((PRKEVENT)(v11 + 56), SynchronizationEvent, 0);
        KeInitializeDpc((PRKDPC)(v11 + 520), (PKDEFERRED_ROUTINE)DpiMiracastChunkInfoCallbackDpc, (PVOID)v11);
        v13 = (const UNICODE_STRING *)*((_QWORD *)NotificationStructure + 5);
        *(_WORD *)(v11 + 144) = 0;
        *(_WORD *)(v11 + 146) = v13->MaximumLength;
        *(_QWORD *)(v11 + 152) = v11 + 792;
        RtlCopyUnicodeString((PUNICODE_STRING)(v11 + 144), v13);
        DeviceObjectPointer = IoGetDeviceObjectPointer(
                                (PUNICODE_STRING)(v11 + 144),
                                0x80000000,
                                (PFILE_OBJECT *)(v11 + 176),
                                (PDEVICE_OBJECT *)(v11 + 184));
        if ( DeviceObjectPointer < 0 )
        {
          WdLogSingleEntry1(2LL, DeviceObjectPointer);
          WdLogGlobalForLineNumber = 2525;
LABEL_37:
          v27 = *(void **)(v11 + 336);
          if ( v27 )
          {
            ExFreePoolWithTag(v27, 0);
            *(_QWORD *)(v11 + 336) = 0LL;
          }
          v28 = *(void **)(v11 + 344);
          if ( v28 )
          {
            ExFreePoolWithTag(v28, 0);
            *(_QWORD *)(v11 + 344) = 0LL;
          }
          v29 = *(void **)(v11 + 352);
          if ( v29 )
          {
            ExFreePoolWithTag(v29, 0);
            *(_QWORD *)(v11 + 352) = 0LL;
          }
          v30 = *(void **)(v11 + 360);
          if ( v30 )
          {
            ExFreePoolWithTag(v30, 0);
            *(_QWORD *)(v11 + 360) = 0LL;
          }
          v31 = *(void **)(v11 + 368);
          if ( v31 )
          {
            ExFreePoolWithTag(v31, 0);
            *(_QWORD *)(v11 + 368) = 0LL;
          }
          if ( v8 )
            ObfDereferenceObject(*(PVOID *)(v11 + 176));
          v32 = *(void **)(v11 + 464);
          if ( v32 )
            ObfDereferenceObject(v32);
          if ( *(_QWORD *)(v11 + 136) )
            RtlFreeUnicodeString((PUNICODE_STRING)(v11 + 128));
          if ( !BYTE2(DestinationString[0]) )
            goto LABEL_57;
          KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)&SourceString.m256i_u64[1]);
          v33 = *(_QWORD *)v11;
          if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) == v11 )
          {
            v34 = *(_QWORD **)(v11 + 8);
            if ( *v34 == v11 )
            {
              *v34 = v33;
              *(_QWORD *)(v33 + 8) = v34;
              KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&SourceString.m256i_u64[1]);
LABEL_57:
              ExFreePoolWithTag((PVOID)v11, 0);
LABEL_74:
              if ( DeviceAttachmentBaseRef )
                ObfDereferenceObject(DeviceAttachmentBaseRef);
              if ( v9 )
                ReleaseMiniportListMutex();
              return 0LL;
            }
          }
LABEL_78:
          __fastfail(3u);
        }
        v8 = 1;
        v15 = IoCreateNotificationEvent(0LL, &EventHandle);
        *(_QWORD *)(v11 + 464) = v15;
        if ( !v15 )
        {
          WdLogSingleEntry1(2LL, -1073741801LL);
          WdLogGlobalForLineNumber = 2548;
          goto LABEL_37;
        }
        ObfReferenceObject(v15);
        ZwClose(EventHandle);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(v11 + 184));
        if ( (int)DpiGetDevicePropertyDataString(
                    DeviceAttachmentBaseRef,
                    (DEVPROPKEY *)&DEVPKEY_DeviceContainer_Manufacturer,
                    v11 + 336,
                    (__int64)DestinationString + 4) >= 0
          || (v16 = 0,
              (int)DpiGetDevicePropertyString(
                     DeviceAttachmentBaseRef,
                     DevicePropertyManufacturer,
                     (__int64)DestinationString + 4) >= 0) )
        {
          v16 = HIDWORD(DestinationString[0]);
        }
        v17 = (const void **)(v11 + 344);
        DevicePropertyDataString = DpiGetDevicePropertyDataString(
                                     DeviceAttachmentBaseRef,
                                     (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelName,
                                     v11 + 344,
                                     (__int64)DestinationString + 4);
        v19 = HIDWORD(DestinationString[0]);
        if ( DevicePropertyDataString < 0 )
          v19 = 0;
        HIDWORD(DestinationString[0]) = v19;
        v20 = v19 + v16;
        if ( v20 )
        {
          v21 = v20 + 4LL;
          if ( v21 < 0xFFFF )
          {
            v22 = (char *)ExAllocatePool2(64LL, v21, 1953656900LL);
            *(_QWORD *)(v11 + 352) = v22;
            v23 = v22;
            if ( v22 )
            {
              *(_OWORD *)&DestinationString[1] = 0LL;
              if ( v20 == v19 )
              {
                v24 = DestinationString[1];
              }
              else
              {
                memmove(v22, *(const void **)(v11 + 336), v20 - v19);
                *(_WORD *)(*(_QWORD *)(v11 + 352) + 2 * ((unsigned __int64)(v20 - v19) >> 1)) = 0;
                RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], *(PCWSTR *)(v11 + 352));
                v17 = (const void **)(v11 + 344);
                *(_WORD *)(*(_QWORD *)(v11 + 352) + 2 * ((unsigned __int64)LOWORD(DestinationString[1]) >> 1)) = 32;
                v23 = *(char **)(v11 + 352);
                v24 = LOWORD(DestinationString[1]) + 2;
                LOWORD(DestinationString[1]) += 2;
              }
              WORD1(DestinationString[1]) = v20 + 4;
              if ( v19 )
              {
                memmove(&v23[2 * ((unsigned __int64)v24 >> 1)], *v17, v19);
                v24 = DestinationString[1];
              }
              *(_WORD *)(*(_QWORD *)(v11 + 352) + 2 * ((unsigned __int64)(v19 + v24) >> 1)) = 0;
            }
          }
        }
        DpiGetDevicePropertyDataString(
          DeviceAttachmentBaseRef,
          (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelNumber,
          v11 + 360,
          (__int64)DestinationString + 4);
        DpiGetDevicePropertyDataString(
          DeviceAttachmentBaseRef,
          (DEVPROPKEY *)&DEVPKEY_Device_FriendlyName,
          v11 + 368,
          (__int64)DestinationString + 4);
        SourceString.m256i_i64[0] = 0LL;
        DeviceInstanceId = DpiGetDeviceInstanceId(DeviceAttachmentBaseRef);
        if ( DeviceInstanceId < 0 )
        {
          WdLogSingleEntry1(2LL, DeviceInstanceId);
          v9 = 0;
          WdLogGlobalForLineNumber = 2731;
LABEL_36:
          v8 = 1;
          goto LABEL_37;
        }
        RtlInitUnicodeString((PUNICODE_STRING)(v11 + 160), (PCWSTR)SourceString.m256i_i64[0]);
        v26 = DpiMiracastSendSyncUserModeRequest(v11, 2295808LL);
        if ( v26 >= 0 )
        {
          if ( *((_QWORD *)&v52 + 1) >= 0x88uLL )
          {
            v35 = v53[1];
            *(_OWORD *)(v11 + 204) = v53[0];
            v36 = v53[2];
            *(_OWORD *)(v11 + 220) = v35;
            v37 = v53[3];
            *(_OWORD *)(v11 + 236) = v36;
            v38 = v53[4];
            *(_OWORD *)(v11 + 252) = v37;
            v39 = v53[5];
            *(_OWORD *)(v11 + 268) = v38;
            v40 = v53[6];
            *(_OWORD *)(v11 + 284) = v39;
            *(_OWORD *)(v11 + 300) = v40;
            v41 = v53[8];
            *(_OWORD *)(v11 + 316) = v53[7];
            *(_WORD *)(v11 + 332) = v41;
            v42 = (void *)DWORD1(v53[8]);
            *(_WORD *)(v11 + 332) = 0;
            v43 = PsLookupProcessByProcessId(v42, (PEPROCESS *)(v11 + 104));
            if ( v43 >= 0 )
            {
              ObfDereferenceObject(*(PVOID *)(v11 + 104));
              AcquireMiniportListMutex();
              v44 = qword_1401611C0;
              v9 = 1;
              while ( (__int64 *)v44 != &qword_1401611C0 )
              {
                if ( !RtlCompareUnicodeString(
                        *((PCUNICODE_STRING *)NotificationStructure + 5),
                        (PCUNICODE_STRING)(v44 + 144),
                        0) )
                  goto LABEL_35;
                v44 = *(_QWORD *)v44;
              }
              LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)(v11 + 96));
              if ( LocallyUniqueId >= 0 )
              {
                v46 = IoRegisterDeviceInterface(
                        DeviceAttachmentBaseRef,
                        &GUID_DEVINTERFACE_MIRACAST_DISPLAY_ARRIVAL,
                        0LL,
                        (PUNICODE_STRING)(v11 + 128));
                if ( v46 >= 0 )
                {
                  KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)&SourceString.m256i_u64[1]);
                  v47 = (__int64 *)qword_1401611C8;
                  if ( *(__int64 **)qword_1401611C8 != &qword_1401611C0 )
                    goto LABEL_78;
                  *(_QWORD *)v11 = &qword_1401611C0;
                  *(_QWORD *)(v11 + 8) = v47;
                  *v47 = v11;
                  qword_1401611C8 = v11;
                  BYTE2(DestinationString[0]) = 1;
                  KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&SourceString.m256i_u64[1]);
                  v48 = IoRegisterPlugPlayNotification(
                          EventCategoryTargetDeviceChange,
                          0,
                          *(PVOID *)(v11 + 176),
                          (PDRIVER_OBJECT)g_pDriverObject,
                          DpiMiracastTargetDeviceChange,
                          (PVOID)v11,
                          (PVOID *)(v11 + 400));
                  if ( v48 >= 0 )
                  {
                    IoSetDeviceInterfaceState((PUNICODE_STRING)(v11 + 128), 1u);
                    goto LABEL_74;
                  }
                  WdLogSingleEntry1(2LL, v48);
                  WdLogGlobalForLineNumber = 2909;
                }
                else
                {
                  WdLogSingleEntry1(2LL, v46);
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
            WdLogSingleEntry1(2LL, v43);
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
          WdLogSingleEntry1(2LL, v26);
          WdLogGlobalForLineNumber = 2759;
        }
        v9 = 0;
LABEL_35:
        DxgkFreeUnicodeString(v11 + 160);
        goto LABEL_36;
      }
    }
  }
  WdLogSingleEntry1(2LL, -1073741585LL);
  result = 3221225711LL;
  WdLogGlobalForLineNumber = 2427;
  return result;
}
