/*
 * XREFs of Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsageNoInline @ 0x1405ADC78
 * Callers:
 *     KeAddTriageDumpDataBlock @ 0x1405ADCD0 (KeAddTriageDumpDataBlock.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405B054C (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 * Callees:
 *     Feature_TriageDumpDataExtension__private_IsEnabledFallback @ 0x1405ADCB0 (Feature_TriageDumpDataExtension__private_IsEnabledFallback.c)
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
