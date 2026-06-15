/*
 * XREFs of ?AddRef@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAKXZ @ 0x140055460
 * Callers:
 *     ?AddRef@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@W7EAAKXZ @ 0x140083300 (-AddRef@-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVo_ea_140083300.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBKI@EAAKXZ @ 0x140083310 (-AddRef@-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVo_ea_140083310.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBOA@EAAKXZ @ 0x140083330 (-AddRef@-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVo_ea_140083330.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::AddRef(
        __int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((volatile int *)(a1 + 504));
}
