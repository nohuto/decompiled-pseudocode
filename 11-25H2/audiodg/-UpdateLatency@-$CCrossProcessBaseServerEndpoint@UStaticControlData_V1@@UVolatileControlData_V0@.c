/*
 * XREFs of ?UpdateLatency@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJ_J@Z @ 0x140058A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::UpdateLatency(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 - 336);
  *(_QWORD *)(a1 + 40) += a2;
  _InterlockedExchange64((volatile __int64 *)(v2 + 168), *(_QWORD *)(a1 + 40));
  return 0LL;
}
