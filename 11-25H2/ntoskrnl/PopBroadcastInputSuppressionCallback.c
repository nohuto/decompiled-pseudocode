/*
 * XREFs of PopBroadcastInputSuppressionCallback @ 0x140A85450
 * Callers:
 *     <none>
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x140491754 (SSHSupportIsPlatformAoAc.c)
 *     PopEvaluateInputSuppressionAction @ 0x140A854CC (PopEvaluateInputSuppressionAction.c)
 */

__int64 PopBroadcastInputSuppressionCallback()
{
  __int64 *v0; // rcx
  __int64 v1; // r8
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( SSHSupportIsPlatformAoAc() )
  {
    v2 = *v0;
    v3 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *v0;
    if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *v0 )
      v3 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - v0[1];
    if ( !v3 )
      goto LABEL_11;
    v4 = *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - v2;
    if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == v2 )
      v4 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - *(_QWORD *)(v1 + 8);
    if ( !v4 )
      goto LABEL_11;
    v5 = *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - v2;
    if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == v2 )
      v5 = *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - *(_QWORD *)(v1 + 8);
    if ( !v5 )
LABEL_11:
      PopEvaluateInputSuppressionAction();
  }
  return 0LL;
}
