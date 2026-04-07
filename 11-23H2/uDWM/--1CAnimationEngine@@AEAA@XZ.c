/*
 * XREFs of ??1CAnimationEngine@@AEAA@XZ @ 0x1800AA6BC
 * Callers:
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x180043E10 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x180046B00 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800560C0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CAnimationEngine::~CAnimationEngine(CAnimationEngine *this)
{
  *(_QWORD *)this = &CAnimationEngine::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 9);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 5);
}
