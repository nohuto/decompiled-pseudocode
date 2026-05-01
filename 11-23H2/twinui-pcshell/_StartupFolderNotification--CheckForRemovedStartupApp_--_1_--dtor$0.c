/*
 * XREFs of _StartupFolderNotification::CheckForRemovedStartupApp_::_1_::dtor$0 @ 0x180643B86
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupFolderNotification::CheckForRemovedStartupApp_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 192), a2);
}
