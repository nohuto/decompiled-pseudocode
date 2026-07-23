/*
 * XREFs of PopAcquireAdaptiveLock @ 0x140A24C58
 * Callers:
 *     PopActiveLockScreenPowerRequest @ 0x14075E0A0 (PopActiveLockScreenPowerRequest.c)
 *     PopAdaptivePowerSettingCallback @ 0x14075E310 (PopAdaptivePowerSettingCallback.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x14075E560 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopAdaptiveWnfCallback @ 0x14075E620 (PopAdaptiveWnfCallback.c)
 *     PopSessionConnectionChangeV2 @ 0x14075E8A4 (PopSessionConnectionChangeV2.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140A99FCC (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PopSessionConnectionChange @ 0x140AC8CFC (PopSessionConnectionChange.c)
 *     PopSessionWinlogonNotification @ 0x140AC8DB8 (PopSessionWinlogonNotification.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     PoBlockConsoleSwitchEx @ 0x140420E04 (PoBlockConsoleSwitchEx.c)
 */

struct _KTHREAD *__fastcall PopAcquireAdaptiveLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax
  _OWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]
  ULONG v6; // [rsp+60h] [rbp+8h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0LL;
  memset(v4, 0, sizeof(v4));
  if ( !a1 )
  {
    v6 = 0;
    PoBlockConsoleSwitchEx((__int64)v4, &v6, 0LL);
    Interval.QuadPart = -100000LL;
    while ( v6 != dword_140F07678 )
      KeDelayExecutionThread(0, 0, &Interval);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  result = KeGetCurrentThread();
  PopAdpmLockThread = (__int64)result;
  PopAdaptiveContext = a1 == 0;
  return result;
}
