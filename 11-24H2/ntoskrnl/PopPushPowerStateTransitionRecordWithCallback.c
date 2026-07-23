/*
 * XREFs of PopPushPowerStateTransitionRecordWithCallback @ 0x14041C424
 * Callers:
 *     PopWakeDeviceList @ 0x14041BC4C (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x14041BE74 (PopSleepDeviceList.c)
 *     PopManageTransitionRecordRequest @ 0x140A44A04 (PopManageTransitionRecordRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140B69C34 (PopAcquireTransitionLockAfterSleep.c)
 *     PopUnlockAfterSleepWorker @ 0x140B69CD0 (PopUnlockAfterSleepWorker.c)
 *     PopFlushVolumes @ 0x140B69E80 (PopFlushVolumes.c)
 *     PopPushPowerStateTransitionRecord @ 0x140B6EA88 (PopPushPowerStateTransitionRecord.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     ObpIncrPointerCount @ 0x14041C5D0 (ObpIncrPointerCount.c)
 */

__int64 __fastcall PopPushPowerStateTransitionRecordWithCallback(
        LARGE_INTEGER a1,
        LONGLONG a2,
        LARGE_INTEGER a3,
        ULONG a4,
        LARGE_INTEGER a5)
{
  unsigned int v5; // edi
  __int64 v10; // rsi
  LARGE_INTEGER *v11; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  if ( (unsigned int)(dword_140F0BB34 - 1) > 1 )
  {
    return (unsigned int)-1073741101;
  }
  else if ( a1.QuadPart && a2 )
  {
    PopAcquireRwLockExclusive(&xmmword_140F0D288);
    v10 = (unsigned int)(dword_140F0D280 + 1);
    if ( (unsigned int)v10 >= 0x40 )
    {
      v5 = -1073741801;
    }
    else
    {
      ++dword_140F0D280;
      ObpTraceObjectReferenceIfActive(a1.LowPart - 48);
      ObpIncrPointerCount(a1.QuadPart - 48);
      ObpTraceObjectReferenceIfActive(a2 - 48);
      ObpIncrPointerCount(a2 - 48);
      v11 = (LARGE_INTEGER *)((char *)&PopStateTransitonBlameStack + 48 * v10);
      v11[1] = a1;
      v11->QuadPart = a2;
      v11[3] = a3;
      v11[5].QuadPart = 0LL;
      v11[4].LowPart = 0;
      if ( a4 - 1 <= 1 && a5.QuadPart )
      {
        v11[5] = a5;
        v11[4].LowPart = a4;
      }
      v11[2] = RtlGetInterruptTimePrecise(&PerformanceCounter);
    }
    PopReleaseRwLock((signed __int64 *)&xmmword_140F0D288);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
