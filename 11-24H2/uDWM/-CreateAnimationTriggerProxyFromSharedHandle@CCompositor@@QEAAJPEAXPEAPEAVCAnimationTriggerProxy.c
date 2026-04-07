/*
 * XREFs of ?CreateAnimationTriggerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x18009B398
 * Callers:
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180059618 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x180059D44 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateAnimationTriggerProxyFromSharedHandle(__int64 this, void *a2, CBaseObject **a3)
{
  return CCompositor::CreateProxyFromSharedHandle<CAnimationTriggerProxy>(this, a2, a3);
}
