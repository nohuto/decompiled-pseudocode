/*
 * XREFs of HalpTimerWatchdogTriggerSystemReset @ 0x140278DC0
 * Callers:
 *     HalpTimerClockIpiRoutine @ 0x140278260 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerClockInterrupt @ 0x140279B10 (HalpTimerClockInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x140279DF0 (KiCallInterruptServiceRoutine.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055C2C0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     HalpSetTimer @ 0x14028F6F0 (HalpSetTimer.c)
 *     HalRequestClockInterrupt @ 0x1403777C0 (HalRequestClockInterrupt.c)
 *     HalpTimerGetClockRates @ 0x14054438C (HalpTimerGetClockRates.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall HalpTimerWatchdogTriggerSystemReset(char a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  signed __int32 v5[8]; // [rsp+8h] [rbp-100h] BYREF
  int v6; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v7[8]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v8[16]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v10[264]; // [rsp+60h] [rbp-A8h] BYREF

  memset_0(v10, 0, 0x100uLL);
  v2 = HalpWatchdogTimer;
  v3 = 0;
  v6 = 0;
  if ( !HalpWatchdogTimer )
    return 3221225473LL;
  if ( a1 )
  {
    HalpTimerWatchdogResetCount = -1LL;
    _InterlockedOr(v5, 0);
    v9 = 2097153LL;
    memset_0(v10, 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)&v9, KiClockTimerOwner);
    HalRequestClockInterrupt(0LL, &v9);
  }
  else
  {
    HalpTimerWatchdogResetCount = -2LL;
    _InterlockedOr(v5, 0);
    HalpTimerGetClockRates(v2, v7, &v6);
    return (unsigned int)HalpSetTimer(v2, 3, v6, 1, (__int64)v8);
  }
  return v3;
}
