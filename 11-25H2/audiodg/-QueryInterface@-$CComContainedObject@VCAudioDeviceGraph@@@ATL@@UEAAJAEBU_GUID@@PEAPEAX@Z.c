/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005D960
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCStreamInstance@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005D980 (-QueryInterface@-$CComContainedObject@VCStreamInstance@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComContainedObject@VCStreamInstance@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005D990 (-QueryInterface@-$CComContainedObject@VCStreamInstance@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComContainedObject<CAudioDeviceGraph>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 24));
}
