/*
 * XREFs of EtwpSendDbgId @ 0x1407AD190
 * Callers:
 *     EtwpSendTraceEvent @ 0x1404A70B8 (EtwpSendTraceEvent.c)
 *     EtwpProviderArrivalCallback @ 0x140A3B8FC (EtwpProviderArrivalCallback.c)
 *     EtwpUpdateTrace @ 0x140ADA038 (EtwpUpdateTrace.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpSendBufferToDebugger @ 0x1407AD07C (EtwpSendBufferToDebugger.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1409D15D4 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpGetMaxTrackingEventBufferSize @ 0x1409D20F0 (EtwpGetMaxTrackingEventBufferSize.c)
 *     EtwpAddDebugInfoEvents @ 0x1409D6910 (EtwpAddDebugInfoEvents.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpSendDbgId(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  unsigned __int64 *v4; // rdi
  char *v5; // rax
  char *v6; // rsi
  unsigned int MaxTrackingEventBufferSize; // eax
  unsigned int v8; // ebp
  __int128 *v9; // rsi
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
      v5 = (char *)KeAbPreAcquire(a1 + 688, 0LL);
      v6 = v5;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
        ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
      if ( v6 )
        v6[10] = 1;
      MaxTrackingEventBufferSize = EtwpGetMaxTrackingEventBufferSize(a1);
      v8 = MaxTrackingEventBufferSize;
      if ( MaxTrackingEventBufferSize )
      {
        Pool2 = ExAllocatePool2(0x40uLL, MaxTrackingEventBufferSize, 0x62777445u);
        v9 = (__int128 *)Pool2;
        if ( Pool2 )
        {
          EtwpInitializeProviderInfoBuffer(a1, Pool2, v8);
          EtwpAddDebugInfoEvents(a1, (_DWORD)v9, v8, 0, 0);
        }
      }
      else
      {
        v9 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v4);
      KeAbPostRelease((ULONG_PTR)v4);
      if ( v9 )
      {
        EtwpSendBufferToDebugger(v9);
        ExFreePoolWithTag(v9, 0);
      }
    }
  }
}
