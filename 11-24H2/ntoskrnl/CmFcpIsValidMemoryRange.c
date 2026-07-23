/*
 * XREFs of CmFcpIsValidMemoryRange @ 0x14066754C
 * Callers:
 *     CmFcpCountFeatureDescriptors @ 0x140667484 (CmFcpCountFeatureDescriptors.c)
 *     CmFcpPopulateModuleFeatures @ 0x1406675B0 (CmFcpPopulateModuleFeatures.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 */

bool __fastcall CmFcpIsValidMemoryRange(__int64 a1, unsigned __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( !a1 || a2 > 0x1000 )
    return 0;
  if ( MmIsAddressValidEx(a1) )
    return MmIsAddressValidEx(a1 + a2 - 1);
  return v2;
}
