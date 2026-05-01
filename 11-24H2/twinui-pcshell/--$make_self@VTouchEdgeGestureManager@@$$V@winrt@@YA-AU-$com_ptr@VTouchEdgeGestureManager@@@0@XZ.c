/*
 * XREFs of ??$make_self@VTouchEdgeGestureManager@@$$V@winrt@@YA?AU?$com_ptr@VTouchEdgeGestureManager@@@0@XZ @ 0x18021BFA0
 * Callers:
 *     ??0TouchGestureComponent@@QEAA@XZ @ 0x18026F730 (--0TouchGestureComponent@@QEAA@XZ.c)
 * Callees:
 *     ??0TouchEdgeGestureManager@@QEAA@XZ @ 0x18004D778 (--0TouchEdgeGestureManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make_self<TouchEdgeGestureManager,>(_QWORD *a1)
{
  _QWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x1B8uLL);
  memset_0(v3, 0, 0x1B8uLL);
  TouchEdgeGestureManager::TouchEdgeGestureManager((TouchEdgeGestureManager *)v3);
  *v3 = &TouchEdgeGestureManager::`vftable'{for `winrt::impl::producer_convert<TouchEdgeGestureManager,ITouchEdgeGesture,void>'};
  v3[1] = &TouchEdgeGestureManager::`vftable'{for `winrt::impl::producer_convert<TouchEdgeGestureManager,IGameFocusEvents,void>'};
  v3[3] = &winrt::impl::heap_implements<TouchEdgeGestureManager>::`vftable';
  *a1 = v3;
  return a1;
}
