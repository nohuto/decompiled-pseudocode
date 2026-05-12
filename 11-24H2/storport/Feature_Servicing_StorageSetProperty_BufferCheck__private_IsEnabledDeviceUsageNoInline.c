/*
 * XREFs of Feature_Servicing_StorageSetProperty_BufferCheck__private_IsEnabledDeviceUsageNoInline @ 0x1400565A0
 * Callers:
 *     RaidSetStorageAdapterProtocolSpecificProperty @ 0x14006651C (RaidSetStorageAdapterProtocolSpecificProperty.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x14009C684 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 * Callees:
 *     Feature_Servicing_StorageSetProperty_BufferCheck__private_IsEnabledFallback @ 0x1400565D8 (Feature_Servicing_StorageSetProperty_BufferCheck__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_StorageSetProperty_BufferCheck__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_StorageSetProperty_BufferCheck__private_featureState & 0x10) != 0 )
    return Feature_Servicing_StorageSetProperty_BufferCheck__private_featureState & 1;
  else
    return Feature_Servicing_StorageSetProperty_BufferCheck__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_StorageSetProperty_BufferCheck__private_featureState,
             3LL);
}
