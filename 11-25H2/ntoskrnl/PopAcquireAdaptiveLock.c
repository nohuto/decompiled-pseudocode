/*
 * XREFs of PopAcquireAdaptiveLock @ 0x140A22A64
 * Callers:
 *     PopActiveLockScreenPowerRequest @ 0x1407526E0 (PopActiveLockScreenPowerRequest.c)
 *     PopAdaptivePowerSettingCallback @ 0x140752910 (PopAdaptivePowerSettingCallback.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x140752B60 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopAdaptiveWnfCallback @ 0x140752BF0 (PopAdaptiveWnfCallback.c)
 *     PopSessionWinlogonNotification @ 0x140A22590 (PopSessionWinlogonNotification.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     PoBlockConsoleSwitchEx @ 0x140311910 (PoBlockConsoleSwitchEx.c)
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
    while ( v6 != dword_140F06D58 )
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
