/*
 * XREFs of _XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem_::_1_::dtor$4 @ 0x18077DE6B
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 104), 0LL);
}
