/*
 * XREFs of _GamingOverlayExperienceManager::SignalGamepadConnect_::_1_::dtor$2 @ 0x1804078F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GamingOverlayExperienceManager::SignalGamepadConnect_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 200), a2);
}
