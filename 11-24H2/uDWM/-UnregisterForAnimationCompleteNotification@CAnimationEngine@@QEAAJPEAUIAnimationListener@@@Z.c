/*
 * XREFs of ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x18005373C
 * Callers:
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x18003FDE4 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004C724 (-StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?OnAnimationComplete@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAAJI@Z @ 0x1800536D0 (-OnAnimationComplete@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAA.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x1800A19EC (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800BD69C (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800DA540 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 *     ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x1800DD9E0 (-OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationEngine::UnregisterForAnimationCompleteNotification(
        CAnimationEngine *this,
        struct IAnimationListener *a2)
{
  __int64 i; // rax
  __int64 v5; // r8

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 24); i = (unsigned int)(i + 1) )
  {
    v5 = *((_QWORD *)this + 9);
    if ( *(struct IAnimationListener **)(v5 + 8 * i) == a2 )
      *(_QWORD *)(v5 + 8 * i) = 0LL;
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
