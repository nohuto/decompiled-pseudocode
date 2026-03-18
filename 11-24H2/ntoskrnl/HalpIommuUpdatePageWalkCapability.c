/*
 * XREFs of HalpIommuUpdatePageWalkCapability @ 0x14054D3A0
 * Callers:
 *     HalpIommuInitializeAll @ 0x140B6B2A0 (HalpIommuInitializeAll.c)
 * Callees:
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053C180 (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 */

void HalpIommuUpdatePageWalkCapability()
{
  ULONG_PTR v0; // rbx
  bool v1; // zf

  v0 = HalpIommuList;
  HalpIommuPageTableCacheCoherent = 1;
  while ( (ULONG_PTR *)v0 != &HalpIommuList )
  {
    if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (*(_DWORD *)(v0 + 472) & 0x180) == 0 )
        goto LABEL_7;
      v1 = (*(_DWORD *)(v0 + 472) & 0x800) == 0;
    }
    else
    {
      v1 = (*(_DWORD *)(v0 + 472) & 0x900) == 256;
    }
    if ( v1 )
    {
      HalpIommuPageTableCacheCoherent = 0;
      return;
    }
LABEL_7:
    v0 = *(_QWORD *)v0;
  }
}
