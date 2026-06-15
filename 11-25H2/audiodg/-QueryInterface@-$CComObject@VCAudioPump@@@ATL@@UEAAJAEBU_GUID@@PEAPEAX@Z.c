/*
 * XREFs of ?QueryInterface@?$CComObject@VCAudioPump@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004AB00
 * Callers:
 *     ?QueryInterface@?$CComObject@VCAudioPump@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140064EC0 (-QueryInterface@-$CComObject@VCAudioPump@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CAudioPump>::QueryInterface(char *a1, const struct _GUID *a2, char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CAudioPump::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
