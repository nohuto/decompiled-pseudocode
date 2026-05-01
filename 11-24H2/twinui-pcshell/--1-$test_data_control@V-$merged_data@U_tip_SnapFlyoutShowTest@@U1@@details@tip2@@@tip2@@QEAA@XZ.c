/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180291E00
 * Callers:
 *     ?TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUSnapLayoutPickerExtension@4UI@WindowsUdk@7@IPEAUHWND__@@PEAUHMONITOR__@@AEBURect@Foundation@67@W4SnapControlType@34567@W4InputDeviceKind@49WindowsUdk@7@@Z @ 0x1801173F4 (-TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 *     ?InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801C52D0 (-InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_.c)
 *     ?InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@PEAUHMONITOR__@@@Z @ 0x180271E40 (-InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@P.c)
 *     ?OnFlyoutInstanceReady@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x180272350 (-OnFlyoutInstanceReady@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@.c)
 *     ?OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x180272490 (-OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Intern.c)
 *     _lambda_d3d99d077aa6088e001c766fa29bfd0f_::operator() @ 0x1805B166C (_lambda_d3d99d077aa6088e001c766fa29bfd0f_--operator().c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1805B1950 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     ?OnFlyoutInstanceShown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@_N@Z @ 0x1805B3700 (-OnFlyoutInstanceShown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@.c)
 *     ?StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805B4370 (-StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV-$tip_test@V-$merged_data@U_tip_SnapFlyoutSho.c)
 *     _lambda_4be18ebf708cd778800d3ace51194f58_::operator() @ 0x1805BFE64 (_lambda_4be18ebf708cd778800d3ace51194f58_--operator().c)
 *     _SnapFlyoutHost::StartXamlExplorerHostThread_::_1_::catch$5 @ 0x1806F89AD (_SnapFlyoutHost--StartXamlExplorerHostThread_--_1_--catch$5.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180291E38 (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180291F7C (-reset@-$com_ptr_t@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_po.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(
        void **a1)
{
  char *v2; // rcx

  v2 = (char *)*a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update(v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>(a1);
}
