/*
 * XREFs of _XamlSnapAssistViewHost::Show_::_1_::dtor$11 @ 0x18076E3CC
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlSnapAssistViewHost::Show_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 296), (void *)0x198);
}
