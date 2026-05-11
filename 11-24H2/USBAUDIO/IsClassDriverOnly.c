/*
 * XREFs of IsClassDriverOnly @ 0x14002F324
 * Callers:
 *     IsSidebandSupported @ 0x14002F5D4 (IsSidebandSupported.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B318 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __report_rangecheckfailure @ 0x14000BE40 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x14001BB10 (__security_check_cookie.c)
 */

__int64 __fastcall IsClassDriverOnly(__int64 a1)
{
  unsigned int v1; // ebx
  struct _DEVICE_OBJECT *v3; // rcx
  int v4; // edx
  int v5; // r8d
  PDEVICE_OBJECT v6; // rcx
  bool v7; // di
  unsigned __int64 v8; // rax
  ULONG Type; // [rsp+48h] [rbp-19h] BYREF
  ULONG RequiredSize; // [rsp+4Ch] [rbp-15h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-11h] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp-1h] BYREF
  WCHAR SourceString[16]; // [rsp+70h] [rbp+Fh] BYREF
  WCHAR Data[16]; // [rsp+90h] [rbp+2Fh] BYREF

  v1 = 0;
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  DestinationString = 0LL;
  wcscpy(SourceString, L"wdma_usb.inf");
  RequiredSize = 0;
  Type = 0;
  String2 = 0LL;
  if ( IoGetDevicePropertyData(v3, &DEVPKEY_Device_DriverExtendedInfs, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
  {
    v6 = WPP_GLOBAL_Control;
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v5) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
LABEL_9:
      LOBYTE(v4) = v7;
      WPP_RECORDER_AND_TRACE_SF_(v6->AttachedDevice, v4, v5, v6->DeviceExtension);
    }
  }
  else if ( IoGetDevicePropertyData(
              *(PDEVICE_OBJECT *)(a1 + 32),
              &DEVPKEY_Device_DriverInfPath,
              0,
              0,
              0x1Au,
              Data,
              &RequiredSize,
              &Type) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v8 = (unsigned __int64)DestinationString.Length >> 1;
    if ( v8 >= 13 )
      _report_rangecheckfailure();
    Data[v8] = 0;
    RtlInitUnicodeString(&String2, Data);
    v7 = 1;
    if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
      return 1;
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v7 = 0;
    }
    LOBYTE(v5) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
  }
  else
  {
    v6 = WPP_GLOBAL_Control;
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v5) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
  }
  return v1;
}
