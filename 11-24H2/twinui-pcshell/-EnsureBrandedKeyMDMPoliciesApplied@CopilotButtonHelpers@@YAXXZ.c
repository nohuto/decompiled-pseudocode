/*
 * XREFs of ?EnsureBrandedKeyMDMPoliciesApplied@CopilotButtonHelpers@@YAXXZ @ 0x180622EEC
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180625E74 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV-$tip_test@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z @ 0x1803BF980 (-SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z.c)
 *     ?GetCopilotHardwareKeyAppEnforcedByPolicy@CopilotButtonHelpers@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180624000 (-GetCopilotHardwareKeyAppEnforcedByPolicy@CopilotButtonHelpers@@YA-AV-$basic_string@GU-$char_tra.c)
 *     ?GetRegistryKeyStringValue@CopilotButtonHelpers@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG00@Z @ 0x180624C54 (-GetRegistryKeyStringValue@CopilotButtonHelpers@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$a.c)
 *     wcscmp_0 @ 0x1806CA2C4 (wcscmp_0.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CopilotButtonHelpers::EnsureBrandedKeyMDMPoliciesApplied(CopilotButtonHelpers *this, __int64 a2)
{
  __int64 v2; // rdx
  const wchar_t *v3; // rcx
  int v4; // eax
  int v5; // eax
  unsigned __int16 **v6; // r9
  int v7; // eax
  const wchar_t *v8; // rcx
  int v9; // eax
  wchar_t *String1[3]; // [rsp+20h] [rbp-19h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-1h]
  unsigned __int16 *v12[4]; // [rsp+40h] [rbp+7h] BYREF
  void *v13[4]; // [rsp+60h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  CopilotButtonHelpers::GetRegistryKeyStringValue(String1, a2, L"BrandedKeyChoiceType");
  CopilotButtonHelpers::GetRegistryKeyStringValue(v13, v2, L"AppAumid");
  CopilotButtonHelpers::GetCopilotHardwareKeyAppEnforcedByPolicy(v12);
  if ( v12[2] )
  {
    v6 = v12;
    if ( v12[3] > (unsigned __int16 *)7 )
      v6 = (unsigned __int16 **)v12[0];
    v7 = SHRegSetString(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\Shell\\BrandedKey", L"AppAumid", (BYTE *)v6);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x62,
        (int)"Internal\\Shell\\Inc\\CopilotHardwareButtonHelpers.h",
        (const char *)(unsigned int)v7,
        (int)String1[0]);
    v8 = (const wchar_t *)String1;
    if ( v11 > 7 )
      v8 = String1[0];
    if ( !wcscmp_0(v8, L"App") )
    {
      v9 = SHRegSetString(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\Shell\\BrandedKey",
             L"BrandedKeyChoiceType",
             (BYTE *)L"AppEnforcedByPolicy");
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x68,
          (int)"Internal\\Shell\\Inc\\CopilotHardwareButtonHelpers.h",
          (const char *)(unsigned int)v9,
          (int)String1[0]);
    }
  }
  else
  {
    v3 = (const wchar_t *)String1;
    if ( v11 > 7 )
      v3 = String1[0];
    if ( !wcscmp_0(v3, L"AppEnforcedByPolicy") )
    {
      v4 = SHRegSetString(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\Shell\\BrandedKey",
             L"AppAumid",
             (BYTE *)&pvData);
      if ( v4 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x5B,
          (int)"Internal\\Shell\\Inc\\CopilotHardwareButtonHelpers.h",
          (const char *)(unsigned int)v4,
          (int)String1[0]);
      v5 = SHRegSetString(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\Shell\\BrandedKey",
             L"BrandedKeyChoiceType",
             (BYTE *)L"App");
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x5D,
          (int)"Internal\\Shell\\Inc\\CopilotHardwareButtonHelpers.h",
          (const char *)(unsigned int)v5,
          (int)String1[0]);
    }
  }
  std::wstring::_Tidy_deallocate((void **)v12);
  std::wstring::_Tidy_deallocate(v13);
  std::wstring::_Tidy_deallocate((void **)String1);
}
