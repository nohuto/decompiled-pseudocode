/*
 * XREFs of ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x1805D8144
 * Callers:
 *     ?OnMessage@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z @ 0x180275940 (-OnMessage@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800561C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?IsDashboardVisible@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18007C458 (-IsDashboardVisible@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_ @ 0x1800BC510 (std--_Optional_destruct_base__anonymous_namespace_--DashboardExtensionVersion_0_--__Optional_des.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion @ 0x1800BC52C (_anonymous_namespace_--DashboardExtensionVersion--_DashboardExtensionVersion.c)
 *     std::optional__anonymous_namespace_::DashboardExtensionVersion_::value @ 0x180210A00 (std--optional__anonymous_namespace_--DashboardExtensionVersion_--value.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180282774 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     _anonymous_namespace_::TryGetDashboardPackageName @ 0x180282B2C (_anonymous_namespace_--TryGetDashboardPackageName.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802EDA58 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ??$DashboardInteracted@AEAU_GUID@@IAEA_NAEAY00$$CBGPEBGAEAY0BK@$$CBGAEAPEBG@DashboardManagerTelemetry@@SAXAEAU_GUID@@$$QEAIAEA_NAEAY00$$CBG$$QEAPEBGAEAY0BK@$$CBGAEAPEBG@Z @ 0x1805C30DC (--$DashboardInteracted@AEAU_GUID@@IAEA_NAEAY00$$CBGPEBGAEAY0BK@$$CBGAEAPEBG@DashboardManagerTele.c)
 *     std::_Optional_construct_base__anonymous_namespace_::DashboardExtensionVersion_::_Assign__anonymous_namespace_::DashboardExtensionVersion_ @ 0x1805C3798 (std--_Optional_construct_base__anonymous_namespace_--DashboardExtensionVersion_--_Assign__anonym.c)
 *     ?GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@6@XZ @ 0x1805D20B8 (-GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUA.c)
 *     ?ToggleDashboardVisibilityAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@Uguid@6@W4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x1805D8A6C (-ToggleDashboardVisibilityAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0 @ 0x1805D8E08 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion_0.c)
 *     _anonymous_namespace_::TryGetDashboardPackageName_0 @ 0x1805D8F80 (_anonymous_namespace_--TryGetDashboardPackageName_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x1805DB04C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix@@@details@wil@@QEAA_NXZ @ 0x1805DB5D0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookup.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibility(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *a1,
        __int64 a2,
        __int128 *a3)
{
  __int128 *v3; // rsi
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v4; // rdi
  __int64 v5; // rcx
  HRESULT v6; // eax
  const char *v7; // r9
  __int64 *DashboardAppExtension; // rax
  __int64 DashboardPackageName_0; // rax
  __int64 *v10; // rax
  __int64 AvailableDashboardExtensionVersion_0; // rax
  __int64 v12; // r9
  const WCHAR *v13; // rax
  __int128 *v14; // rax
  int v15; // [rsp+28h] [rbp-120h]
  _BYTE v16[16]; // [rsp+40h] [rbp-108h] BYREF
  GUID v17; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v18; // [rsp+60h] [rbp-E8h] BYREF
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v19; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE v20[56]; // [rsp+80h] [rbp-C8h] BYREF
  char v21; // [rsp+B8h] [rbp-90h]
  GUID pguid; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v23; // [rsp+D0h] [rbp-78h] BYREF
  __m128i si128; // [rsp+E0h] [rbp-68h]
  void *v25[8]; // [rsp+F0h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  v3 = a3;
  v4 = a1;
  v19 = a1;
  *(_QWORD *)&v18 = a3;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl)
    || !(unsigned int)IsGamingFullScreenExperienceActive(v5) )
  {
    pguid = 0LL;
    v6 = CoCreateGuid(&pguid);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x784,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v6);
    try
    {
      v16[0] = winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardVisible(v4);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x78B,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        v7);
      v4 = v19;
      v3 = (__int128 *)v18;
    }
    v23 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v23) = 0;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
    {
      DashboardAppExtension = winrt::Windows::Internal::Shell::implementation::DashboardManager::GetDashboardAppExtension(
                                (RTL_SRWLOCK *)v4,
                                (__int64 *)&v18);
      DashboardPackageName_0 = anonymous_namespace_::TryGetDashboardPackageName_0(
                                 v25,
                                 (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)DashboardAppExtension);
      std::wstring::operator=((__int64)&v23, DashboardPackageName_0);
      std::wstring::_Tidy_deallocate(v25);
    }
    else
    {
      anonymous_namespace_::TryGetDashboardPackageName(&v23);
    }
    v21 = 0;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix>::GetImpl'::`2'::impl)
      && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
    {
      v10 = winrt::Windows::Internal::Shell::implementation::DashboardManager::GetDashboardAppExtension(
              (RTL_SRWLOCK *)v4,
              (__int64 *)&v18);
      AvailableDashboardExtensionVersion_0 = anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0(v25, v10);
    }
    else
    {
      AvailableDashboardExtensionVersion_0 = anonymous_namespace_::TryGetAvailableDashboardExtensionVersion((__int64)v25);
    }
    if ( *(_BYTE *)(AvailableDashboardExtensionVersion_0 + 56) )
    {
      std::_Optional_construct_base__anonymous_namespace_::DashboardExtensionVersion_::_Assign__anonymous_namespace_::DashboardExtensionVersion_(
        (__int64)v20,
        AvailableDashboardExtensionVersion_0);
    }
    else if ( v21 )
    {
      anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion((__int64)v20);
      v21 = 0;
    }
    std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_((__int64)v25);
    if ( v21 )
    {
      v13 = (const WCHAR *)(std::optional__anonymous_namespace_::DashboardExtensionVersion_::value((__int64)v20) + 24);
      if ( *((_QWORD *)v13 + 3) > 7uLL )
        v13 = *(const WCHAR **)v13;
    }
    else
    {
      v13 = &pvData;
    }
    *(_QWORD *)&v18 = v13;
    v14 = &v23;
    if ( si128.m128i_i64[1] > 7uLL )
      v14 = (__int128 *)v23;
    *(_QWORD *)&v17.Data1 = v14;
    LODWORD(v19) = 1;
    DashboardManagerTelemetry::DashboardInteracted<_GUID &,unsigned int,bool &,unsigned short const (&)[1],unsigned short const *,unsigned short const (&)[26],unsigned short const * &>(
      (__int128 *)&pguid,
      (int *)&v19,
      v16,
      v12,
      (const WCHAR **)&v17,
      v15,
      (const WCHAR **)&v18);
    v17 = pguid;
    v18 = *v3;
    winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync(v4, v16, &v17);
    std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_((__int64)v20);
    std::wstring::_Tidy_deallocate((void **)&v23);
  }
}
