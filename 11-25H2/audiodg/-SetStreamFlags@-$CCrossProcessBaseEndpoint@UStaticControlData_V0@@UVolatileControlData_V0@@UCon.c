/*
 * XREFs of ?SetStreamFlags@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAJK@Z @ 0x140056FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::SetStreamFlags(
        __int64 a1,
        int a2)
{
  *(_DWORD *)(a1 + 192) = a2;
  return 0LL;
}
