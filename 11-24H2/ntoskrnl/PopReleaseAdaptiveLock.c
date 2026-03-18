/*
 * XREFs of PopReleaseAdaptiveLock @ 0x1409BB1EC
 * Callers:
 *     PopActiveLockScreenPowerRequest @ 0x14075F100 (PopActiveLockScreenPowerRequest.c)
 *     PopAdaptivePowerSettingCallback @ 0x14075F370 (PopAdaptivePowerSettingCallback.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x14075F5C0 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopAdaptiveWnfCallback @ 0x14075F680 (PopAdaptiveWnfCallback.c)
 *     PopSessionConnectionChangeV2 @ 0x14075F904 (PopSessionConnectionChangeV2.c)
 *     PopAdaptiveGetBootIsUnattended @ 0x1409B9E70 (PopAdaptiveGetBootIsUnattended.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1409BA32C (PopIsLockConsoleTimeoutActive.c)
 *     PopSetDisplayStatus @ 0x1409BA3E8 (PopSetDisplayStatus.c)
 *     PopAdaptiveGetBootTargetSystemState @ 0x1409BA4D8 (PopAdaptiveGetBootTargetSystemState.c)
 *     PopUserPresenceHostStateChange @ 0x1409BA7C8 (PopUserPresenceHostStateChange.c)
 *     PopAdaptiveGetBootIsSystemInitiated @ 0x1409BB16C (PopAdaptiveGetBootIsSystemInitiated.c)
 *     PopAdaptiveGetSessionState @ 0x1409BB2A4 (PopAdaptiveGetSessionState.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140A9EA5C (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PopSessionConnectionChange @ 0x140ACB140 (PopSessionConnectionChange.c)
 *     PopSessionWinlogonNotification @ 0x140ACB1FC (PopSessionWinlogonNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopSendSessionInfo @ 0x1409B9C8C (PopSendSessionInfo.c)
 *     PopDispatchStateCallout @ 0x1409B9D64 (PopDispatchStateCallout.c)
 */

void PopReleaseAdaptiveLock()
{
  char v0; // bl
  unsigned int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v5[2]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v6; // [rsp+48h] [rbp-30h]
  GUID v7; // [rsp+50h] [rbp-28h] BYREF
  int v8; // [rsp+60h] [rbp-18h]

  v0 = PopAdaptiveContext;
  v1 = dword_140F07358;
  PopAdpmLockThread = 0LL;
  DWORD1(v5[0]) = 0;
  ExReleaseResourceLite(&PopAdpmLock);
  KeLeaveCriticalRegion();
  if ( v0 )
  {
    v8 = 0;
    v7 = GUID_ADAPTIVE_SESSION_STATE_CHANGED;
    PopSendSessionInfo(v1, v2, v3, (__int64)&v7);
    v4 = v1;
    v6 = 7LL;
    memset(v5, 0, sizeof(v5));
    PopDispatchStateCallout(v5, (__int64)&v4);
  }
}
