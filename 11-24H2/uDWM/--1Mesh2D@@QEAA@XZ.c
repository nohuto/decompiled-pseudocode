/*
 * XREFs of ??1Mesh2D@@QEAA@XZ @ 0x18007AF9C
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x180010A00 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800D9C18 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 *     _CTouchDragVisual::UpdateVisual_::_1_::dtor$0 @ 0x1800F65E4 (_CTouchDragVisual--UpdateVisual_--_1_--dtor$0.c)
 *     _CTouchDragVisual::UpdateVisual_::_1_::dtor$1 @ 0x1800F65F6 (_CTouchDragVisual--UpdateVisual_--_1_--dtor$1.c)
 *     _CTetherVisual::UpdateInstructions_::_1_::dtor$0 @ 0x1800F86B7 (_CTetherVisual--UpdateInstructions_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall Mesh2D::~Mesh2D(void **this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 8);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
