/*
 * XREFs of Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledDeviceUsageNoInline @ 0x140090BB0
 * Callers:
 *     ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x14042D7C8 (-AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z.c)
 * Callees:
 *     Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledFallback @ 0x140090BE8 (Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledFallback.c)
 */

__int64 Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_featureState & 0x10) != 0 )
    return Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_featureState & 1;
  else
    return Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledFallback(
             (unsigned int)Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_featureState,
             3LL);
}
