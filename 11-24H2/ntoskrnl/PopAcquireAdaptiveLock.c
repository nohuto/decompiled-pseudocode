/*
 * XREFs of PopAcquireAdaptiveLock @ 0x140A30168
 * Callers:
 *     PopActiveLockScreenPowerRequest @ 0x14075F100 (PopActiveLockScreenPowerRequest.c)
 *     PopAdaptivePowerSettingCallback @ 0x14075F370 (PopAdaptivePowerSettingCallback.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x14075F5C0 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopAdaptiveWnfCallback @ 0x14075F680 (PopAdaptiveWnfCallback.c)
 *     PopSessionConnectionChangeV2 @ 0x14075F904 (PopSessionConnectionChangeV2.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140A9EA5C (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PopSessionConnectionChange @ 0x140ACB140 (PopSessionConnectionChange.c)
 *     PopSessionWinlogonNotification @ 0x140ACB1FC (PopSessionWinlogonNotification.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     PoBlockConsoleSwitchEx @ 0x14042F0D4 (PoBlockConsoleSwitchEx.c)
 */

struct _KTHREAD *__fastcall PopAcquireAdaptiveLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax
  _OWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+60h] [rbp+8h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0LL;
  memset(v4, 0, sizeof(v4));
  if ( !a1 )
  {
    v6 = 0;
    PoBlockConsoleSwitchEx((__int64)v4, &v6, 0LL);
    Interval.QuadPart = -100000LL;
    while ( v6 != dword_140F07358 )
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
