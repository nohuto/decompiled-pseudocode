/*
 * XREFs of ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140045E70
 * Callers:
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x140089910 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAKXZ @ 0x140089920 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAKXZ @ 0x140089930 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFDA@EAAKXZ @ 0x140089940 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFDA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFDI@EAAKXZ @ 0x140089960 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFDI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFKA@EAAKXZ @ 0x140089980 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFKA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((volatile int *)(a1 + 1448));
}
