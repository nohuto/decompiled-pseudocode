/*
 * XREFs of _TouchKeyboardExperienceManager::RegisterForApplicationStateChanges_::_1_::dtor$2 @ 0x1805158C5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::RegisterForApplicationStateChanges_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 64), a2);
}
