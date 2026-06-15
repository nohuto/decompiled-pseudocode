/*
 * XREFs of ?Release@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x140071650
 * Callers:
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAKXZ @ 0x140071680 (-Release@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ @ 0x140071690 (-Release@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAKXZ @ 0x1400716A0 (-Release@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceExclusive>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 152) + 16LL))(*(_QWORD *)(a1 + 152));
}
