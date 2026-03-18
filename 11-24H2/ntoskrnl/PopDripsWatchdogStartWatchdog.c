/*
 * XREFs of PopDripsWatchdogStartWatchdog @ 0x140A27DB4
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     PopCalculateIdleInformation @ 0x14032D51C (PopCalculateIdleInformation.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1408B5444 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x140A27F14 (PopDripsWatchdogScheduleNextTimer.c)
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
  if ( (dword_140F070E8 & 2) != 0 )
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
      if ( (dword_140F071A4 & 1) != 0 )
      {
        dword_140F071B4 = 0;
        qword_140F071A8 = 0LL;
        xmmword_140F071D8 = v4;
        dword_140F071B8 = PopDripsWatchdogDebounceTickInterval;
        qword_140F071C0 = v2;
        qword_140F071C8 = v2;
        xmmword_140F071E8 = v5;
        PopDripsWatchdogScheduleNextTimer(&unk_140F070F0);
      }
      if ( (dword_140F072AC & 1) != 0 )
      {
        qword_140F072B0 = 0LL;
        memset_0(&unk_140F072B8, 0, 0x48uLL);
        dword_140F072D4 = DWORD1(xmmword_140F0AE80);
        xmmword_140F072E0 = v4;
        qword_140F072D8 = qword_140E27C60;
        xmmword_140F072F0 = v5;
        PopDripsWatchdogScheduleNextTimer(&unk_140F071F8);
      }
      dword_140F070E8 |= 4u;
      qword_140F07308 = v3;
    }
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  KeLeaveCriticalRegion();
}
