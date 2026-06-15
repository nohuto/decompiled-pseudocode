/*
 * XREFs of ?SetCurrentTimestamp@?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAUAE_CURRENT_POSITION@@@Z @ 0x140086BE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCrossProcessServerInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::SetCurrentTimestamp(
        __int64 a1,
        __int64 a2)
{
  (*(void (__fastcall **)(__int64, __int64, signed __int64))(*(_QWORD *)(a1 - 424) + 80LL))(
    a1 - 424,
    a2,
    _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 336) + 24LL), 0LL, 0LL));
  return 0LL;
}
