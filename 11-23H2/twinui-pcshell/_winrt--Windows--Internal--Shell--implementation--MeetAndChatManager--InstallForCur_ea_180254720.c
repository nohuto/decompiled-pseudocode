/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x180254720
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserInitiatedInstall@MeetAndChatTelemetry@@QEAA@XZ @ 0x1806B094C (--1UserInitiatedInstall@MeetAndChatTelemetry@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync__ResumeCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 40) + 16LL;
  MeetAndChatTelemetry::UserInitiatedInstall::~UserInitiatedInstall(*(MeetAndChatTelemetry::UserInitiatedInstall **)(a2 + 72));
}
