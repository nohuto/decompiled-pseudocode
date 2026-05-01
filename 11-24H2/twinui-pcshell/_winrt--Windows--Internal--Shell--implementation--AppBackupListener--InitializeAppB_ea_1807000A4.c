/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1807000A4
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x18004E0E8 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 64) + 48LL;
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(*(__int64 **)(a2 + 104));
}
