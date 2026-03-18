/*
 * XREFs of PopExternalMonitorUpdatedWorker @ 0x140A9AC50
 * Callers:
 *     <none>
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x140490DC8 (SSHSupportIsPlatformAoAc.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404A4D54 (PopOkayToQueueNextWorkItem.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopEvaluateInputSuppressionAction @ 0x140AC7B10 (PopEvaluateInputSuppressionAction.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopExternalMonitorUpdatedWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+20h] [rbp-8h]

  PopAcquirePolicyLock(a1, a2);
  do
  {
    v6 = PopConsoleExternalDisplayConnected;
    PopReleasePolicyLock(v3, v2, v4, v5, v18);
    if ( qword_140E675A8 )
    {
      LOBYTE(v8) = v6;
      guard_dispatch_icall_no_overrides(v8, v7, v9, v10);
    }
    if ( SSHSupportIsPlatformAoAc() )
      PopEvaluateInputSuppressionAction();
    PopAcquirePolicyLock(v12, v11);
  }
  while ( v6 != PopConsoleExternalDisplayConnected );
  PopOkayToQueueNextWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem);
  return PopReleasePolicyLock(v14, v13, v15, v16, v18);
}
