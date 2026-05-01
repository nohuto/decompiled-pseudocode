/*
 * XREFs of ?IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ @ 0x180352448
 * Callers:
 *     ?IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ @ 0x18035233C (-IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ.c)
 *     ?unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180643B10 (-unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPE.c)
 * Callees:
 *     ?IsPhysicalDeviceAccessPolicyOnCADScreenEnabled@CloudPCHelpers@@YA_NXZ @ 0x180352474 (-IsPhysicalDeviceAccessPolicyOnCADScreenEnabled@CloudPCHelpers@@YA_NXZ.c)
 *     ?IsPhysicalDeviceAccessPolicyOnErrorScreensEnabled@CloudPCHelpers@@YA_NXZ @ 0x180352518 (-IsPhysicalDeviceAccessPolicyOnErrorScreensEnabled@CloudPCHelpers@@YA_NXZ.c)
 */

char __fastcall CloudPCHelpers::IsPhysicalDeviceAccessPolicyEnabled(CloudPCHelpers *this)
{
  CloudPCHelpers *v1; // rcx
  char v2; // bl

  v2 = 0;
  if ( CloudPCHelpers::IsPhysicalDeviceAccessPolicyOnCADScreenEnabled(this)
    || CloudPCHelpers::IsPhysicalDeviceAccessPolicyOnErrorScreensEnabled(v1) )
  {
    return 1;
  }
  return v2;
}
