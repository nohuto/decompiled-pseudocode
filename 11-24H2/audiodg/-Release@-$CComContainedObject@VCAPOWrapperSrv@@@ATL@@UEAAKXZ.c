/*
 * XREFs of ?Release@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x14005DB20
 * Callers:
 *     ?Release@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ @ 0x14005DB50 (-Release@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ @ 0x14005DB60 (-Release@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ @ 0x14005DB70 (-Release@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComContainedObject<CAPOWrapperSrv>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32));
}
