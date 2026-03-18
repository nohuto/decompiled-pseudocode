/*
 * XREFs of PopPushPowerStateTransitionRecordWithCallback @ 0x140428294
 * Callers:
 *     PopWakeDeviceList @ 0x140427ABC (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140427CE4 (PopSleepDeviceList.c)
 *     PopManageTransitionRecordRequest @ 0x14094E638 (PopManageTransitionRecordRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140B67AF4 (PopAcquireTransitionLockAfterSleep.c)
 *     PopUnlockAfterSleepWorker @ 0x140B67B90 (PopUnlockAfterSleepWorker.c)
 *     PopFlushVolumes @ 0x140B67D40 (PopFlushVolumes.c)
 *     PopPushPowerStateTransitionRecord @ 0x140B6D1E8 (PopPushPowerStateTransitionRecord.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140340450 (ObpTraceObjectReferenceIfActive.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     ObpIncrPointerCount @ 0x140428440 (ObpIncrPointerCount.c)
 */

__int64 __fastcall PopPushPowerStateTransitionRecordWithCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  unsigned int v5; // edi
  __int64 v10; // rsi
  char *v11; // rbx
  unsigned __int64 v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  if ( (unsigned int)(dword_140F0B2B4 - 1) > 1 )
  {
    return (unsigned int)-1073741101;
  }
  else if ( a1 && a2 )
  {
    PopAcquireRwLockExclusive(&xmmword_140F0CF68);
    v10 = (unsigned int)(dword_140F0CF60 + 1);
    if ( (unsigned int)v10 >= 0x40 )
    {
      v5 = -1073741801;
    }
    else
    {
      ++dword_140F0CF60;
      ObpTraceObjectReferenceIfActive(a1 - 48);
      ObpIncrPointerCount(a1 - 48);
      ObpTraceObjectReferenceIfActive(a2 - 48);
      ObpIncrPointerCount(a2 - 48);
      v11 = (char *)&PopStateTransitonBlameStack + 48 * v10;
      *((_QWORD *)v11 + 1) = a1;
      *(_QWORD *)v11 = a2;
      *((_QWORD *)v11 + 3) = a3;
      *((_QWORD *)v11 + 5) = 0LL;
      *((_DWORD *)v11 + 8) = 0;
      if ( (unsigned int)(a4 - 1) <= 1 && a5 )
      {
        *((_QWORD *)v11 + 5) = a5;
        *((_DWORD *)v11 + 8) = a4;
      }
      *((_QWORD *)v11 + 2) = RtlGetInterruptTimePrecise(v13);
    }
    PopReleaseRwLock((signed __int64 *)&xmmword_140F0CF68);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
