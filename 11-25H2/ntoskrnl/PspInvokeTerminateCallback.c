/*
 * XREFs of PspInvokeTerminateCallback @ 0x1407699F8
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140762C40 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsStartSiloMonitor @ 0x1407695C0 (PsStartSiloMonitor.c)
 * Callees:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x140641A64 (EtwTraceJobServerSiloMonitorCallback.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __fastcall PspInvokeTerminateCallback(__int64 a1, __int64 a2)
{
  EtwTraceJobServerSiloMonitorCallback(2, a1, (unsigned __int16 *)(a2 + 40), 0);
  guard_dispatch_icall_no_overrides(a1);
  return EtwTraceJobServerSiloMonitorCallback(3, a1, (unsigned __int16 *)(a2 + 40), 0);
}
