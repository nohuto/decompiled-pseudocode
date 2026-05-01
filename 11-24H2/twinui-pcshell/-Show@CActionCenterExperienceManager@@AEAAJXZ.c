/*
 * XREFs of ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x18036FF20
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800E6C60 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x18036E3A0 (-HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windo.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1803702A0 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180370C80 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 *     ?put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z @ 0x180372200 (-put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18003E340 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18004F72C (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1800AF724 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B3FB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x1801145C4 (--$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801A7628 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Current@ViewCoordinator@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801D65E8 (-Current@ViewCoordinator@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ?SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z @ 0x180206294 (-SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180293110 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??1?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@QEAA@XZ @ 0x18036C070 (--1-$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIViewCoordinator.c)
 *     ??1?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@XZ @ 0x18036C0CC (--1-$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@XZ.c)
 *     _lambda_447b2046ef5222f08cb9a5e113edf53b_::operator_void_(__cdecl_)(_TP_CALLBACK_INSTANCE___void____TP_TIMER__) @ 0x18036C400 (_lambda_447b2046ef5222f08cb9a5e113edf53b_--operator_void_(__cdecl_)(_TP_CALLBACK_INSTANCE___void.c)
 *     ?ActionCenterLaunchSkippedDueToDeviceLockdown@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18036C858 (-ActionCenterLaunchSkippedDueToDeviceLockdown@NotificationCenterTelemetry@NotificationCenterUITe.c)
 *     ?ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18036C8AC (-ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?ActionCenterLaunchSkippedDueToShellNotReady@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18036C900 (-ActionCenterLaunchSkippedDueToShellNotReady@NotificationCenterTelemetry@NotificationCenterUITel.c)
 *     ?HideViewRequested@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x18036E340 (-HideViewRequested@-$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator_ea_18036E340.c)
 *     ?IsNotificationCenterDisabledByPolicy@CActionCenterExperienceManager@@AEAA_NXZ @ 0x18036E6E4 (-IsNotificationCenterDisabledByPolicy@CActionCenterExperienceManager@@AEAA_NXZ.c)
 *     ?revoke@?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ @ 0x180372308 (-revoke@-$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall CActionCenterExperienceManager::Show(CActionCenterExperienceManager *this)
{
  __int64 v2; // rcx
  void (__fastcall *v4)(__int64, struct IUnknown *); // rax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // esi
  char *v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // r8
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // esi
  int v18; // eax
  unsigned int v19; // edi
  __int64 v20; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v22; // [rsp+48h] [rbp-30h] BYREF
  __int64 (__fastcall *v23)(__int64); // [rsp+50h] [rbp-28h]
  __int64 v24; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v26; // [rsp+88h] [rbp+10h] BYREF
  __int64 *v27; // [rsp+90h] [rbp+18h] BYREF
  __int64 *v28; // [rsp+98h] [rbp+20h] BYREF

  if ( *((_DWORD *)this + 42) == 2 )
    return 0LL;
  if ( CActionCenterExperienceManager::IsNotificationCenterDisabledByPolicy(this) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToPolicy(v2);
    return 2147943660LL;
  }
  if ( *((_BYTE *)this + 688) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToDeviceLockdown(v2);
    return 2147943660LL;
  }
  if ( !*((_BYTE *)this + 420) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToShellNotReady(v2);
    return 2147549183LL;
  }
  if ( !*((_QWORD *)this + 77) )
  {
    v4 = lambda_447b2046ef5222f08cb9a5e113edf53b_::operator_void____cdecl____TP_CALLBACK_INSTANCE___void____TP_TIMER___();
    ThreadpoolTimer = CreateThreadpoolTimer((PTP_TIMER_CALLBACK)v4, this, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 77,
      ThreadpoolTimer);
    ThreadpoolHelpers::SetRelativeThreadpoolTimerInMilliseconds(
      *((ThreadpoolHelpers **)this + 77),
      (struct _TP_TIMER *)0x2710,
      0);
  }
  winrt::WindowsUdk::UI::Shell::ViewCoordinator::Current(&v27);
  v26 = 0LL;
  v28 = &v26;
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v28);
  v7 = Microsoft::WRL::AsWeak<CActionCenterExperienceManager>(this, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v27);
    return v8;
  }
  v20 = v26;
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  v9 = (char *)operator new(0x20uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v9 + 8));
  v10[2] = (__int64)this;
  v10[3] = 0LL;
  if ( v10 + 3 != &v20 )
  {
    v10[3] = v20;
    v20 = 0LL;
  }
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v10 = (__int64)off_180731DB8;
  v28 = v10;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  v12 = winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinator<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::HideViewRequested(
          &v27,
          v21,
          v11,
          (__int64 *)&v28);
  v13 = v12[1];
  v14 = *v12;
  *v12 = 0LL;
  v22 = v14;
  v23 =  ISwitchItemController::`vcall'{112,{flat}};
  v24 = v13;
  if ( (__int64 *)((char *)this + 696) != &v22 )
  {
    winrt::event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::revoke((char *)this + 696);
    winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)this + 87, &v22);
    *((_QWORD *)this + 88) = v23;
    *((_QWORD *)this + 89) = v24;
  }
  winrt::event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::~event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>(&v22);
  __1__event_revoker_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__QEAA_XZ(v21);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v28);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v27);
  if ( *((_QWORD *)this + 19) )
  {
    v15 = CActionCenterExperienceManager::RaisePropertyChangedEvent(this, L"SuppressAnimations", *((_BYTE *)this + 368));
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3C4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
    v16 = CActionCenterExperienceManager::PositionView(this);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C5,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
      return v17;
    }
  }
  v18 = CSingleViewShellExperience::Show((__int64)this + 128, 0LL);
  v19 = v18;
  if ( v18 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3C8,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v18);
  return v19;
}
