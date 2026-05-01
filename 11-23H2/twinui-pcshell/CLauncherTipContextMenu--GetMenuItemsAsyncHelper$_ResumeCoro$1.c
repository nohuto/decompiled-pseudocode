/*
 * XREFs of CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180257360
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_InitCoro$2 @ 0x180257238 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_InitCoro$2.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x180072C04 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienc.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHost@@_N@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHost@@_N@experimental@std@@@experimental@std@@@Z @ 0x180073D88 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHo.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180095B64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800B3E54 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x1800DB690 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180114C48 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShe.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@IG@Z @ 0x1801541DC (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHI.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA@XZ @ 0x1801AA480 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ra.c)
 *     ?await_ready@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x1801B0E64 (-await_ready@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$rat.c)
 *     ?resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1801B2828 (-resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ?await_resume@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@XZ @ 0x1801B3360 (-await_resume@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ??1awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x1801B7C64 (--1awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180234F54 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVCLauncherTipContextMenu@@UtagRECT@@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1802E7674 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IVectorView.c)
 *     ??1?$vector@UMenuItem@UI@WindowsUdk@winrt@@@param@winrt@@QEAA@XZ @ 0x1802E8DC8 (--1-$vector@UMenuItem@UI@WindowsUdk@winrt@@@param@winrt@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVCLauncherTipContextMenu@@@Z @ 0x1802EA22A (--0-$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVCLauncherTipC.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x180523C1C (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ??1promise_type@?$coroutine_traits@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@PEAVJointResize@@@experimental@std@@UEAA@XZ @ 0x1805E167C (--1promise_type@-$coroutine_traits@U-$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@.c)
 *     ??$await_transform@AEAUapartment_context@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVCVirtualDesktopManager@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_PAEAUapartment_context@2@@Z @ 0x1805FE518 (--$await_transform@AEAUapartment_context@winrt@@@-$promise_base@Upromise_type@-$coroutine_traits.c)
 *     ??$await_transform@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAUawaitable@?1??resume_on_signal@2@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@Z @ 0x1806AAC7C (--$await_transform@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$r_ea_1806AAC7C.c)
 *     ?return_value@promise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@34@AEAUMeetAndChatFallbackContent@7834@@experimental@std@@QEAAX$$QEAU?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Z @ 0x1806C8F64 (-return_value@promise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IVectorView@UMeetAndChatFall.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs_::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_190ccd1a8be9aac816201cee4203407b___ @ 0x1806C9498 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--MenuItem_winrt--WindowsUdk-.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs_::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_d6b4118795ae303e935bbd5b6ca0014f___ @ 0x1806C9500 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--MenuItem_winrt_ea_1806C9500.c)
 *     ??$single_threaded_vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@winrt@@YA?AU?$IVector@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@0@$$QEAV?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@@Z @ 0x1806CB4E4 (--$single_threaded_vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@wi.c)
 *     _lambda_190ccd1a8be9aac816201cee4203407b_::_lambda_190ccd1a8be9aac816201cee4203407b_ @ 0x1806CB504 (_lambda_190ccd1a8be9aac816201cee4203407b_--_lambda_190ccd1a8be9aac816201cee4203407b_.c)
 *     _lambda_d6b4118795ae303e935bbd5b6ca0014f_::_lambda_d6b4118795ae303e935bbd5b6ca0014f_ @ 0x1806CB5F4 (_lambda_d6b4118795ae303e935bbd5b6ca0014f_--_lambda_d6b4118795ae303e935bbd5b6ca0014f_.c)
 *     ??0?$vector@UMenuItem@UI@WindowsUdk@winrt@@@param@winrt@@QEAA@AEBU?$IVector@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@2@@Z @ 0x1806CB7CC (--0-$vector@UMenuItem@UI@WindowsUdk@winrt@@@param@winrt@@QEAA@AEBU-$IVector@UMenuItem@UI@Windows.c)
 *     ??1?$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1806CBA00 (--1-$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateCommand@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU?$TypedEventHandler@UMenuItem@UI@WindowsUdk@winrt@@UMenuItemInvokedArgs@234@@Foundation@Windows@4@@Z @ 0x1806CCCA0 (-CreateCommand@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU-$.c)
 *     ?CreateContainer@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU?$vector@UMenuItem@UI@WindowsUdk@winrt@@@64@@Z @ 0x1806CCDBC (-CreateContainer@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU.c)
 *     ?CreateSeparator@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@@Z @ 0x1806CCEA8 (-CreateSeparator@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@@Z.c)
 *     ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x1806DE264 (-_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z.c)
 *     ?_EnumerateAndBuildShutdownMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806DF168 (-_EnumerateAndBuildShutdownMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_Tidy@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXXZ @ 0x1806DFB0C (-_Tidy@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVCLauncherTipContextMenu@@UtagRECT@@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1806DFB90 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1806DFB90.c)
 *     ?push_back@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@QEAAX$$QEAUMenuItem@UI@WindowsUdk@winrt@@@Z @ 0x1806E00B4 (-push_back@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@.c)
 */

// Hidden C++ exception states: #wind=22 #try_helpers=1
void __fastcall CLauncherTipContextMenu::GetMenuItemsAsyncHelper__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // r14
  _WORD *v2; // r12
  __int64 *v3; // rsi
  __int64 v4; // rdi
  struct tagPOINT *v5; // rdx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r9
  PVOID *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rsi
  struct _RTL_CRITICAL_SECTION **v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 i; // rsi
  __int64 v18; // r13
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 Separator; // rax
  unsigned __int16 v23; // r9
  __int64 v24; // rax
  __int64 Command; // rdx
  __int64 v26; // rdi
  unsigned __int64 j; // r13
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 Container; // rdx
  const char *v33; // r9
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 View; // rax
  __int64 v37; // rax
  __int64 v38; // [rsp+38h] [rbp-140h]
  __int64 v39; // [rsp+48h] [rbp-130h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]
  bool v42; // [rsp+188h] [rbp+10h]
  __int64 v43; // [rsp+190h] [rbp+18h]
  _WORD *v44; // [rsp+198h] [rbp+20h]

  v1 = a1;
  v2 = (_WORD *)(a1 + 8);
  v44 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_34;
    case 2:
      v3 = *(__int64 **)(a1 + 769);
      wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(
        a1 + 16,
        v3);
      v4 = v1 + 24;
      winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)(v1 + 24));
      v6 = CLauncherTipContextMenu::_EnsureMenu((CLauncherTipContextMenu *)v3, v5);
      *(_QWORD *)(v1 + 752) = v1 - 112;
      if ( v6 != -2147483638 )
        goto LABEL_7;
      v7 = winrt::resume_on_signal(v1 + 40, v3[44], 0LL);
      v9 = (PVOID *)___await_transform_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z____promise_base_Upromise_type___coroutine_traits_U__IAsyncOperation_U__IReference__N_Foundation_Windows_winrt___Foundation_Windows_winrt__AEBVPinConsentPromptContent___experimental_std__U__IAsyncOperation_U__IReference__N_Foundation_Windows_winrt___Foundation_Windows_winrt__X_impl_winrt__QEAA_A_P__QEAUawaitable__1__resume_on_signal_2_YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__Z(
                      v8,
                      v1 + 96,
                      v7);
      *(_QWORD *)(v1 + 720) = v9;
      if ( _await_ready___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ((__int64)v9) )
      {
LABEL_6:
        _await_resume___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_XZ(*(__int64 **)(v1 + 720));
        `winrt::resume_on_signal'::`2'::awaitable::~awaitable(v1 + 40);
        v4 = v1 + 24;
LABEL_7:
        v10 = *(_QWORD *)(v1 + 752);
        *(_QWORD *)(v1 + 736) = v10;
        v11 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,CVirtualDesktopManager *,IVirtualDesktop *,enum VirtualDesktopSwitchType>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<winrt::apartment_context &>(
                v10,
                v1 + 104,
                v4);
        *(_QWORD *)(v1 + 352) = v11;
        if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
        {
LABEL_10:
          winrt::impl::notify_awaiter<winrt::apartment_context &>::await_resume(*(_QWORD *)(v1 + 352));
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(v1 + 104));
          v12 = v1 + 128;
          v39 = v1 + 128;
          *(_QWORD *)(v1 + 128) = 0LL;
          *(_QWORD *)(v1 + 136) = 0LL;
          *(_QWORD *)(v1 + 144) = 0LL;
          v13 = *(_QWORD *)(v1 + 769);
          v14 = (struct _RTL_CRITICAL_SECTION **)(v1 + 152);
          wil::EnterCriticalSection(
            (struct _RTL_CRITICAL_SECTION **)(v1 + 152),
            (struct _RTL_CRITICAL_SECTION *)(v13 + 240));
          try
          {
            CLauncherTipContextMenu::_EnumerateAndBuildShutdownMenu((CLauncherTipContextMenu *)v13);
            if ( *(_BYTE *)(v13 + 320) )
            {
              v42 = 0;
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
                `wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetImpl'::`2'::impl,
                1u,
                v15,
                v16);
              *(_QWORD *)(v1 + 160) = 0LL;
              Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)(v1 + 160));
              if ( SHGetKnownFolderItem(
                     &FOLDERID_LocalAppData,
                     KF_FLAG_DEFAULT,
                     0LL,
                     &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                     (void **)(v1 + 160)) >= 0 )
              {
                *(_QWORD *)(v1 + 168) = 0LL;
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)(v1 + 168));
                v42 = SHCreateItemFromRelativeName(
                        *(IShellItem **)(v1 + 160),
                        L"Microsoft\\WindowsApps\\wt.exe",
                        0LL,
                        &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                        (void **)(v1 + 168)) >= 0;
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)(v1 + 168));
              }
              Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)(v1 + 160));
              for ( i = *(_QWORD *)(v13 + 184); ; --i )
              {
                v43 = i;
                if ( !i )
                  break;
                v18 = *(_QWORD *)(v1 + 769);
                v19 = *(_QWORD *)(*(_QWORD *)(v18 + 176) + 8 * i - 8);
                *(_QWORD *)(v1 + 176) = v19;
                Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v1 + 176));
                wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
                  `wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetImpl'::`2'::impl,
                  1u,
                  v20,
                  v21);
                if ( ((*(_DWORD *)(v19 + 112) & 0x800) == 0 || v42) && ((*(_DWORD *)(v19 + 112) & 0x100) == 0 || !v42) )
                {
                  if ( *(_BYTE *)(v19 + 8) )
                  {
                    winrt::param::hstring::hstring((winrt::param::hstring *)(v1 + 184), &LocaleName);
                    Separator = winrt::WindowsUdk::UI::MenuItem::CreateSeparator((const struct winrt::param::hstring *)(v1 + 216));
                    std::vector<winrt::WindowsUdk::UI::MenuItem>::push_back(v1 + 128, Separator);
                    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(v1 + 216));
                  }
                  else
                  {
                    v24 = lambda_d6b4118795ae303e935bbd5b6ca0014f_::_lambda_d6b4118795ae303e935bbd5b6ca0014f_(
                            (int)v1 + 232,
                            v18,
                            (int)v1 + 16,
                            (int)v1 + 176,
                            v1 + 24);
                    winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs_::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_d6b4118795ae303e935bbd5b6ca0014f___(
                      v1 + 224,
                      v24);
                    *(_QWORD *)(v1 + 272) = 0LL;
                    winrt::param::hstring::hstring(
                      (winrt::param::hstring *)(v1 + 280),
                      *(const unsigned __int16 **)(v19 + 16));
                    winrt::param::hstring::hstring((winrt::param::hstring *)(v1 + 312), &LocaleName);
                    Command = winrt::WindowsUdk::UI::MenuItem::CreateCommand(
                                (int)v1 + 368,
                                (int)v1 + 312,
                                (int)v1 + 280,
                                (int)v1 + 272,
                                v1 + 224);
                    std::vector<winrt::WindowsUdk::UI::MenuItem>::push_back(v1 + 128, Command);
                    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(v1 + 368));
                    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(v1 + 272));
                    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(v1 + 224));
                  }
                  if ( i == 2 )
                  {
                    v26 = v1 + 376;
                    *(_QWORD *)(v1 + 376) = 0LL;
                    *(_QWORD *)(v1 + 384) = 0LL;
                    *(_QWORD *)(v1 + 392) = 0LL;
                    for ( j = 0LL; ; ++j )
                    {
                      v28 = *(_QWORD *)(v1 + 769);
                      if ( j >= *(_QWORD *)(v28 + 216) )
                        break;
                      v38 = *(_QWORD *)(*(_QWORD *)(v28 + 208) + 8 * j);
                      *(_QWORD *)(v1 + 400) = v38;
                      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v1 + 400));
                      v29 = lambda_190ccd1a8be9aac816201cee4203407b_::_lambda_190ccd1a8be9aac816201cee4203407b_(
                              (int)v1 + 416,
                              v28,
                              (int)v1 + 16,
                              (int)v1 + 400,
                              v1 + 777,
                              v1 + 24);
                      winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs_::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_190ccd1a8be9aac816201cee4203407b___(
                        v1 + 408,
                        v29);
                      *(_QWORD *)(v1 + 472) = 0LL;
                      winrt::param::hstring::hstring(
                        (winrt::param::hstring *)(v1 + 480),
                        *(const unsigned __int16 **)(v38 + 16));
                      winrt::param::hstring::hstring((winrt::param::hstring *)(v1 + 512), &LocaleName);
                      v30 = winrt::WindowsUdk::UI::MenuItem::CreateCommand(
                              (int)v1 + 544,
                              (int)v1 + 512,
                              (int)v1 + 480,
                              (int)v1 + 472,
                              v1 + 408);
                      v26 = v1 + 376;
                      std::vector<winrt::WindowsUdk::UI::MenuItem>::push_back(v1 + 376, v30);
                      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(v1 + 544));
                      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(v1 + 472));
                      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(v1 + 408));
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v1 + 400));
                    }
                    *(_QWORD *)(v1 + 552) = 0LL;
                    *(_QWORD *)(v1 + 560) = 0LL;
                    *(_QWORD *)(v1 + 568) = 0LL;
                    if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
                                v1 + 552,
                                &_ImageBase,
                                0x2AB2u,
                                v23) >= 0 )
                    {
                      v31 = winrt::single_threaded_vector<winrt::WindowsUdk::UI::MenuItem,std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
                              v1 + 592,
                              v26);
                      winrt::param::vector<winrt::WindowsUdk::UI::MenuItem>::vector<winrt::WindowsUdk::UI::MenuItem>(
                        v1 + 576,
                        v31);
                      *(_QWORD *)(v1 + 600) = 0LL;
                      winrt::param::hstring::hstring(
                        (winrt::param::hstring *)(v1 + 608),
                        *(const unsigned __int16 **)(v1 + 552));
                      winrt::param::hstring::hstring((winrt::param::hstring *)(v1 + 640), &LocaleName);
                      Container = winrt::WindowsUdk::UI::MenuItem::CreateContainer(
                                    (int)v1 + 672,
                                    (int)v1 + 640,
                                    (int)v1 + 608,
                                    (int)v1 + 600,
                                    v1 + 576);
                      std::vector<winrt::WindowsUdk::UI::MenuItem>::push_back(v1 + 128, Container);
                      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(v1 + 672));
                      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(v1 + 600));
                      winrt::param::vector<winrt::WindowsUdk::UI::MenuItem>::~vector<winrt::WindowsUdk::UI::MenuItem>(v1 + 576);
                      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(v1 + 592));
                      v26 = v1 + 376;
                    }
                    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v1 + 552);
                    std::vector<winrt::WindowsUdk::UI::MenuItem>::_Tidy(v26);
                    i = v43;
                  }
                }
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v1 + 176));
              }
              v14 = (struct _RTL_CRITICAL_SECTION **)(v1 + 152);
            }
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v14);
          }
          catch ( ... )
          {
            wil::details::in1diag3::Log_CaughtException(
              retaddr,
              (void *)0x71B,
              (unsigned int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
              v33);
            v1 = a1;
            v12 = v39;
            v2 = v44;
          }
          v34 = *(_QWORD *)(v1 + 736);
          v35 = winrt::single_threaded_vector<winrt::WindowsUdk::UI::MenuItem,std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
                  v1 + 680,
                  v12);
          View = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
                   v35,
                   v1 + 688);
          std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,winrt::Windows::Internal::Shell::MeetAndChatFallbackContent &>::promise_type::return_value(
            v34,
            View);
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(v1 + 688));
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(v1 + 680));
          std::vector<winrt::WindowsUdk::UI::MenuItem>::_Tidy(v12);
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(v1 + 24));
          wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::~com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(v1 + 16);
          v37 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,CLauncherTipContextMenu *,tagRECT>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,void>::final_suspend(
                  v34,
                  v1 + 704);
          *(_QWORD *)(v1 + 696) = v37;
          *v2 = 0;
          if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,CLauncherTipContextMenu *,tagRECT>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,void>::final_suspend_awaiter::await_suspend(v37) )
          {
LABEL_34:
            *(_QWORD *)(v1 + 752) = v1 - 112;
            std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,JointResize *>::promise_type::~promise_type(v1 - 112);
            if ( *(_WORD *)(v1 + 10) )
              operator delete((void *)(v1 - 112));
          }
        }
        else
        {
          *v2 = 6;
          winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CJumpViewExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type>(
            v11,
            v1);
        }
      }
      else
      {
        *v2 = 4;
        ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVTouchEdgeGripperHost___N_experimental_std_____notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVTouchEdgeGripperHost___N_experimental_std___experimental_std___Z(v9);
      }
      return;
    case 4:
      goto LABEL_6;
    case 5:
      `winrt::resume_on_signal'::`2'::awaitable::~awaitable(a1 + 40);
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(v1 + 24));
      wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::~com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(v1 + 16);
      goto LABEL_34;
    case 6:
      goto LABEL_10;
    case 7:
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 104));
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(v1 + 24));
      wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::~com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(v1 + 16);
      goto LABEL_34;
    default:
      __debugbreak();
      return;
  }
}
