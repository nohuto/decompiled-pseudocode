/*
 * XREFs of ?GetWallpaper@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18026C300
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800566E4 (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?GetWallpaperInternal@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18022B590 (-GetWallpaperInternal@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1803234F8 (--$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ??0UserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@QEAA@XZ @ 0x180552418 (--0UserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180554E88 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktop::GetWallpaper(CVirtualDesktop *this, HSTRING *a2)
{
  HSTRING *v2; // rsi
  CVirtualDesktop *v3; // r14
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // edi
  int v8; // eax
  int WallpaperInternal; // eax
  _BYTE v10[4]; // [rsp+20h] [rbp-268h] BYREF
  int v11; // [rsp+24h] [rbp-264h] BYREF
  int v12; // [rsp+28h] [rbp-260h] BYREF
  __int64 v13; // [rsp+30h] [rbp-258h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-250h] BYREF
  CVirtualDesktop *v15; // [rsp+40h] [rbp-248h]
  HSTRING *v16; // [rsp+48h] [rbp-240h]
  _WORD pvParam[264]; // [rsp+50h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  v2 = a2;
  v3 = this;
  v15 = this;
  v16 = a2;
  *a2 = 0LL;
  v11 = 0;
  v4 = wil::wnf_query_nothrow<int>(&WNF_SHEL_DESKTOP_BACKGROUND_SET_TO_SLIDESHOW, v10, &v11);
  v6 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v4);
    return v6;
  }
  if ( !v11 )
  {
    LOBYTE(v5) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSpotlightUdk>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_DesktopSpotlightUdk>::GetImpl'::`2'::impl,
      v5);
    try
    {
      winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings::UserProfilePersonalizationSettings((winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings *)&v13);
      v8 = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(&v13);
    }
    catch ( ... )
    {
      v3 = v15;
      v2 = v16;
      goto LABEL_9;
    }
    if ( v8 == 1 )
    {
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
      return 0LL;
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
LABEL_9:
    memset_0(pvParam, 0, 0x208uLL);
    SystemParametersInfoW(0x73u, 0x104u, pvParam, 0);
    if ( pvParam[0] )
    {
      v12 = 0;
      SystemParametersInfoW(0x1040u, 0, &v12, 0);
      if ( !v12 )
      {
        (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)v3 + 10) + 24LL))(*((_QWORD *)v3 + 10), &SRWLock);
        WallpaperInternal = CVirtualDesktop::GetWallpaperInternal((HSTRING *)v3 + 2, v2);
        v6 = WallpaperInternal;
        if ( WallpaperInternal < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA1,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
            (const char *)(unsigned int)WallpaperInternal);
          if ( SRWLock )
            ReleaseSRWLockShared(SRWLock);
          return v6;
        }
        if ( SRWLock )
          ReleaseSRWLockShared(SRWLock);
      }
    }
  }
  return 0LL;
}
