/*
 * XREFs of _GuidedSnapAssistViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$9 @ 0x18078A2EC
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall GuidedSnapAssistViewController::_XamlBaseViewController_::RegisterForEvents_::_1_::dtor_9(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 304), (void *)0x130);
}
