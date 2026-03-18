/*
 * XREFs of Feature_RemoteVsyncWaiterFix__private_IsEnabledDeviceUsageNoInline @ 0x140091F58
 * Callers:
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x140305090 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     Feature_RemoteVsyncWaiterFix__private_IsEnabledFallback @ 0x140091F90 (Feature_RemoteVsyncWaiterFix__private_IsEnabledFallback.c)
 */

__int64 Feature_RemoteVsyncWaiterFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RemoteVsyncWaiterFix__private_featureState & 0x10) != 0 )
    return Feature_RemoteVsyncWaiterFix__private_featureState & 1;
  else
    return Feature_RemoteVsyncWaiterFix__private_IsEnabledFallback(
             (unsigned int)Feature_RemoteVsyncWaiterFix__private_featureState,
             3LL);
}
