/*
 * XREFs of ?QueryInterface@?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140055580
 * Callers:
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400818D0 (-QueryInterface@-$CComObject@V-$CCrossProcessServerOutputEndpoint@UStaticControlDat_ea_1400818D0.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@WBKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400818E0 (-QueryInterface@-$CComObject@V-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolati.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@WBOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140081900 (-QueryInterface@-$CComObject@V-$CCrossProcessServerOutputEndpoint@UStaticControlDat_ea_140081900.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@WBPI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140081920 (-QueryInterface@-$CComObject@V-$CCrossProcessServerOutputEndpoint@UStaticControlDat_ea_140081920.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CCrossProcessServerOutputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
