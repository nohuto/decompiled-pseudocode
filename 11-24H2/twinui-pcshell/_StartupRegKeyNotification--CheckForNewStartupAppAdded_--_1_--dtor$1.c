/*
 * XREFs of _StartupRegKeyNotification::CheckForNewStartupAppAdded_::_1_::dtor$1 @ 0x1806D97A1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupRegKeyNotification::CheckForNewStartupAppAdded_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::wstring::_Tidy_deallocate((void **)(a2 + 576));
}
