/*
 * XREFs of PopPolicyDeviceHandleWakeAlarmNotification @ 0x140758E64
 * Callers:
 *     PopNotifyPolicyDevice @ 0x140758DA0 (PopNotifyPolicyDevice.c)
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14025EEA0 (IoBuildDeviceIoControlRequest.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     IoGetDeviceObjectPointer @ 0x1409504C0 (IoGetDeviceObjectPointer.c)
 *     PopChangeCapability @ 0x140A61C60 (PopChangeCapability.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 *     EmClientQueryRuleState @ 0x140B6A420 (EmClientQueryRuleState.c)
 */

__int64 __fastcall PopPolicyDeviceHandleWakeAlarmNotification(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  bool v4; // si
  __int64 v5; // rax
  NTSTATUS DeviceObjectPointer; // ebx
  IRP *v7; // rax
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v15; // xmm0
  int v16; // eax
  PVOID OutputBuffer; // [rsp+28h] [rbp-E0h]
  int v19; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v20; // [rsp+5Ch] [rbp-ACh] BYREF
  char v21; // [rsp+5Eh] [rbp-AAh] BYREF
  char v22; // [rsp+5Fh] [rbp-A9h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-A0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-98h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-90h] BYREF
  __int64 v27; // [rsp+90h] [rbp-78h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-70h] BYREF
  __int128 v29; // [rsp+A8h] [rbp-60h] BYREF
  int v30; // [rsp+B8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v32; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  int *v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  char *v36; // [rsp+108h] [rbp+0h]
  __int64 v37; // [rsp+110h] [rbp+8h]
  char *v38; // [rsp+118h] [rbp+10h]
  __int64 v39; // [rsp+120h] [rbp+18h]
  char *v40; // [rsp+128h] [rbp+20h]
  __int64 v41; // [rsp+130h] [rbp+28h]
  __int16 *v42; // [rsp+138h] [rbp+30h]
  __int64 v43; // [rsp+140h] [rbp+38h]
  char *v44; // [rsp+148h] [rbp+40h]
  __int64 v45; // [rsp+150h] [rbp+48h]
  char *v46; // [rsp+158h] [rbp+50h]
  __int64 v47; // [rsp+160h] [rbp+58h]
  PFILE_OBJECT *p_FileObject; // [rsp+168h] [rbp+60h]
  __int64 v49; // [rsp+170h] [rbp+68h]
  char *v50; // [rsp+178h] [rbp+70h]
  __int64 v51; // [rsp+180h] [rbp+78h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+188h] [rbp+80h]
  __int64 v53; // [rsp+190h] [rbp+88h]
  struct _KEVENT *p_Event; // [rsp+198h] [rbp+90h]
  __int64 v55; // [rsp+1A0h] [rbp+98h]

  v30 = 0;
  v27 = 0LL;
  DeviceObject = 0LL;
  LODWORD(v23) = 1;
  v29 = 0LL;
  FileObject = 0LL;
  Event.Header.WaitListHead = 0LL;
  IoStatusBlock = 0LL;
  EmClientQueryRuleState(&GUID_EM_RULE_TREAT_TAD_AS_RTC, &v23);
  v4 = (_DWORD)v23 == 2;
  v5 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v5 && (_DWORD)v23 != 2 )
  {
    DeviceObjectPointer = IoGetDeviceObjectPointer(*(PUNICODE_STRING *)(a1 + 40), 3u, &FileObject, &DeviceObject);
    if ( DeviceObjectPointer < 0 )
      goto LABEL_11;
    KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
    v7 = IoBuildDeviceIoControlRequest(
           0x29421Cu,
           DeviceObject,
           0LL,
           0,
           &v29,
           0x14u,
           0,
           (PKEVENT)&Event.Header.WaitListHead,
           &IoStatusBlock);
    if ( v7 )
    {
      DeviceObjectPointer = IofCallDriver(DeviceObject, v7);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(&Event.Header.WaitListHead, Executive, 0, 0, 0LL);
        DeviceObjectPointer = IoStatusBlock.Status;
      }
    }
    else
    {
      DeviceObjectPointer = -1073741670;
    }
    ObfDereferenceObject(FileObject);
    if ( DeviceObjectPointer < 0 )
    {
LABEL_11:
      v29 = 0LL;
      v30 = 0;
    }
    if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
    {
      LODWORD(DeviceObject) = v8;
      v32 = &v23;
      v19 = v29;
      LODWORD(v23) = DeviceObjectPointer;
      v34 = &v19;
      v36 = (char *)&v19 + 1;
      v38 = (char *)&v19 + 2;
      v40 = (char *)&v19 + 3;
      v20 = WORD2(v29);
      v42 = &v20;
      v44 = (char *)&v20 + 1;
      v21 = BYTE6(v29);
      v46 = &v21;
      LODWORD(FileObject) = DWORD2(v29);
      p_FileObject = &FileObject;
      v22 = BYTE12(v29);
      v50 = &v22;
      p_DeviceObject = &DeviceObject;
      p_Event = &Event;
      v33 = 4LL;
      v35 = 1LL;
      v37 = 1LL;
      v39 = 1LL;
      v41 = 1LL;
      v43 = 1LL;
      v45 = 1LL;
      v47 = 1LL;
      v49 = 4LL;
      v51 = 1LL;
      v53 = 4LL;
      *(_QWORD *)&Event.Header.Lock = 0x1000000LL;
      v55 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07680,
        (unsigned __int8 *)&dword_14004BE94,
        0LL,
        0LL,
        0xEu,
        &v31);
    }
  }
  PopAcquirePolicyLock(v3, v2);
  v10 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  if ( !v10 || v4 )
  {
    PopChangeCapability(&byte_140F0B673, 0LL);
    v15 = 0LL;
    v16 = 0;
  }
  else
  {
    LOBYTE(v9) = 1;
    PopChangeCapability(&byte_140F0B673, v9);
    v15 = v29;
    v16 = v30;
  }
  dword_140F085F0 = v16;
  PopAcpiTimeAndAlarmCapabilities = v15;
  return PopReleasePolicyLock(v12, v11, v13, v14, OutputBuffer);
}
