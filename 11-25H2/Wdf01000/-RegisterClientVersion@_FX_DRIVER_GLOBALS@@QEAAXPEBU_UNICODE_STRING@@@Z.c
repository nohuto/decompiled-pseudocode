/*
 * XREFs of ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x1400982AC
 * Callers:
 *     FxInitialize @ 0x14006D198 (FxInitialize.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?_OpenKey@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXK@Z @ 0x140053388 (-_OpenKey@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXK@Z.c)
 *     ?_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z @ 0x1400564AC (-_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x140069E3C (--1FxAutoRegKey@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 */

void __fastcall _FX_DRIVER_GLOBALS::RegisterClientVersion(_FX_DRIVER_GLOBALS *this, _UNICODE_STRING *ServiceKeyName)
{
  NTSTATUS v4; // eax
  unsigned __int16 v5; // r9
  NTSTATUS v6; // eax
  FxAutoRegKey hWdf; // [rsp+30h] [rbp-49h] BYREF
  FxAutoRegKey hParameters; // [rsp+38h] [rbp-41h] BYREF
  FxAutoRegKey hDriver; // [rsp+40h] [rbp-39h] BYREF
  _UNICODE_STRING parametersPart; // [rsp+48h] [rbp-31h] BYREF
  _UNICODE_STRING wdfPart; // [rsp+58h] [rbp-21h] BYREF
  _UNICODE_STRING wdfMajorValue; // [rsp+68h] [rbp-11h] BYREF
  _UNICODE_STRING wdfMinorValue; // [rsp+78h] [rbp-1h] BYREF
  wchar_t wdfPart_buffer[4]; // [rsp+88h] [rbp+Fh] BYREF
  wchar_t parametersPart_buffer[12]; // [rsp+90h] [rbp+17h] BYREF

  hDriver.m_Key = 0LL;
  parametersPart.Buffer = parametersPart_buffer;
  hParameters.m_Key = 0LL;
  wcscpy(wdfPart_buffer, L"Wdf");
  wcscpy(parametersPart_buffer, L"Parameters");
  hWdf.m_Key = 0LL;
  wdfPart.Buffer = wdfPart_buffer;
  *(_QWORD *)&parametersPart.Length = 1441812LL;
  *(_QWORD *)&wdfPart.Length = 524294LL;
  wdfMajorValue = 0LL;
  wdfMinorValue = 0LL;
  RtlInitUnicodeString(&wdfMajorValue, L"WdfMajorVersion");
  RtlInitUnicodeString(&wdfMinorValue, L"WdfMinorVersion");
  v4 = FxRegKey::_OpenKey(0LL, ServiceKeyName, &hDriver.m_Key, 0x2001Fu);
  if ( v4 >= 0 )
  {
    v4 = FxRegKey::_Create(hDriver.m_Key, &parametersPart, &hParameters.m_Key, 0x2001Fu, 0, 0LL);
    if ( v4 >= 0 )
    {
      v4 = FxRegKey::_Create(hParameters.m_Key, &wdfPart, &hWdf.m_Key, 0x2001Fu, 0, 0LL);
      if ( v4 >= 0 )
      {
        v6 = ZwSetValueKey(hWdf.m_Key, &wdfMajorValue, 0, 4u, &this->WdfBindInfo->Version, 4u);
        if ( v6 < 0 && this->FxVerboseOn )
          WPP_IFR_SF_D(this, 5u, 0x11u, 0xDu, WPP_GlobalsKm_cpp_Traceguids, v6);
        v4 = ZwSetValueKey(hWdf.m_Key, &wdfMinorValue, 0, 4u, &this->WdfBindInfo->Version.Minor, 4u);
        if ( v4 >= 0 || !this->FxVerboseOn )
          goto LABEL_18;
        v5 = 14;
      }
      else
      {
        if ( !this->FxVerboseOn )
          goto LABEL_18;
        v5 = 12;
      }
    }
    else
    {
      if ( !this->FxVerboseOn )
        goto LABEL_18;
      v5 = 11;
    }
LABEL_17:
    WPP_IFR_SF_D(this, 5u, 0x11u, v5, WPP_GlobalsKm_cpp_Traceguids, v4);
    goto LABEL_18;
  }
  if ( this->FxVerboseOn )
  {
    v5 = 10;
    goto LABEL_17;
  }
LABEL_18:
  FxAutoRegKey::~FxAutoRegKey(&hWdf);
  FxAutoRegKey::~FxAutoRegKey(&hParameters);
  FxAutoRegKey::~FxAutoRegKey(&hDriver);
}
