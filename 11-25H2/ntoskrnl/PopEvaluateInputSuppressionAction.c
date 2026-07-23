/*
 * XREFs of PopEvaluateInputSuppressionAction @ 0x140A854CC
 * Callers:
 *     PopBroadcastInputSuppressionCallback @ 0x140A85450 (PopBroadcastInputSuppressionCallback.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140A94F30 (PopExternalMonitorUpdatedWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     PopBroadcastSessionInfo @ 0x140A2C8CC (PopBroadcastSessionInfo.c)
 *     PopTraceInputSuppressionActionUpdate @ 0x140AA4678 (PopTraceInputSuppressionActionUpdate.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

__int64 PopEvaluateInputSuppressionAction()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // bp
  bool v7; // di
  bool v8; // si
  char v9; // r14
  int v10; // ebx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  void *ExplicitScope; // [rsp+20h] [rbp-68h]
  BOOL Buffer; // [rsp+40h] [rbp-48h] BYREF
  GUID v18; // [rsp+48h] [rbp-40h] BYREF
  BOOL v19; // [rsp+58h] [rbp-30h]

  Buffer = 0;
  v18 = 0LL;
  v19 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopInputSuppressionLock);
  PopAcquirePolicyLock(v1, v0);
  v6 = PopConsoleExternalDisplayConnected;
  v7 = PopLidOpened == 0;
  v8 = dword_140F0B70C == 1;
  v9 = PopConsoleDisplayState == 0;
  if ( PopErrataReportingIncorrectLidState
    || !PopIgnoreLidStateForInputSuppression && PopLidOpened
    || !PopInputSuppressionIgnorePowerSource && dword_140F0B70C != 1
    || PopConsoleExternalDisplayConnected
    || (v10 = 1, PopConsoleDisplayState) )
  {
    v10 = 0;
  }
  if ( !PopEnableInputSuppression && v10 == 1 )
    v10 = 2;
  PopReleasePolicyLock(v3, v2, v4, v5, ExplicitScope);
  if ( PopInputSuppressionRequired != v10 )
  {
    LOBYTE(v14) = v6;
    LOBYTE(v13) = v8;
    LOBYTE(v11) = v7;
    PopInputSuppressionRequired = v10;
    PopTraceInputSuppressionActionUpdate(v12, v11, v13, v14, v9);
    ZwUpdateWnfStateData(&WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX, &PopInputSuppressionRequired, 4u, 0LL, 0LL, 0, 0);
    if ( PopEnableInputSuppression )
    {
      if ( (unsigned int)PopInputSuppressionRequired <= 1 )
        _InterlockedIncrement(&PopInputSuppressionActionCount);
      Buffer = PopInputSuppressionRequired == 1;
      ZwUpdateWnfStateData(&WNF_PO_INPUT_SUPPRESS_NOTIFICATION, &Buffer, 4u, 0LL, 0LL, 0, 0);
      v19 = Buffer;
      v18 = GUID_INPUT_SUPPRESS_REQUESTED;
      PopBroadcastSessionInfo(0, 20, (__int64)&v18);
    }
  }
  return PopReleaseRwLock(&PopInputSuppressionLock);
}
