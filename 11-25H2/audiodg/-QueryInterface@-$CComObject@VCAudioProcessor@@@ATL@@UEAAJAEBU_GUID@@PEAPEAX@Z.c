/*
 * XREFs of ?QueryInterface@?$CComObject@VCAudioProcessor@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140049BD0
 * Callers:
 *     ?QueryInterface@?$CComObject@VCAudioProcessor@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140064EA0 (-QueryInterface@-$CComObject@VCAudioProcessor@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCAudioProcessor@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140064EB0 (-QueryInterface@-$CComObject@VCAudioProcessor@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CAudioProcessor>::QueryInterface(char *a1, const struct _GUID *a2, char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CAudioProcessor::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
