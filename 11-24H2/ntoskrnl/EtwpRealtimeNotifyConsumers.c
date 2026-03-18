/*
 * XREFs of EtwpRealtimeNotifyConsumers @ 0x1409D871C
 * Callers:
 *     EtwpLogger @ 0x1409D88E0 (EtwpLogger.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1409D772C (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpGetMaxTrackingEventBufferSize @ 0x1409D85D4 (EtwpGetMaxTrackingEventBufferSize.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1409D9E20 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpAddDebugInfoEvents @ 0x1409DC100 (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x1409DC3D4 (EtwpAddBinaryInfoEvents.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRealtimeNotifyConsumers(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rsi
  unsigned int MaxTrackingEventBufferSize; // ebp
  _DWORD *v6; // rsi
  unsigned int v7; // ebx
  __int64 Pool2; // rax
  __int64 *i; // r14
  unsigned int v11; // r12d
  __int64 *j; // rax
  __int64 **v13; // rbx
  __int64 *k; // rax

  v1 = (unsigned __int64 *)(a1 + 688);
  v3 = KeAbPreAcquire(a1 + 688, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, (__int64)v3, (__int64)v1);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  MaxTrackingEventBufferSize = EtwpGetMaxTrackingEventBufferSize(a1);
  if ( MaxTrackingEventBufferSize )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v6 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      EtwpInitializeProviderInfoBuffer(a1, Pool2, MaxTrackingEventBufferSize);
      for ( i = *(__int64 **)(a1 + 328); i != (__int64 *)(a1 + 328); i = (__int64 *)*i )
      {
        v11 = (*((_BYTE *)i + 90) & 8) != 0 ? 4 : 1;
        EtwpAddDebugInfoEvents(a1, (_DWORD)v6, MaxTrackingEventBufferSize, 0, v11);
        if ( *(_QWORD *)(a1 + 1304) != a1 + 1304 && (*(_DWORD *)(a1 + 816) & 0x2000000) != 0 )
          EtwpAddBinaryInfoEvents(a1, v6, MaxTrackingEventBufferSize, v11);
        *((_BYTE *)i + 90) |= 8u;
        if ( v6[12] > 0x48u )
        {
          EtwpRealtimeInjectEtwBuffer(a1, i, v6);
          v6[12] = 72;
        }
      }
      for ( j = *(__int64 **)(a1 + 112); j && !*((_BYTE *)j + 40); j = (__int64 *)*j )
        *((_BYTE *)j + 40) = 1;
      v13 = (__int64 **)(a1 + 96);
      for ( k = *v13; k != (__int64 *)v13; k = (__int64 *)*k )
        *((_BYTE *)k + 16) = 1;
      v7 = 0;
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v6 = 0LL;
    v7 = -2147483622;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
