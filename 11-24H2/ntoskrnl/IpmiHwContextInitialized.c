/*
 * XREFs of IpmiHwContextInitialized @ 0x14069F66C
 * Callers:
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     WheaSelLogError @ 0x14065B3D8 (WheaSelLogError.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14065B6E4 (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 *     IpmiHwInitializeContext @ 0x14069F688 (IpmiHwInitializeContext.c)
 *     IpmiLibAddSelBugcheckRecord @ 0x14069FBD0 (IpmiLibAddSelBugcheckRecord.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x14069FD0C (IpmiLibAddSelCheckpointRecord.c)
 *     IpmiLibAddSelErrorRecord @ 0x14069FD7C (IpmiLibAddSelErrorRecord.c)
 *     IpmiLibpAddSelRawData @ 0x14069FEA0 (IpmiLibpAddSelRawData.c)
 *     WheaQuerySystemInformation @ 0x1407C6750 (WheaQuerySystemInformation.c)
 *     WheaSelLogCheckPoint @ 0x1407C67B0 (WheaSelLogCheckPoint.c)
 * Callees:
 *     <none>
 */

signed __int8 __fastcall IpmiHwContextInitialized(__int64 a1)
{
  if ( a1 )
    return _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 88), 0, 0);
  else
    return 0;
}
