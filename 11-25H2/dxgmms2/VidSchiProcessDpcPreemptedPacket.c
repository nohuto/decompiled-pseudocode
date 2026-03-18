/*
 * XREFs of VidSchiProcessDpcPreemptedPacket @ 0x140047F6C
 * Callers:
 *     VidSchiProcessDpcDmaPacket @ 0x140007D68 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiProfilePerformanceTick @ 0x1400211F0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSetTransferContextRunningTime @ 0x140023890 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiRewindPacket @ 0x1400268FC (VidSchiRewindPacket.c)
 *     VidSchiCompleteRewindPacket @ 0x1400269F0 (VidSchiCompleteRewindPacket.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x140026EB4 (VidSchiFinishMeasuringPreemptionTime.c)
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x140028E60 (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x14002F320 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1400379D0 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1400383D8 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     memset @ 0x140056780 (memset.c)
 */

LONG __fastcall VidSchiProcessDpcPreemptedPacket(__int64 a1)
{
  signed __int64 v1; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rsi
  LARGE_INTEGER v5; // r13
  LARGE_INTEGER PerformanceCounter; // r15
  _QWORD *v7; // r12
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // r15d
  __int64 v13; // rcx
  struct _KEVENT *v14; // rcx
  LONG result; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B8h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 14;
  if ( *(_QWORD *)(a1 + 56) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 14;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1984), &LockHandle);
  PerformanceFrequency.QuadPart = 0LL;
  v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
  PerformanceCounter = v5;
  v7 = (_QWORD *)(*(_QWORD *)(v3 + 184) + 112LL * *(unsigned int *)(v3 + 196));
  memset(v7, 0, 0x70uLL);
  *(_DWORD *)(v3 + 196) = (*(_DWORD *)(v3 + 196) + 1) & (*(_DWORD *)(v3 + 192) - 1);
  if ( !v5.QuadPart )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7[1] = PerformanceCounter.QuadPart;
  *(_DWORD *)v7 = 5;
  v8 = *(unsigned int *)(v3 + 1576);
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v8 + 1584), 0LL, v1) )
  {
    WdLogSingleEntry2(1LL, v4, v1);
    WdLogGlobalForLineNumber = 12635;
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
  }
  *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1576) = ((_BYTE)v8 + 1) & 0xF;
  v10 = *(_QWORD *)(a1 + 56);
  if ( v10 )
  {
    *(_QWORD *)(*(_QWORD *)(v10 + 88) + 168LL) = *(_QWORD *)(v10 + 112);
    v7[3] = *(_QWORD *)(v10 + 112);
    _InterlockedAdd((volatile signed __int32 *)(v10 + 128), 1u);
    VidSchiRewindPacket(v10, 1, 0, 1u);
  }
  if ( (*(_DWORD *)(a1 + 92) & 0x200) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 868));
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 784));
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 3016));
  VidSchiStopExecutionTimeAtThisPriority(v3, *(_DWORD *)(v1 + 404), v5.QuadPart, PerformanceFrequency.QuadPart);
  v11 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1576) + 1584);
  if ( v11 )
    VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v3, *(_DWORD *)(v11 + 404), v5.QuadPart);
  if ( *(int *)(v3 + 3000) > 0 )
    RtlSetBitEx(v4 + 544, *(unsigned __int16 *)(v3 + 4));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 788), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v1 + 184) &= ~8u;
    if ( (*(_DWORD *)(v1 + 184) & 0x20) != 0 )
      *(_DWORD *)(v1 + 184) &= ~0x20u;
    if ( (*(_DWORD *)(v1 + 184) & 0x10) != 0 )
      *(_DWORD *)(v1 + 184) &= ~0x10u;
    if ( (*(_DWORD *)(v1 + 184) & 0x40) != 0 )
      *(_DWORD *)(v1 + 184) &= ~0x40u;
    *(_DWORD *)(v1 + 184) &= ~2u;
    v12 = VidSchiCompleteRewindPacket(v1, 1);
    VidSchiSetTransferContextRunningTime(v1, 0LL, 1);
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 404) + 1896);
    v13 = *(unsigned int *)(v1 + 404);
    if ( !*(_DWORD *)(v3 + 4 * v13 + 1896) )
      *(_DWORD *)(v3 + 1892) &= ~(1 << v13);
    VidSchiFinishMeasuringPreemptionTime(v1);
  }
  else
  {
    v12 = 0;
  }
  v7[2] = *(_QWORD *)(a1 + 104);
  _m_prefetchw((const void *)(v3 + 96));
  while ( _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v3 + 96),
            *(_QWORD *)(a1 + 104),
            *(_QWORD *)(v3 + 96)) != *(_QWORD *)(a1 + 104) )
    ;
  if ( bTracingEnabled )
    VidSchiAddGpuWorkEntry(*(struct _VIDSCH_CONTEXT **)(a1 + 48), 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  VidSchiProfilePerformanceTick(11, v4, v3, 0LL, 0LL, 0LL, a1, 0LL);
  v14 = *(struct _KEVENT **)(a1 + 200);
  if ( v14 )
    KeSetEvent(v14, 0, 0);
  VidSchiSignalRegisteredEvent(v4, (struct _KEVENT **)(v1 + 376));
  VidSchiSignalRegisteredEvent(v4, (struct _KEVENT **)(v3 + 408));
  VidSchiSignalRegisteredEvent(v4, (struct _KEVENT **)(v4 + 1896));
  *(_QWORD *)(v1 + 352) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 320), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v4 + 1704) = MEMORY[0xFFFFF78000000320];
  result = KeSetEvent((PRKEVENT)(v4 + 1672), 0, 0);
  if ( v12 )
  {
    *(_QWORD *)(v4 + 1480) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(v4 + 1448), 0, 0);
  }
  return result;
}
