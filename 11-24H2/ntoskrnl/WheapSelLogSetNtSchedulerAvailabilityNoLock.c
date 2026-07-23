/*
 * XREFs of WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x140659E04
 * Callers:
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x140659D68 (WheaSelLogSetNtSchedulerAvailability.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x1406A0770 (IpmiHwContextInitialized.c)
 */

__int64 WheapSelLogSetNtSchedulerAvailabilityNoLock()
{
  __int64 result; // rax

  result = IpmiHwContextInitialized(&WheaIpmiContext);
  if ( (_BYTE)result )
    dword_140EF9F20 |= 4u;
  return result;
}
