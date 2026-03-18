/*
 * XREFs of ImpWaitForWorkerShutdown @ 0x140150818
 * Callers:
 *     ImSessionStart @ 0x140133EB4 (ImSessionStart.c)
 *     ImSessionStop @ 0x14023D1C0 (ImSessionStop.c)
 * Callees:
 *     ImpAcquireLock @ 0x140012564 (ImpAcquireLock.c)
 *     ImpReleaseLock @ 0x1400125B8 (ImpReleaseLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 ImpWaitForWorkerShutdown()
{
  unsigned int v0; // esi
  __int64 InputMonitorSessionState; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  void *v4; // rcx

  v0 = 0;
  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ImpAcquireLock(InputMonitorSessionState + 72);
  if ( *(_BYTE *)(InputMonitorSessionState + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ImpReleaseLock(InputMonitorSessionState + 72, v2, v3);
  if ( *(struct _KTHREAD **)(InputMonitorSessionState + 40) != KeGetCurrentThread() )
    v0 = ZwWaitForSingleObject(*(HANDLE *)(InputMonitorSessionState + 32), 0, 0LL);
  ZwClose(*(HANDLE *)(InputMonitorSessionState + 32));
  v4 = *(void **)(InputMonitorSessionState + 24);
  *(_QWORD *)(InputMonitorSessionState + 32) = 0LL;
  ExFreePoolWithTag(v4, 0);
  return v0;
}
