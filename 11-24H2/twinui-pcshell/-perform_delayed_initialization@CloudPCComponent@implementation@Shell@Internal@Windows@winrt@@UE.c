/*
 * XREFs of ?perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1806433A0
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ @ 0x18035FE04 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ.c)
 *     ?HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180640FB0 (-HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 *     ?RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180641860 (-RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?RecoverRemoteSessions@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180641D9C (-RecoverRemoteSessions@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?SubscribeToLogon@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180642404 (-SubscribeToLogon@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::perform_delayed_initialization(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( !*((_DWORD *)this + 30) )
    winrt::Windows::Internal::Shell::implementation::CloudPCComponent::RecoverRegistrationData(this);
  winrt::Windows::Internal::Shell::implementation::CloudPCComponent::RecoverRemoteSessions(this);
  if ( *((_DWORD *)this + 30) == 1 )
    winrt::Windows::Internal::Shell::implementation::CloudPCComponent::SubscribeToLogon(
      (wil::details **)this,
      v2,
      v3,
      v4);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl) )
    winrt::Windows::Internal::Shell::implementation::CloudPCComponent::HandlePhysicalDeviceAccess(this);
}
