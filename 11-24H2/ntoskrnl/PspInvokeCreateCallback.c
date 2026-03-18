/*
 * XREFs of PspInvokeCreateCallback @ 0x140779644
 * Callers:
 *     PsStartSiloMonitor @ 0x140779270 (PsStartSiloMonitor.c)
 *     PspNotifyServerSiloCreation @ 0x140779708 (PspNotifyServerSiloCreation.c)
 * Callees:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x14064DA30 (EtwTraceJobServerSiloMonitorCallback.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PspInvokeCreateCallback(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx

  v2 = (unsigned __int16 *)(a2 + 40);
  EtwTraceJobServerSiloMonitorCallback(0, a1, (unsigned __int16 *)(a2 + 40), 0);
  v7 = guard_dispatch_icall_no_overrides(a1, v4, v5, v6);
  EtwTraceJobServerSiloMonitorCallback(1, a1, v2, v7);
  return v7;
}
