/*
 * XREFs of ??0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x1800F13C8
 * Callers:
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x180237A34 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 * Callees:
 *     ??0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x1800F1434 (--0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 *     ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1800F3174 (-GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 */

CScrollPositionKeyframeAnimation *__fastcall CScrollPositionKeyframeAnimation::CScrollPositionKeyframeAnimation(
        CScrollPositionKeyframeAnimation *this,
        struct CComposition *a2,
        struct CInteractionTracker *a3)
{
  float ActiveManipulationDelta; // xmm0_4
  CScrollPositionKeyframeAnimation *result; // rax

  CScrollKeyframeAnimation::CScrollKeyframeAnimation(this, a2, a3);
  *(_QWORD *)this = &CScrollPositionKeyframeAnimation::`vftable';
  *((float *)this + 180) = InteractionSourceManager::GetActiveManipulationDelta((char *)a3 + 208, 0LL);
  ActiveManipulationDelta = InteractionSourceManager::GetActiveManipulationDelta((char *)a3 + 208, 1LL);
  *((_DWORD *)this + 182) = 0;
  result = this;
  *((float *)this + 181) = ActiveManipulationDelta;
  return result;
}
