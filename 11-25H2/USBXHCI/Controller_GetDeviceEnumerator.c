/*
 * XREFs of Controller_GetDeviceEnumerator @ 0x140076AAC
 * Callers:
 *     Controller_Create @ 0x140074D44 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_GetDeviceEnumerator(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  struct _DEVICE_OBJECT *v4; // rax
  NTSTATUS DeviceProperty; // eax
  int v6; // edx
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  wchar_t PropertyBuffer[8]; // [rsp+38h] [rbp-30h] BYREF

  v3 = 0;
  ResultLength = 0;
  v4 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 264))(
                                  WdfDriverGlobals,
                                  a1);
  DeviceProperty = IoGetDeviceProperty(v4, DevicePropertyEnumeratorName, 0x10u, PropertyBuffer, &ResultLength);
  if ( DeviceProperty >= 0 )
  {
    if ( _wcsicmp(PropertyBuffer, L"ACPI") )
    {
      if ( !_wcsicmp(PropertyBuffer, L"URS") )
        v3 = 2;
    }
    else
    {
      v3 = 1;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    WPP_RECORDER_SF_d(a2, 2, 4, 96, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, DeviceProperty);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_d(a2, v6, 4, 97, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, v3);
  }
  return v3;
}
