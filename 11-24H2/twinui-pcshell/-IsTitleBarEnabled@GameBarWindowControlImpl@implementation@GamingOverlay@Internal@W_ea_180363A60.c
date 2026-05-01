/*
 * XREFs of ?IsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NXZ @ 0x180363A60
 * Callers:
 *     ?get_IsTitleBarEnabled@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180365320 (-get_IsTitleBarEnabled@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetIsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA_NUread_lock_required@wil@@@Z @ 0x18036352C (-GetIsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 */

bool __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsTitleBarEnabled(
        RTL_SRWLOCK *this)
{
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v1; // rbx
  RTL_SRWLOCK *v3; // [rsp+20h] [rbp-18h] BYREF

  v1 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *)this;
  v3 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v3, this + 22);
  LOBYTE(v1) = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GetIsTitleBarEnabled((__int64)v1);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v3);
  return (char)v1;
}
