/*
 * XREFs of ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x1400442E0
 * Callers:
 *     ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ @ 0x1400652C0 (-AddRef@-$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ @ 0x1400652D0 (-AddRef@-$CComObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ @ 0x1400652E0 (-AddRef@-$CComObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CStreamGroup>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((volatile int *)(a1 + 344));
}
