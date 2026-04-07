/*
 * XREFs of ?query_interface@?$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18008F8C4
 * Callers:
 *     ?QueryInterface@?$implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009A790 (-QueryInterface@-$implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U13.c)
 * Callees:
 *     ?AddRef@?$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@QEAAIXZ @ 0x180095258 (-AddRef@-$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@.c)
 *     ?query_interface_common@?$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800E6884 (-query_interface_common@-$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Ud.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>::query_interface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax

  v3 = a1;
  if ( !a1 )
    a1 = 16LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  *a3 = v6;
  if ( !v6 )
    return winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>::query_interface_common(
             v3,
             a2,
             a3);
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>::AddRef(v3);
  return 0LL;
}
