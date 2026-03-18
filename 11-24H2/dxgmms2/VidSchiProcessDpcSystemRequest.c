/*
 * XREFs of VidSchiProcessDpcSystemRequest @ 0x140009610
 * Callers:
 *     VidSchiProcessDpcDmaPacket @ 0x140007D68 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x140015574 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiProfilePerformanceTick @ 0x140015D90 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x14001AC80 (VidSchiUpdateContextStatus.c)
 *     VidSchiSignalRegisteredEvent @ 0x14001DB80 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiDecrementContextReference @ 0x140020D30 (VidSchiDecrementContextReference.c)
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x140036580 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x140036FC8 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 */

__int64 __fastcall VidSchiProcessDpcSystemRequest(__int64 a1)
{
  signed __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rsi
  LARGE_INTEGER v6; // rax
  __int64 v7; // r15
  unsigned __int64 QuadPart; // r14
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KEVENT *v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  struct _KEVENT *v21; // rcx
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
    WdLogGlobalForLineNumber = 12951;
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
  }
  if ( *(_DWORD *)(a1 + 88) != 3 )
    *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1576) = ((_BYTE)v7 + 1) & 0xF;
  _InterlockedAdd((volatile signed __int32 *)(v5 + 784), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 3016), 0xFFFFFFFF);
  VidSchiStopExecutionTimeAtThisPriority(
    (struct _VIDSCH_NODE *)v3,
    *(_DWORD *)(v1 + 404),
    QuadPart,
    PerformanceFrequency.QuadPart);
  v12 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1576) + 1584);
  if ( v12 )
    VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v3, *(_DWORD *)(v12 + 404), QuadPart);
  if ( *(int *)(v3 + 3000) > 0 )
    RtlSetBitEx(v5 + 544, *(unsigned __int16 *)(v3 + 4));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 788), 0xFFFFFFFF) == 1 )
  {
    if ( (*(_DWORD *)(v1 + 184) & 1) != 0 )
      *(_DWORD *)(v1 + 184) &= ~2u;
    else
      VidSchiUpdateContextStatus(v1, 0LL, 13013LL);
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 404) + 1896);
    v13 = *(unsigned int *)(v1 + 404);
    if ( !*(_DWORD *)(v3 + 4 * v13 + 1896) )
      *(_DWORD *)(v3 + 1892) &= ~(1 << v13);
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
  VidSchiCheckPendingDeviceCommand(v4, v12, v10, v11);
  VidSchiProfilePerformanceTick(9, v5, v3, 0, 0LL, 0LL, a1, 0LL);
  VidSchiSignalRegisteredEvent(v5, v1 + 376);
  VidSchiSignalRegisteredEvent(v5, v3 + 408);
  VidSchiSignalRegisteredEvent(v5, v5 + 1896);
  *(_QWORD *)(v1 + 352) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 320), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v5 + 1704) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1672), 0, 0);
  VidSchiSignalRegisteredEvent(v5, v3 + 424);
  VidSchiSignalRegisteredEvent(v5, v5 + 1912);
  *(_QWORD *)(v3 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 296), 0, 0);
  *(_QWORD *)(v5 + 1760) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1728), 0, 0);
  v14 = *(struct _KEVENT **)(a1 + 200);
  if ( v14 )
    KeSetEvent(v14, 0, 0);
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    v15 = *(_QWORD *)(v3 + 232);
    if ( v15 )
    {
      if ( (*(_DWORD *)(v15 + 184) & 1) != 0 )
      {
        v16 = (_QWORD *)(v15 + 8);
        v17 = *(_QWORD *)(v15 + 8);
        if ( *(_QWORD *)(v17 + 8) != v15 + 8
          || (v18 = *(_QWORD **)(v15 + 16), (_QWORD *)*v18 != v16)
          || (*v18 = v17,
              *(_QWORD *)(v17 + 8) = v18,
              v19 = v3 + 16LL * *(unsigned int *)(v15 + 404) + 2184,
              v20 = *(_QWORD **)(v19 + 8),
              *v20 != v19) )
        {
          __fastfail(3u);
        }
        *v16 = v19;
        *(_QWORD *)(v15 + 16) = v20;
        *v20 = v16;
        *(_QWORD *)(v19 + 8) = v16;
      }
      VidSchiDecrementContextReference((struct _VIDSCH_CONTEXT *)v15);
      *(_QWORD *)(v3 + 232) = 0LL;
    }
    *(_QWORD *)(v3 + 384) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 352), 0, 0);
    if ( *(_DWORD *)(v5 + 780) )
    {
      if ( *(_BYTE *)(v5 + 7068) )
      {
        v21 = (struct _KEVENT *)(v5 + 1448);
        *(_QWORD *)(v5 + 1480) = MEMORY[0xFFFFF78000000320];
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v4 + 32) + 1480LL) = MEMORY[0xFFFFF78000000320];
        v21 = (struct _KEVENT *)(*(_QWORD *)(v4 + 32) + 1448LL);
      }
      KeSetEvent(v21, 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 16;
  return result;
}
