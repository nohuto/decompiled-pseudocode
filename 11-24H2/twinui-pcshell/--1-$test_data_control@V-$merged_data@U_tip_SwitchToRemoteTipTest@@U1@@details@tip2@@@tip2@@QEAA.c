/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180649F34
 * Callers:
 *     ?SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x1806510A4 (-SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 *     ?SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUguid@6@W4SwitchSource@3456@@Z @ 0x18066F1E0 (-SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SwitchToRemoteDesktop_::_1_::dtor$10 @ 0x180702296 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--SwitchToRemoteD.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::SwitchToRemoteDesktop_::_1_::dtor$6 @ 0x180703BEF (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--SwitchTo_ea_180703BEF.c)
 * Callees:
 *     ?close@?$test_data_control@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x180653464 (-close@-$test_data_control@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>>::~test_data_control<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>>(
        void **a1)
{
  tip2::test_data_control<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>>::close();
  return wil::com_ptr_t<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>,wil::err_returncode_policy>(a1);
}
