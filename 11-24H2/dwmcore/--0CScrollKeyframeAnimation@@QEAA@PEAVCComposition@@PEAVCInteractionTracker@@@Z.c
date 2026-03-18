/*
 * XREFs of ??0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x180226A00
 * Callers:
 *     ??0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x180226994 (--0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x18022BCE4 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 * Callees:
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180226A84 (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

CScrollKeyframeAnimation *__fastcall CScrollKeyframeAnimation::CScrollKeyframeAnimation(
        CScrollKeyframeAnimation *this,
        struct CComposition *a2,
        struct CInteractionTracker *a3)
{
  CScrollKeyframeAnimation *result; // rax

  CKeyframeAnimation::CKeyframeAnimation(this, a2);
  *((_QWORD *)this + 68) = a3;
  *(_QWORD *)this = &CScrollKeyframeAnimation::`vftable';
  memset_0((char *)this + 552, 0, 0x40uLL);
  *((_QWORD *)this + 77) = 0LL;
  *((_DWORD *)this + 156) = 0;
  memset_0((char *)this + 632, 0, 0x40uLL);
  *((_QWORD *)this + 87) = 0LL;
  result = this;
  *((_DWORD *)this + 176) = 0;
  *((_DWORD *)this + 55) = 90;
  return result;
}
