/*
 * XREFs of EtwpShutdownConsumers @ 0x140A49484
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140A48E90 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140A495D4 (EtwpRealtimeDisconnectAllConsumers.c)
 */

__int64 __fastcall EtwpShutdownConsumers(__int64 a1)
{
  signed __int64 *v2; // rdi
  char *v3; // rax
  char *v4; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rdx
  signed __int64 v7; // rtt
  PRKEVENT *v9; // rbx

  EtwpRealtimeDisconnectAllConsumers(a1);
  v2 = (signed __int64 *)(a1 + 688);
  v3 = (char *)KeAbPreAcquire(a1 + 688, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v3, a1 + 688);
  if ( v4 )
    v4[10] = 1;
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
