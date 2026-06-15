/*
 * XREFs of ?QueryInterface@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400816C0
 * Callers:
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400816E0 (-QueryInterface@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_ea_1400816E0.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400816F0 (-QueryInterface@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_ea_1400816F0.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140081710 (-QueryInterface@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_ea_140081710.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140081730 (-QueryInterface@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_ea_140081730.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140081750 (-QueryInterface@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_ea_140081750.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140081770 (-QueryInterface@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_ea_140081770.c)
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
