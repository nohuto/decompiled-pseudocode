/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140076360
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCVpoContext@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140076380 (-QueryInterface@-$CComContainedObject@VCVpoContext@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComContainedObject<CVpoContext>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 16))(*(_QWORD *)(a1 + 16));
}
