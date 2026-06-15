/*
 * XREFs of ?QueryInterface@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140083560
 * Callers:
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140083580 (-QueryInterface@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlDat_ea_140083580.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140083590 (-QueryInterface@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlDat_ea_140083590.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400835B0 (-QueryInterface@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlDat_ea_1400835B0.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400835D0 (-QueryInterface@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlDat_ea_1400835D0.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400835F0 (-QueryInterface@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlDat_ea_1400835F0.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140083610 (-QueryInterface@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlDat_ea_140083610.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WCAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140083630 (-QueryInterface@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlDat_ea_140083630.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
