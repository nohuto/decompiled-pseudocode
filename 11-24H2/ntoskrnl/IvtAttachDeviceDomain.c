/*
 * XREFs of IvtAttachDeviceDomain @ 0x14056D9C0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053C180 (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     IvtAttachDeviceDomainInternal @ 0x14056DA10 (IvtAttachDeviceDomainInternal.c)
 *     IvtLegacyAttachDeviceDomainInternal @ 0x14056FB5C (IvtLegacyAttachDeviceDomainInternal.c)
 */

__int64 __fastcall IvtAttachDeviceDomain(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
    return IvtAttachDeviceDomainInternal(a1, a2, a3);
  else
    return IvtLegacyAttachDeviceDomainInternal(a1, a2, a3);
}
