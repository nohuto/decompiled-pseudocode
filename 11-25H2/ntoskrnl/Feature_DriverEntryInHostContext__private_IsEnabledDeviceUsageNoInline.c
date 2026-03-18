/*
 * XREFs of Feature_DriverEntryInHostContext__private_IsEnabledDeviceUsageNoInline @ 0x140592580
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1402FEF84 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriverImage @ 0x1404E6A70 (IopLoadDriverImage.c)
 *     IopUnloadDriver @ 0x140AA3F28 (IopUnloadDriver.c)
 *     IopLoadUnloadDriver @ 0x140ABFF10 (IopLoadUnloadDriver.c)
 *     IovpUnloadDriver @ 0x140B72AF8 (IovpUnloadDriver.c)
 * Callees:
 *     Feature_DriverEntryInHostContext__private_IsEnabledFallback @ 0x1405925B8 (Feature_DriverEntryInHostContext__private_IsEnabledFallback.c)
 */

__int64 Feature_DriverEntryInHostContext__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DriverEntryInHostContext__private_featureState & 0x10) != 0 )
    return Feature_DriverEntryInHostContext__private_featureState & 1;
  else
    return Feature_DriverEntryInHostContext__private_IsEnabledFallback(
             (unsigned int)Feature_DriverEntryInHostContext__private_featureState,
             3LL);
}
