/*
 * XREFs of ?QueryInterface@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400553B0
 * Callers:
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140081880 (-QueryInterface@-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_ea_140081880.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140081890 (-QueryInterface@-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_ea_140081890.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400818B0 (-QueryInterface@-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_ea_1400818B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CCrossProcessServerInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
