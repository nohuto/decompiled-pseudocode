/*
 * XREFs of ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004BC30
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140070EA0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140070EB0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140070EC0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140070ED0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140070EF0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140070F10 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140070F30 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140070F50 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceOffloadGraph>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CSystemAudioDeviceOffloadGraph::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
