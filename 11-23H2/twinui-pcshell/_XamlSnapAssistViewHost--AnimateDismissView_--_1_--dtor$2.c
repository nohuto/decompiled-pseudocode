/*
 * XREFs of _XamlSnapAssistViewHost::AnimateDismissView_::_1_::dtor$2 @ 0x18076ADEF
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlSnapAssistViewHost::AnimateDismissView_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 88), (void *)0x130);
}
