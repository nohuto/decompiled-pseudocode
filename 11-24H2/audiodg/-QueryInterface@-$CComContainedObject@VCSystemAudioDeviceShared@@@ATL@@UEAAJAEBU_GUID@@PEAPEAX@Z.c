/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400715D0
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140071600 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140071610 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140071620 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140071630 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WJI@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140071650 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WKA@EAAJAEBU_GUID@@PEAPEA.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceShared>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 224))(*(_QWORD *)(a1 + 224));
}
