/*
 * XREFs of ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400464E0
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008B610 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PE.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008B620 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008B630 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008B640 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFDA@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008B660 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFDI@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008B680 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFKA@EAAJAEBU_GUID@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CSpatialCrossProcessServerInputEndpoint::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
