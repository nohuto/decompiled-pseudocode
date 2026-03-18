/*
 * XREFs of HalpDmaIsAutomaticDomain @ 0x1405510F8
 * Callers:
 *     HalGetAdapterV3 @ 0x1407000B8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140700658 (HalGetAdapterV2.c)
 * Callees:
 *     HalpDmaDereferenceDomainObject @ 0x1403A92FC (HalpDmaDereferenceDomainObject.c)
 *     HalpDmaReferenceDomainObject @ 0x14041119C (HalpDmaReferenceDomainObject.c)
 */

bool __fastcall HalpDmaIsAutomaticDomain(__int64 *a1)
{
  char v2; // di
  __int64 v3; // rbx

  v2 = 0;
  if ( (int)HalpDmaReferenceDomainObject((__int64)a1) >= 0 )
  {
    v3 = a1[7];
    HalpDmaDereferenceDomainObject(a1);
    return v3 != 0;
  }
  return v2;
}
