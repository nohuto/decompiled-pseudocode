/*
 * XREFs of EtwpRealtimeNotifyConsumers @ 0x1409D3224
 * Callers:
 *     EtwpLogger @ 0x1409D33F0 (EtwpLogger.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1409D15D4 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpGetMaxTrackingEventBufferSize @ 0x1409D20F0 (EtwpGetMaxTrackingEventBufferSize.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1409D4930 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpAddDebugInfoEvents @ 0x1409D6910 (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x1409D6BE4 (EtwpAddBinaryInfoEvents.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRealtimeNotifyConsumers(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  char *v3; // rax
  char *v4; // rsi
  unsigned int MaxTrackingEventBufferSize; // eax
  unsigned int v6; // ebp
  _DWORD *v7; // rsi
  unsigned int v8; // ebx
  __int64 Pool2; // rax
  __int64 *i; // r14
  unsigned int v12; // r12d
  __int64 *j; // rax
  __int64 **v14; // rbx
  __int64 *k; // rax

  v1 = (unsigned __int64 *)(a1 + 688);
  v3 = (char *)KeAbPreAcquire(a1 + 688, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (__int64)v1);
  if ( v4 )
    v4[10] = 1;
  MaxTrackingEventBufferSize = EtwpGetMaxTrackingEventBufferSize(a1);
  v6 = MaxTrackingEventBufferSize;
  if ( MaxTrackingEventBufferSize )
  {
    Pool2 = ExAllocatePool2(0x100uLL, MaxTrackingEventBufferSize, 0x62777445u);
    v7 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      EtwpInitializeProviderInfoBuffer(a1, Pool2, v6);
      for ( i = *(__int64 **)(a1 + 328); i != (__int64 *)(a1 + 328); i = (__int64 *)*i )
      {
        v12 = (*((_BYTE *)i + 90) & 8) != 0 ? 4 : 1;
        EtwpAddDebugInfoEvents(a1, (_DWORD)v7, v6, 0, v12);
        if ( *(_QWORD *)(a1 + 1304) != a1 + 1304 && (*(_DWORD *)(a1 + 816) & 0x2000000) != 0 )
          EtwpAddBinaryInfoEvents(a1, v7, v6, v12);
        *((_BYTE *)i + 90) |= 8u;
        if ( v7[12] > 0x48u )
        {
          EtwpRealtimeInjectEtwBuffer(a1, i, v7);
          v7[12] = 72;
        }
      }
      for ( j = *(__int64 **)(a1 + 112); j && !*((_BYTE *)j + 40); j = (__int64 *)*j )
        *((_BYTE *)j + 40) = 1;
      v14 = (__int64 **)(a1 + 96);
      for ( k = *v14; k != (__int64 *)v14; k = (__int64 *)*k )
        *((_BYTE *)k + 16) = 1;
      v8 = 0;
    }
    else
    {
      v8 = -1073741801;
    }
  }
  else
  {
    v7 = 0LL;
    v8 = -2147483622;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return v8;
}
