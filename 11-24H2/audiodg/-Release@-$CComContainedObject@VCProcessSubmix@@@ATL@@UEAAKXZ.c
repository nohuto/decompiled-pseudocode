/*
 * XREFs of ?Release@?$CComContainedObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x14006CCA0
 * Callers:
 *     ?Release@?$CComContainedObject@VCProcessSubmix@@@ATL@@W7EAAKXZ @ 0x14006CCD0 (-Release@-$CComContainedObject@VCProcessSubmix@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ @ 0x14006CCE0 (-Release@-$CComContainedObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComContainedObject<CProcessSubmix>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 16LL))(*(_QWORD *)(a1 + 336));
}
