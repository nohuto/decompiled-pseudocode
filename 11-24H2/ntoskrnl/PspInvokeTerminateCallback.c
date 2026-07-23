/*
 * XREFs of PspInvokeTerminateCallback @ 0x1407797A8
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140772820 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsStartSiloMonitor @ 0x140779370 (PsStartSiloMonitor.c)
 * Callees:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x14064C040 (EtwTraceJobServerSiloMonitorCallback.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __fastcall PspInvokeTerminateCallback(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx

  EtwTraceJobServerSiloMonitorCallback(2, a1, (unsigned __int16 *)(a2 + 40), 0);
  guard_dispatch_icall_no_overrides(a1, v4);
  return EtwTraceJobServerSiloMonitorCallback(3, a1, (unsigned __int16 *)(a2 + 40), 0);
}
