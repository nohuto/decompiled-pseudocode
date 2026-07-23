/*
 * XREFs of EtwpRealtimeDisconnectConsumer @ 0x140A814E0
 * Callers:
 *     EtwpCloseRealTimeConnectionObject @ 0x1407B1B30 (EtwpCloseRealTimeConnectionObject.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 *     EtwpSynchronizeWithLogger @ 0x1409D2650 (EtwpSynchronizeWithLogger.c)
 */

__int64 __fastcall EtwpRealtimeDisconnectConsumer(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 *v6; // rbx
  char *v7; // rax
  char *v8; // rbp
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
      v7 = (char *)KeAbPreAcquire(v4 + 688, 0LL);
      v8 = v7;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
      if ( v8 )
        v8[10] = 1;
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
