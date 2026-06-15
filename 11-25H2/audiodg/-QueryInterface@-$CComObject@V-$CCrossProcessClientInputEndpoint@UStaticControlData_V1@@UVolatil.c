/*
 * XREFs of ?QueryInterface@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140083490
 * Callers:
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400834B0 (-QueryInterface@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_ea_1400834B0.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400834C0 (-QueryInterface@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_ea_1400834C0.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400834E0 (-QueryInterface@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_ea_1400834E0.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140083500 (-QueryInterface@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_ea_140083500.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140083520 (-QueryInterface@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_ea_140083520.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140083540 (-QueryInterface@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_ea_140083540.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
