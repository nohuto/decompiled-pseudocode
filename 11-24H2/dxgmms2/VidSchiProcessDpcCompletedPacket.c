/*
 * XREFs of VidSchiProcessDpcCompletedPacket @ 0x140008BD0
 * Callers:
 *     VidSchiProcessDpcDmaPacket @ 0x140007D68 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x14000E4E0 (VidSchiUnwaitMonitoredFences.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x140013C80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x140015574 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiProfilePerformanceTick @ 0x140015D90 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSetTransferContextRunningTime @ 0x140018430 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiUpdateContextStatus @ 0x14001AC80 (VidSchiUpdateContextStatus.c)
 *     VidSchiCompleteRewindPacket @ 0x14001B590 (VidSchiCompleteRewindPacket.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x14001BA54 (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchiSignalRegisteredEvent @ 0x14001DB80 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiMarkDeviceAsError @ 0x14001FF30 (VidSchiMarkDeviceAsError.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x140024200 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     VidSchiStartNodeYield @ 0x1400242C8 (VidSchiStartNodeYield.c)
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1400248F8 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14002A0B8 (-VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x140034BB0 (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x140036FC8 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     ?VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x1400383E8 (-VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     VidMmUnreferenceDmaBuffer @ 0x140039780 (VidMmUnreferenceDmaBuffer.c)
 *     ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x140040A1C (-VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400430D0 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiProcessDpcCompletedPacket(struct _VIDSCH_DMA_PACKET *a1)
{
  signed __int64 v1; // r13
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rbp
  int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r10d
  LARGE_INTEGER PerformanceCounter; // rdx
  unsigned __int64 QuadPart; // r14
  __int64 v15; // r12
  bool v16; // zf
  __int64 v17; // r15
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int refreshed; // eax
  struct _VIDSCH_QUEUE_PACKET *v26; // rdx
  __int64 v27; // rcx
  struct VIDMM_DMA_BUFFER *v28; // r14
  bool v29; // dl
  __int64 v30; // r15
  unsigned int i; // r14d
  struct _VIDSCH_HISTORY_BUFFER_DATA *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  char v36; // r14
  int v37; // eax
  _BYTE *v38; // r8
  __int64 v39; // rdx
  _BYTE *v40; // rcx
  __int64 v41; // rdx
  char v42; // al
  _BYTE *v43; // rax
  _BYTE *v44; // r9
  __int64 v45; // rdx
  _BYTE *v46; // rcx
  __int64 v47; // rdx
  char v48; // al
  _BYTE *v49; // rax
  int v50; // esi
  struct _KEVENT *v51; // rcx
  struct _VIDSCH_QUEUE_PACKET *v52; // rax
  unsigned int v53; // ebx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-80h] BYREF
  __int64 v56; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v57[2]; // [rsp+78h] [rbp-60h] BYREF
  char v58; // [rsp+88h] [rbp-50h]
  int v59; // [rsp+8Ch] [rbp-4Ch]
  char v60; // [rsp+E0h] [rbp+8h]
  bool v61; // [rsp+E8h] [rbp+10h]
  int v62; // [rsp+F0h] [rbp+18h]
  __int64 v63; // [rsp+F8h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 6);
  v60 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = *(_QWORD *)(v1 + 96);
  v4 = 15LL;
  v63 = *(_QWORD *)(v1 + 104);
  v61 = 0;
  v5 = *(_QWORD *)(v3 + 24);
  if ( *((_DWORD *)a1 + 18) == 18 )
  {
    v6 = 15;
    v62 = 9;
    if ( !g_PageFaultDebugMode && !KdRefreshDebuggerNotPresent() )
    {
      v7 = *((_QWORD *)a1 + 6);
      v8 = *(_QWORD *)(v7 + 104);
      v9 = *(_QWORD *)(v7 + 96);
      v10 = *(_QWORD *)(v8 + 40);
      v11 = *(_QWORD *)(v8 + 232);
      v12 = *(_DWORD *)(*(_QWORD *)(v9 + 24) + 4LL);
      if ( g_pVidSchSystemProcess == v10 )
        DbgPrintEx(
          0x65u,
          0,
          "\n"
          "The GPU Scheduler detected a page fault at GPU VA 0x%I64X.\n"
          "We broke into the debugger to allow a chance for debugging this issue.\n"
          "Run \"!dxgkdx.gpuva -a %d -o %d 0x%I64X  [-h]\" command for more info.\n"
          "To disable debug breaks on page fault, run \"?? dxgmms2!g_PageFaultDebugMode=1\" command,\n"
          "or \"ed 0x%p 1\"\n"
          "\n",
          v11,
          *(unsigned __int16 *)(v9 + 6),
          v12,
          v11,
          &g_PageFaultDebugMode);
      else
        DbgPrintEx(
          0x65u,
          0,
          "\n"
          "The GPU Scheduler detected a page fault at GPU VA 0x%I64X.\n"
          "We broke into the debugger to allow a chance for debugging this issue.\n"
          "Run \"!dxgkdx.gpuva -a %d -p 0x%p -o %d 0x%I64X[ -h]\" command for more info.\n"
          "To disable debug breaks on page fault, run \"?? dxgmms2!g_PageFaultDebugMode=1\" command,\n"
          "or \"ed 0x%p 1\"\n"
          "\n",
          v11,
          *(unsigned __int16 *)(v9 + 6),
          *(const void **)(v10 + 2656),
          v12,
          v11,
          &g_PageFaultDebugMode);
      __debugbreak();
    }
  }
  else
  {
    v62 = 0;
    v6 = 13;
  }
  *((_QWORD *)a1 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 18) = v6;
  if ( *((_QWORD *)a1 + 7) )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 7) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*((_QWORD *)a1 + 7) + 52LL) = v6;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1984), &LockHandle);
  v56 = v5;
  v58 = 0;
  v57[1] = v57;
  v59 = 2;
  v57[0] = v57;
  PerformanceFrequency.QuadPart = 0LL;
  PerformanceCounter = KeQueryPerformanceCounter(&PerformanceFrequency);
  QuadPart = PerformanceCounter.QuadPart;
  v15 = *(_QWORD *)(v3 + 184) + 112LL * *(unsigned int *)(v3 + 196);
  *(_OWORD *)v15 = 0LL;
  *(_OWORD *)(v15 + 16) = 0LL;
  *(_OWORD *)(v15 + 32) = 0LL;
  *(_OWORD *)(v15 + 48) = 0LL;
  *(_OWORD *)(v15 + 64) = 0LL;
  *(_OWORD *)(v15 + 80) = 0LL;
  *(_OWORD *)(v15 + 96) = 0LL;
  *(_DWORD *)(v3 + 196) = (*(_DWORD *)(v3 + 196) + 1) & (*(_DWORD *)(v3 + 192) - 1);
  if ( !PerformanceCounter.QuadPart )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v16 = bTracingEnabled == 0;
  *(LARGE_INTEGER *)(v15 + 8) = PerformanceCounter;
  *(_DWORD *)v15 = 4;
  if ( !v16
    && (byte_140081244 & 8) != 0
    && *(_BYTE *)(((__int64 (*)(void))DxgCoreInterface[3])() + 305720)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 3072), 1, 0) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v3 + 3040), NormalWorkQueue);
  }
  v17 = *(unsigned int *)(v3 + 1576);
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v17 + 1584), 0LL, v1) )
  {
    WdLogSingleEntry2(1LL, v5, v63);
    WdLogGlobalForLineNumber = 12230;
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, __int64, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Context running queue is inconsistant",
      v5,
      v63,
      0LL,
      0LL,
      0LL);
  }
  *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1576) = (v17 + 1) & 0xF;
  if ( (*((_DWORD *)a1 + 23) & 0x200) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 868));
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 784));
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 3016));
  VidSchiStopExecutionTimeAtThisPriority(
    (struct _VIDSCH_NODE *)v3,
    *(_DWORD *)(v1 + 404),
    QuadPart,
    PerformanceFrequency.QuadPart);
  v19 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1576) + 1584);
  if ( v19 )
  {
    v20 = *(unsigned int *)(v19 + 404);
    v21 = gulPriorityToYieldPriorityBand[v20];
    if ( gulPriorityToYieldPriorityBand[v20] )
    {
      v22 = (unsigned __int64 *)(v3 + 2056 + 8 * v21);
      do
      {
        if ( *(v22 - 4) )
          *v22 = QuadPart;
        --v22;
        --v21;
      }
      while ( v21 );
    }
  }
  if ( *(int *)(v3 + 3000) > 0 )
    RtlSetBitEx(v5 + 544, *(unsigned __int16 *)(v3 + 4));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 788), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v1 + 184) &= ~2u;
    if ( (*(_DWORD *)(v1 + 184) & 8) != 0 )
    {
      *(_DWORD *)(v1 + 184) &= ~8u;
      v61 = (unsigned int)VidSchiCompleteRewindPacket(v1, 1LL) != 0;
    }
    if ( v63 == *(_QWORD *)(v5 + 256) )
    {
      VidSchiUpdateContextStatus(v1, 0LL, 12308LL);
    }
    else
    {
      LOBYTE(v18) = 1;
      VidSchiSetTransferContextRunningTime(v1, 0LL, v18);
    }
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 404) + 1896);
    v23 = *(unsigned int *)(v1 + 404);
    if ( !*(_DWORD *)(v3 + 4 * v23 + 1896) )
      *(_DWORD *)(v3 + 1892) &= ~(1 << v23);
    VidSchiFinishMeasuringPreemptionTime(v1);
  }
  if ( *(_BYTE *)(v3 + 2144) )
  {
    v24 = *(_QWORD *)(v3 + 2120);
    if ( v24 )
    {
      if ( QuadPart > *(_QWORD *)(v3 + 2128) + v24 )
      {
        VidSchiStopNodeYield((struct _VIDSCH_NODE *)v3);
        goto LABEL_45;
      }
    }
    else if ( ((-1 << (*(_BYTE *)(v5 + 216) + 1)) & *(_DWORD *)(v3 + 1892)) == 0 )
    {
      refreshed = VidSchiMonitorRefreshPeriodFromNode(v3);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
        v3,
        QuadPart,
        (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
        refreshed);
LABEL_45:
      v61 = 1;
    }
  }
  *(_QWORD *)(v15 + 16) = *((_QWORD *)a1 + 13);
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 16) + 444LL) & 0x200) != 0
    && *(_DWORD *)(v3 + 496)
    && *((_QWORD *)a1 + 13) != *(_QWORD *)(v3 + 472) )
  {
    *(_DWORD *)(v3 + 496) = 0;
  }
  _m_prefetchw((const void *)(v3 + 96));
  while ( _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v3 + 96),
            *((_QWORD *)a1 + 13),
            *(_QWORD *)(v3 + 96)) != *((_QWORD *)a1 + 13) )
    ;
  v26 = (struct _VIDSCH_QUEUE_PACKET *)*((_QWORD *)a1 + 7);
  if ( v26 )
  {
    *(_QWORD *)(v15 + 24) = *((_QWORD *)v26 + 14);
    VidSchiAdvanceContextSubmissionId((struct HwQueueStagingList *)&v56, v26);
    *((_DWORD *)a1 + 23) |= 0x80u;
    v27 = *((_QWORD *)a1 + 7);
    v60 = 1;
  }
  else
  {
    v27 = 0LL;
  }
  v28 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)a1 + 8);
  if ( (*((_DWORD *)a1 + 23) & 2) != 0 )
  {
    VidMmUnreferenceDmaBuffer(*((_QWORD *)a1 + 8), 0LL);
    v27 = *((_QWORD *)a1 + 7);
  }
  if ( (*((_DWORD *)a1 + 23) & 1) != 0 )
  {
    v29 = v27 && *(_DWORD *)(v27 + 48) == 8;
    VidMmReleaseDmaBuffer(v28, v29);
  }
  v30 = *((_QWORD *)a1 + 7);
  if ( v30 && *(_QWORD *)(v30 + 288) )
  {
    for ( i = 0; i < *(_DWORD *)(v30 + 1104); ++i )
    {
      v32 = (struct _VIDSCH_HISTORY_BUFFER_DATA *)(*(_QWORD *)(v30 + 288) + 16LL * i);
      if ( *(_QWORD *)v32 )
        VidSchiProcessHistoryBuffer(a1, v32);
    }
    VidSchiFreeHistoryBufferStorage((struct _VIDSCH_QUEUE_PACKET *)v30);
  }
  VidSchiUnwaitMonitoredFences((HwQueueStagingList *)&v56);
  VidSchiCheckPendingDeviceCommand(v63, v33, v34, v35);
  v36 = v61;
  if ( _bittest64(*(const signed __int64 **)(v5 + 504), *(unsigned __int16 *)(v3 + 4)) )
    v36 = 1;
  if ( bTracingEnabled )
    VidSchiAddGpuWorkEntry(*((struct _VIDSCH_CONTEXT **)a1 + 6), 0);
  if ( v62 )
  {
    *(_BYTE *)(v15 + 32) = 1;
    *(_OWORD *)(v15 + 40) = *(_OWORD *)(v63 + 208);
    *(_OWORD *)(v15 + 56) = *(_OWORD *)(v63 + 224);
    v37 = *(_DWORD *)(v63 + 224);
    if ( (v37 & 4) != 0 )
    {
      if ( !*(_DWORD *)(v3 + 2152) )
      {
        v38 = (_BYTE *)(v5 + 3269);
        v39 = *(_QWORD *)(*(_QWORD *)(v63 + 40) + 2648LL);
        if ( !v39 )
          goto LABEL_85;
        v40 = (_BYTE *)(v5 + 3269);
        v41 = v39 - (_QWORD)v38;
        do
        {
          if ( v4 == -2147483631 )
            break;
          v42 = v40[v41];
          if ( !v42 )
            break;
          *v40++ = v42;
          --v4;
        }
        while ( v4 );
        v43 = v40 - 1;
        if ( v4 )
          v43 = v40;
        *v43 = 0;
        if ( !v4 )
LABEL_85:
          *v38 = 0;
        *(_DWORD *)(v5 + 3284) = *(_DWORD *)(v1 + 140);
        *(_DWORD *)(v3 + 2152) = 1;
      }
    }
    else if ( (v37 & 8) != 0 && !*(_DWORD *)(v3 + 2148) )
    {
      v44 = (_BYTE *)(v3 + 2156);
      v45 = *(_QWORD *)(*(_QWORD *)(v63 + 40) + 2648LL);
      if ( !v45 )
        goto LABEL_97;
      v46 = (_BYTE *)(v3 + 2156);
      v47 = v45 - (_QWORD)v44;
      do
      {
        if ( v4 == -2147483631 )
          break;
        v48 = v46[v47];
        if ( !v48 )
          break;
        *v46++ = v48;
        --v4;
      }
      while ( v4 );
      v49 = v46 - 1;
      if ( v4 )
        v49 = v46;
      *v49 = 0;
      if ( !v4 )
LABEL_97:
        *v44 = 0;
      *(_DWORD *)(v3 + 2172) = *(_DWORD *)(v1 + 140);
      *(_QWORD *)(v3 + 2176) = *(_QWORD *)(*(_QWORD *)(v63 + 40) + 2656LL);
      *(_DWORD *)(v3 + 2148) = 1;
    }
    VidSchiMarkDeviceAsError((struct HwQueueStagingList *)&v56);
    v50 = 13;
  }
  else
  {
    v50 = 9;
  }
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v56, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  VidSchiProfilePerformanceTick(v50, v5, v3, 0, 0LL, 0LL, (__int64)a1, 0LL);
  VidSchiSignalRegisteredEvent(v5, v1 + 376);
  VidSchiSignalRegisteredEvent(v5, v3 + 408);
  VidSchiSignalRegisteredEvent(v5, v5 + 1896);
  *(_QWORD *)(v1 + 352) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 320), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v5 + 1704) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1672), 0, 0);
  if ( v36 )
  {
    *(_QWORD *)(v5 + 1480) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1448), 0, 0);
  }
  v51 = (struct _KEVENT *)*((_QWORD *)a1 + 25);
  if ( v51 )
    KeSetEvent(v51, 0, 0);
  VidSchiSignalRegisteredEvent(v5, v5 + 1944);
  v52 = (struct _VIDSCH_QUEUE_PACKET *)*((_QWORD *)a1 + 7);
  v53 = -1;
  if ( v52 )
    v53 = *((_DWORD *)v52 + 42);
  if ( v60 )
  {
    do
      v52 = VidSchiProcessCompletedQueuePacketInternal(v52);
    while ( v52 );
  }
  *((_QWORD *)a1 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 18) = 16;
  if ( v53 != -1
    && (*((_DWORD *)a1 + 23) & 0x10) != 0
    && _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v5 + 8LL * v53 + 3432) + 78944LL), 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)(v5 + 2712), 1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v5 + 16) + 24LL));
    *(_QWORD *)(v5 + 2672) = -1LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v5 + 2680), CriticalWorkQueue);
  }
  if ( v59 )
  {
    if ( !v58 )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v56, 0LL);
  }
}
