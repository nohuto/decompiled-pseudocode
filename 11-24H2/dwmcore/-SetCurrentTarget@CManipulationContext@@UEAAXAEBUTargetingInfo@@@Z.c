/*
 * XREFs of ?SetCurrentTarget@CManipulationContext@@UEAAXAEBUTargetingInfo@@@Z @ 0x180215690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CManipulationContext::SetCurrentTarget(CManipulationContext *this, CCachedVisualImage **a2, __int64 a3)
{
  *((_DWORD *)this + 26) = *(_DWORD *)a2;
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=((CCachedVisualImage **)this + 14, a2 + 1, a3);
}
