/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400714A0
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400714D0 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400714E0 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAJAEBU_GUID@@PEA.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400714F0 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAJAEBU_GUID@@PEA.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceExclusive>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 152))(*(_QWORD *)(a1 + 152));
}
