/*
 * XREFs of _VirtualDesktopSwitcherHost::CreateXaml_::_1_::dtor$1 @ 0x180773BFC
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall VirtualDesktopSwitcherHost::CreateXaml_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 72), (void *)0x38);
}
