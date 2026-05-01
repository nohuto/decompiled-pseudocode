/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1_::_1_::dtor$0 @ 0x1807036CB
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1801910F0 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection__ResumeCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 256) = *(_QWORD *)(a2 + 464) + 16LL;
  std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(*(_QWORD *)(a2 + 256));
}
