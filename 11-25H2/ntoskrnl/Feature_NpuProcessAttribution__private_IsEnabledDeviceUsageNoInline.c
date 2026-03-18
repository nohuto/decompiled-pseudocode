/*
 * XREFs of Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline @ 0x1404F1730
 * Callers:
 *     PsAddProcessEnergyValues @ 0x140410CE8 (PsAddProcessEnergyValues.c)
 *     PopEtEnergyTrackerCleanup @ 0x140751004 (PopEtEnergyTrackerCleanup.c)
 *     PopEtEnergyTrackerCreate @ 0x140751240 (PopEtEnergyTrackerCreate.c)
 *     PopEtEnergyTrackerInitialize @ 0x1407516C0 (PopEtEnergyTrackerInitialize.c)
 *     PsQueryProcessEnergyValues @ 0x1408DE290 (PsQueryProcessEnergyValues.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1408DFB00 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtEnergyTrackerQuery @ 0x140960110 (PopEtEnergyTrackerQuery.c)
 *     PopEtEnergyValuesDeltaCalculate @ 0x140961C08 (PopEtEnergyValuesDeltaCalculate.c)
 *     PopEtInit @ 0x140C21A5C (PopEtInit.c)
 * Callees:
 *     Feature_NpuProcessAttribution__private_IsEnabledFallback @ 0x1405D3F64 (Feature_NpuProcessAttribution__private_IsEnabledFallback.c)
 */

__int64 Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NpuProcessAttribution__private_featureState & 0x10) != 0 )
    return Feature_NpuProcessAttribution__private_featureState & 1;
  else
    return Feature_NpuProcessAttribution__private_IsEnabledFallback(
             (unsigned int)Feature_NpuProcessAttribution__private_featureState,
             3LL);
}
