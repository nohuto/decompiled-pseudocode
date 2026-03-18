/*
 * XREFs of PopDripsWatchdogStartWatchdog @ 0x140A1EE1C
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PopCalculateIdleInformation @ 0x140486AEC (PopCalculateIdleInformation.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x140968EE4 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x140A1EF7C (PopDripsWatchdogScheduleNextTimer.c)
 */

void PopDripsWatchdogStartWatchdog()
{
  signed __int32 v0; // eax
  signed __int32 v1; // ett
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  PiDmObjectManagerAcquireExclusiveLock(&PopDripsWatchdogContext);
  if ( (dword_140F06A68 & 2) != 0 )
  {
    _m_prefetchw(&PopDirectedDripsUmTestDeviceCount);
    v0 = PopDirectedDripsUmTestDeviceCount;
    do
    {
      v1 = v0;
      v0 = _InterlockedCompareExchange(&PopDirectedDripsUmTestDeviceCount, v0, v0);
    }
    while ( v1 != v0 );
    if ( !v0 )
    {
      v2 = MEMORY[0xFFFFF78000000008];
      PopCalculateIdleInformation((__int64)&v4);
      v3 = PopWdiCurrentScenarioInstanceId;
      if ( (dword_140F06B24 & 1) != 0 )
      {
        dword_140F06B34 = 0;
        qword_140F06B28 = 0LL;
        xmmword_140F06B58 = v4;
        dword_140F06B38 = PopDripsWatchdogDebounceTickInterval;
        qword_140F06B40 = v2;
        qword_140F06B48 = v2;
        xmmword_140F06B68 = v5;
        PopDripsWatchdogScheduleNextTimer(&unk_140F06A70);
      }
      if ( (dword_140F06C2C & 1) != 0 )
      {
        qword_140F06C30 = 0LL;
        memset_0(&unk_140F06C38, 0, 0x48uLL);
        dword_140F06C54 = DWORD1(xmmword_140F0AAE0);
        xmmword_140F06C60 = v4;
        qword_140F06C58 = qword_140E27A20;
        xmmword_140F06C70 = v5;
        PopDripsWatchdogScheduleNextTimer(&unk_140F06B78);
      }
      dword_140F06A68 |= 4u;
      qword_140F06C88 = v3;
    }
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  KeLeaveCriticalRegion();
}
