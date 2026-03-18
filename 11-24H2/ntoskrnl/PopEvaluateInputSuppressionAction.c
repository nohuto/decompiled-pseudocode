/*
 * XREFs of PopEvaluateInputSuppressionAction @ 0x140AC7B10
 * Callers:
 *     PopExternalMonitorUpdatedWorker @ 0x140A9AC50 (PopExternalMonitorUpdatedWorker.c)
 *     PopBroadcastInputSuppressionCallback @ 0x140AC7A50 (PopBroadcastInputSuppressionCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1405D7B9C (Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     PopTraceInputSuppressionActionUpdateV1 @ 0x1407587B8 (PopTraceInputSuppressionActionUpdateV1.c)
 *     PopBroadcastSessionInfo @ 0x140A93E70 (PopBroadcastSessionInfo.c)
 *     PopTraceInputSuppressionActionUpdate @ 0x140AA96D8 (PopTraceInputSuppressionActionUpdate.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 PopEvaluateInputSuppressionAction()
{
  char v0; // di
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // bp
  bool v4; // r15
  bool v5; // si
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
  __int64 v20; // [rsp+20h] [rbp-68h]
  int v21; // [rsp+28h] [rbp-60h]
  BOOL v22; // [rsp+40h] [rbp-48h] BYREF
  GUID v23; // [rsp+48h] [rbp-40h] BYREF
  BOOL v24; // [rsp+58h] [rbp-30h]

  v22 = 0;
  v0 = 1;
  v23 = 0LL;
  v24 = 0;
  PopAcquireRwLockExclusive(&PopInputSuppressionLock);
  PopAcquirePolicyLock(v2, v1);
  v3 = PopConsoleExternalDisplayConnected;
  v4 = PopLidOpened == 0;
  v5 = dword_140F0BA4C == 1;
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
      goto LABEL_22;
    v12 = v11 == 0;
  }
  else
  {
    if ( PopErrataReportingIncorrectLidState || !PopIgnoreLidStateForInputSuppression && !v4 )
      goto LABEL_22;
    if ( PopInputSuppressionIgnorePowerSource )
      goto LABEL_20;
    v12 = !v5;
  }
  if ( v12 )
  {
LABEL_22:
    v13 = 0;
    goto LABEL_23;
  }
LABEL_20:
  if ( v3 )
    goto LABEL_22;
  v13 = 1;
  if ( !v6 )
    goto LABEL_22;
LABEL_23:
  if ( !PopEnableInputSuppression && v13 == 1 )
    v13 = 2;
  PopReleasePolicyLock(v8, v7, v9, v10, v20);
  if ( PopInputSuppressionRequired != v13 )
  {
    PopInputSuppressionRequired = v13;
    IsEnabledDeviceUsageNoInline = Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline();
    LOBYTE(v16) = v3;
    LOBYTE(v17) = v5;
    LOBYTE(v18) = v4;
    if ( IsEnabledDeviceUsageNoInline )
      PopTraceInputSuppressionActionUpdateV1(v15, v18, v17, v16, v6, v21, v13, v0);
    else
      PopTraceInputSuppressionActionUpdate(v15, v18, v17, v16, v6, v21, v13);
    ZwUpdateWnfStateData((__int64)&WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX, (__int64)&PopInputSuppressionRequired);
    if ( PopEnableInputSuppression )
    {
      if ( (unsigned int)PopInputSuppressionRequired <= 1 )
        _InterlockedIncrement(&PopInputSuppressionActionCount);
      v22 = PopInputSuppressionRequired == 1;
      ZwUpdateWnfStateData((__int64)&WNF_PO_INPUT_SUPPRESS_NOTIFICATION, (__int64)&v22);
      v24 = v22;
      v23 = GUID_INPUT_SUPPRESS_REQUESTED;
      PopBroadcastSessionInfo(0, 20, (__int64)&v23);
    }
  }
  return PopReleaseRwLock((signed __int64 *)&PopInputSuppressionLock);
}
