/*
 * XREFs of ?GetRuntimeClassName@?$produce_base@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800ED5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper,void>::GetRuntimeClassName(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = a1 + 8;
  if ( !a1 )
    v1 = 16LL;
  return winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>::NonDelegatingGetRuntimeClassName(v1);
}
