/*
 * XREFs of IpmiHwContextInitialized @ 0x1406942CC
 * Callers:
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     WheaSelLogError @ 0x14064F448 (WheaSelLogError.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14064F754 (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 *     IpmiHwInitializeContext @ 0x1406942E8 (IpmiHwInitializeContext.c)
 *     IpmiLibAddSelBugcheckRecord @ 0x140694830 (IpmiLibAddSelBugcheckRecord.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x14069496C (IpmiLibAddSelCheckpointRecord.c)
 *     IpmiLibAddSelErrorRecord @ 0x1406949DC (IpmiLibAddSelErrorRecord.c)
 *     IpmiLibpAddSelRawData @ 0x140694B00 (IpmiLibpAddSelRawData.c)
 *     WheaQuerySystemInformation @ 0x1407B6F80 (WheaQuerySystemInformation.c)
 *     WheaSelLogCheckPoint @ 0x1407B6FE0 (WheaSelLogCheckPoint.c)
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
