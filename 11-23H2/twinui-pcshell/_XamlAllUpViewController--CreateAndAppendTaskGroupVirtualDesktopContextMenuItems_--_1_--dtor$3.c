/*
 * XREFs of _XamlAllUpViewController::CreateAndAppendTaskGroupVirtualDesktopContextMenuItems_::_1_::dtor$3 @ 0x18077E3BF
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlAllUpViewController::CreateAndAppendTaskGroupVirtualDesktopContextMenuItems_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 48), (void *)0xB0);
}
