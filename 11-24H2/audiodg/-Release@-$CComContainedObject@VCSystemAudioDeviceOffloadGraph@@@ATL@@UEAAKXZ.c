/*
 * XREFs of ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ @ 0x140070F70
 * Callers:
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ @ 0x140070FA0 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ @ 0x140070FB0 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAKXZ @ 0x140070FC0 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WJI@EAAKXZ @ 0x140070FD0 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WJI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WKA@EAAKXZ @ 0x140070FF0 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WKA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WOA@EAAKXZ @ 0x140071010 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WOA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WOI@EAAKXZ @ 0x140071030 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WOI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WPA@EAAKXZ @ 0x140071050 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WPA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 248) + 16LL))(*(_QWORD *)(a1 + 248));
}
