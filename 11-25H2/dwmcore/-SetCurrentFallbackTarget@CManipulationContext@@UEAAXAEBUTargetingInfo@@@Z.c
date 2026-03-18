/*
 * XREFs of ?SetCurrentFallbackTarget@CManipulationContext@@UEAAXAEBUTargetingInfo@@@Z @ 0x18021E650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CManipulationContext::SetCurrentFallbackTarget(CManipulationContext *this, CResource **a2)
{
  *((_DWORD *)this + 30) = *(_DWORD *)a2;
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=((CResource **)this + 16, a2 + 1);
}
