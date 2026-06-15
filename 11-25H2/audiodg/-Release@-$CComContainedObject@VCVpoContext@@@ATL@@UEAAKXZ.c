/*
 * XREFs of ?Release@?$CComContainedObject@VCVpoContext@@@ATL@@UEAAKXZ @ 0x1400763C0
 * Callers:
 *     ?Release@?$CComContainedObject@VCVpoContext@@@ATL@@W7EAAKXZ @ 0x1400763F0 (-Release@-$CComContainedObject@VCVpoContext@@@ATL@@W7EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComContainedObject<CVpoContext>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
}
