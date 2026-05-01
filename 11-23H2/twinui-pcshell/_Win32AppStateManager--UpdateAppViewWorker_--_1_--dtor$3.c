/*
 * XREFs of _Win32AppStateManager::UpdateAppViewWorker_::_1_::dtor$3 @ 0x1806272B2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32AppStateManager::UpdateAppViewWorker_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 216), a2);
}
