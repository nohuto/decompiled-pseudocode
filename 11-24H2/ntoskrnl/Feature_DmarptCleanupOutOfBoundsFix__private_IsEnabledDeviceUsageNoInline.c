/*
 * XREFs of Feature_DmarptCleanupOutOfBoundsFix__private_IsEnabledDeviceUsageNoInline @ 0x1405651A4
 * Callers:
 *     HalpIommuCleanupPageTable @ 0x1405651F8 (HalpIommuCleanupPageTable.c)
 * Callees:
 *     Feature_DmarptCleanupOutOfBoundsFix__private_IsEnabledFallback @ 0x1405651DC (Feature_DmarptCleanupOutOfBoundsFix__private_IsEnabledFallback.c)
 */

__int64 Feature_DmarptCleanupOutOfBoundsFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DmarptCleanupOutOfBoundsFix__private_featureState & 0x10) != 0 )
    return Feature_DmarptCleanupOutOfBoundsFix__private_featureState & 1;
  else
    return Feature_DmarptCleanupOutOfBoundsFix__private_IsEnabledFallback(
             (unsigned int)Feature_DmarptCleanupOutOfBoundsFix__private_featureState,
             3LL);
}
