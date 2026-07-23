/*
 * XREFs of Feature_RAW_Sector_Alignment_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1405E44AC
 * Callers:
 *     RawQueryFileSystemInformation @ 0x14077CBF4 (RawQueryFileSystemInformation.c)
 * Callees:
 *     Feature_RAW_Sector_Alignment_Fix__private_IsEnabledFallback @ 0x1405E44E4 (Feature_RAW_Sector_Alignment_Fix__private_IsEnabledFallback.c)
 */

__int64 Feature_RAW_Sector_Alignment_Fix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RAW_Sector_Alignment_Fix__private_featureState & 0x10) != 0 )
    return Feature_RAW_Sector_Alignment_Fix__private_featureState & 1;
  else
    return Feature_RAW_Sector_Alignment_Fix__private_IsEnabledFallback(
             (unsigned int)Feature_RAW_Sector_Alignment_Fix__private_featureState,
             3LL);
}
