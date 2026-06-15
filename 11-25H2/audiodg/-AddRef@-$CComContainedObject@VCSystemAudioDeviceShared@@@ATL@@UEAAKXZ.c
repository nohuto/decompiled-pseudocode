/*
 * XREFs of ?AddRef@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140073900
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ @ 0x140073930 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ @ 0x140073940 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ @ 0x140073950 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WJI@EAAKXZ @ 0x140073960 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WJI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WKA@EAAKXZ @ 0x140073980 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WKA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceShared>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 224) + 8LL))(*(_QWORD *)(a1 + 224));
}
