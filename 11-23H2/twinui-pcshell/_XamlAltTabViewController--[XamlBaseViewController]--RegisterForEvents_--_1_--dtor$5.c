/*
 * XREFs of _XamlAltTabViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$5 @ 0x18077A4F3
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlAltTabViewController::_XamlBaseViewController_::RegisterForEvents_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 64), (void *)0x130);
}
