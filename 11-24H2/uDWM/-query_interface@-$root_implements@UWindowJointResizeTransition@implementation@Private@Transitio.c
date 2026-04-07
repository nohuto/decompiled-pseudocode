/*
 * XREFs of ?query_interface@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18008F85C
 * Callers:
 *     ?QueryInterface@?$implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009A7A0 (-QueryInterface@-$implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udw.c)
 * Callees:
 *     ?NonDelegatingAddRef@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@IEAAIXZ @ 0x18004E2DC (-NonDelegatingAddRef@-$root_implements@UWindowJointResizeTransition@implementation@Private@Trans.c)
 *     ?query_interface_common@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800E62B8 (-query_interface_common@-$root_implements@UWindowJointResizeTransition@implementation@Private@Tr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>::query_interface(
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
    return winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>::query_interface_common(
             v3,
             a2,
             a3);
  winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>::NonDelegatingAddRef(v3);
  return 0LL;
}
