/*
 * XREFs of _TouchKeyboardExperienceManager::EnsureInputAppIsActivated_::_1_::dtor$4 @ 0x1802DB0FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::EnsureInputAppIsActivated_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 120), a2);
}
