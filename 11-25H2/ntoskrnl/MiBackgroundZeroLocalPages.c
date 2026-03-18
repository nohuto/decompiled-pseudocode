/*
 * XREFs of MiBackgroundZeroLocalPages @ 0x14020F1F0
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x1404407D0 (MiBackgroundZeroNodePages.c)
 * Callees:
 *     MiUnlinkZeroThreadFromActiveDomain @ 0x14020E3A4 (MiUnlinkZeroThreadFromActiveDomain.c)
 *     MiAssignBackgroundZeroThreadToProcessor @ 0x14020E568 (MiAssignBackgroundZeroThreadToProcessor.c)
 *     MiFindBestZeroingProcessor @ 0x14020E844 (MiFindBestZeroingProcessor.c)
 *     MiSetZeroPageThreadPriority @ 0x14020EE0C (MiSetZeroPageThreadPriority.c)
 *     MiZeroThreadContextPrepareToWait @ 0x14020EEC4 (MiZeroThreadContextPrepareToWait.c)
 *     MiLockMultipleZeroChunks @ 0x14020F970 (MiLockMultipleZeroChunks.c)
 *     MiUnlockMultipleZeroChunks @ 0x14020FC10 (MiUnlockMultipleZeroChunks.c)
 *     MiMoveZeroedPages @ 0x14020FE3C (MiMoveZeroedPages.c)
 *     MiExamineZeroChunks @ 0x14020FF30 (MiExamineZeroChunks.c)
 *     MiGetSinglePageToZero @ 0x140210180 (MiGetSinglePageToZero.c)
 *     MiPreparePageAccessor @ 0x140210400 (MiPreparePageAccessor.c)
 *     MiMapBackgroundPagesToZero @ 0x140210430 (MiMapBackgroundPagesToZero.c)
 *     MiTryZeroMemory @ 0x140210860 (MiTryZeroMemory.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiGetBackgroundHugePageToZero @ 0x14041C6E0 (MiGetBackgroundHugePageToZero.c)
 *     MiGetZeroingContext @ 0x140433E30 (MiGetZeroingContext.c)
 *     MiReassessZeroThreads @ 0x140436884 (MiReassessZeroThreads.c)
 *     MiInitializePageHeatList @ 0x140440440 (MiInitializePageHeatList.c)
 *     MiAddPageToHeatRanges @ 0x1404404A4 (MiAddPageToHeatRanges.c)
 *     MiZeroThreadContextSetExiting @ 0x140440974 (MiZeroThreadContextSetExiting.c)
 *     MiDecrementZeroEngineThread @ 0x1404409B8 (MiDecrementZeroEngineThread.c)
 *     MiFlushZeroPageHeatBatch @ 0x14046B9E4 (MiFlushZeroPageHeatBatch.c)
 *     MiZeroPageMakeHot @ 0x140684F98 (MiZeroPageMakeHot.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiBackgroundZeroLocalPages(__int64 a1)
{
  int v2; // edi
  unsigned int v3; // r14d
  __int64 v4; // r13
  __int64 v5; // rcx
  LARGE_INTEGER v6; // rdx
  LARGE_INTEGER v7; // r15
  __int64 v8; // r15
  int v9; // r13d
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r14
  int v15; // edi
  int BackgroundHugePageToZero; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  LARGE_INTEGER *v21; // rdi
  __int64 v22; // rcx
  signed __int32 v23; // eax
  LARGE_INTEGER v24; // rax
  LARGE_INTEGER v25; // rdx
  KIRQL v26; // di
  struct _KTHREAD *v27; // rcx
  __int64 v28; // rdx
  KIRQL v30; // al
  int v31; // edi
  KIRQL v32; // di
  int v33; // ecx
  __int64 v34; // rax
  LARGE_INTEGER v35; // rax
  LARGE_INTEGER v36; // rax
  KIRQL v37; // di
  __int64 v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rax
  unsigned __int64 v41; // r9
  unsigned int v42; // ecx
  _QWORD *v43; // r8
  __int64 v44; // r10
  __int64 v45; // rax
  bool v46; // zf
  signed __int32 v47[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v48; // [rsp+40h] [rbp-C0h]
  int v49; // [rsp+44h] [rbp-BCh]
  LARGE_INTEGER v50; // [rsp+48h] [rbp-B8h]
  unsigned int v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER v54; // [rsp+68h] [rbp-98h] BYREF
  __int64 v55; // [rsp+70h] [rbp-90h]
  LARGE_INTEGER v56; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER v57; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER v58; // [rsp+88h] [rbp-78h] BYREF
  char v59; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v60[15]; // [rsp+91h] [rbp-6Fh]
  int v61; // [rsp+A0h] [rbp-60h]
  int v62; // [rsp+A4h] [rbp-5Ch]
  struct _KTHREAD *v63; // [rsp+A8h] [rbp-58h]
  __int64 v64; // [rsp+B0h] [rbp-50h]
  __int64 v65; // [rsp+B8h] [rbp-48h]
  __int128 v66; // [rsp+C0h] [rbp-40h]
  __int64 ZeroingContext; // [rsp+D0h] [rbp-30h]
  PVOID Object[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp-10h]
  _OWORD v70[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v71; // [rsp+118h] [rbp+18h]
  __int64 v72; // [rsp+128h] [rbp+28h]
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v74[144]; // [rsp+190h] [rbp+90h] BYREF

  memset_0(v74, 0, sizeof(v74));
  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v49 = 0;
  v3 = 0;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x400u;
  v4 = *(_QWORD *)(a1 + 336);
  v52 = v4;
  v5 = *(_QWORD *)(v4 + 208);
  v55 = *(_QWORD *)(*(_QWORD *)(v4 + 176) + 48LL);
  if ( (HvlEnlightenments & 0x8400000) != 0 && (!v5 || (*(_DWORD *)(v5 + 15184) & 2) == 0) )
  {
    MiInitializePageHeatList(v74, 0LL, 1LL, 16LL);
    *(_QWORD *)(a1 + 672) = v74;
  }
  v51 = MiSetZeroPageThreadPriority(a1, 0LL, 0);
  _InterlockedExchange((volatile __int32 *)(a1 + 388), 0);
  PerformanceFrequency.QuadPart = 0LL;
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( PerformanceFrequency.QuadPart != 10000000 )
  {
    v6.QuadPart = 10000000 * v7.QuadPart % PerformanceFrequency.QuadPart;
    v7.QuadPart = 10000000 * v7.QuadPart / PerformanceFrequency.QuadPart;
  }
LABEL_6:
  _InterlockedOr(v47, 0);
  while ( 1 )
  {
    v48 = v3;
    v50 = v7;
    if ( v2 )
      break;
    v8 = *(_QWORD *)(a1 + 336);
    v9 = 0;
    v10 = v8 + 208;
    v11 = *(_QWORD *)(*(_QWORD *)(v8 + 176) + 48LL);
    Object[0] = (PVOID)(v11 + 88);
    Object[1] = (PVOID)(a1 + 392);
    while ( (*(_DWORD *)(a1 + 384) & 2) != 0 )
    {
      v10 = v8 + 208;
      v30 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v8 + 208) + 15280LL));
      v31 = *(_DWORD *)(a1 + 384);
      MiReleaseSpinLockExclusive(*(_QWORD *)(v8 + 208) + 15280LL, v30);
      if ( (v31 & 2) == 0 )
        break;
      MiZeroThreadContextPrepareToWait(a1);
      v9 = 1;
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray) )
        goto LABEL_43;
    }
    if ( *((_DWORD *)Object[0] + 1) )
    {
LABEL_43:
      v26 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)v10 + 15280LL));
      MiZeroThreadContextSetExiting(a1);
      MiReleaseSpinLockExclusive(*(_QWORD *)v10 + 15280LL, v26);
      ++dword_140EF496C;
      goto LABEL_44;
    }
    while ( *(_DWORD *)(v11 + 16944) || dword_140E372D0 )
    {
      MiZeroThreadContextPrepareToWait(a1);
      v10 = v8 + 208;
      if ( !KeWaitForSingleObject(Object[0], WrFreePage, 0, 0, (PLARGE_INTEGER)&MiFiveSeconds) )
        goto LABEL_43;
    }
    v12 = *(_QWORD *)(a1 + 352);
    memset(v70, 0, sizeof(v70));
    v72 = 0LL;
    v71 = 0LL;
    if ( v12 == *(_QWORD *)(a1 + 368)
      && (v13 = *(unsigned __int16 *)(a1 + 360), (_WORD)v13 == *(_WORD *)(a1 + 376))
      && v12
      && (v12 & qword_140E2EA10[v13]) == 0 )
    {
      ++dword_140EF49C0;
    }
    else
    {
      ++dword_140EF49C4;
      v32 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v8 + 208) + 15280LL));
      if ( *(_QWORD *)(a1 + 352) )
        MiUnlinkZeroThreadFromActiveDomain(a1);
      MiFindBestZeroingProcessor((__int64)v70, (int *)v8, 0LL, 1);
      v33 = DWORD2(v71);
      ++dword_140EF49A8[SDWORD2(v71)];
      if ( v33 == 5 )
      {
        MiDecrementZeroEngineThread(a1);
      }
      else
      {
        ++*(_DWORD *)(v8 + 276);
        MiAssignBackgroundZeroThreadToProcessor(a1, v8, (__int64)v70);
      }
      MiReleaseSpinLockExclusive(*(_QWORD *)(v8 + 208) + 15280LL, v32);
    }
    if ( v9 )
    {
      v48 = 0;
      _InterlockedExchange((volatile __int32 *)(a1 + 388), 0);
      v54.QuadPart = 0LL;
      LODWORD(v14) = 0;
      v35 = KeQueryPerformanceCounter(&v54);
      v50 = v35;
      if ( v54.QuadPart != 10000000 )
        v50.QuadPart = 10000000 * v35.QuadPart / v54.QuadPart;
      _InterlockedOr(v47, 0);
      v4 = v52;
      ++*(_DWORD *)(v52 + 284);
    }
    else
    {
      v4 = v52;
      v14 = v48;
      ++*(_DWORD *)(v52 + 284);
      if ( (_DWORD)v14 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD))MiPreparePageAccessor)(a1, (LARGE_INTEGER)v6.QuadPart);
        v7 = v50;
        v15 = 0;
        v48 = v14;
        while ( !v15 )
        {
          if ( !MiGetSinglePageToZero(
                  a1,
                  *(_QWORD *)(*(_QWORD *)(a1 + 336) + 208LL),
                  a1 + 4 * (v14 + 148),
                  (unsigned int)v14) )
            goto LABEL_47;
          v15 = 1;
        }
        BackgroundHugePageToZero = MiMapBackgroundPagesToZero(a1, (unsigned int)v14);
        goto LABEL_25;
      }
    }
    BackgroundHugePageToZero = MiGetBackgroundHugePageToZero(v55, a1);
    v7 = v50;
LABEL_25:
    if ( BackgroundHugePageToZero )
    {
      v17 = *(_QWORD *)(a1 + 336);
      *(_DWORD *)&v60[8] = 0;
      v60[14] = 0;
      v56.QuadPart = 0LL;
      v18 = *(_QWORD *)(v17 + 176);
      *(_QWORD *)v60 = 0LL;
      v62 = 0;
      v66 = 0LL;
      v61 = *(_DWORD *)(v18 + 56);
      v19 = *(unsigned int *)(a1 + 320);
      v63 = KeGetCurrentThread();
      v64 = v55;
      v59 = 17;
      v65 = a1;
      ZeroingContext = a1;
      *(_DWORD *)&v60[11] = v19;
      if ( (unsigned int)v19 < 3 )
      {
        if ( (_DWORD)v19 )
        {
          if ( (HvlEnlightenments & 0x200000) != 0 )
            MiZeroPageMakeHot(a1);
        }
        else
        {
          ZeroingContext = MiGetZeroingContext(a1);
          *((_QWORD *)&v66 + 1) = *(_QWORD *)(a1 + 584);
          v60[1] = 1;
        }
      }
      ++dword_140EF49D4[v19];
      v49 = MiTryZeroMemory(a1);
      do
      {
        MiLockMultipleZeroChunks(&v59);
        if ( !*(_DWORD *)&v60[7] )
          break;
        MiExamineZeroChunks(&v59);
        MiMoveZeroedPages(&v59);
        v20 = *(unsigned int *)(ZeroingContext + 280);
        v21 = (LARGE_INTEGER *)(ZeroingContext + 24);
        if ( !*(_DWORD *)(a1 + 320) )
        {
          v36 = *v21;
          v21 = &v56;
          v56 = v36;
        }
        MiUnlockMultipleZeroChunks(&v59);
        if ( v60[2] )
        {
          if ( (_DWORD)v20 )
          {
            v38 = v20;
            do
            {
              v6 = *v21;
              if ( (v21->QuadPart & 0x80u) != 0LL )
              {
                v39 = v65;
                if ( (unsigned int)MiAddPageToHeatRanges(
                                     *(_QWORD *)(v65 + 672),
                                     ((unsigned __int64)v6.QuadPart >> 12) & 0x3FFFFFFFFFLL,
                                     *(unsigned int *)&v60[11]) )
                  goto LABEL_81;
                v40 = *(_QWORD *)(v39 + 672);
                v41 = 0LL;
                v42 = *(_DWORD *)(v40 + 4);
                if ( v42 )
                {
                  v43 = (_QWORD *)(v40 + 16);
                  v44 = v42;
                  do
                  {
                    v45 = (*v43 & 0x3FFLL) + 1;
                    v6.QuadPart = (*v43 >> 10) & 3LL;
                    if ( ((*v43 >> 10) & 3) != 0 )
                    {
                      do
                      {
                        v45 <<= 9;
                        v46 = v6.LowPart == 1;
                        v6.QuadPart = v6.LowPart - 1;
                      }
                      while ( !v46 );
                    }
                    v41 += v45;
                    ++v43;
                    --v44;
                  }
                  while ( v44 );
                  if ( v41 >= 0x200 )
LABEL_81:
                    MiFlushZeroPageHeatBatch(v39);
                }
              }
              ++v21;
              --v38;
            }
            while ( v38 );
          }
          v60[2] = 0;
        }
      }
      while ( *(_DWORD *)(a1 + 320) );
      v3 = v48;
      v22 = 1LL;
      v4 = v52;
      if ( v48 != 3 )
      {
        v34 = v48;
        if ( !v48 )
          v34 = 1LL;
        v22 = MiPageSizes[v34];
      }
      _InterlockedAdd64((volatile signed __int64 *)(v52 + 184), v22);
      v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 388), v22);
      v2 = v49;
      if ( (unsigned __int64)(v22 + v23) >= 0x1000 )
      {
        _InterlockedOr(v47, 0);
        v57.QuadPart = 0LL;
        v24 = KeQueryPerformanceCounter(&v57);
        if ( v57.QuadPart != 10000000 )
          v24.QuadPart = 10000000 * v24.QuadPart / v57.QuadPart;
        v25 = v7;
        if ( v24.QuadPart >= (unsigned __int64)v7.QuadPart )
          v25 = v24;
        MiReassessZeroThreads(a1, v25.QuadPart - v7.QuadPart);
        _InterlockedExchange((volatile __int32 *)(a1 + 388), 0);
        v58.QuadPart = 0LL;
        v7 = KeQueryPerformanceCounter(&v58);
        if ( v58.QuadPart != 10000000 )
        {
          v6.QuadPart = 10000000 * v7.QuadPart % v58.QuadPart;
          v7.QuadPart = 10000000 * v7.QuadPart / v58.QuadPart;
        }
        goto LABEL_6;
      }
    }
    else
    {
LABEL_47:
      if ( (unsigned int)v14 >= 3 )
        goto LABEL_44;
      v2 = v49;
      v3 = v14 + 1;
    }
  }
  ++dword_140EF4970;
  v37 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v4 + 208) + 15280LL));
  MiZeroThreadContextSetExiting(a1);
  MiReleaseSpinLockExclusive(*(_QWORD *)(v4 + 208) + 15280LL, v37);
LABEL_44:
  MiZeroThreadContextPrepareToWait(a1);
  v27 = CurrentThread;
  v28 = v51;
  *(_QWORD *)(a1 + 672) = 0LL;
  *((_DWORD *)&v27[1].SwapListEntry + 3) &= ~0x400u;
  return MiSetZeroPageThreadPriority(a1, v28, 0);
}
