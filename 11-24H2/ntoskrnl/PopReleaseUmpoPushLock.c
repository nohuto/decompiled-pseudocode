/*
 * XREFs of PopReleaseUmpoPushLock @ 0x140A517F8
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140331990 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x140A23CC8 (PopUmpoProcessMessage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

void PopReleaseUmpoPushLock()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&PopUmpoPushLock);
  v0 = PopUmpoPushLock - 16;
  if ( (PopUmpoPushLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (PopUmpoPushLock & 2) != 0
    || (v1 = PopUmpoPushLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopUmpoPushLock, v0, PopUmpoPushLock)) )
  {
    ExfReleasePushLock(&PopUmpoPushLock);
  }
  KeAbPostRelease((ULONG_PTR)&PopUmpoPushLock);
  KeLeaveCriticalRegion();
}
