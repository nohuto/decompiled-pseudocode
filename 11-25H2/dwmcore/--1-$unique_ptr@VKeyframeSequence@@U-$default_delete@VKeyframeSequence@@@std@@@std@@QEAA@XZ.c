/*
 * XREFs of ??1?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAA@XZ @ 0x18005D38C
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180068960 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEBUKeyframeData@@@Z @ 0x1802A8A74 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ??1KeyframeSequence@@QEAA@XZ @ 0x18005D3B8 (--1KeyframeSequence@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
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
