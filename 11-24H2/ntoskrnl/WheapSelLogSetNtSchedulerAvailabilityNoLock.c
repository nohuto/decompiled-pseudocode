/*
 * XREFs of WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14065B6E4
 * Callers:
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x14065B648 (WheaSelLogSetNtSchedulerAvailability.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x14069F66C (IpmiHwContextInitialized.c)
 */

__int64 WheapSelLogSetNtSchedulerAvailabilityNoLock()
{
  __int64 result; // rax

  result = IpmiHwContextInitialized(&WheaIpmiContext);
  if ( (_BYTE)result )
    dword_140EF9C20 |= 4u;
  return result;
}
