/*
 * XREFs of ??1Mesh2D@@QEAA@XZ @ 0x18006D5BA
 * Callers:
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800E3CC4 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 *     _CTetherVisual::UpdateInstructions_::_1_::dtor$0 @ 0x1800E3F2B (_CTetherVisual--UpdateInstructions_--_1_--dtor$0.c)
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800E7A08 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 *     _CTouchDragVisual::UpdateVisual_::_1_::dtor$0 @ 0x1800E7B63 (_CTouchDragVisual--UpdateVisual_--_1_--dtor$0.c)
 *     _CTouchDragVisual::UpdateVisual_::_1_::dtor$1 @ 0x1800E7B6F (_CTouchDragVisual--UpdateVisual_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall Mesh2D::~Mesh2D(Mesh2D *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 8);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
