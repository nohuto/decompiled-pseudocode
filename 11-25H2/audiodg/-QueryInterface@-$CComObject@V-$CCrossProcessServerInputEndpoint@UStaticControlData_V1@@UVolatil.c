/*
 * XREFs of ?QueryInterface@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140055480
 * Callers:
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140083650 (-QueryInterface@-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_ea_140083650.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140083660 (-QueryInterface@-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_ea_140083660.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140083680 (-QueryInterface@-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_ea_140083680.c)
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
