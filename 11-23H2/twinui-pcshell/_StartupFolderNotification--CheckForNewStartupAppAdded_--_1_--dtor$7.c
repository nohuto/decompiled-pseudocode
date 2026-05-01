/*
 * XREFs of _StartupFolderNotification::CheckForNewStartupAppAdded_::_1_::dtor$7 @ 0x18064320D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupFolderNotification::CheckForNewStartupAppAdded_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 560), a2);
}
