/*
 * XREFs of KiNormalPriorityReadyScan @ 0x14031A434
 * Callers:
 *     KiRetireDpcList @ 0x1403192F0 (KiRetireDpcList.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiDeferredReadyThread @ 0x1402F13A0 (KiDeferredReadyThread.c)
 *     KiSetPriorityBoost @ 0x140326B50 (KiSetPriorityBoost.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiInsertDeferredReadyList @ 0x140352190 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromReadyQueue @ 0x140352274 (KiRemoveThreadFromReadyQueue.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1404303E4 (KiReadGuestSchedulerAssistPriority.c)
 *     KiShouldScanSharedReadyQueue @ 0x140461A78 (KiShouldScanSharedReadyQueue.c)
 *     KiScanSharedReadyThreads @ 0x140466DC8 (KiScanSharedReadyThreads.c)
 *     KiShouldScanLocalReadyQueue @ 0x14046B83C (KiShouldScanLocalReadyQueue.c)
 *     EtwTraceAntiStarvationBoost @ 0x140641464 (EtwTraceAntiStarvationBoost.c)
 */

__int64 __fastcall KiNormalPriorityReadyScan(struct _KPRCB *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rcx
  int v7; // edi
  unsigned int NormalPriorityQueueIndex; // ecx
  _LIST_ENTRY *DispatcherReadyListHead; // r9
  int v10; // r8d
  int v11; // edx
  unsigned int v12; // edi
  unsigned int v13; // eax
  int v14; // edi
  unsigned int v15; // r15d
  _LIST_ENTRY *v16; // r13
  _LIST_ENTRY *Flink; // r14
  struct _LIST_ENTRY **p_Blink; // rsi
  bool v19; // cl
  _LIST_ENTRY *v20; // r9
  bool v21; // zf
  int GuestSchedulerAssistPriority; // eax
  int v23; // r12d
  _QWORD *v24; // rsi
  int v25; // r15d
  ULONG_PTR v26; // rdi
  char v27; // r12
  __int64 v28; // r13
  int v29; // r14d
  int v30; // eax
  unsigned int v31; // r15d
  __int64 v32; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-38h]
  int v34; // [rsp+3Ch] [rbp-34h]
  unsigned int v35; // [rsp+40h] [rbp-30h]
  int v36; // [rsp+44h] [rbp-2Ch]
  unsigned int v37; // [rsp+48h] [rbp-28h]
  _QWORD *v38; // [rsp+50h] [rbp-20h] BYREF
  _LIST_ENTRY *v39; // [rsp+58h] [rbp-18h]
  __int128 v40; // [rsp+60h] [rbp-10h]
  int v41; // [rsp+B8h] [rbp+48h]
  int v42; // [rsp+C0h] [rbp+50h]
  int v43; // [rsp+C8h] [rbp+58h] BYREF

  v32 = 0LL;
  if ( (unsigned int)KiShouldScanSharedReadyQueue(a1) )
  {
    v4 = *(_QWORD *)(v2 + 36424);
    if ( (*(_DWORD *)(v4 + 8) & 0x300) != 0 )
    {
      LOBYTE(v3) = 1;
      KiScanSharedReadyThreads(v2, v4, v3);
    }
  }
  result = KiShouldScanLocalReadyQueue(a1);
  if ( (_DWORD)result )
  {
    KiAcquirePrcbLocksForIsolationUnit(v6, 0LL, &v32);
    v7 = a1->ReadySummary & 0x300;
    if ( v7 )
    {
      NormalPriorityQueueIndex = a1->NormalPriorityQueueIndex;
      DispatcherReadyListHead = a1->DispatcherReadyListHead;
      v10 = 16;
      v38 = 0LL;
      v11 = KiNormalPriorityBoostMaximumThreadReadyCount;
      v40 = 0LL;
      v35 = NormalPriorityQueueIndex;
      v36 = KiCyclesPerClockQuantum * KiNormalPriorityBoostingPeriodMultiplier;
      v43 = MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks;
      v12 = __ROR4__(v7, NormalPriorityQueueIndex);
      v42 = KiNormalPriorityBoostMaximumThreadReadyCount;
      v41 = 16;
      do
      {
        _BitScanForward(&v13, v12);
        v33 = v13;
        v34 = v12 ^ (1 << v13);
        v14 = v43;
        v15 = ((_BYTE)v13 + (_BYTE)NormalPriorityQueueIndex) & 0x1F;
        v16 = &DispatcherReadyListHead[((_BYTE)v13 + (_BYTE)NormalPriorityQueueIndex) & 0x1F];
        v37 = v15;
        Flink = v16->Flink;
        do
        {
          p_Blink = &Flink[-14].Blink;
          v39 = Flink;
          v19 = 0;
          v20 = Flink;
          v21 = ((__int64)Flink[-6].Flink & 0x400000) == 0;
          Flink = Flink->Flink;
          if ( !v21 )
          {
            GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(p_Blink, 0LL);
            v11 = v42;
            v10 = v41;
            v19 = GuestSchedulerAssistPriority != *((_DWORD *)p_Blink + 256);
            v20 = v39;
          }
          v23 = v14 - *((_DWORD *)p_Blink + 109);
          if ( v23 > 0 || v19 )
          {
            KiRemoveThreadFromReadyQueue(a1, v20, v15);
            KiInsertDeferredReadyList(&v38, p_Blink);
            v11 = v42;
            v10 = v41;
            if ( v23 > 0 )
              v11 = --v42;
          }
          v41 = --v10;
        }
        while ( Flink != v16 && v11 && v10 );
        v12 = v34;
        if ( !v34 )
          break;
        if ( !v11 )
          break;
        LOBYTE(NormalPriorityQueueIndex) = v35;
        DispatcherReadyListHead = a1->DispatcherReadyListHead;
      }
      while ( v10 );
      v24 = v38;
      if ( v38 )
      {
        KiReleasePrcbLocksForIsolationUnit(&v32);
        v25 = v43;
        do
        {
          v26 = (ULONG_PTR)(v24 - 27);
          v27 = 0;
          v28 = *(v24 - 18);
          v43 = 0;
          v24 = (_QWORD *)*v24;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 64), 0LL) )
          {
            do
              KeYieldProcessorEx(&v43);
            while ( *(_QWORD *)(v26 + 64) );
          }
          v29 = *(char *)(v26 + 195);
          if ( v25 - *(_DWORD *)(v26 + 436) > 0 && v29 < 11 )
          {
            v27 = 1;
            KiSetPriorityBoost(0, v26, 11, v28, v36);
          }
          *(_QWORD *)(v26 + 64) = 0LL;
          if ( v27 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
            EtwTraceAntiStarvationBoost(v26, (unsigned int)v29);
          KiDeferredReadyThread(a1, v26, 0LL);
        }
        while ( v24 );
        KiAcquirePrcbLocksForIsolationUnit(a1, 1LL, &v32);
        v10 = v41;
        v15 = v37;
      }
      if ( v10 && v42 )
      {
        v30 = 8;
      }
      else
      {
        v31 = v15 + 1;
        v30 = 8;
        if ( v31 <= 9 )
          v30 = v31;
      }
      a1->NormalPriorityQueueIndex = v30;
    }
    a1->NormalPriorityReadyScanTick = KiNormalPriorityBoostScanLatencyTicks + MEMORY[0xFFFFF78000000320];
    return KiReleasePrcbLocksForIsolationUnit(&v32);
  }
  return result;
}
