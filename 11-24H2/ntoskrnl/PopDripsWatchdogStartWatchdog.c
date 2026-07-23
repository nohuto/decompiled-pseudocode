/*
 * XREFs of PopDripsWatchdogStartWatchdog @ 0x140A1C834
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PopCalculateIdleInformation @ 0x1402B5AAC (PopCalculateIdleInformation.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1408B2D34 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x140A1C994 (PopDripsWatchdogScheduleNextTimer.c)
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
  if ( (dword_140F073E8 & 2) != 0 )
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
      if ( (dword_140F074A4 & 1) != 0 )
      {
        dword_140F074B4 = 0;
        qword_140F074A8 = 0LL;
        xmmword_140F074D8 = v4;
        dword_140F074B8 = PopDripsWatchdogDebounceTickInterval;
        qword_140F074C0 = v2;
        qword_140F074C8 = v2;
        xmmword_140F074E8 = v5;
        PopDripsWatchdogScheduleNextTimer(&unk_140F073F0);
      }
      if ( (dword_140F075AC & 1) != 0 )
      {
        qword_140F075B0 = 0LL;
        memset_0(&unk_140F075B8, 0, 0x48uLL);
        dword_140F075D4 = DWORD1(xmmword_140F0BCC0);
        xmmword_140F075E0 = v4;
        qword_140F075D8 = qword_140E27DA0;
        xmmword_140F075F0 = v5;
        PopDripsWatchdogScheduleNextTimer(&unk_140F074F8);
      }
      dword_140F073E8 |= 4u;
      qword_140F07608 = v3;
    }
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  KeLeaveCriticalRegion();
}
