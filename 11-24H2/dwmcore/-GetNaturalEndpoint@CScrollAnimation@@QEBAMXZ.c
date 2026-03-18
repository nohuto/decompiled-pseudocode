/*
 * XREFs of ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1800DF6C0
 * Callers:
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x1800DED50 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1800DF384 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 * Callees:
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800E42A8 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CScrollAnimation::GetNaturalEndpoint(CScrollAnimation *this)
{
  __int64 v2; // rax
  double CurrentValue; // xmm0_8
  struct CInteractionTracker *InteractionTracker; // rax

  v2 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 312LL))(this);
  if ( *(_DWORD *)(v2 + 40) == 2 )
  {
    LODWORD(CurrentValue) = *(_DWORD *)(v2 + 84);
  }
  else
  {
    InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
    CurrentValue = CInteractionTracker::GetCurrentValue(InteractionTracker, *((unsigned int *)this + 81));
  }
  return *(float *)&CurrentValue;
}
