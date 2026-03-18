/*
 * XREFs of EtwpRealtimeNotifyConsumers @ 0x1409936EC
 * Callers:
 *     EtwpLogger @ 0x14098FA20 (EtwpLogger.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140990F70 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpAddDebugInfoEvents @ 0x140993258 (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x14099352C (EtwpAddBinaryInfoEvents.c)
 *     EtwpGetMaxTrackingEventBufferSize @ 0x1409938AC (EtwpGetMaxTrackingEventBufferSize.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x14099414C (EtwpInitializeProviderInfoBuffer.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRealtimeNotifyConsumers(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 *v3; // rax
  __int64 *v4; // rsi
  unsigned int MaxTrackingEventBufferSize; // ebp
  _DWORD *v6; // rsi
  unsigned int v7; // ebx
  __int64 Pool2; // rax
  __int64 i; // r14
  int v11; // r12d
  __int64 *j; // rax
  __int64 **v13; // rbx
  __int64 *k; // rax

  v1 = (unsigned __int64 *)(a1 + 688);
  v3 = KeAbPreAcquire(a1 + 688, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (__int64)v1);
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
      for ( i = *(_QWORD *)(a1 + 328); i != a1 + 328; i = *(_QWORD *)i )
      {
        v11 = (*(_BYTE *)(i + 90) & 8) != 0 ? 4 : 1;
        EtwpAddDebugInfoEvents(a1, (__int64)v6, MaxTrackingEventBufferSize, 0LL, v11);
        if ( *(_QWORD *)(a1 + 1304) != a1 + 1304 && (*(_DWORD *)(a1 + 816) & 0x2000000) != 0 )
          EtwpAddBinaryInfoEvents(a1, (__int64)v6, MaxTrackingEventBufferSize, v11);
        *(_BYTE *)(i + 90) |= 8u;
        if ( v6[12] > 0x48u )
        {
          EtwpRealtimeInjectEtwBuffer((_DWORD *)a1, i, (__int64)v6);
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
