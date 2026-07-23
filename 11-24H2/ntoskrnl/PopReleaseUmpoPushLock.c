/*
 * XREFs of PopReleaseUmpoPushLock @ 0x140A488C8
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1402BB090 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x140A180D8 (PopUmpoProcessMessage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
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
