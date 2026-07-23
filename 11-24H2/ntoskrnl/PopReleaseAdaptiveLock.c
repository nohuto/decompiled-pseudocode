/*
 * XREFs of PopReleaseAdaptiveLock @ 0x1409A183C
 * Callers:
 *     PopActiveLockScreenPowerRequest @ 0x14075E0A0 (PopActiveLockScreenPowerRequest.c)
 *     PopAdaptivePowerSettingCallback @ 0x14075E310 (PopAdaptivePowerSettingCallback.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x14075E560 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopAdaptiveWnfCallback @ 0x14075E620 (PopAdaptiveWnfCallback.c)
 *     PopSessionConnectionChangeV2 @ 0x14075E8A4 (PopSessionConnectionChangeV2.c)
 *     PopAdaptiveGetBootIsUnattended @ 0x1409A04C0 (PopAdaptiveGetBootIsUnattended.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1409A097C (PopIsLockConsoleTimeoutActive.c)
 *     PopSetDisplayStatus @ 0x1409A0A38 (PopSetDisplayStatus.c)
 *     PopAdaptiveGetBootTargetSystemState @ 0x1409A0B28 (PopAdaptiveGetBootTargetSystemState.c)
 *     PopUserPresenceHostStateChange @ 0x1409A0E18 (PopUserPresenceHostStateChange.c)
 *     PopAdaptiveGetBootIsSystemInitiated @ 0x1409A17BC (PopAdaptiveGetBootIsSystemInitiated.c)
 *     PopAdaptiveGetSessionState @ 0x1409A18F4 (PopAdaptiveGetSessionState.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140A99FCC (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PopSessionConnectionChange @ 0x140AC8CFC (PopSessionConnectionChange.c)
 *     PopSessionWinlogonNotification @ 0x140AC8DB8 (PopSessionWinlogonNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopSendSessionInfo @ 0x1409A02DC (PopSendSessionInfo.c)
 *     PopDispatchStateCallout @ 0x1409A03B4 (PopDispatchStateCallout.c)
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
  v1 = dword_140F07678;
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
