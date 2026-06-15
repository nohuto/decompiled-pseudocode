/*
 * XREFs of ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x14006F230
 * Callers:
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAKXZ @ 0x14006F250 (-AddRef@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ @ 0x14006F260 (-AddRef@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAKXZ @ 0x14006F270 (-AddRef@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((volatile int *)(a1 + 152));
}
