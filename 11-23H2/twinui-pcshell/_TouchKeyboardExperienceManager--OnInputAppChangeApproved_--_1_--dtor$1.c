/*
 * XREFs of _TouchKeyboardExperienceManager::OnInputAppChangeApproved_::_1_::dtor$1 @ 0x180514A14
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::OnInputAppChangeApproved_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 40), a2);
}
