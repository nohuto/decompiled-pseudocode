/*
 * XREFs of ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1801AAAB0
 * Callers:
 *     ?SupportsSuspendOnClose@ConversationalAgentHelpers@@YA_NAEBUhstring@winrt@@@Z @ 0x1801D76D0 (-SupportsSuspendOnClose@ConversationalAgentHelpers@@YA_NAEBUhstring@winrt@@@Z.c)
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x180242D8C (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180246C70 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     _lambda_b77cff33db7c166167279fbdb5843ce7_::operator() @ 0x180285054 (_lambda_b77cff33db7c166167279fbdb5843ce7_--operator().c)
 *     ?GamingAppRequestsLegacyNexus@NexusPolicyManager@@CA_NXZ @ 0x180369358 (-GamingAppRequestsLegacyNexus@NexusPolicyManager@@CA_NXZ.c)
 *     ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1803A22B0 (-CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::hstring___lambda_0519a08fc38090f4f759e59768a110a1___::Invoke @ 0x1803BC9C0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1803BC9C0.c)
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180582BC0 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     _anonymous_namespace_::FindDashboardAppExtension @ 0x1805CF200 (_anonymous_namespace_--FindDashboardAppExtension.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersion@ApplicationModel@Windows@3@@Z @ 0x1805D46C4 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersi.c)
 *     _lambda_923aa8ecc56be0e8a63daaa295f97817_::operator() @ 0x180604CD0 (_lambda_923aa8ecc56be0e8a63daaa295f97817_--operator().c)
 *     ?IndexOf@?$vector_view_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@Ucollection_version@23@@winrt@@QEBA_NAEBUhstring@2@AEAI@Z @ 0x18061A344 (-IndexOf@-$vector_view_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocato.c)
 *     ?SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x180634878 (-SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z.c)
 *     ?IsValidRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@@Z @ 0x18064160C (-IsValidRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEB.c)
 *     ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x1806610CC (-UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEB.c)
 *     ?GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA?AV?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEBUUri@Foundation@56@@Z @ 0x180666E24 (-GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA-AV-$unique_ptr@UL.c)
 *     _lambda_4bd855e1dd94d2f8892f0782f15ffa49_::operator() @ 0x1806BD890 (_lambda_4bd855e1dd94d2f8892f0782f15ffa49_--operator().c)
 * Callees:
 *     <none>
 */

char __fastcall winrt::operator==(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  const WCHAR *v3; // r9
  const WCHAR *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  signed __int64 v8; // r9
  char v9; // r8

  v2 = *a2;
  v3 = &pvData;
  if ( *a2 )
  {
    v4 = *(const WCHAR **)(v2 + 16);
    v5 = *(unsigned int *)(v2 + 4);
  }
  else
  {
    v4 = &pvData;
    v5 = 0LL;
  }
  v6 = *a1;
  if ( *a1 )
  {
    v3 = *(const WCHAR **)(v6 + 16);
    v7 = *(unsigned int *)(v6 + 4);
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 != v5 )
    return 0;
  v8 = (char *)v3 - (char *)v4;
  v9 = 1;
  while ( v7 )
  {
    if ( *(const WCHAR *)((char *)v4 + v8) != *v4 )
      return 0;
    --v7;
    ++v4;
  }
  return v9;
}
