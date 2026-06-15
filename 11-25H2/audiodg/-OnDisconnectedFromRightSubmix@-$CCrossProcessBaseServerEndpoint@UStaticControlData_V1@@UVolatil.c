/*
 * XREFs of ?OnDisconnectedFromRightSubmix@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJ_J@Z @ 0x1400555F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::OnDisconnectedFromRightSubmix(
        __int64 a1,
        __int64 a2)
{
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 - 336) + 164LL), 0xFFFFFFFD);
  _InterlockedExchange((volatile __int32 *)(a1 - 248), 1);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, -a2);
  return 0LL;
}
