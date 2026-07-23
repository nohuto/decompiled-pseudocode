/*
 * XREFs of PopExternalMonitorUpdatedWorker @ 0x140A961C0
 * Callers:
 *     <none>
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 *     PopOkayToQueueNextWorkItem @ 0x14049FAE4 (PopOkayToQueueNextWorkItem.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopEvaluateInputSuppressionAction @ 0x140AC5570 (PopEvaluateInputSuppressionAction.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // [rsp+20h] [rbp-8h]

  PopAcquirePolicyLock(a1, a2);
  do
  {
    v6 = PopConsoleExternalDisplayConnected;
    PopReleasePolicyLock(v3, v2, v4, v5, v16);
    if ( qword_140E67718 )
    {
      LOBYTE(v8) = v6;
      guard_dispatch_icall_no_overrides(v8, v7);
    }
    if ( SSHSupportIsPlatformAoAc() )
      PopEvaluateInputSuppressionAction();
    PopAcquirePolicyLock(v10, v9);
  }
  while ( v6 != PopConsoleExternalDisplayConnected );
  PopOkayToQueueNextWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem);
  return PopReleasePolicyLock(v12, v11, v13, v14, v16);
}
