/*
 * XREFs of ?IsRunning@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAHXZ @ 0x140053B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::IsRunning(
        __int64 a1)
{
  return _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 - 424) + 164LL), 0, 0) & 1;
}
