/*
 * XREFs of EtwpRealtimeDisconnectConsumer @ 0x140A86A08
 * Callers:
 *     EtwpCloseRealTimeConnectionObject @ 0x1407B16E0 (EtwpCloseRealTimeConnectionObject.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x140A869A0 (EtwpRealtimeDisconnectConsumerByHandle.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwpSynchronizeWithLogger @ 0x14083381C (EtwpSynchronizeWithLogger.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140926F50 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14095D644 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpRealtimeDisconnectConsumer(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rbp
  signed __int64 v9; // rax
  signed __int64 v10; // rdx
  unsigned __int64 v11; // rtt

  if ( (*(_BYTE *)(a1 + 90) & 5) != 0 )
  {
    return (unsigned int)-2147483611;
  }
  else
  {
    v4 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(a1 + 152), *(unsigned __int16 *)(a1 + 88), 1u);
    v5 = v4;
    if ( v4 )
    {
      v6 = (unsigned __int64 *)(v4 + 688);
      v7 = KeAbPreAcquire(v4 + 688, 0LL);
      v8 = v7;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        ExfAcquirePushLockExclusiveEx(v6, (__int64)v7, (__int64)v6);
      if ( v8 )
        *((_BYTE *)v8 + 10) = 1;
      *(_QWORD *)(v5 + 352) = a1;
      _m_prefetchw(v6);
      v9 = *v6;
      v10 = *v6 - 16;
      if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v10 = 0LL;
      if ( (v9 & 2) != 0 || (v11 = *v6, v11 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v10, v9)) )
        ExfReleasePushLock(v6);
      KeAbPostRelease((ULONG_PTR)v6);
      v2 = EtwpSynchronizeWithLogger(v5, 0x10u);
      EtwpSynchronizeWithLogger(v5, 4u);
      EtwpReleaseLoggerContext((unsigned int *)v5, 1);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v2;
}
