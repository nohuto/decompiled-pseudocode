/*
 * XREFs of ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1800F07F4
 * Callers:
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1800F03AC (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1800F097C (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ??0CBaseExpression@@IEAA@PEAVCComposition@@@Z @ 0x1800F08A0 (--0CBaseExpression@@IEAA@PEAVCComposition@@@Z.c)
 */

CScrollAnimation *__fastcall CScrollAnimation::CScrollAnimation(CScrollAnimation *this, struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CScrollAnimation::`vftable';
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = 0;
  return this;
}
