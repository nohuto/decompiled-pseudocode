/*
 * XREFs of MiBackgroundZeroLocalPages @ 0x140332260
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x140412BA0 (MiBackgroundZeroNodePages.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     MiGetBackgroundHugePageToZero @ 0x1403310D0 (MiGetBackgroundHugePageToZero.c)
 *     MiAssignBackgroundZeroThreadToProcessor @ 0x1403312CC (MiAssignBackgroundZeroThreadToProcessor.c)
 *     MiZeroThreadContextSetExiting @ 0x140331384 (MiZeroThreadContextSetExiting.c)
 *     MiFindBestZeroingProcessor @ 0x1403313C8 (MiFindBestZeroingProcessor.c)
 *     MiSetZeroPageThreadPriority @ 0x140331968 (MiSetZeroPageThreadPriority.c)
 *     MiZeroThreadContextPrepareToWait @ 0x140331A20 (MiZeroThreadContextPrepareToWait.c)
 *     MiTryZeroMemory @ 0x140331A60 (MiTryZeroMemory.c)
 *     MiMapBackgroundPagesToZero @ 0x140331C80 (MiMapBackgroundPagesToZero.c)
 *     MiLockMultipleZeroChunks @ 0x140332A40 (MiLockMultipleZeroChunks.c)
 *     MiUnlockMultipleZeroChunks @ 0x140332CF0 (MiUnlockMultipleZeroChunks.c)
 *     MiMoveZeroedPages @ 0x140332F20 (MiMoveZeroedPages.c)
 *     MiExamineZeroChunks @ 0x140333040 (MiExamineZeroChunks.c)
 *     MiGetSinglePageToZero @ 0x1403332A0 (MiGetSinglePageToZero.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     MiReassessZeroThreads @ 0x1404125C0 (MiReassessZeroThreads.c)
 *     MiUnlinkZeroThreadFromActiveDomain @ 0x14041399C (MiUnlinkZeroThreadFromActiveDomain.c)
 *     MiDecrementZeroEngineThread @ 0x140413AA8 (MiDecrementZeroEngineThread.c)
 *     MiGetZeroingContext @ 0x14041F9E0 (MiGetZeroingContext.c)
 *     MiInitializePageHeatList @ 0x140435B60 (MiInitializePageHeatList.c)
 *     MiAddPageToHeatRanges @ 0x140435BC4 (MiAddPageToHeatRanges.c)
 *     MiFlushZeroPageHeatBatch @ 0x140462F20 (MiFlushZeroPageHeatBatch.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiZeroPageMakeHot @ 0x1406914C8 (MiZeroPageMakeHot.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiBackgroundZeroLocalPages(__int64 a1)
{
  int v2; // ebx
  unsigned int v3; // r14d
  __int64 v4; // r13
  __int64 v5; // rcx
  LARGE_INTEGER v6; // r8
  LARGE_INTEGER v7; // r15
  __int64 v8; // r13
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  int i; // ebx
  int BackgroundHugePageToZero; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 *v23; // rbx
  __int64 v24; // rcx
  signed __int32 v25; // eax
  LARGE_INTEGER v26; // rax
  LARGE_INTEGER v27; // rdx
  KIRQL v28; // al
  int v29; // r14d
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rsi
  struct _KTHREAD *v32; // rcx
  int v33; // edx
  KIRQL v35; // bl
  int v36; // ecx
  LARGE_INTEGER v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  KIRQL v40; // bl
  __int64 v41; // r14
  __int64 v42; // rsi
  __int64 v43; // rax
  unsigned __int64 v44; // r9
  unsigned int v45; // ecx
  __int64 v46; // r10
  __int64 v47; // rax
  __int64 v48; // rdx
  signed __int32 v49[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v50; // [rsp+40h] [rbp-C0h]
  int v51; // [rsp+44h] [rbp-BCh]
  int v52; // [rsp+48h] [rbp-B8h]
  LARGE_INTEGER v53; // [rsp+50h] [rbp-B0h]
  int v54; // [rsp+58h] [rbp-A8h]
  __int64 v55; // [rsp+60h] [rbp-A0h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER v57; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h]
  __int64 v59; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER v60; // [rsp+88h] [rbp-78h] BYREF
  LARGE_INTEGER v61; // [rsp+90h] [rbp-70h] BYREF
  char v62; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v63[15]; // [rsp+A1h] [rbp-5Fh]
  int v64; // [rsp+B0h] [rbp-50h]
  int v65; // [rsp+B4h] [rbp-4Ch]
  struct _KTHREAD *v66; // [rsp+B8h] [rbp-48h]
  __int64 v67; // [rsp+C0h] [rbp-40h]
  __int64 v68; // [rsp+C8h] [rbp-38h]
  __int128 v69; // [rsp+D0h] [rbp-30h]
  __int64 ZeroingContext; // [rsp+E0h] [rbp-20h]
  PVOID Object[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp+0h]
  _OWORD v73[2]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v74; // [rsp+128h] [rbp+28h]
  __int64 v75; // [rsp+138h] [rbp+38h]
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v77[144]; // [rsp+1A0h] [rbp+A0h] BYREF

  memset_0(v77, 0, sizeof(v77));
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  v51 = 0;
  v3 = 0;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x400u;
  v4 = *(_QWORD *)(a1 + 336);
  v55 = v4;
  v5 = *(_QWORD *)(v4 + 208);
  v58 = *(_QWORD *)(*(_QWORD *)(v4 + 176) + 48LL);
  if ( (HvlEnlightenments & 0x8400000) != 0 && (!v5 || (*(_DWORD *)(v5 + 15184) & 2) == 0) )
  {
    MiInitializePageHeatList(v77, 0LL, 1LL, 16LL);
    *(_QWORD *)(a1 + 672) = v77;
  }
  v54 = MiSetZeroPageThreadPriority(a1, 0, 0);
  _InterlockedExchange((volatile __int32 *)(a1 + 388), 0);
  PerformanceFrequency.QuadPart = 0LL;
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( PerformanceFrequency.QuadPart != 10000000 )
    v7.QuadPart = 10000000 * v7.QuadPart / PerformanceFrequency.QuadPart;
LABEL_6:
  _InterlockedOr(v49, 0);
  while ( 1 )
  {
    v50 = v3;
    v53 = v7;
    if ( v2 )
      break;
    v8 = *(_QWORD *)(a1 + 336);
    v9 = 0;
    v52 = 0;
    v10 = v8 + 208;
    v11 = *(_QWORD *)(*(_QWORD *)(v8 + 176) + 48LL);
    Object[0] = (PVOID)(v11 + 88);
    Object[1] = (PVOID)(a1 + 392);
    while ( (*(_DWORD *)(a1 + 384) & 2) != 0 )
    {
      v10 = v8 + 208;
      v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v8 + 208) + 15280LL));
      v29 = *(_DWORD *)(a1 + 384);
      v30 = v28;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v8 + 208) + 15280LL));
      if ( (_BYTE)v30 != 17 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v30);
        __writecr8(v30);
      }
      if ( (v29 & 2) == 0 )
      {
        v9 = v52;
        break;
      }
      MiZeroThreadContextPrepareToWait(a1);
      v9 = 1;
      v52 = 1;
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray) )
        goto LABEL_51;
    }
    if ( *((_DWORD *)Object[0] + 1) )
    {
LABEL_51:
      v31 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)v10 + 15280LL));
      MiZeroThreadContextSetExiting(a1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v10 + 15280LL));
      if ( (_BYTE)v31 != 17 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v31);
        __writecr8(v31);
      }
      ++dword_140EF4E6C;
      goto LABEL_56;
    }
    while ( *(_DWORD *)(v11 + 16944) || dword_140E37650 )
    {
      MiZeroThreadContextPrepareToWait(a1);
      v10 = v8 + 208;
      if ( !KeWaitForSingleObject(Object[0], WrFreePage, 0, 0, (PLARGE_INTEGER)&MiFiveSeconds) )
        goto LABEL_51;
    }
    v12 = *(_QWORD *)(a1 + 352);
    memset(v73, 0, sizeof(v73));
    v75 = 0LL;
    v74 = 0LL;
    if ( v12 == *(_QWORD *)(a1 + 368)
      && (v13 = *(unsigned __int16 *)(a1 + 360), (_WORD)v13 == *(_WORD *)(a1 + 376))
      && v12
      && (v12 & qword_140E2ED90[v13]) == 0 )
    {
      ++dword_140EF4EC0;
    }
    else
    {
      ++dword_140EF4EC4;
      v35 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v8 + 208) + 15280LL));
      if ( *(_QWORD *)(a1 + 352) )
        MiUnlinkZeroThreadFromActiveDomain(a1);
      MiFindBestZeroingProcessor((__int64)v73, (int *)v8, 0, 1);
      v36 = DWORD2(v74);
      ++dword_140EF4EA8[SDWORD2(v74)];
      if ( v36 == 5 )
      {
        MiDecrementZeroEngineThread(a1);
      }
      else
      {
        ++*(_DWORD *)(v8 + 276);
        MiAssignBackgroundZeroThreadToProcessor(a1, v8, (__int64)v73);
      }
      MiReleaseSpinLockExclusive((_DWORD *)(*(_QWORD *)(v8 + 208) + 15280LL), v35);
    }
    if ( v9 )
    {
      v50 = 0;
      _InterlockedExchange((volatile __int32 *)(a1 + 388), 0);
      v57.QuadPart = 0LL;
      LODWORD(v14) = 0;
      v37 = KeQueryPerformanceCounter(&v57);
      v53 = v37;
      if ( v57.QuadPart != 10000000 )
        v53.QuadPart = 10000000 * v37.QuadPart / v57.QuadPart;
      _InterlockedOr(v49, 0);
      v4 = v55;
      ++*(_DWORD *)(v55 + 284);
    }
    else
    {
      v4 = v55;
      v14 = v50;
      ++*(_DWORD *)(v55 + 284);
      if ( (_DWORD)v14 )
      {
        v7 = v53;
        v15 = 32LL;
        *(_QWORD *)(a1 + 288) = 0LL;
        v16 = 0LL;
        v50 = v14;
        do
        {
          *(_QWORD *)(v16 + a1 + 24) = 0LL;
          v16 += 8LL;
          --v15;
        }
        while ( v15 );
        *(_DWORD *)(a1 + 280) = 0;
        for ( i = 0; !i; i = 1 )
        {
          if ( !MiGetSinglePageToZero(
                  a1,
                  *(_QWORD *)(*(_QWORD *)(a1 + 336) + 208LL),
                  a1 + 4 * (v14 + 148),
                  (unsigned int)v14) )
            goto LABEL_57;
        }
        BackgroundHugePageToZero = MiMapBackgroundPagesToZero(a1, v14);
        goto LABEL_27;
      }
    }
    BackgroundHugePageToZero = MiGetBackgroundHugePageToZero(v58, a1, v6.QuadPart);
    v7 = v53;
LABEL_27:
    if ( BackgroundHugePageToZero )
    {
      v19 = *(_QWORD *)(a1 + 336);
      *(_DWORD *)&v63[8] = 0;
      v63[14] = 0;
      v59 = 0LL;
      v20 = *(_QWORD *)(v19 + 176);
      *(_QWORD *)v63 = 0LL;
      v65 = 0;
      v69 = 0LL;
      v64 = *(_DWORD *)(v20 + 56);
      v21 = *(unsigned int *)(a1 + 320);
      v66 = KeGetCurrentThread();
      v67 = v58;
      v62 = 17;
      v68 = a1;
      ZeroingContext = a1;
      *(_DWORD *)&v63[11] = v21;
      if ( (unsigned int)v21 < 3 )
      {
        if ( (_DWORD)v21 )
        {
          if ( (HvlEnlightenments & 0x200000) != 0 )
            MiZeroPageMakeHot(a1);
        }
        else
        {
          ZeroingContext = MiGetZeroingContext(a1);
          *((_QWORD *)&v69 + 1) = *(_QWORD *)(a1 + 584);
          v63[1] = 1;
        }
      }
      ++dword_140EF4ED4[v21];
      v51 = MiTryZeroMemory(a1);
      do
      {
        MiLockMultipleZeroChunks(&v62);
        if ( !*(_DWORD *)&v63[7] )
          break;
        MiExamineZeroChunks(&v62);
        MiMoveZeroedPages(&v62);
        v22 = *(unsigned int *)(ZeroingContext + 280);
        v23 = (__int64 *)(ZeroingContext + 24);
        if ( !*(_DWORD *)(a1 + 320) )
        {
          v39 = *v23;
          v23 = &v59;
          v59 = v39;
        }
        MiUnlockMultipleZeroChunks(&v62);
        if ( v63[2] )
        {
          if ( (_DWORD)v22 )
          {
            v41 = v22;
            do
            {
              if ( (*v23 & 0x80u) != 0LL )
              {
                v42 = v68;
                if ( (unsigned int)MiAddPageToHeatRanges(
                                     *(_QWORD *)(v68 + 672),
                                     ((unsigned __int64)*v23 >> 12) & 0x3FFFFFFFFFLL,
                                     *(unsigned int *)&v63[11]) )
                  goto LABEL_90;
                v43 = *(_QWORD *)(v42 + 672);
                v44 = 0LL;
                v45 = *(_DWORD *)(v43 + 4);
                if ( v45 )
                {
                  v6.QuadPart = v43 + 16;
                  v46 = v45;
                  do
                  {
                    v47 = (*(_QWORD *)v6.QuadPart & 0x3FFLL) + 1;
                    v48 = (*(_QWORD *)v6.QuadPart >> 10) & 3LL;
                    if ( ((*(_QWORD *)v6.QuadPart >> 10) & 3) != 0 )
                    {
                      do
                      {
                        v47 <<= 9;
                        LODWORD(v48) = v48 - 1;
                      }
                      while ( (_DWORD)v48 );
                    }
                    v44 += v47;
                    v6.QuadPart += 8LL;
                    --v46;
                  }
                  while ( v46 );
                  if ( v44 >= 0x200 )
LABEL_90:
                    MiFlushZeroPageHeatBatch(v42);
                }
              }
              ++v23;
              --v41;
            }
            while ( v41 );
          }
          v63[2] = 0;
        }
      }
      while ( *(_DWORD *)(a1 + 320) );
      v3 = v50;
      v24 = 1LL;
      v4 = v55;
      if ( v50 != 3 )
      {
        v38 = v50;
        if ( !v50 )
          v38 = 1LL;
        v24 = MiPageSizes[v38];
      }
      _InterlockedAdd64((volatile signed __int64 *)(v55 + 184), v24);
      v25 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 388), v24);
      v2 = v51;
      if ( (unsigned __int64)(v24 + v25) >= 0x1000 )
      {
        _InterlockedOr(v49, 0);
        v60.QuadPart = 0LL;
        v26 = KeQueryPerformanceCounter(&v60);
        if ( v60.QuadPart != 10000000 )
          v26.QuadPart = 10000000 * v26.QuadPart / v60.QuadPart;
        v27 = v7;
        if ( v26.QuadPart >= (unsigned __int64)v7.QuadPart )
          v27 = v26;
        MiReassessZeroThreads(a1, v27.QuadPart - v7.QuadPart);
        _InterlockedExchange((volatile __int32 *)(a1 + 388), 0);
        v61.QuadPart = 0LL;
        v7 = KeQueryPerformanceCounter(&v61);
        if ( v61.QuadPart != 10000000 )
          v7.QuadPart = 10000000 * v7.QuadPart / v61.QuadPart;
        goto LABEL_6;
      }
    }
    else
    {
LABEL_57:
      if ( (unsigned int)v14 >= 3 )
        goto LABEL_56;
      v2 = v51;
      v3 = v14 + 1;
    }
  }
  ++dword_140EF4E70;
  v40 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v4 + 208) + 15280LL));
  MiZeroThreadContextSetExiting(a1);
  MiReleaseSpinLockExclusive((_DWORD *)(*(_QWORD *)(v4 + 208) + 15280LL), v40);
LABEL_56:
  MiZeroThreadContextPrepareToWait(a1);
  v32 = CurrentThread;
  v33 = v54;
  *(_QWORD *)(a1 + 672) = 0LL;
  *((_DWORD *)&v32[1].SwapListEntry + 3) &= ~0x400u;
  return MiSetZeroPageThreadPriority(a1, v33, 0);
}
