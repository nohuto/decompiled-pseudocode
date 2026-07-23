/*
 * XREFs of IvtDetachDeviceDomain @ 0x14056B4B0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     IvtAttachDeviceDomainInternal @ 0x14056AEA0 (IvtAttachDeviceDomainInternal.c)
 *     IvtLegacyAttachDeviceDomainInternal @ 0x14056CFEC (IvtLegacyAttachDeviceDomainInternal.c)
 */

__int64 __fastcall IvtDetachDeviceDomain(__int64 a1, _QWORD *a2)
{
  if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
    return IvtAttachDeviceDomainInternal(a1, a2, 0LL);
  else
    return IvtLegacyAttachDeviceDomainInternal(a1, a2, 0LL);
}
