/*
 * XREFs of EtwpShutdownConsumers @ 0x1409D7DD4
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1409D77E0 (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1409D7F24 (EtwpRealtimeDisconnectAllConsumers.c)
 */

__int64 __fastcall EtwpShutdownConsumers(__int64 a1)
{
  signed __int64 *v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rdx
  signed __int64 v7; // rtt
  PRKEVENT *v9; // rbx

  EtwpRealtimeDisconnectAllConsumers();
  v2 = (signed __int64 *)(a1 + 688);
  v3 = KeAbPreAcquire(a1 + 688, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), (__int64)v3, a1 + 688);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  *(_DWORD *)(a1 + 816) |= 0x200u;
  if ( (*(_DWORD *)(a1 + 824) & 0x20) != 0 )
  {
    v9 = *(PRKEVENT **)(a1 + 352);
    *(_QWORD *)(a1 + 352) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(a1 + 456), 0, 0);
    KeSetEvent(v9[6], 0, 0);
    ObfDereferenceObject(v9);
  }
  _m_prefetchw(v2);
  v5 = *v2;
  v6 = *v2 - 16;
  if ( (*v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v6 = 0LL;
  if ( (v5 & 2) != 0 || (v7 = *v2, v7 != _InterlockedCompareExchange64(v2, v6, v5)) )
    ExfReleasePushLock((_QWORD *)(a1 + 688));
  return KeAbPostRelease(a1 + 688);
}
