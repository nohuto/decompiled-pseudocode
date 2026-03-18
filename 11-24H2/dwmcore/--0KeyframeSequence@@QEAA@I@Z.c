/*
 * XREFs of ??0KeyframeSequence@@QEAA@I@Z @ 0x180019C48
 * Callers:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEBUKeyframeData@@@Z @ 0x18029ECA4 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??0Keyframe@KeyframeSequence@@QEAA@XZ @ 0x1801EFB30 (--0Keyframe@KeyframeSequence@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

KeyframeSequence *__fastcall KeyframeSequence::KeyframeSequence(KeyframeSequence *this, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rsi
  bool v5; // of
  __int64 v6; // rbx
  bool v7; // cf
  SIZE_T v8; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  CDirtyRegionAnnotation *v12; // rbx
  KeyframeSequence *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  memset_0(this, 0, 0x40uLL);
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_BYTE *)this + 140) &= ~0x10u;
  *((_DWORD *)this + 28) = v2;
  *((_DWORD *)this + 34) = 1065353216;
  if ( (unsigned int)v2 < 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  v4 = (unsigned int)v2;
  v5 = (v2 * (unsigned __int128)0x18uLL) >> 64 != 0;
  v6 = 24 * v2;
  if ( v5 )
    v6 = -1LL;
  v7 = __CFADD__(v6, 8LL);
  v8 = v6 + 8;
  if ( v7 )
    v8 = -1LL;
  ProcessHeap = GetProcessHeap();
  v10 = HeapAlloc(ProcessHeap, 0, v8);
  if ( !v10 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v11 = v10 + 1;
  *v10 = v4;
  v12 = (CDirtyRegionAnnotation *)(v10 + 1);
  while ( v4 )
  {
    --v4;
    if ( KeyframeSequence::Keyframe::Keyframe == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v12);
    else
      KeyframeSequence::Keyframe::Keyframe(v12);
    v12 = (CDirtyRegionAnnotation *)((char *)v12 + 24);
  }
  result = this;
  *((_QWORD *)this + 13) = v11;
  return result;
}
