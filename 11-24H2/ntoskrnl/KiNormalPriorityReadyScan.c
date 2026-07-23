/*
 * XREFs of KiNormalPriorityReadyScan @ 0x140282170
 * Callers:
 *     KiRetireDpcList @ 0x1402824C0 (KiRetireDpcList.c)
 * Callees:
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1402D8644 (KiReadGuestSchedulerAssistPriority.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1402D8C40 (KiRemoveThreadFromReadyQueue.c)
 *     KiDeferredReadyThread @ 0x1402DFBE0 (KiDeferredReadyThread.c)
 *     KiSetPriorityBoost @ 0x1402DFE70 (KiSetPriorityBoost.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiInsertDeferredReadyList @ 0x1403BC660 (KiInsertDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiShouldScanSharedReadyQueue @ 0x140454E2C (KiShouldScanSharedReadyQueue.c)
 *     KiScanSharedReadyThreads @ 0x14045BDC8 (KiScanSharedReadyThreads.c)
 *     KiShouldScanLocalReadyQueue @ 0x140462854 (KiShouldScanLocalReadyQueue.c)
 *     EtwTraceAntiStarvationBoost @ 0x14064BA40 (EtwTraceAntiStarvationBoost.c)
 */

__int64 __fastcall KiNormalPriorityReadyScan(_DWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rcx
  int v7; // edi
  int v8; // ecx
  _DWORD *v9; // r9
  int v10; // edx
  __int64 v11; // r8
  unsigned int v12; // edi
  unsigned int v13; // eax
  int v14; // edi
  unsigned int v15; // r15d
  _QWORD **v16; // r13
  _QWORD *v17; // r14
  _QWORD *v18; // rsi
  bool v19; // cl
  _QWORD *v20; // r9
  bool v21; // zf
  int GuestSchedulerAssistPriority; // eax
  int v23; // r12d
  _QWORD *v24; // rsi
  int v25; // r15d
  volatile signed __int32 *v26; // rdi
  char v27; // r12
  __int64 v28; // r13
  int v29; // r14d
  int v30; // eax
  unsigned int v31; // r15d
  __int64 v32; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-38h]
  int v34; // [rsp+3Ch] [rbp-34h]
  int v35; // [rsp+40h] [rbp-30h]
  int v36; // [rsp+44h] [rbp-2Ch]
  unsigned int v37; // [rsp+48h] [rbp-28h]
  _QWORD *v38; // [rsp+50h] [rbp-20h] BYREF
  _QWORD *v39; // [rsp+58h] [rbp-18h]
  __int128 v40; // [rsp+60h] [rbp-10h]
  int v41; // [rsp+B8h] [rbp+48h]
  int v42; // [rsp+C0h] [rbp+50h]
  int v43; // [rsp+C8h] [rbp+58h] BYREF

  v32 = 0LL;
  if ( (unsigned int)KiShouldScanSharedReadyQueue() )
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
    v7 = a1[8438] & 0x300;
    if ( v7 )
    {
      v8 = a1[8441];
      v9 = a1 + 8464;
      v38 = 0LL;
      v10 = KiNormalPriorityBoostMaximumThreadReadyCount;
      v11 = (unsigned int)KiPriorityBoostMaximumThreadScanCount;
      v40 = 0LL;
      v36 = KiCyclesPerClockQuantum * KiNormalPriorityBoostingPeriodMultiplier;
      v43 = MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks;
      v12 = __ROR4__(v7, v8);
      v35 = v8;
      v42 = KiNormalPriorityBoostMaximumThreadReadyCount;
      v41 = KiPriorityBoostMaximumThreadScanCount;
      do
      {
        _BitScanForward(&v13, v12);
        v33 = v13;
        v34 = v12 ^ (1 << v13);
        v14 = v43;
        v15 = ((_BYTE)v13 + (_BYTE)v8) & 0x1F;
        v16 = (_QWORD **)&v9[4 * (((_BYTE)v13 + (_BYTE)v8) & 0x1F)];
        v37 = v15;
        v17 = *v16;
        do
        {
          v18 = v17 - 27;
          v39 = v17;
          v19 = 0;
          v20 = v17;
          v21 = (*(_DWORD *)(v17 - 12) & 0x400000) == 0;
          v17 = (_QWORD *)*v17;
          if ( !v21 )
          {
            GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(v18, 0LL, v11, v20);
            v10 = v42;
            LODWORD(v11) = v41;
            v19 = GuestSchedulerAssistPriority != *((_DWORD *)v18 + 256);
            v20 = v39;
          }
          v23 = v14 - *((_DWORD *)v18 + 109);
          if ( v23 > 0 || v19 )
          {
            KiRemoveThreadFromReadyQueue(a1, v20, v15);
            KiInsertDeferredReadyList(&v38, v18);
            v10 = v42;
            LODWORD(v11) = v41;
            if ( v23 > 0 )
              v10 = --v42;
          }
          v11 = (unsigned int)(v11 - 1);
          v41 = v11;
        }
        while ( v17 != v16 && v10 && (_DWORD)v11 );
        v12 = v34;
        if ( !v34 )
          break;
        if ( !v10 )
          break;
        LOBYTE(v8) = v35;
        v9 = a1 + 8464;
      }
      while ( (_DWORD)v11 );
      v24 = v38;
      if ( v38 )
      {
        KiReleasePrcbLocksForIsolationUnit(&v32);
        v25 = v43;
        do
        {
          v26 = (volatile signed __int32 *)(v24 - 27);
          v27 = 0;
          v28 = *(v24 - 18);
          v43 = 0;
          v24 = (_QWORD *)*v24;
          while ( _interlockedbittestandset64(v26 + 16, 0LL) )
          {
            do
              KeYieldProcessorEx(&v43);
            while ( *((_QWORD *)v26 + 8) );
          }
          v29 = *((char *)v26 + 195);
          if ( v25 - *((_DWORD *)v26 + 109) > 0 && v29 < 11 )
          {
            v27 = 1;
            KiSetPriorityBoost(0, (_DWORD)v26, 11, v28, v36);
          }
          *((_QWORD *)v26 + 8) = 0LL;
          if ( v27 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
            EtwTraceAntiStarvationBoost(v26, (unsigned int)v29);
          KiDeferredReadyThread(a1, v26, 0LL);
        }
        while ( v24 );
        KiAcquirePrcbLocksForIsolationUnit(a1, 1LL, &v32);
        LODWORD(v11) = v41;
        v15 = v37;
      }
      if ( (_DWORD)v11 && v42 )
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
      a1[8441] = v30;
    }
    a1[8442] = KiNormalPriorityBoostScanLatencyTicks + MEMORY[0xFFFFF78000000320];
    return KiReleasePrcbLocksForIsolationUnit(&v32);
  }
  return result;
}
