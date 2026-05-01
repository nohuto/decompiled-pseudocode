/*
 * XREFs of ?MaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA?AUSize@Foundation@56@XZ @ 0x180363AC0
 * Callers:
 *     ?get_MaximumSize@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAUSize@Foundation@Windows@3@@Z @ 0x180365360 (-get_MaximumSize@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windo.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

_DWORD *__fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::MaximumSize(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v4; // xmm0_8
  RTL_SRWLOCK *v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v6, (RTL_SRWLOCK *)(a1 + 176));
  if ( *(_QWORD *)(a1 + 40) )
  {
    v4 = *(_QWORD *)(a1 + 72);
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 148) )
    {
      *a2 = 0;
      a2[1] = 0;
      goto LABEL_7;
    }
    v4 = *(_QWORD *)(a1 + 140);
  }
  *(_QWORD *)a2 = v4;
LABEL_7:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v6);
  return a2;
}
