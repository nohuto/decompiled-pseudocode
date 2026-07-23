/*
 * XREFs of PopEvaluateInputSuppressionAction @ 0x140AC5570
 * Callers:
 *     PopUsb4DisplayPresenceUpdatedWorker @ 0x140758580 (PopUsb4DisplayPresenceUpdatedWorker.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140A961C0 (PopExternalMonitorUpdatedWorker.c)
 *     PopBroadcastInputSuppressionCallback @ 0x140AC54B0 (PopBroadcastInputSuppressionCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x1405CA3E4 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1405D50BC (Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     PopTraceInputSuppressionActionUpdateV1 @ 0x140756C38 (PopTraceInputSuppressionActionUpdateV1.c)
 *     PopBroadcastSessionInfo @ 0x140A90620 (PopBroadcastSessionInfo.c)
 *     PopTraceInputSuppressionActionUpdate @ 0x140AA4788 (PopTraceInputSuppressionActionUpdate.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 PopEvaluateInputSuppressionAction()
{
  char v0; // si
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // di
  bool v4; // r15
  bool v5; // bp
  char v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // al
  bool v12; // zf
  int v13; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  void *ExplicitScope; // [rsp+20h] [rbp-68h]
  WNF_CHANGE_STAMP MatchingChangeStamp; // [rsp+28h] [rbp-60h]
  BOOL Buffer; // [rsp+40h] [rbp-48h] BYREF
  GUID v23; // [rsp+48h] [rbp-40h] BYREF
  BOOL v24; // [rsp+58h] [rbp-30h]

  Buffer = 0;
  v0 = 1;
  v23 = 0LL;
  v24 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopInputSuppressionLock);
  PopAcquirePolicyLock(v2, v1);
  v3 = PopConsoleExternalDisplayConnected;
  v4 = PopLidOpened == 0;
  v5 = dword_140F0B38C == 1;
  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v3 || (v3 = 0, PopUsb4DisplayPresent) )
      v3 = 1;
  }
  v6 = PopConsoleDisplayState == 0;
  if ( (unsigned int)Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v5 && PopPolicy )
    {
      LOBYTE(v8) = -(*((_DWORD *)PopPolicy + 7) != 0);
      v0 = v8 & 1;
    }
    if ( PopInputSuppressionIgnorePowerSource )
    {
      v11 = v0;
    }
    else if ( v5 || (v11 = 0, v0) )
    {
      v11 = 1;
    }
    if ( PopErrataReportingIncorrectLidState || !PopIgnoreLidStateForInputSuppression && !v4 )
      goto LABEL_26;
    v12 = v11 == 0;
  }
  else
  {
    if ( PopErrataReportingIncorrectLidState || !PopIgnoreLidStateForInputSuppression && !v4 )
      goto LABEL_26;
    if ( PopInputSuppressionIgnorePowerSource )
      goto LABEL_24;
    v12 = !v5;
  }
  if ( v12 )
  {
LABEL_26:
    v13 = 0;
    goto LABEL_27;
  }
LABEL_24:
  if ( v3 )
    goto LABEL_26;
  v13 = 1;
  if ( !v6 )
    goto LABEL_26;
LABEL_27:
  if ( !PopEnableInputSuppression && v13 == 1 )
    v13 = 2;
  PopReleasePolicyLock(v8, v7, v9, v10, ExplicitScope);
  if ( PopInputSuppressionRequired != v13 )
  {
    PopInputSuppressionRequired = v13;
    IsEnabledDeviceUsageNoInline = Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline();
    LOBYTE(v16) = v3;
    LOBYTE(v17) = v5;
    LOBYTE(v18) = v4;
    if ( IsEnabledDeviceUsageNoInline )
      PopTraceInputSuppressionActionUpdateV1(v15, v18, v17, v16, v6, MatchingChangeStamp, v13, v0);
    else
      PopTraceInputSuppressionActionUpdate(v15, v18, v17, v16, v6, MatchingChangeStamp, v13);
    ZwUpdateWnfStateData(&WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX, &PopInputSuppressionRequired, 4u, 0LL, 0LL, 0, 0);
    if ( PopEnableInputSuppression )
    {
      if ( (unsigned int)PopInputSuppressionRequired <= 1 )
        _InterlockedIncrement(&PopInputSuppressionActionCount);
      Buffer = PopInputSuppressionRequired == 1;
      ZwUpdateWnfStateData(&WNF_PO_INPUT_SUPPRESS_NOTIFICATION, &Buffer, 4u, 0LL, 0LL, 0, 0);
      v24 = Buffer;
      v23 = GUID_INPUT_SUPPRESS_REQUESTED;
      PopBroadcastSessionInfo(0, 20, (__int64)&v23);
    }
  }
  return PopReleaseRwLock(&PopInputSuppressionLock);
}
