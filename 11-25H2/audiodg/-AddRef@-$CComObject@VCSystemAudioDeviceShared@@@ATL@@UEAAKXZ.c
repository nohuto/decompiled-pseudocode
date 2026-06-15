/*
 * XREFs of ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140045220
 * Callers:
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ @ 0x1400739A0 (-AddRef@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ @ 0x1400739B0 (-AddRef@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ @ 0x1400739C0 (-AddRef@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WJI@EAAKXZ @ 0x1400739D0 (-AddRef@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WJI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WKA@EAAKXZ @ 0x1400739F0 (-AddRef@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WKA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CSystemAudioDeviceShared>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((volatile int *)(a1 + 224));
}
