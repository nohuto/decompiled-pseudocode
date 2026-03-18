/*
 * XREFs of PopExternalMonitorUpdatedWorker @ 0x140A94F30
 * Callers:
 *     <none>
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x140491754 (SSHSupportIsPlatformAoAc.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404A4824 (PopOkayToQueueNextWorkItem.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopEvaluateInputSuppressionAction @ 0x140A854CC (PopEvaluateInputSuppressionAction.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopExternalMonitorUpdatedWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // bl
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // [rsp+20h] [rbp-8h]

  PopAcquirePolicyLock(a1, a2);
  do
  {
    v6 = PopConsoleExternalDisplayConnected;
    PopReleasePolicyLock(v3, v2, v4, v5, v15);
    if ( qword_140E672C8 )
    {
      LOBYTE(v7) = v6;
      guard_dispatch_icall_no_overrides(v7);
    }
    if ( SSHSupportIsPlatformAoAc() )
      PopEvaluateInputSuppressionAction();
    PopAcquirePolicyLock(v9, v8);
  }
  while ( v6 != PopConsoleExternalDisplayConnected );
  PopOkayToQueueNextWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem);
  return PopReleasePolicyLock(v11, v10, v12, v13, v15);
}
