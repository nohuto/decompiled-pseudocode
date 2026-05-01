/*
 * XREFs of _TouchKeyboardExperienceManager::OnInputAppPropertyChanged_::_1_::dtor$10 @ 0x18020AD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::OnInputAppPropertyChanged_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 128), a2);
}
