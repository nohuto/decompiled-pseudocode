/*
 * XREFs of PopReleaseAdaptiveLock @ 0x1409635F4
 * Callers:
 *     PopActiveLockScreenPowerRequest @ 0x1407526E0 (PopActiveLockScreenPowerRequest.c)
 *     PopAdaptivePowerSettingCallback @ 0x140752910 (PopAdaptivePowerSettingCallback.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x140752B60 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopAdaptiveWnfCallback @ 0x140752BF0 (PopAdaptiveWnfCallback.c)
 *     PopAdaptiveGetBootIsSystemInitiated @ 0x140963574 (PopAdaptiveGetBootIsSystemInitiated.c)
 *     PopAdaptiveGetBootIsUnattended @ 0x140A113E4 (PopAdaptiveGetBootIsUnattended.c)
 *     PopAdaptiveGetSessionState @ 0x140A1C024 (PopAdaptiveGetSessionState.c)
 *     PopSetDisplayStatus @ 0x140A22500 (PopSetDisplayStatus.c)
 *     PopSessionWinlogonNotification @ 0x140A22590 (PopSessionWinlogonNotification.c)
 *     PopSessionConnectionChange @ 0x140A226D0 (PopSessionConnectionChange.c)
 *     PopUserPresenceHostStateChange @ 0x140A86AB0 (PopUserPresenceHostStateChange.c)
 *     PopAdaptiveGetBootTargetSystemState @ 0x140A8AC28 (PopAdaptiveGetBootTargetSystemState.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140A9878C (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140A9C054 (PopIsLockConsoleTimeoutActive.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PopSendSessionInfo @ 0x140A2BAC0 (PopSendSessionInfo.c)
 *     PopDispatchStateCallout @ 0x140A2C7C0 (PopDispatchStateCallout.c)
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
  v1 = dword_140F06D58;
  PopAdpmLockThread = 0LL;
  DWORD1(v5[0]) = 0;
  ExReleaseResourceLite(&PopAdpmLock);
  KeLeaveCriticalRegion();
  if ( v0 )
  {
    v8 = 0;
    v7 = GUID_ADAPTIVE_SESSION_STATE_CHANGED;
    PopSendSessionInfo(v1, v2, v3, &v7);
    v4 = v1;
    v6 = 7LL;
    memset(v5, 0, sizeof(v5));
    PopDispatchStateCallout(v5, &v4);
  }
}
