/*
 * XREFs of ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180205F60
 * Callers:
 *     ?SetDesktopWallpaper@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180205ED0 (-SetDesktopWallpaper@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1805577C4 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800566E4 (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??1VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180152154 (--1VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?Stop@VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@_N@Z @ 0x180178ED4 (-Stop@VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtu.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180191CC0 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     ?GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z @ 0x1801EFC7C (-GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EFD64 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@QEAAX_NW4Repo.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180211CD0 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ?AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18022263C (-AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180296A94 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?StartActivity@VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180296B38 (-StartActivity@VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXX.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___ @ 0x180550C70 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180551EE8 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgRef_ea_180551EE8.c)
 *     ??0UserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@QEAA@XZ @ 0x180552418 (--0UserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@QEAA@XZ.c)
 *     ?IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ @ 0x180553E84 (-IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180554E88 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVirtualDesktopManager::SetDesktopWallpaperInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        HSTRING a3)
{
  struct IVirtualDesktop *v3; // r15
  unsigned int v5; // ebx
  int v7; // eax
  CVirtualDesktopManager *v8; // rcx
  unsigned int v9; // edi
  int CurrentDesktopInternal; // edi
  __int64 v11; // rdx
  __int64 v12; // rdx
  bool v13; // si
  __int64 v14; // r8
  __int64 v15; // r9
  DWORD CurrentThreadId; // eax
  __int64 v17; // rcx
  bool v18; // [rsp+20h] [rbp-538h]
  INT32 result; // [rsp+24h] [rbp-534h] BYREF
  struct IUnknown *v21; // [rsp+28h] [rbp-530h] BYREF
  HSTRING string2; // [rsp+30h] [rbp-528h] BYREF
  HSTRING string1; // [rsp+38h] [rbp-520h] BYREF
  int pvParam; // [rsp+40h] [rbp-518h] BYREF
  __int64 v25; // [rsp+44h] [rbp-514h]
  int v26; // [rsp+4Ch] [rbp-50Ch]
  HSTRING *p_string2; // [rsp+50h] [rbp-508h] BYREF
  _QWORD v28[42]; // [rsp+60h] [rbp-4F8h] BYREF
  _QWORD v29[44]; // [rsp+1B0h] [rbp-3A8h] BYREF
  _WORD v30[264]; // [rsp+310h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+558h] [rbp+0h]

  v3 = a2;
  p_string2 = (HSTRING *)a2;
  string2 = a3;
  v5 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 32LL))(*((_QWORD *)this + 13)) )
    return 2147942487LL;
  v7 = CVirtualDesktopManager::AssignWallpaperToDesktop(this, v3, string2);
  v9 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x480,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v7);
    return v9;
  }
  result = 0;
  string1 = 0LL;
  if ( (int)CVirtualDesktopManager::GetCurrentRenderedWallpaperPath(v8, &string1) < 0
    || !string1
    || WindowsCompareStringOrdinal(string1, string2, &result) < 0
    || result )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v28);
    v28[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::`vftable';
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *)v28);
    v21 = 0LL;
    CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(
                               (CVirtualDesktopManager *)((char *)this + 8),
                               (struct IVirtualDesktop **)&v21);
    if ( CurrentDesktopInternal >= 0 )
    {
      if ( !SHIsSameObject(v21, (struct IUnknown *)v3) )
        goto LABEL_21;
      pvParam = 16;
      v25 = 0LL;
      v26 = 0;
      if ( SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0) )
      {
        if ( (v25 & 1) != 0 )
          goto LABEL_21;
      }
      CVirtualDesktopManager::IsSlideShowEnabled();
      LOBYTE(v12) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSpotlightUdk>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_DesktopSpotlightUdk>::GetImpl'::`2'::impl,
        v12);
      try
      {
        winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings::UserProfilePersonalizationSettings((winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings *)&pvParam);
        v13 = (unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View((__int64 *)&pvParam) != 1;
        v18 = v13;
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&pvParam);
      }
      catch ( ... )
      {
        v5 = 0;
        v13 = v18;
        v3 = (struct IVirtualDesktop *)p_string2;
      }
      memset_0(v30, 0, 0x208uLL);
      if ( SystemParametersInfoW(0x73u, 0x104u, v30, 0) )
      {
        if ( !v30[0] )
          goto LABEL_21;
      }
      if ( !v13 )
        goto LABEL_21;
      p_string2 = &string2;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwSotUpdates>::ReportUsage(
        (__int64)&`wil::Feature<__WilFeatureTraits_Feature_VwSotUpdates>::GetImpl'::`2'::impl,
        1u,
        v14,
        v15);
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v29);
      v29[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::`vftable';
      v29[42] = &p_string2;
      CurrentThreadId = GetCurrentThreadId();
      CurrentDesktopInternal = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___(
                                 v17,
                                 CurrentThreadId,
                                 v29);
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::~VirtualDesktopSetWallpaperActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *)v29);
      if ( CurrentDesktopInternal >= 0 )
      {
LABEL_21:
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::Stop(
          (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *)v28,
          v3);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::~VirtualDesktopSetWallpaperActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *)v28);
        goto LABEL_22;
      }
      v11 = 1254LL;
    }
    else
    {
      v11 = 1167LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)CurrentDesktopInternal);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::~VirtualDesktopSetWallpaperActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *)v28);
    v5 = CurrentDesktopInternal;
  }
LABEL_22:
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string1);
  return v5;
}
