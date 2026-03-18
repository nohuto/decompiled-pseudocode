/*
 * XREFs of Controller_DriverInstalledDueToCompatibleIdMatch @ 0x140076788
 * Callers:
 *     Controller_SetDeviceDescription @ 0x14007887C (Controller_SetDeviceDescription.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

char __fastcall Controller_DriverInstalledDueToCompatibleIdMatch(_QWORD *a1)
{
  char v2; // di
  struct _DEVICE_OBJECT *v3; // rax
  NTSTATUS DevicePropertyData; // eax
  int v5; // edx
  unsigned int i; // ebx
  ULONG Type; // [rsp+40h] [rbp-238h] BYREF
  ULONG RequiredSize[7]; // [rsp+44h] [rbp-234h] BYREF
  wchar_t Str1[256]; // [rsp+60h] [rbp-218h] BYREF

  v2 = 0;
  Type = 0;
  RequiredSize[0] = 0;
  memset(Str1, 0, 0x1FEuLL);
  v3 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 264))(
                                  WdfDriverGlobals,
                                  *a1);
  DevicePropertyData = IoGetDevicePropertyData(
                         v3,
                         &DEVPKEY_Device_MatchingDeviceId,
                         0,
                         0,
                         0x1FCu,
                         Str1,
                         RequiredSize,
                         &Type);
  if ( DevicePropertyData >= 0 )
  {
    for ( i = 0; i < 2; ++i )
    {
      if ( !_wcsicmp(Str1, XhciCompatibleIdList[i]) )
        return 1;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 3;
    WPP_RECORDER_SF_d(a1[9], v5, 4, 148, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, DevicePropertyData);
  }
  return v2;
}
