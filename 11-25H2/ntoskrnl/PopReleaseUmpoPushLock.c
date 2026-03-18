/*
 * XREFs of PopReleaseUmpoPushLock @ 0x140A4E6E0
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140426264 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x140A1899C (PopUmpoProcessMessage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
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
