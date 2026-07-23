/*
 * XREFs of IpmiHwContextInitialized @ 0x1406A0770
 * Callers:
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     WheaSelLogError @ 0x140659AF8 (WheaSelLogError.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x140659E04 (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 *     IpmiHwInitializeContext @ 0x1406A078C (IpmiHwInitializeContext.c)
 *     IpmiLibAddSelBugcheckRecord @ 0x1406A0CD4 (IpmiLibAddSelBugcheckRecord.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x1406A0E10 (IpmiLibAddSelCheckpointRecord.c)
 *     IpmiLibAddSelErrorRecord @ 0x1406A0E80 (IpmiLibAddSelErrorRecord.c)
 *     IpmiLibpAddSelRawData @ 0x1406A0FA4 (IpmiLibpAddSelRawData.c)
 *     WheaQuerySystemInformation @ 0x1407C6BB0 (WheaQuerySystemInformation.c)
 *     WheaSelLogCheckPoint @ 0x1407C6C10 (WheaSelLogCheckPoint.c)
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
