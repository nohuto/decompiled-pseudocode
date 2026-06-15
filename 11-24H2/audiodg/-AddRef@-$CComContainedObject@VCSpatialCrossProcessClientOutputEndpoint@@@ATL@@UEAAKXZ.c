/*
 * XREFs of ?AddRef@?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x1400896A0
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x1400896D0 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAKXZ @ 0x1400896E0 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAKXZ @ 0x1400896F0 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDA@EAAKXZ @ 0x140089700 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDI@EAAKXZ @ 0x140089720 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFEA@EAAKXZ @ 0x140089740 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFEA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFHA@EAAKXZ @ 0x140089760 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFHA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1408) + 8LL))(*(_QWORD *)(a1 + 1408));
}
