/*
 * XREFs of ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140045B20
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140073BE0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140073BF0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140073C00 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140073C10 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140073C30 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
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
