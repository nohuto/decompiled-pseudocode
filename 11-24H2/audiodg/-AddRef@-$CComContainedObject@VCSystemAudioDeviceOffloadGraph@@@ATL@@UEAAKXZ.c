/*
 * XREFs of ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ @ 0x140070560
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ @ 0x140070590 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ @ 0x1400705A0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAKXZ @ 0x1400705B0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WJI@EAAKXZ @ 0x1400705C0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WJI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WKA@EAAKXZ @ 0x1400705E0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WKA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WOA@EAAKXZ @ 0x140070600 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WOA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WOI@EAAKXZ @ 0x140070620 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WOI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WPA@EAAKXZ @ 0x140070640 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WPA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 248) + 8LL))(*(_QWORD *)(a1 + 248));
}
