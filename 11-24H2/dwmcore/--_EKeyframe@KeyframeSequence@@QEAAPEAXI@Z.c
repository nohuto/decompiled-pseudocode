/*
 * XREFs of ??_EKeyframe@KeyframeSequence@@QEAAPEAXI@Z @ 0x18017F1D8
 * Callers:
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18017EF84 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 * Callees:
 *     ??1Keyframe@KeyframeSequence@@QEAA@XZ @ 0x18017F240 (--1Keyframe@KeyframeSequence@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall KeyframeSequence::Keyframe::`vector deleting destructor'(KeyframeSequence::Keyframe *this)
{
  _QWORD *v1; // rdi
  __int64 v2; // rbx
  KeyframeSequence::Keyframe *i; // rsi

  v1 = (_QWORD *)((char *)this - 8);
  v2 = *((_QWORD *)this - 1);
  for ( i = (KeyframeSequence::Keyframe *)((char *)this + 24 * v2); v2; --v2 )
  {
    i = (KeyframeSequence::Keyframe *)((char *)i - 24);
    KeyframeSequence::Keyframe::~Keyframe(i);
  }
  operator delete(v1, 24LL * *v1 + 8);
  return v1;
}
