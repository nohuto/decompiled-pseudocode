/*
 * XREFs of ?ndisKLoaderCreateControlDeviceObject@@YAPEAU_DEVICE_OBJECT@@PEAU_DRIVER_OBJECT@@@Z @ 0x14018EA84
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1401358C0 (WdmlibIoCreateDeviceSecure.c)
 */

PDEVICE_OBJECT __fastcall ndisKLoaderCreateControlDeviceObject(
        struct _DRIVER_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        ULONG a4)
{
  NTSTATUS v4; // eax
  int v5; // edx
  int v6; // r9d
  ULONG v8; // [rsp+20h] [rbp-59h]
  BOOLEAN v9; // [rsp+28h] [rbp-51h]
  const GUID *v10; // [rsp+38h] [rbp-41h]
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-29h] BYREF
  _UNICODE_STRING DeviceName; // [rsp+58h] [rbp-21h] BYREF
  _UNICODE_STRING SymbolicLinkName; // [rsp+68h] [rbp-11h] BYREF
  _OWORD v14[2]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v15; // [rsp+98h] [rbp+1Fh]
  _OWORD v16[2]; // [rsp+A0h] [rbp+27h] BYREF

  DeviceObject = 0LL;
  DeviceName.Buffer = (wchar_t *)v16;
  v16[0] = *(_OWORD *)L"\\Device\\kloader";
  *(_QWORD *)&DeviceName.Length = 2097182LL;
  SymbolicLinkName.Buffer = (wchar_t *)v14;
  v16[1] = *(_OWORD *)L"kloader";
  *(_QWORD *)&SymbolicLinkName.Length = 2621478LL;
  v14[0] = *(_OWORD *)L"\\DosDevices\\kloader";
  v15 = *(_QWORD *)L"der";
  v14[1] = *(_OWORD *)L"ces\\kloader";
  v4 = WdmlibIoCreateDeviceSecure(
         (PDRIVER_OBJECT)ndisDriverObject,
         0,
         &DeviceName,
         a4,
         v8,
         v9,
         &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R,
         v10,
         &DeviceObject);
  if ( v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 10;
LABEL_7:
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        1,
        v6,
        (struct _GUID *)&WPP_d515c92245023f957140338f59895f5c_Traceguids,
        v4);
      return 0LL;
    }
    return 0LL;
  }
  DeviceObject->StackSize = 2;
  DeviceObject->Flags |= 4u;
  v4 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
  if ( v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 11;
      goto LABEL_7;
    }
    return 0LL;
  }
  DeviceObject->Flags &= ~0x80u;
  return DeviceObject;
}
