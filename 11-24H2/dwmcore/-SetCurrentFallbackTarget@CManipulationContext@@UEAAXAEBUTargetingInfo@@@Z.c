/*
 * XREFs of ?SetCurrentFallbackTarget@CManipulationContext@@UEAAXAEBUTargetingInfo@@@Z @ 0x1802130B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CManipulationContext::SetCurrentFallbackTarget(
        CManipulationContext *this,
        CCachedVisualImage **a2,
        __int64 a3)
{
  *((_DWORD *)this + 30) = *(_DWORD *)a2;
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=((CCachedVisualImage **)this + 16, a2 + 1, a3);
}
