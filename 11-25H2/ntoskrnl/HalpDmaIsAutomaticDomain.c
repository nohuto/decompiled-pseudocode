/*
 * XREFs of HalpDmaIsAutomaticDomain @ 0x14054E798
 * Callers:
 *     HalGetAdapterV3 @ 0x1406F42C8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1406F4868 (HalGetAdapterV2.c)
 * Callees:
 *     HalpDmaDereferenceDomainObject @ 0x1404118D8 (HalpDmaDereferenceDomainObject.c)
 *     HalpDmaReferenceDomainObject @ 0x1404148C8 (HalpDmaReferenceDomainObject.c)
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
