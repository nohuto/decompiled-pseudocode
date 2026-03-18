/*
 * XREFs of ??0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x180226994
 * Callers:
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x18022BCE4 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 * Callees:
 *     ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1800E3D10 (-GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ??0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x180226A00 (--0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 */

CScrollPositionKeyframeAnimation *__fastcall CScrollPositionKeyframeAnimation::CScrollPositionKeyframeAnimation(
        CScrollPositionKeyframeAnimation *this,
        struct CComposition *a2,
        struct CInteractionTracker *a3)
{
  unsigned __int32 v5; // xmm0_4
  CScrollPositionKeyframeAnimation *result; // rax

  CScrollKeyframeAnimation::CScrollKeyframeAnimation(this, a2, a3);
  *(_QWORD *)this = &CScrollPositionKeyframeAnimation::`vftable';
  *((_DWORD *)this + 180) = InteractionSourceManager::GetActiveManipulationDelta((struct CInteractionTracker *)((char *)a3 + 208)).m128_u32[0];
  v5 = InteractionSourceManager::GetActiveManipulationDelta((struct CInteractionTracker *)((char *)a3 + 208)).m128_u32[0];
  *((_DWORD *)this + 182) = 0;
  result = this;
  *((_DWORD *)this + 181) = v5;
  return result;
}
