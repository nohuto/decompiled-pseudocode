/*
 * XREFs of ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140045820
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140071670 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140071680 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140071690 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400716A0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400716C0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface(
        CSystemAudioDeviceShared *this,
        const struct _GUID *a2,
        char **a3)
{
  return CSystemAudioDeviceShared::_InternalQueryInterface(this, a2, a3);
}
