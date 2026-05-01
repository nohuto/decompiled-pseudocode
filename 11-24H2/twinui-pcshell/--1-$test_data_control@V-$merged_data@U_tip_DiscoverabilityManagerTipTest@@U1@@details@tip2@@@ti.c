/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180618FCC
 * Callers:
 *     _lambda_aa297103944b40500ac49b04ee807ad8_::operator() @ 0x180619148 (_lambda_aa297103944b40500ac49b04ee807ad8_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1 @ 0x18061A460 (winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--InitializeAsync$_Resume.c)
 *     ?InvokeCampaign@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x18061AC20 (-InvokeCampaign@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ.c)
 *     ?LaunchActionCenterNotification@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x18061AE14 (-LaunchActionCenterNotification@DiscoverabilityManager@implementation@Shell@Internal@Windows@win.c)
 *     ?OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18061AF30 (-OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     ?WindowSnapStateChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x18061B960 (-WindowSnapStateChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180291E38 (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1802A9BD4 (-reset@-$com_ptr_t@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_re.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update((__int64)(v2 + 2));
    wil::com_ptr_t<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>,wil::err_returncode_policy>((void **)a1);
}
