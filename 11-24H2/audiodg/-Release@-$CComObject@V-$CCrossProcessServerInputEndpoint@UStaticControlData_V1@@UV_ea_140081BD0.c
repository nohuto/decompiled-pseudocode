/*
 * XREFs of ?Release@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBOA@EAAKXZ @ 0x140081BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::Release(
        __int64 a1)
{
  return ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>>::Release((volatile int *)(a1 - 480));
}
