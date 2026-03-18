/*
 * XREFs of IvtDetachDeviceDomain @ 0x14056E020
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053C180 (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     IvtAttachDeviceDomainInternal @ 0x14056DA10 (IvtAttachDeviceDomainInternal.c)
 *     IvtLegacyAttachDeviceDomainInternal @ 0x14056FB5C (IvtLegacyAttachDeviceDomainInternal.c)
 */

__int64 __fastcall IvtDetachDeviceDomain(__int64 a1, _QWORD *a2)
{
  if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
    return IvtAttachDeviceDomainInternal(a1, a2, 0LL);
  else
    return IvtLegacyAttachDeviceDomainInternal(a1, a2, 0LL);
}
