/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UIAnimationsTransitionManager@7345@UITransitionManagerNativePrivate@34@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800FDC60
 * Callers:
 *     ?GetIids@?$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UIAnimationsTransitionManager@7345@UITransitionManagerNativePrivate@34@@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800FD220 (-GetIids@-$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotation.c)
 * Callees:
 *     WINRT_IMPL_CoTaskMemAlloc @ 0x18005E075 (WINRT_IMPL_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x180066224 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>::NonDelegatingGetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  unsigned int v5; // eax
  void *v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-18h] BYREF
  void *Src; // [rsp+28h] [rbp-10h]

  if ( !a1 )
    a1 = 40LL;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 32LL))(a1, &v8);
  v5 = v8;
  if ( v8 )
  {
    *a2 = v8;
    v6 = WINRT_IMPL_CoTaskMemAlloc(16LL * v5);
    *a3 = v6;
    if ( !v6 )
      return 2147942414LL;
    memmove_0(v6, Src, 16LL * v8);
  }
  else
  {
    *a2 = 0;
    *a3 = 0LL;
  }
  return 0LL;
}
