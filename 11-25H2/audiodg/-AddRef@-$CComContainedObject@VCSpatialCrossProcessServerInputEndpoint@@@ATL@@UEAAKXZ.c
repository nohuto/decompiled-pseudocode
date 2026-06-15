/*
 * XREFs of ?AddRef@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140089D00
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x140089D30 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAKXZ @ 0x140089D40 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAKXZ @ 0x140089D50 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFDA@EAAKXZ @ 0x140089D60 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFDA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFDI@EAAKXZ @ 0x140089D80 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFDI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFKA@EAAKXZ @ 0x140089DA0 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFKA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1448) + 8LL))(*(_QWORD *)(a1 + 1448));
}
