/*
 * XREFs of Feature_Servicing_InlinePreWakeupPriorityBoosting__private_IsEnabledDeviceUsageNoInline @ 0x1405C1158
 * Callers:
 *     KeAbInitialize @ 0x1405C1648 (KeAbInitialize.c)
 * Callees:
 *     Feature_Servicing_InlinePreWakeupPriorityBoosting__private_IsEnabledFallback @ 0x1405C1190 (Feature_Servicing_InlinePreWakeupPriorityBoosting__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_InlinePreWakeupPriorityBoosting__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_InlinePreWakeupPriorityBoosting__private_featureState & 0x10) != 0 )
    return Feature_Servicing_InlinePreWakeupPriorityBoosting__private_featureState & 1;
  else
    return Feature_Servicing_InlinePreWakeupPriorityBoosting__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_InlinePreWakeupPriorityBoosting__private_featureState,
             3LL);
}
