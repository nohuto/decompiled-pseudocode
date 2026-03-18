/*
 * XREFs of EtwpRealtimeUpdateConsumers @ 0x1409906AC
 * Callers:
 *     EtwpLogger @ 0x14098FA20 (EtwpLogger.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 */

LONG __fastcall EtwpRealtimeUpdateConsumers(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  LONG result; // eax
  __int64 *v4; // rax
  __int64 *v5; // rsi
  __int64 v6; // rsi
  signed __int64 v7; // rax
  signed __int64 v8; // rdx
  unsigned __int64 v9; // rtt
  __int64 v10; // rax
  _QWORD *v11; // rcx
  int v12; // ebp
  __int64 *v13; // rax
  __int64 *v14; // rsi
  __int64 v15; // rsi
  signed __int64 v16; // rax
  signed __int64 v17; // rdx
  unsigned __int64 v18; // rtt
  _QWORD *i; // rcx

  v1 = (unsigned __int64 *)(a1 + 688);
  if ( (*(_DWORD *)(a1 + 824) & 0x20) != 0 )
  {
    v4 = KeAbPreAcquire(a1 + 688, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
      ExfAcquirePushLockExclusiveEx(v1, v4, (__int64)v1);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    v6 = *(_QWORD *)(a1 + 352);
    *(_QWORD *)(a1 + 352) = 0LL;
    _m_prefetchw(v1);
    v7 = *v1;
    v8 = *v1 - 16;
    if ( (*v1 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v8 = 0LL;
    if ( (v7 & 2) != 0 || (v9 = *v1, v9 != _InterlockedCompareExchange64((volatile signed __int64 *)v1, v8, v7)) )
      ExfReleasePushLock(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    v10 = *(_QWORD *)(v6 + 40);
    *(_QWORD *)(v6 + 40) = 0LL;
    *(_OWORD *)(v10 + 80) = *(_OWORD *)(a1 + 432);
    v11 = *(_QWORD **)(a1 + 336);
    if ( *v11 != a1 + 328 )
      __fastfail(3u);
    *(_QWORD *)v6 = a1 + 328;
    *(_QWORD *)(v6 + 8) = v11;
    *v11 = v6;
    *(_QWORD *)(a1 + 336) = v6;
    ++*(_DWORD *)(a1 + 344);
    *(_BYTE *)(v6 + 90) &= ~8u;
    _InterlockedOr((volatile signed __int32 *)(a1 + 824), 0x40u);
    *(_DWORD *)(a1 + 40) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(a1 + 456), 0, 0);
  }
  result = *(_DWORD *)(a1 + 824);
  if ( (result & 0x10) != 0 )
  {
    v12 = -1073741162;
    v13 = KeAbPreAcquire((__int64)v1, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
      ExfAcquirePushLockExclusiveEx(v1, v13, (__int64)v1);
    if ( v14 )
      *((_BYTE *)v14 + 10) = 1;
    v15 = *(_QWORD *)(a1 + 352);
    *(_QWORD *)(a1 + 352) = 0LL;
    _m_prefetchw(v1);
    v16 = *v1;
    v17 = *v1 - 16;
    if ( (*v1 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v17 = 0LL;
    if ( (v16 & 2) != 0 || (v18 = *v1, v18 != _InterlockedCompareExchange64((volatile signed __int64 *)v1, v17, v16)) )
      ExfReleasePushLock(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    for ( i = *(_QWORD **)(a1 + 328); i != (_QWORD *)(a1 + 328); i = (_QWORD *)*i )
    {
      if ( (_QWORD *)v15 == i && (*(_BYTE *)(v15 + 90) & 1) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 824), 4u);
        *(_BYTE *)(v15 + 90) |= 1u;
        v12 = 0;
      }
    }
    *(_DWORD *)(a1 + 40) = v12;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFFFEF);
    return KeSetEvent((PRKEVENT)(a1 + 456), 0, 0);
  }
  return result;
}
