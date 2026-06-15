/*
 * XREFs of ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008B540
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008B560 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@P.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008B570 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008B580 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008B590 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDA@EAAJAEBU_GUID.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008B5B0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDI@EAAJAEBU_GUID.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008B5D0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFEA@EAAJAEBU_GUID.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008B5F0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFHA@EAAJAEBU_GUID.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CSpatialCrossProcessClientOutputEndpoint::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
