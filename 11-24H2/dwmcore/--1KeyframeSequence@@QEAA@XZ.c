/*
 * XREFs of ??1KeyframeSequence@@QEAA@XZ @ 0x18017ED88
 * Callers:
 *     ?reset@?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAXPEAVKeyframeSequence@@@Z @ 0x18017ED2C (-reset@-$unique_ptr@VKeyframeSequence@@U-$default_delete@VKeyframeSequence@@@std@@@std@@QEAAXPEA.c)
 *     ??1?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAA@XZ @ 0x18017ED5C (--1-$unique_ptr@VKeyframeSequence@@U-$default_delete@VKeyframeSequence@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18017EF84 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 */

void __fastcall KeyframeSequence::~KeyframeSequence(CPathData **this)
{
  KeyframeSequence::RemoveAllKeyFrames((KeyframeSequence *)this);
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(this + 8);
}
