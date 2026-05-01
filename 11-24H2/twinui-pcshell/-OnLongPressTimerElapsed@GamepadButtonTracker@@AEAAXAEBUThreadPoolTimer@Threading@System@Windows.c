/*
 * XREFs of ?OnLongPressTimerElapsed@GamepadButtonTracker@@AEAAXAEBUThreadPoolTimer@Threading@System@Windows@winrt@@@Z @ 0x18036AD70
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052164 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1801E5828 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??R?$_Func_class@XAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@std@@QEBAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z @ 0x18036A454 (--R-$_Func_class@XAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@std@@QEBAXAEBUAPP_LOCAL_DE.c)
 *     ?CreateRumbleEffect@GamepadButtonTracker@@AEAAXUread_lock_required@wil@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x18036A680 (-CreateRumbleEffect@GamepadButtonTracker@@AEAAXUread_lock_required@wil@@V-$duration@_JU-$ratio@$.c)
 *     ?CreateRumbleEffectXInput@GamepadButtonTracker@@AEAAXUread_lock_required@wil@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x18036A718 (-CreateRumbleEffectXInput@GamepadButtonTracker@@AEAAXUread_lock_required@wil@@V-$duration@_JU-$r.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_LongPressRumble@@@details@wil@@QEAA_NXZ @ 0x18036B020 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_LongPressRumble@@@details.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GamepadButtonTracker::OnLongPressTimerElapsed(
        GamepadButtonTracker *this,
        const struct winrt::Windows::System::Threading::ThreadPoolTimer *a2)
{
  bool v3; // di
  __int64 v4; // rdx
  __int64 v5; // r8
  RTL_SRWLOCK *v6; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v7; // [rsp+28h] [rbp-20h] BYREF

  v7 = 0LL;
  wil::AcquireSRWLockExclusive(&v7, (RTL_SRWLOCK *)this);
  v3 = 0;
  if ( *((_BYTE *)this + 120) )
    v3 = *((_BYTE *)this + 24) != 0;
  if ( *((_QWORD *)this + 1) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)this + 1);
    v6 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 1, (__int64 *)&v6);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  }
  *((_BYTE *)this + 24) = 0;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
    &v7,
    0LL);
  if ( v3 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_LongPressRumble>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_LongPressRumble>::GetImpl'::`2'::impl) )
    {
      v6 = 0LL;
      Microsoft::WRL::Wrappers::SRWLock::LockShared(&v6, (RTL_SRWLOCK *)this);
      v5 = *((_QWORD *)this + 6);
      if ( *((_QWORD *)this + 17) )
        GamepadButtonTracker::CreateRumbleEffect((__int64)this, v4, v5);
      else
        GamepadButtonTracker::CreateRumbleEffectXInput((__int64)this, v4, v5);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v6);
    }
    std::_Func_class<void,APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind>::operator()(
      (__int64)this + 56,
      (__int64)this + 144,
      1);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
}
