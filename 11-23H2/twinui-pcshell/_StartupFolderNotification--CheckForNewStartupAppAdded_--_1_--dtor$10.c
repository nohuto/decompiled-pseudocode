/*
 * XREFs of _StartupFolderNotification::CheckForNewStartupAppAdded_::_1_::dtor$10 @ 0x180643219
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupFolderNotification::CheckForNewStartupAppAdded_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 624), a2);
}
