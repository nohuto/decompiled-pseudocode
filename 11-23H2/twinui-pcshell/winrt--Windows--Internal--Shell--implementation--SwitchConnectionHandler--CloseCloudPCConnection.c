/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_InitCoro$2 @ 0x1802828E8
 * Callers:
 *     ?CloseCloudPCConnection@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@Uhstring@6@@Z @ 0x180283994 (-CloseCloudPCConnection@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 * Callees:
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection_::_47_::_parameters_::_parameters_ @ 0x180282434 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseCloudPCConnectio.c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x1802829E0 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_1802829E0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5,
        __int64 a6)
{
  _DWORD *v7; // r10
  _BYTE *v8; // r11

  winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection_::_47_::_parameters_::_parameters_(
    (_DWORD *)((char *)a2 + 827),
    a6,
    a4,
    a5);
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection__ResumeCoro_1;
  a2[2] = *v7 != 0 ? 2 : 65538;
  *v8 = 0;
  *((_BYTE *)a2 + 826) = 0;
  return winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection__ResumeCoro_1(a2);
}
