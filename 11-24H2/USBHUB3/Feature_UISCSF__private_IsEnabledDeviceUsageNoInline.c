/*
 * XREFs of Feature_UISCSF__private_IsEnabledDeviceUsageNoInline @ 0x1400261BC
 * Callers:
 *     HUBUCX_CreateDeviceInUCX @ 0x140026698 (HUBUCX_CreateDeviceInUCX.c)
 *     HUBMISC_SetPortAndSpeedFlagsFor30Device @ 0x140033880 (HUBMISC_SetPortAndSpeedFlagsFor30Device.c)
 * Callees:
 *     Feature_UISCSF__private_IsEnabledFallback @ 0x1400261F4 (Feature_UISCSF__private_IsEnabledFallback.c)
 */

__int64 Feature_UISCSF__private_IsEnabledDeviceUsageNoInline()
{
  if ( (WPP_MAIN_CB.SectorSize & 0x10) != 0 )
    return WPP_MAIN_CB.SectorSize & 1;
  else
    return Feature_UISCSF__private_IsEnabledFallback(*(unsigned int *)&WPP_MAIN_CB.SectorSize, 3LL);
}
