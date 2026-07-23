/*
 * XREFs of HalpDmaIsAutomaticDomain @ 0x14054EA38
 * Callers:
 *     HalGetAdapterV3 @ 0x1406FDCF8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1406FE298 (HalGetAdapterV2.c)
 * Callees:
 *     HalpDmaReferenceDomainObject @ 0x140396628 (HalpDmaReferenceDomainObject.c)
 *     HalpDmaDereferenceDomainObject @ 0x140397F8C (HalpDmaDereferenceDomainObject.c)
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
