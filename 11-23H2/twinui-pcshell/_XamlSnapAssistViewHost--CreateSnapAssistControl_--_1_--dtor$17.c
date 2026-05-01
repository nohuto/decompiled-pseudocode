/*
 * XREFs of _XamlSnapAssistViewHost::CreateSnapAssistControl_::_1_::dtor$17 @ 0x18076BEC8
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlSnapAssistViewHost::CreateSnapAssistControl_::_1_::dtor_17(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 256), 0LL);
}
