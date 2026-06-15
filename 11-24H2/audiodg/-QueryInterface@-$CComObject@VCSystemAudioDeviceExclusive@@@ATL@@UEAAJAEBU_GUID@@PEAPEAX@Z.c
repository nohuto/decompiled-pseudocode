/*
 * XREFs of ?QueryInterface@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400588D0
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14006FF70 (-QueryInterface@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14006FF80 (-QueryInterface@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14006FF90 (-QueryInterface@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceExclusive>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CSystemAudioDeviceExclusive::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
