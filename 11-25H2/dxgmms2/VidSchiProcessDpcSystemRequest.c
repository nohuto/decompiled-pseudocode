/*
 * XREFs of VidSchiProcessDpcSystemRequest @ 0x1400483F0
 * Callers:
 *     VidSchiProcessDpcDmaPacket @ 0x140007D68 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400209D4 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiProfilePerformanceTick @ 0x1400211F0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1400260E0 (VidSchiUpdateContextStatus.c)
 *     VidSchiDecrementContextReference @ 0x14002A940 (VidSchiDecrementContextReference.c)
 *     VidSchiSignalRegisteredEvent @ 0x14002F320 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1400379D0 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1400383D8 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 */

__int64 __fastcall VidSchiProcessDpcSystemRequest(__int64 a1)
{
  signed __int64 v1; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rsi
  LARGE_INTEGER v6; // rax
  __int64 v7; // r15
  __int64 QuadPart; // r14
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KEVENT *v12; // rcx
  __int64 v13; // r8
  unsigned __int64 *v14; // rcx
  unsigned __int64 *v15; // rdx
  unsigned __int64 **v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 **v18; // rax
  struct _KEVENT *v19; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 13;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1984), &LockHandle);
  PerformanceFrequency.QuadPart = 0LL;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7 = *(unsigned int *)(v3 + 1576);
  QuadPart = v6.QuadPart;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v7 + 1584), 0LL, v1) )
  {
    WdLogSingleEntry2(1LL, v5, v1);
    WdLogGlobalForLineNumber = 12898;
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
  }
  if ( *(_DWORD *)(a1 + 88) != 3 )
    *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1576) = ((_BYTE)v7 + 1) & 0xF;
  _InterlockedAdd((volatile signed __int32 *)(v5 + 784), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 3016), 0xFFFFFFFF);
  VidSchiStopExecutionTimeAtThisPriority(v3, *(_DWORD *)(v1 + 404), QuadPart, PerformanceFrequency.QuadPart);
  v10 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1576) + 1584);
  if ( v10 )
    VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v3, *(_DWORD *)(v10 + 404), QuadPart);
  if ( *(int *)(v3 + 3000) > 0 )
    RtlSetBitEx(v5 + 544, *(unsigned __int16 *)(v3 + 4));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 788), 0xFFFFFFFF) == 1 )
  {
    if ( (*(_DWORD *)(v1 + 184) & 1) != 0 )
      *(_DWORD *)(v1 + 184) &= ~2u;
    else
      VidSchiUpdateContextStatus(v1, 0, 12960LL);
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 404) + 1896);
    v11 = *(unsigned int *)(v1 + 404);
    if ( !*(_DWORD *)(v3 + 4 * v11 + 1896) )
      *(_DWORD *)(v3 + 1892) &= ~(1 << v11);
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v3 + 3028), 0xFFFFFFFF);
    _InterlockedAdd((volatile signed __int32 *)(v3 + 3024), 0xFFFFFFFF);
    _InterlockedAdd((volatile signed __int32 *)(v5 + 788), 0xFFFFFFFF);
    _m_prefetchw((const void *)(v3 + 120));
    while ( _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v3 + 120),
              *(_QWORD *)(a1 + 104),
              *(_QWORD *)(v3 + 120)) != *(_QWORD *)(a1 + 104) )
      ;
  }
  _InterlockedAdd((volatile signed __int32 *)(v5 + 780), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 3012), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 1836), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v1 + 784), 0xFFFFFFFF);
  VidSchiCheckPendingDeviceCommand((_QWORD *)v4);
  VidSchiProfilePerformanceTick(9, v5, v3, 0LL, 0LL, 0LL, a1, 0LL);
  VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v1 + 376));
  VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v3 + 408));
  VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v5 + 1896));
  *(_QWORD *)(v1 + 352) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 320), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v5 + 1704) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1672), 0, 0);
  VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v3 + 424));
  VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v5 + 1912));
  *(_QWORD *)(v3 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 296), 0, 0);
  *(_QWORD *)(v5 + 1760) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1728), 0, 0);
  v12 = *(struct _KEVENT **)(a1 + 200);
  if ( v12 )
    KeSetEvent(v12, 0, 0);
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    v13 = *(_QWORD *)(v3 + 232);
    if ( v13 )
    {
      if ( (*(_DWORD *)(v13 + 184) & 1) != 0 )
      {
        v14 = (unsigned __int64 *)(v13 + 8);
        v15 = *(unsigned __int64 **)(v13 + 8);
        if ( v15[1] != v13 + 8
          || (v16 = *(unsigned __int64 ***)(v13 + 16), *v16 != v14)
          || (*v16 = v15,
              v15[1] = (unsigned __int64)v16,
              v17 = v3 + 16LL * *(unsigned int *)(v13 + 404) + 2184,
              v18 = *(unsigned __int64 ***)(v17 + 8),
              *v18 != (unsigned __int64 *)v17) )
        {
          __fastfail(3u);
        }
        *v14 = v17;
        *(_QWORD *)(v13 + 16) = v18;
        *v18 = v14;
        *(_QWORD *)(v17 + 8) = v14;
      }
      VidSchiDecrementContextReference((struct _VIDSCH_CONTEXT *)v13, 1);
      *(_QWORD *)(v3 + 232) = 0LL;
    }
    *(_QWORD *)(v3 + 384) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 352), 0, 0);
    if ( *(_DWORD *)(v5 + 780) )
    {
      if ( *(_BYTE *)(v5 + 7069) )
      {
        v19 = (struct _KEVENT *)(v5 + 1448);
        *(_QWORD *)(v5 + 1480) = MEMORY[0xFFFFF78000000320];
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v4 + 32) + 1480LL) = MEMORY[0xFFFFF78000000320];
        v19 = (struct _KEVENT *)(*(_QWORD *)(v4 + 32) + 1448LL);
      }
      KeSetEvent(v19, 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 16;
  return result;
}
