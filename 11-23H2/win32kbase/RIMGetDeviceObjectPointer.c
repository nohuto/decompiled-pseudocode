/*
 * XREFs of RIMGetDeviceObjectPointer @ 0x1C006E118
 * Callers:
 *     RIMGetMouseDeviceHardwareId @ 0x1C006CAE0 (RIMGetMouseDeviceHardwareId.c)
 *     RIMGetDeviceParent @ 0x1C006CE24 (RIMGetDeviceParent.c)
 *     RIMLoadDeviceLegacyInfo @ 0x1C006D4E4 (RIMLoadDeviceLegacyInfo.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1C006DB88 (RIMRegOpenDeviceInstanceKey.c)
 *     IsMouseDeviceOnIgnoreList @ 0x1C006E248 (IsMouseDeviceOnIgnoreList.c)
 *     rimOnPnpArrived @ 0x1C0076A78 (rimOnPnpArrived.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0177150 (RIMEnableMonitorMappingForDevice.c)
 *     RIMConfigureDeviceFeedback @ 0x1C017FFB0 (RIMConfigureDeviceFeedback.c)
 *     RIMDeliverConfigRequest @ 0x1C0180728 (RIMDeliverConfigRequest.c)
 *     RIMHidGetPreparsedData @ 0x1C0181BB0 (RIMHidGetPreparsedData.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0182C04 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C0183220 (RIMSetDeviceIdleTimeout.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0194448 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0058ABC (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

__int64 __fastcall RIMGetDeviceObjectPointer(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        void **a4,
        PVOID *a5,
        PDEVICE_OBJECT *a6)
{
  NTSTATUS v7; // ebx
  struct _FILE_OBJECT *v8; // rcx
  char v10; // dl
  void *FileHandle; // [rsp+60h] [rbp-49h] BYREF
  PVOID Object; // [rsp+68h] [rbp-41h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-9h] BYREF
  _DWORD v15[4]; // [rsp+B0h] [rbp+7h] BYREF

  ObjectAttributes.ObjectName = a1;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.SecurityQualityOfService = v15;
  IoStatusBlock = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  v15[2] = 257;
  v15[0] = 12;
  v15[1] = 2;
  v7 = ZwOpenFile(&FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v7 >= 0 )
  {
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v7 >= 0 )
    {
      v8 = (struct _FILE_OBJECT *)Object;
      *a5 = Object;
      *a6 = IoGetRelatedDeviceObject(v8);
      *a4 = FileHandle;
      return (unsigned int)v7;
    }
    ZwClose(FileHandle);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v10 = 0;
  }
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_ddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x1Du,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      0,
      3,
      v7);
  return (unsigned int)v7;
}
