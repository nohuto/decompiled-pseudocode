/*
 * XREFs of PopPushPowerStateTransitionRecordWithCallback @ 0x140431D24
 * Callers:
 *     PopWakeDeviceList @ 0x14043154C (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140431774 (PopSleepDeviceList.c)
 *     PopManageTransitionRecordRequest @ 0x1409225C8 (PopManageTransitionRecordRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140B57CC4 (PopAcquireTransitionLockAfterSleep.c)
 *     PopUnlockAfterSleepWorker @ 0x140B57D60 (PopUnlockAfterSleepWorker.c)
 *     PopFlushVolumes @ 0x140B57F10 (PopFlushVolumes.c)
 *     PopPushPowerStateTransitionRecord @ 0x140B5E108 (PopPushPowerStateTransitionRecord.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14029B0E0 (ObpTraceObjectReferenceIfActive.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     ObpIncrPointerCount @ 0x140431ED0 (ObpIncrPointerCount.c)
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
  if ( (unsigned int)(dword_140F0B014 - 1) > 1 )
  {
    return (unsigned int)-1073741101;
  }
  else if ( a1.QuadPart && a2 )
  {
    PopAcquireRwLockExclusive(&xmmword_140F0C928);
    v10 = (unsigned int)(dword_140F0C920 + 1);
    if ( (unsigned int)v10 >= 0x40 )
    {
      v5 = -1073741801;
    }
    else
    {
      ++dword_140F0C920;
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
    PopReleaseRwLock((signed __int64 *)&xmmword_140F0C928);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
