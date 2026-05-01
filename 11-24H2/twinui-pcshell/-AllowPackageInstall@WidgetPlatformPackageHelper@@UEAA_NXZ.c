/*
 * XREFs of ?AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ @ 0x1805CD4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4038 (-IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D45D8 (-IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@QEAA_NXZ @ 0x1805D4904 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@QEAA_NXZ.c)
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4C88 (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall WidgetPlatformPackageHelper::AllowPackageInstall(WidgetPlatformPackageHelper *this)
{
  LockScreenWidgetPackageHelperBase *v2; // rcx
  bool IsPackageInstalled; // bl
  void **v5; // [rsp+20h] [rbp-19h] BYREF
  int v6; // [rsp+28h] [rbp-11h]
  const wchar_t *v7; // [rsp+30h] [rbp-9h]
  __int64 v8; // [rsp+38h] [rbp-1h]
  const wchar_t *v9; // [rsp+40h] [rbp+7h]
  __int64 v10; // [rsp+48h] [rbp+Fh]
  _OWORD v11[2]; // [rsp+50h] [rbp+17h] BYREF
  __int64 v12; // [rsp+70h] [rbp+37h]

  if ( !*((_DWORD *)this + 2) && !LockScreenWidgetPackageHelperBase::IsAutomaticInstallAllowedByPolicy(this)
    || !LockScreenWidgetPackageHelperBase::IsPowerSupplyAdequateForInstall(this)
    || !LockScreenWidgetPackageHelperBase::IsNetworkAvailableAndNotConstrained(v2) )
  {
    return 0;
  }
  v6 = *((_DWORD *)this + 2);
  v7 = L"9MSSGKG348SP";
  v8 = 12LL;
  v9 = L"MicrosoftWindows.Client.WebExperience_cw5n1h2txyewy";
  v10 = 51LL;
  v11[0] = 0LL;
  v11[1] = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v11[0]) = 0;
  v12 = 0x826144020CLL;
  v5 = &WebExperiencePackageHelper::`vftable';
  IsPackageInstalled = LockScreenWidgetPackageHelperBase::IsPackageInstalled((LockScreenWidgetPackageHelperBase *)&v5);
  std::wstring::_Tidy_deallocate((void **)v11);
  return IsPackageInstalled;
}
