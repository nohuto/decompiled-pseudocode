/*
 * XREFs of _TouchKeyboardExperienceManager::OnInputAppPropertyChanged_::_1_::dtor$0 @ 0x18020AD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::OnInputAppPropertyChanged_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 80), a2);
}
