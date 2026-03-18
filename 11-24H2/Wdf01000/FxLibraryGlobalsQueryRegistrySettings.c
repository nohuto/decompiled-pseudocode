/*
 * XREFs of FxLibraryGlobalsQueryRegistrySettings @ 0x1400961F4
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x140095F6C (FxLibraryGlobalsCommission.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x140045410 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x14006847C (--1FxAutoRegKey@@QEAA@XZ.c)
 *     ?_OpenKey@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXK@Z @ 0x14006FF90 (-_OpenKey@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXK@Z.c)
 *     Feature_KmdfDriverIsolationValidation__private_IsEnabledDeviceUsageNoInline @ 0x140095D84 (Feature_KmdfDriverIsolationValidation__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140095DD8 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 */

void FxLibraryGlobalsQueryRegistrySettings()
{
  unsigned int ifrDisabled; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int ssDisabled; // [rsp+24h] [rbp-DCh] BYREF
  unsigned int dfxOptIn; // [rsp+28h] [rbp-D8h] BYREF
  FxAutoRegKey hWdf; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING path; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING ifrDisabledName; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING ssDisabledName; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING dfxOptInName; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING leakLimitName; // [rsp+78h] [rbp-88h]
  wchar_t ifrDisabledName_buffer[24]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t dfxOptInName_buffer[32]; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t leakLimitName_buffer[28]; // [rsp+F8h] [rbp-8h] BYREF
  wchar_t path_buffer[56]; // [rsp+130h] [rbp+30h] BYREF
  wchar_t ssDisabledName_buffer[28]; // [rsp+1A0h] [rbp+A0h] BYREF

  hWdf.m_Key = 0LL;
  ifrDisabled = 0;
  ssDisabled = 0;
  dfxOptIn = 0;
  wcscpy(path_buffer, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Wdf");
  wcscpy(ifrDisabledName_buffer, L"WdfGlobalLogsDisabled");
  path.Buffer = path_buffer;
  wcscpy(ssDisabledName_buffer, L"WdfGlobalSleepStudyDisabled");
  ifrDisabledName.Buffer = ifrDisabledName_buffer;
  ssDisabledName.Buffer = ssDisabledName_buffer;
  leakLimitName.Buffer = leakLimitName_buffer;
  wcscpy(leakLimitName_buffer, L"ObjectLeakDetectionLimit");
  *(_QWORD *)&path.Length = 7209068LL;
  *(_QWORD *)&ifrDisabledName.Length = 2883626LL;
  *(_QWORD *)&ssDisabledName.Length = 3670070LL;
  *(_QWORD *)&leakLimitName.Length = 3276848LL;
  *(_QWORD *)&dfxOptInName.Length = 4063292LL;
  wcscpy(dfxOptInName_buffer, L"WdfTestDirectedPowerTransition");
  dfxOptInName.Buffer = dfxOptInName_buffer;
  if ( FxRegKey::_OpenKey(0LL, &path, &hWdf.m_Key, 0x20019u) >= 0 )
  {
    if ( FxRegKey::_QueryULong(hWdf.m_Key, &ifrDisabledName, &ifrDisabled) >= 0 && ifrDisabled == 1 )
      unk_1400C80D8 = 1;
    unk_1400C80D9 = 0;
    if ( FxRegKey::_QueryULong(hWdf.m_Key, &ssDisabledName, &ssDisabled) >= 0 && ssDisabled == 1 )
      unk_1400C80D9 = 1;
    unk_1400C80DB = Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() != 0;
    unk_1400C80DC = Feature_KmdfDriverIsolationValidation__private_IsEnabledDeviceUsageNoInline() != 0;
    if ( FxRegKey::_QueryULong(hWdf.m_Key, &dfxOptInName, &dfxOptIn) >= 0 )
      unk_1400C80DA = dfxOptIn == 1;
  }
  FxAutoRegKey::~FxAutoRegKey(&hWdf);
}
