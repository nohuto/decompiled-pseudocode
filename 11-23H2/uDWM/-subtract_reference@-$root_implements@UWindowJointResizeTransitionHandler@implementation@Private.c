/*
 * XREFs of ?subtract_reference@?$root_implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@impl@winrt@@IEAAIXZ @ 0x18001EBA0
 * Callers:
 *     ?Release@?$produce_base@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@X@impl@winrt@@UEAAIXZ @ 0x18001EB60 (-Release@-$produce_base@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@.c)
 *     ?Release@?$implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@winrt@@UEAAKXZ @ 0x18001EBD0 (-Release@-$implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udw.c)
 *     ??1WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F7128 (--1WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x1800F83EC (-unconditional_release_ref@-$com_ptr@UWindowMaximizeSnapTransitionHandler@implementation@Private.c)
 *     ??1?$WindowJointResizeTransitionHandler_base@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UIBitmapManager@45@@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F8B74 (--1-$WindowJointResizeTransitionHandler_base@UWindowJointResizeTransitionHandler@implementation@.c)
 *     ??1WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F8D68 (--1WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>::subtract_reference(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 8);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v1 - 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return winrt::impl::weak_ref<1,1>::decrement_strong(2 * v1);
}
