/*
 * XREFs of ?AddRef@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@W7EAAKXZ @ 0x140083160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::AddRef(
        __int64 a1)
{
  return ATL::CComObject<CCrossProcessServerOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::AddRef(a1 - 8);
}
