/*
 * XREFs of Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsageNoInline @ 0x1405B1608
 * Callers:
 *     KeAddTriageDumpDataBlock @ 0x1405B1660 (KeAddTriageDumpDataBlock.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405B3EF8 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 * Callees:
 *     Feature_TriageDumpDataExtension__private_IsEnabledFallback @ 0x1405B1640 (Feature_TriageDumpDataExtension__private_IsEnabledFallback.c)
 */

__int64 Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TriageDumpDataExtension__private_featureState & 0x10) != 0 )
    return Feature_TriageDumpDataExtension__private_featureState & 1;
  else
    return Feature_TriageDumpDataExtension__private_IsEnabledFallback(
             (unsigned int)Feature_TriageDumpDataExtension__private_featureState,
             3LL);
}
