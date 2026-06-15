/*
 * XREFs of ?QueryInterface@?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140081880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::QueryInterface(
           (char *)(a1 - 8),
           a2,
           a3);
}
