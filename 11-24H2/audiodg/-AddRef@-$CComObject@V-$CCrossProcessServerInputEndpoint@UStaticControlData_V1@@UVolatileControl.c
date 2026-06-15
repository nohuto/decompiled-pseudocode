/*
 * XREFs of ?AddRef@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAKXZ @ 0x140055390
 * Callers:
 *     ?AddRef@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@W7EAAKXZ @ 0x140081530 (-AddRef@-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVo_ea_140081530.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBKI@EAAKXZ @ 0x140081540 (-AddRef@-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVo_ea_140081540.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBOA@EAAKXZ @ 0x140081560 (-AddRef@-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVo_ea_140081560.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::AddRef(
        __int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((volatile int *)(a1 + 504));
}
