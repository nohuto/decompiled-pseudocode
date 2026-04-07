/*
 * XREFs of ??$from_com_ref@AEBUITransitionState@Transitions@Udwm@winrt@@@?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@winrt@@AEAAXAEBUITransitionState@Transitions@Udwm@1@@Z @ 0x1800F89D4
 * Callers:
 *     ?PostTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F94D8 (-PostTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E160 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D84DC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::weak_ref<winrt::Udwm::Transitions::ITransitionState>::from_com_ref<winrt::Udwm::Transitions::ITransitionState const &>(
        __int64 *a1,
        void (__fastcall ****a2)(_QWORD, __int64 *, __int64 *))
{
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rsi
  signed int v6; // eax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = *a2;
  if ( *a2 )
  {
    v7 = 0LL;
    (**v3)(v3, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>, &v7);
    v4 = v7;
    v8 = v7;
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 24LL);
    if ( *a1 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a1);
    v6 = v5(v4, a1);
    if ( v6 < 0 )
      winrt::throw_hresult(v6);
    if ( v4 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v8);
  }
}
