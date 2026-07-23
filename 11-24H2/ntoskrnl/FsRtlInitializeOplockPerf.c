/*
 * XREFs of FsRtlInitializeOplockPerf @ 0x140C1B2E8
 * Callers:
 *     FsRtlInitSystem @ 0x140C1AD7C (FsRtlInitSystem.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1404549D0 (ExInitializeNPagedLookasideListInternal.c)
 *     FsRtlpOplockGetAckTimeoutOverride @ 0x140709414 (FsRtlpOplockGetAckTimeoutOverride.c)
 *     FsRtlpOplockPerfInitializeLatencyInfo @ 0x1407097C8 (FsRtlpOplockPerfInitializeLatencyInfo.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 FsRtlInitializeOplockPerf()
{
  __int64 Pool2; // rax
  __int64 UnbiasedInterruptTime; // rax
  char v2; // cl
  int AckTimeoutOverride; // ebx
  volatile __int64 *v4; // rax
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  g_OplockPerfData = ExAllocatePool2(0x100uLL, 0x28uLL, 0x6F725346uLL);
  if ( g_OplockPerfData
    && (Pool2 = ExAllocatePool2(0x100uLL, 0x18uLL, 0x6F725346uLL), (*(_QWORD *)g_OplockPerfData = Pool2) != 0LL)
    && (**(_QWORD **)g_OplockPerfData = ExAllocatePool2(0x100uLL, 0x100uLL, 0x6F725346uLL),
        *(_QWORD *)(*(_QWORD *)g_OplockPerfData + 8LL) = ExAllocatePool2(0x100uLL, 0x100uLL, 0x6F725346uLL),
        **(_QWORD **)g_OplockPerfData)
    && *(_QWORD *)(*(_QWORD *)g_OplockPerfData + 8LL) )
  {
    FsRtlpOplockPerfInitializeLatencyInfo();
    qword_140E65DA0 = 36000000000LL;
    *(_QWORD *)(g_OplockPerfData + 24) = 10LL;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    byte_140E65D81 = v2;
    qword_140E65DA8 = UnbiasedInterruptTime;
    ExInitializeNPagedLookasideListInternal((__int64)&g_OplockAckTimeoutLookaside, 0LL, 0LL, 528, 184, 1869763398, 0, 0);
    AckTimeoutOverride = FsRtlpOplockGetAckTimeoutOverride();
    if ( AckTimeoutOverride >= 0 )
      return (unsigned int)AckTimeoutOverride;
  }
  else
  {
    AckTimeoutOverride = -1073741670;
  }
  if ( g_OplockPerfData )
  {
    v4 = *(volatile __int64 **)g_OplockPerfData;
    if ( *(_QWORD *)g_OplockPerfData )
    {
      if ( *v4 )
      {
        v5 = (void *)_InterlockedExchange64(v4, 0LL);
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
      }
      if ( *(_QWORD *)(*(_QWORD *)g_OplockPerfData + 8LL) )
      {
        v6 = (void *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)g_OplockPerfData + 8LL), 0LL);
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
      }
      v7 = (void *)_InterlockedExchange64((volatile __int64 *)g_OplockPerfData, 0LL);
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
    }
    v8 = (void *)_InterlockedExchange64(&g_OplockPerfData, 0LL);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  return (unsigned int)AckTimeoutOverride;
}
