/*
 * XREFs of RegistryWriteCurrentTime @ 0x14007CFA8
 * Callers:
 *     LogDriverInfoStream @ 0x14007C9B0 (LogDriverInfoStream.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z @ 0x1400564AC (-_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x140069E3C (--1FxAutoRegKey@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 */

void __fastcall RegistryWriteCurrentTime(_FX_DRIVER_GLOBALS *DriverGlobals)
{
  signed int _a1; // eax
  NTSTATUS v3; // eax
  unsigned __int16 v4; // r9
  FxAutoRegKey hWdf; // [rsp+30h] [rbp-50h] BYREF
  FxAutoRegKey hParameters; // [rsp+38h] [rbp-48h] BYREF
  _UNICODE_STRING wdfPart; // [rsp+40h] [rbp-40h] BYREF
  _LARGE_INTEGER currentTime; // [rsp+50h] [rbp-30h] BYREF
  _UNICODE_STRING wdfTimeOfLastTelemetryLog; // [rsp+58h] [rbp-28h] BYREF
  wchar_t wdfPart_buffer[4]; // [rsp+68h] [rbp-18h] BYREF

  hParameters.m_Key = 0LL;
  hWdf.m_Key = 0LL;
  wcscpy(wdfPart_buffer, L"Wdf");
  *(_QWORD *)&wdfPart.Length = 524294LL;
  wdfPart.Buffer = wdfPart_buffer;
  wdfTimeOfLastTelemetryLog = 0LL;
  RtlInitUnicodeString(&wdfTimeOfLastTelemetryLog, L"TimeOfLastTelemetryLog");
  _a1 = IoOpenDriverRegistryKey(DriverGlobals->DriverObject.m_DriverObject, 1LL, 131078LL, 0LL, &hParameters);
  if ( _a1 >= 0 )
  {
    v3 = FxRegKey::_Create(hParameters.m_Key, &wdfPart, &hWdf.m_Key, 0x20006u, 0, 0LL);
    if ( v3 >= 0 )
    {
      currentTime.QuadPart = MEMORY[0xFFFFF78000000014];
      v3 = ZwSetValueKey(hWdf.m_Key, &wdfTimeOfLastTelemetryLog, 0, 0xBu, &currentTime, 8u);
      if ( v3 >= 0 )
      {
LABEL_9:
        FxAutoRegKey::~FxAutoRegKey(&hWdf);
        FxAutoRegKey::~FxAutoRegKey(&hParameters);
        return;
      }
      v4 = 15;
    }
    else
    {
      v4 = 14;
    }
    WPP_IFR_SF_D(DriverGlobals, 2u, 0x11u, v4, WPP_FxTelemetryKm_cpp_Traceguids, v3);
    goto LABEL_9;
  }
  WPP_IFR_SF_D(DriverGlobals, 2u, 0x11u, 0xDu, WPP_FxTelemetryKm_cpp_Traceguids, _a1);
  if ( hParameters.m_Key )
    ZwClose(hParameters.m_Key);
}
