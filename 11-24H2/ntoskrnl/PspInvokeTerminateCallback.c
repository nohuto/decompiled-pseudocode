/*
 * XREFs of PspInvokeTerminateCallback @ 0x1407796A8
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140772600 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsStartSiloMonitor @ 0x140779270 (PsStartSiloMonitor.c)
 * Callees:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x14064DA30 (EtwTraceJobServerSiloMonitorCallback.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __fastcall PspInvokeTerminateCallback(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  EtwTraceJobServerSiloMonitorCallback(2, a1, (unsigned __int16 *)(a2 + 40), 0);
  guard_dispatch_icall_no_overrides(a1, v4, v5, v6);
  return EtwTraceJobServerSiloMonitorCallback(3, a1, (unsigned __int16 *)(a2 + 40), 0);
}
