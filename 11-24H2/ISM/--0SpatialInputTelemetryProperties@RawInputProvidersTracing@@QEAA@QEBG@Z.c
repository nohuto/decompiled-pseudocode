/*
 * XREFs of ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x1800D4EDC
 * Callers:
 *     ?TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z @ 0x1800D94FC (-TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180067C00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18007F9D0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@PEAPEAUHSTRING__@@@Z @ 0x1800D43D4 (--$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPR.c)
 *     ?Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ @ 0x1800D6A10 (-Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ.c)
 *     DevicePropertyHelpers::MapCrToHResult @ 0x1800D7030 (DevicePropertyHelpers--MapCrToHResult.c)
 */

// Hidden C++ exception states: #wind=6
RawInputProvidersTracing::SpatialInputTelemetryProperties *__fastcall RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties(
        BYTE *this,
        unsigned __int16 *a2)
{
  HSTRING *v3; // rdi
  HSTRING *v4; // rsi
  HSTRING *v5; // r14
  HSTRING *v6; // r15
  HSTRING *v7; // r12
  const WCHAR *v8; // rcx
  CONFIGRET Device_Interface_PropertyW; // eax
  ULONG PropertyBufferSize; // [rsp+30h] [rbp-39h] BYREF
  DEVPROPTYPE PropertyType[3]; // [rsp+34h] [rbp-35h] BYREF
  RawInputProvidersTracing::SpatialInputTelemetryProperties *v13; // [rsp+40h] [rbp-29h]
  int v14; // [rsp+50h] [rbp-19h] BYREF
  LPCWSTR pszDeviceInterface[4]; // [rsp+58h] [rbp-11h] BYREF
  int v16; // [rsp+78h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v13 = (RawInputProvidersTracing::SpatialInputTelemetryProperties *)this;
  v3 = (HSTRING *)(this + 8);
  *((_QWORD *)this + 1) = 0LL;
  v4 = (HSTRING *)(this + 32);
  *((_QWORD *)this + 4) = 0LL;
  v5 = (HSTRING *)(this + 40);
  *((_QWORD *)this + 5) = 0LL;
  v6 = (HSTRING *)(this + 48);
  *((_QWORD *)this + 6) = 0LL;
  v7 = (HSTRING *)(this + 56);
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = a2;
  v14 = 0;
  std::wstring::wstring((__int64)pszDeviceInterface, a2);
  v16 = 0;
  if ( (int)DevicePropertyHelpers::DevicePropertyHelper::Initialize((DevicePropertyHelpers::DevicePropertyHelper *)&v14) >= 0 )
  {
    PropertyBufferSize = 16;
    if ( v14 )
    {
      PropertyType[0] = 0;
      v8 = (const WCHAR *)pszDeviceInterface;
      if ( pszDeviceInterface[3] > (LPCWSTR)7 )
        v8 = pszDeviceInterface[0];
      Device_Interface_PropertyW = CM_Get_Device_Interface_PropertyW(
                                     v8,
                                     &DEVPKEY_DeviceInterface_ClassGuid,
                                     PropertyType,
                                     this + 16,
                                     &PropertyBufferSize,
                                     0);
      if ( Device_Interface_PropertyW )
        DevicePropertyHelpers::MapCrToHResult(Device_Interface_PropertyW);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C,
        (__int64)"onecoreuap\\internal\\analog\\inc\\input\\common\\DevicePropertyHelpers.h",
        (const char *)0x8007139FLL);
    }
    WindowsDeleteString(*v3);
    *v3 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
      (DevicePropertyHelpers::DevicePropertyHelper *)&v14,
      (struct _DEVPROPKEY *)&DEVPKEY_NAME,
      v3);
    WindowsDeleteString(*v4);
    *v4 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
      (DevicePropertyHelpers::DevicePropertyHelper *)&v14,
      (struct _DEVPROPKEY *)&DEVPKEY_Device_Manufacturer,
      v4);
    WindowsDeleteString(*v5);
    *v5 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
      (DevicePropertyHelpers::DevicePropertyHelper *)&v14,
      (struct _DEVPROPKEY *)&DEVPKEY_Device_Model,
      v5);
    WindowsDeleteString(*v6);
    *v6 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
      (DevicePropertyHelpers::DevicePropertyHelper *)&v14,
      (struct _DEVPROPKEY *)&DEVPKEY_Device_FirmwareVersion,
      v6);
    WindowsDeleteString(*v7);
    *v7 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
      (DevicePropertyHelpers::DevicePropertyHelper *)&v14,
      (struct _DEVPROPKEY *)&DEVPKEY_Device_DriverVersion,
      v7);
  }
  std::wstring::_Tidy_deallocate((__int64)pszDeviceInterface);
  return (RawInputProvidersTracing::SpatialInputTelemetryProperties *)this;
}
