/*
 * XREFs of ImpCleanupWork @ 0x14014D870
 * Callers:
 *     ImSessionStart @ 0x140133EB4 (ImSessionStart.c)
 *     ImSessionStop @ 0x14023D1C0 (ImSessionStop.c)
 * Callees:
 *     ImpAcquireLock @ 0x140012564 (ImpAcquireLock.c)
 *     ImpReleaseLock @ 0x1400125B8 (ImpReleaseLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ImpCleanupLock @ 0x14014D8FC (ImpCleanupLock.c)
 */

__int64 ImpCleanupWork()
{
  __int64 InputMonitorSessionState; // rbx
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD **v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v1 = InputMonitorSessionState + 72;
  ImpAcquireLock(InputMonitorSessionState + 72);
  v4 = (_QWORD **)(InputMonitorSessionState + 56);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    v6[1] = v4;
    ExFreePoolWithTag(v5, 0);
  }
  ImpReleaseLock(v1, v2, v3);
  return ImpCleanupLock(v1);
}
