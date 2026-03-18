/*
 * XREFs of Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline @ 0x140292678
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x140241080 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetWindowBand @ 0x140246BB0 (NtUserSetWindowBand.c)
 * Callees:
 *     Feature_SetWindowBandViaBroker__private_IsEnabledFallback @ 0x1402926B0 (Feature_SetWindowBandViaBroker__private_IsEnabledFallback.c)
 */

__int64 Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SetWindowBandViaBroker__private_featureState & 0x10) != 0 )
    return Feature_SetWindowBandViaBroker__private_featureState & 1;
  else
    return Feature_SetWindowBandViaBroker__private_IsEnabledFallback(
             (unsigned int)Feature_SetWindowBandViaBroker__private_featureState,
             3LL);
}
