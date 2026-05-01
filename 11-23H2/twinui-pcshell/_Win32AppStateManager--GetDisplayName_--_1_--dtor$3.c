/*
 * XREFs of _Win32AppStateManager::GetDisplayName_::_1_::dtor$3 @ 0x180625A25
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32AppStateManager::GetDisplayName_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 72), a2);
}
