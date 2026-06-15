/*
 * XREFs of ?QueryInterface@?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@WBPI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400836F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerOutputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::CComObject<CCrossProcessServerOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::QueryInterface(
           (char *)(a1 - 504),
           a2,
           a3);
}
