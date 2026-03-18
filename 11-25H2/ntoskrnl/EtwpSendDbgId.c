/*
 * XREFs of EtwpSendDbgId @ 0x14079D8F0
 * Callers:
 *     EtwpSendTraceEvent @ 0x1404AB404 (EtwpSendTraceEvent.c)
 *     EtwpUpdateTrace @ 0x140893BB4 (EtwpUpdateTrace.c)
 *     EtwpProviderArrivalCallback @ 0x140899014 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EtwpSendBufferToDebugger @ 0x14079D7DC (EtwpSendBufferToDebugger.c)
 *     EtwpAddDebugInfoEvents @ 0x140993258 (EtwpAddDebugInfoEvents.c)
 *     EtwpGetMaxTrackingEventBufferSize @ 0x1409938AC (EtwpGetMaxTrackingEventBufferSize.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x14099414C (EtwpInitializeProviderInfoBuffer.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpSendDbgId(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  unsigned __int64 *v4; // rdi
  __int64 *v5; // rax
  __int64 *v6; // rsi
  unsigned int MaxTrackingEventBufferSize; // ebp
  __int128 *v8; // rsi
  __int64 Pool2; // rax

  if ( (*(_DWORD *)(a1 + 824) & 0x800) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 824));
    v2 = *(_DWORD *)(a1 + 824);
    do
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), v2 & 0xFFFFF7FF, v2);
    }
    while ( v3 != v2 );
    if ( (v2 & 0x800) != 0 )
    {
      v4 = (unsigned __int64 *)(a1 + 688);
      v5 = KeAbPreAcquire(a1 + 688, 0LL);
      v6 = v5;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
        ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
      if ( v6 )
        *((_BYTE *)v6 + 10) = 1;
      MaxTrackingEventBufferSize = EtwpGetMaxTrackingEventBufferSize(a1);
      if ( MaxTrackingEventBufferSize )
      {
        Pool2 = ExAllocatePool2(0x40uLL);
        v8 = (__int128 *)Pool2;
        if ( Pool2 )
        {
          EtwpInitializeProviderInfoBuffer(a1, Pool2, MaxTrackingEventBufferSize);
          EtwpAddDebugInfoEvents(a1, (_DWORD)v8, MaxTrackingEventBufferSize, 0, 0);
        }
      }
      else
      {
        v8 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v4);
      KeAbPostRelease((ULONG_PTR)v4);
      if ( v8 )
      {
        EtwpSendBufferToDebugger(v8);
        ExFreePoolWithTag(v8, 0);
      }
    }
  }
}
