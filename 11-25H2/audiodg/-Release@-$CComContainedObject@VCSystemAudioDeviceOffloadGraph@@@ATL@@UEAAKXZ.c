/*
 * XREFs of ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ @ 0x1400734E0
 * Callers:
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ @ 0x140073510 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ @ 0x140073520 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAKXZ @ 0x140073530 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WJI@EAAKXZ @ 0x140073540 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WJI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WKA@EAAKXZ @ 0x140073560 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WKA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WOA@EAAKXZ @ 0x140073580 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WOA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WOI@EAAKXZ @ 0x1400735A0 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WOI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WPA@EAAKXZ @ 0x1400735C0 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WPA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 248) + 16LL))(*(_QWORD *)(a1 + 248));
}
