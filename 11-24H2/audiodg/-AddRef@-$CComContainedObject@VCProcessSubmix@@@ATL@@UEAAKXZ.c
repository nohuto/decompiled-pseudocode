/*
 * XREFs of ?AddRef@?$CComContainedObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x14006CA30
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCProcessSubmix@@@ATL@@W7EAAKXZ @ 0x14006CA60 (-AddRef@-$CComContainedObject@VCProcessSubmix@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ @ 0x14006CA70 (-AddRef@-$CComContainedObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComContainedObject<CProcessSubmix>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 8LL))(*(_QWORD *)(a1 + 336));
}
