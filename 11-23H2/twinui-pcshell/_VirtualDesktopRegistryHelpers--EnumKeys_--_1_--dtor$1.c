/*
 * XREFs of _VirtualDesktopRegistryHelpers::EnumKeys_::_1_::dtor$1 @ 0x1805FB700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopRegistryHelpers::EnumKeys_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 40), a2);
}
