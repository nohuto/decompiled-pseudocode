/*
 * XREFs of ?AddRef@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x14006F1D0
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAKXZ @ 0x14006F200 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ @ 0x14006F210 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAKXZ @ 0x14006F220 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceExclusive>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 152) + 8LL))(*(_QWORD *)(a1 + 152));
}
