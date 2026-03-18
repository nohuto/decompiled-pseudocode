/*
 * XREFs of PiDevCfgConfigureDeviceInterface @ 0x14094D9F0
 * Callers:
 *     PiDevCfgConfigureDeviceInterfaceCallback @ 0x1405A33C0 (PiDevCfgConfigureDeviceInterfaceCallback.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A75EEC (PiDevCfgConfigureDeviceInterfaces.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     PiDevCfgCopyDeviceProperties @ 0x1406EF120 (PiDevCfgCopyDeviceProperties.c)
 *     PiDevCfgCopyDeviceKeys @ 0x14094C678 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyObjectProperties @ 0x14094E3B0 (PiDevCfgCopyObjectProperties.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14095A430 (_CmOpenDeviceInterfaceRegKey.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceInterface(__int64 a1, void *a2, __int64 a3)
{
  NTSTATUS v6; // eax
  int v7; // r9d
  int v8; // ebx
  NTSTATUS v9; // eax
  int v10; // r9d
  __int64 v12; // r8
  int v13; // [rsp+20h] [rbp-49h]
  int v14; // [rsp+20h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+D8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+7Fh] BYREF

  Handle = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Device");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v8 = v6;
  if ( v6 != -1073741772 )
  {
    if ( v6 < 0 )
      goto LABEL_7;
    v8 = CmOpenDeviceInterfaceRegKey(PiPnpRtlCtx, a1, 50, v7, 983103, 1, (__int64)&Handle, 0LL);
    if ( v8 < 0 )
      goto LABEL_7;
    v8 = PiDevCfgCopyDeviceKeys(KeyHandle, Handle, v12, a3);
    if ( v8 < 0 )
      goto LABEL_7;
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
    ZwClose(Handle);
    Handle = 0LL;
  }
  RtlInitUnicodeString(&DestinationString, L"Properties");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v8 = v9;
  if ( v9 == -1073741772 )
  {
    v8 = 0;
  }
  else if ( v9 >= 0 )
  {
    v8 = CmOpenDeviceInterfaceRegKey(PiPnpRtlCtx, a1, 48, v10, 983103, 0, (__int64)&Handle, 0LL);
    if ( v8 >= 0 )
    {
      v8 = PiDevCfgCopyObjectProperties(PiPnpRtlCtx, 0, 0, (_DWORD)a2, v13, a1, 3, (__int64)Handle, 0LL, 0LL, 0);
      if ( v8 >= 0 )
        v8 = PiDevCfgCopyDeviceProperties(KeyHandle, (__int64)Handle, a1, 3LL, v14, a3);
    }
  }
LABEL_7:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
