/*
 * XREFs of Feature_VpciVscBootDiskHibernation__private_IsEnabledDeviceUsageNoInline @ 0x1405CA438
 * Callers:
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     Feature_VpciVscBootDiskHibernation__private_IsEnabledFallback @ 0x1405CA470 (Feature_VpciVscBootDiskHibernation__private_IsEnabledFallback.c)
 */

__int64 Feature_VpciVscBootDiskHibernation__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_VpciVscBootDiskHibernation__private_featureState & 0x10) != 0 )
    return Feature_VpciVscBootDiskHibernation__private_featureState & 1;
  else
    return Feature_VpciVscBootDiskHibernation__private_IsEnabledFallback(
             (unsigned int)Feature_VpciVscBootDiskHibernation__private_featureState,
             3LL);
}
