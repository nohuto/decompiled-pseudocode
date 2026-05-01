/*
 * XREFs of _StartupRegKeyNotification::CheckForNewStartupAppAdded_::_1_::dtor$5 @ 0x180643822
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupRegKeyNotification::CheckForNewStartupAppAdded_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 328), a2);
}
