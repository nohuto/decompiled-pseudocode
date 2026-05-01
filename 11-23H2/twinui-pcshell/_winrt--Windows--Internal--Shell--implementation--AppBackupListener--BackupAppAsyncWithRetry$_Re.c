/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$1_::_1_::dtor$0 @ 0x1802593F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UTabTipAdapter@KeyboardHosting@@@winrt@@QEAA@XZ @ 0x1800353C4 (--1-$com_ptr@UTabTipAdapter@KeyboardHosting@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry__ResumeCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 224) + 16LL;
  return winrt::com_ptr<KeyboardHosting::TabTipAdapter>::~com_ptr<KeyboardHosting::TabTipAdapter>(*(_QWORD **)(a2 + 56));
}
