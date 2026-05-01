/*
 * XREFs of ?CloseCloudPCConnection@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@Uhstring@6@@Z @ 0x18066D8C8
 * Callers:
 *     ?ExitCloudPC@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA_NAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBUhstring@6@@Z @ 0x18066DFB0 (-ExitCloudPC@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA_NAEBV-$sh.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_InitCoro$2 @ 0x18066CE6C (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseCloudPCConnection.c)
 */

// Hidden C++ exception states: #wind=2
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3,
        __int64 *a4)
{
  char *v8; // rax
  std::_Ref_count_base *v9; // rcx
  int v11; // [rsp+2E8h] [rbp+10h] BYREF
  _QWORD *v12; // [rsp+2F0h] [rbp+18h]
  __int64 *v13; // [rsp+2F8h] [rbp+20h]

  v13 = a4;
  v12 = a3;
  v8 = (char *)operator new(0x280uLL);
  v11 = 0;
  winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection__InitCoro_2(
    &v11,
    v8,
    a2,
    a3,
    a4,
    a1);
  v9 = (std::_Ref_count_base *)a3[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a4);
  return a2;
}
