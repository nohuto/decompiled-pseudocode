/*
 * XREFs of ?QueryInterface@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140081790
 * Callers:
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400817B0 (-QueryInterface@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlDat_ea_1400817B0.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400817C0 (-QueryInterface@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlDat_ea_1400817C0.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400817E0 (-QueryInterface@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlDat_ea_1400817E0.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140081800 (-QueryInterface@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlDat_ea_140081800.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140081820 (-QueryInterface@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlDat_ea_140081820.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140081840 (-QueryInterface@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlDat_ea_140081840.c)
 *     ?QueryInterface@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WCAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140081860 (-QueryInterface@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlDat_ea_140081860.c)
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
