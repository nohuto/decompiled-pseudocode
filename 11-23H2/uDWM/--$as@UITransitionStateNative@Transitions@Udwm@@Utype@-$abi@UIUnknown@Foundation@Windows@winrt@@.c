/*
 * XREFs of ??$as@UITransitionStateNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionStateNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18006EC98
 * Callers:
 *     ?UpdateScene@?$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x180016E20 (-UpdateScene@-$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transit.c)
 *     ?CapturePreRotationVisuals@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4974 (-CapturePreRotationVisuals@ScreenRotationResponsiveTransitionHandler@implementation@Private@Tran.c)
 *     ?DrawBackground@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4D40 (-DrawBackground@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udw.c)
 *     ?StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F59E8 (-StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transition.c)
 *     ?StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5EF0 (-StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitio.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D84DC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<Udwm::Transitions::ITransitionStateNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64 *, __int64 *))
{
  int v3; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = (**a2)(a2, &winrt::impl::guid_v<Udwm::Transitions::ITransitionStateNative>, &v5);
    if ( v3 < 0 )
      winrt::throw_hresult((unsigned int)v3);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
