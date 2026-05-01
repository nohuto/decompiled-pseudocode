/*
 * XREFs of _CopilotHotkeyManager::CopilotHotkeyManager_::_1_::dtor$7 @ 0x1806FD5E6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CopilotHotkeyManager::CopilotHotkeyManager_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(
    (void *)(*(_QWORD *)(a2 + 48) + 384LL),
    a2);
}
