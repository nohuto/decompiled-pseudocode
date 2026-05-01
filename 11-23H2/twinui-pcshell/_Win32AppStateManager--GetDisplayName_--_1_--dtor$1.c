/*
 * XREFs of _Win32AppStateManager::GetDisplayName_::_1_::dtor$1 @ 0x180625A19
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32AppStateManager::GetDisplayName_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 104), a2);
}
