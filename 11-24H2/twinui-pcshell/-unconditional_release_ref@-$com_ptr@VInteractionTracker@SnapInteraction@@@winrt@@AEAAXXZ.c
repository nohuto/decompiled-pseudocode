/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@VInteractionTracker@SnapInteraction@@@winrt@@AEAAXXZ @ 0x1805A9960
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_ee45b6845675de9c207e4cdce24e0e3d___::Invoke @ 0x180214420 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_ee45b684567.c)
 *     ??1?$com_ptr@VInteractionTracker@SnapInteraction@@@winrt@@QEAA@XZ @ 0x1802CED94 (--1-$com_ptr@VInteractionTracker@SnapInteraction@@@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@impl@winrt@@IEAAIXZ @ 0x180102400 (-subtract_final_reference@-$root_implements@UTabProxyWindow@implementation@Shell@Internal@Window.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::com_ptr<SnapInteraction::InteractionTracker>::unconditional_release_ref(__int64 *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rbx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  v2 = (_QWORD *)(v1 + 24);
  result = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::subtract_final_reference((__int64)v2);
  if ( !(_DWORD)result )
  {
    v2[1] = 1LL;
    if ( v2 )
      return (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 8LL))(v2);
  }
  return result;
}
