/*
 * XREFs of ??1?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAA@XZ @ 0x18017ED5C
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18013319C (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEBUKeyframeData@@@Z @ 0x18029ECA4 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1KeyframeSequence@@QEAA@XZ @ 0x18017ED88 (--1KeyframeSequence@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<KeyframeSequence>::~unique_ptr<KeyframeSequence>(KeyframeSequence **a1)
{
  KeyframeSequence *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    KeyframeSequence::~KeyframeSequence(*a1);
    operator delete(v1);
  }
}
