/*
 * XREFs of PspInvokeCreateCallback @ 0x140769994
 * Callers:
 *     PsStartSiloMonitor @ 0x1407695C0 (PsStartSiloMonitor.c)
 *     PspNotifyServerSiloCreation @ 0x140769A58 (PspNotifyServerSiloCreation.c)
 * Callees:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x140641A64 (EtwTraceJobServerSiloMonitorCallback.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PspInvokeCreateCallback(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rdi
  unsigned int v4; // ebx

  v2 = (unsigned __int16 *)(a2 + 40);
  EtwTraceJobServerSiloMonitorCallback(0, a1, (unsigned __int16 *)(a2 + 40), 0);
  v4 = guard_dispatch_icall_no_overrides(a1);
  EtwTraceJobServerSiloMonitorCallback(1, a1, v2, v4);
  return v4;
}
