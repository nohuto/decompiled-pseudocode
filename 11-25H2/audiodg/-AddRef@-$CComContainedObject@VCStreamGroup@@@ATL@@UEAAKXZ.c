/*
 * XREFs of ?AddRef@?$CComContainedObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140065260
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCStreamGroup@@@ATL@@W7EAAKXZ @ 0x140065290 (-AddRef@-$CComContainedObject@VCStreamGroup@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ @ 0x1400652A0 (-AddRef@-$CComContainedObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ @ 0x1400652B0 (-AddRef@-$CComContainedObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComContainedObject<CStreamGroup>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 344) + 8LL))(*(_QWORD *)(a1 + 344));
}
