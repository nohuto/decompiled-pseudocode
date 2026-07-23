/*
 * XREFs of KiReduceByEffectiveIdleSmtSet @ 0x140369BE0
 * Callers:
 *     KiSelectIdleProcessor @ 0x1403690F0 (KiSelectIdleProcessor.c)
 *     KiChooseTargetProcessor @ 0x1404DE410 (KiChooseTargetProcessor.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HalRequestSoftwareInterrupt @ 0x140369040 (HalRequestSoftwareInterrupt.c)
 *     KiQueryEffectivePriorityThread @ 0x14036A4C0 (KiQueryEffectivePriorityThread.c)
 *     KiEndCounterAccumulation @ 0x14036AA0C (KiEndCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x14036CDAC (KiUpdateThreadHgsFeedback.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

char __fastcall KiReduceByEffectiveIdleSmtSet(__int64 a1, __int64 a2)
{
  unsigned __int128 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rsi
  LARGE_INTEGER v8; // rbp
  __int64 v9; // r12
  unsigned __int64 v10; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  char v12; // cl
  LARGE_INTEGER v13; // rdx
  LARGE_INTEGER v14; // r8
  unsigned __int128 v15; // rax
  unsigned __int64 v16; // r10
  int v17; // r13d
  unsigned __int64 v18; // rcx
  char v19; // bp
  unsigned int v20; // r12d
  unsigned int v21; // ecx
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // r9d
  unsigned __int16 *v28; // rcx
  char v29; // r11
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  int v32; // ecx
  LARGE_INTEGER v33; // rbp
  __int64 v34; // r13
  unsigned __int64 v35; // r14
  __int64 v36; // r11
  LARGE_INTEGER v37; // rax
  char v38; // cl
  LARGE_INTEGER v39; // rdx
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned int v43; // ecx
  unsigned __int16 *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r8
  unsigned int *v48; // r9
  __int64 v49; // r11
  _QWORD *v50; // r10
  __int64 v51; // rsi
  bool v52; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned int v55; // ecx
  unsigned int v56; // eax
  __int64 v58; // rcx
  _QWORD *v59; // rax
  LARGE_INTEGER v60; // r8
  unsigned __int128 v61; // rax
  int v62; // edx
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rax
  signed __int32 v66; // eax
  signed __int32 v67; // ett
  int v68; // ecx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // [rsp+A8h] [rbp+10h]
  __int64 v72; // [rsp+B0h] [rbp+18h]

  *((_QWORD *)&v2 + 1) = a2;
  v71 = *((_QWORD *)&v2 + 1);
  v4 = **((_QWORD **)&v2 + 1) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 16LL);
  v5 = *(_QWORD *)(a1 + 36448) & ~*(_QWORD *)(a1 + 200);
  if ( (**((_QWORD **)&v2 + 1) & v5) == 0
    || (v4 & v5) != v5
    || (*(_BYTE *)(a1 + 14524) & 1) != 0
    || *(_DWORD *)(a1 + 33752) )
  {
    return 0;
  }
  v6 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(a1 + 32) )
  {
    _disable();
    v7 = 0LL;
    *(_BYTE *)(a1 + 32) = 1;
    v8.QuadPart = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    if ( *(_BYTE *)(a1 + 34524) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v12 = *(_BYTE *)(a1 + 172);
      v8 = PerformanceCounter;
      v13 = PerformanceCounter;
      if ( v12 )
        v13.QuadPart = PerformanceCounter.QuadPart << v12;
      v2 = (unsigned __int64)v13.QuadPart * (unsigned __int128)*(unsigned __int64 *)(a1 + 176);
      v10 = *((_QWORD *)&v2 + 1) - *(_QWORD *)(a1 + 34432);
      v9 = *((_QWORD *)&v2 + 1);
      if ( KiTickAccumulationFromAccountingPeriods )
      {
        *((_QWORD *)&v2 + 1) = *(_QWORD *)(a1 + 34552);
        if ( MEMORY[0xFFFFF78000000300] )
        {
          v14 = v8;
          if ( MEMORY[0xFFFFF78000000369] )
          {
            v15 = (unsigned __int64)(*((_QWORD *)&v2 + 1) << MEMORY[0xFFFFF78000000369])
                * (unsigned __int128)MEMORY[0xFFFFF78000000360];
            v14.QuadPart = v8.QuadPart << MEMORY[0xFFFFF78000000369];
          }
          else
          {
            v15 = *((unsigned __int64 *)&v2 + 1) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          }
          v16 = (*((unsigned __int64 *)&v15 + 1) * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64;
          v2 = (((unsigned __int64)v14.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
             * (unsigned __int64)KiMaximumIncrementReciprocal;
          v17 = (*((_QWORD *)&v2 + 1) >> KiMaximumIncrementShiftCount) - (v16 >> KiMaximumIncrementShiftCount);
          if ( v17 )
          {
            if ( (*(_DWORD *)(v6 + 116) & 0x400) != 0
              || (*((_QWORD *)&v2 + 1) = __popcnt(*(unsigned int *)(v6 + 1100)),
                  (((unsigned __int64)v8.QuadPart >> 4) & 0x1F) >= DWORD2(v2)) )
            {
              *(_DWORD *)(a1 + 34372) += v17;
              *(_DWORD *)(v6 + 652) += v17;
            }
            else
            {
              *(_DWORD *)(a1 + 34376) += v17;
              *(_DWORD *)(v6 + 732) += v17;
            }
            if ( v6 != *(_QWORD *)(a1 + 24) && (int)KiQueryEffectivePriorityThread(v6, a1) < 8 )
              *(_DWORD *)(a1 + 34412) += v17;
          }
        }
      }
    }
    *(LARGE_INTEGER *)(a1 + 34552) = v8;
    *(_QWORD *)(a1 + 34432) = v9;
    *(_QWORD *)(v6 + 72) += v10;
    if ( v6 != *(_QWORD *)(a1 + 24) )
    {
      v18 = ((v10 * *(unsigned int *)(a1 + 34488)) >> 16) + *(unsigned int *)(v6 + 80);
      if ( v18 > 0xFFFFFFFF )
        LODWORD(v18) = -1;
      *(_DWORD *)(v6 + 80) = v18;
    }
    v19 = *(_BYTE *)(v6 + 2);
    v20 = 100;
    if ( (v19 & 0xBE) != 0 )
    {
      if ( v19 < 0 )
      {
        LODWORD(v2) = (*(_DWORD *)(*(_QWORD *)(v6 + 544) + 400LL) >> 13) & 0x3FFFF;
        _BitScanReverse(&v21, v2);
        v22 = (*(_DWORD *)(*(_QWORD *)(v6 + 544) + 400LL) >> 4) & 0x1FF;
        *((_QWORD *)&v2 + 1) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 35760) + 8LL * (v21 - 2))
                                         + 8LL * ((unsigned int)v2 ^ (1 << v21))
                                         + 8);
        *(_QWORD *)(*((_QWORD *)&v2 + 1) + 8 * v22) += v10;
        v19 &= ~0x80u;
      }
      if ( (v19 & 0x10) != 0 )
      {
        *((_QWORD *)&v2 + 1) = a1 + 8LL * *(unsigned __int8 *)(v6 + 124);
        *(_QWORD *)(*((_QWORD *)&v2 + 1) + 34440LL) += v10;
        v19 &= ~0x10u;
      }
      if ( (v19 & 0x20) != 0 )
      {
        v23 = *(_QWORD *)(v6 + 1672);
        if ( v23 )
        {
          v24 = *(_QWORD *)(a1 + 35248);
          v25 = *(_QWORD *)(a1 + 35256);
          if ( v24 && v25 )
          {
            if ( *(_BYTE *)(v25 + 112) )
            {
              v26 = *(_DWORD *)(v25 + 132);
            }
            else
            {
              v26 = *(_DWORD *)(v25 + 80);
              if ( v26 >= *(_DWORD *)(v24 + 528) )
                v26 = *(_DWORD *)(v24 + 528);
            }
          }
          else
          {
            v26 = 100;
          }
          v27 = 0;
          v28 = (unsigned __int16 *)(a1 + 35434);
          do
          {
            if ( v26 <= *v28 )
              break;
            ++v27;
            ++v28;
          }
          while ( v27 < 3 );
          v29 = *(_BYTE *)(a1 + 35336);
          *((_QWORD *)&v2 + 1) = 2LL * v27;
          *(_QWORD *)&v2 = v23 + (v29 != 0 ? 8 : 0);
          *(_QWORD *)(v2 + 16LL * v27) += v10;
          v30 = *(_DWORD *)(v23 + 192);
          if ( KiTimelineBitmapTime > v30 )
          {
            LODWORD(v72) = KiTimelineBitmapTime;
            *((_QWORD *)&v2 + 1) = KiTimelineBitmapTime - v30;
            if ( DWORD2(v2) >= 0x20 )
              HIDWORD(v72) = 1;
            else
              HIDWORD(v72) = (*(_DWORD *)(v23 + 196) << (KiTimelineBitmapTime - v30)) | 1;
            *(_QWORD *)(v23 + 192) = v72;
          }
          else
          {
            v31 = v30 - KiTimelineBitmapTime;
            if ( v31 < 0x20 )
              *(_DWORD *)(v23 + 196) |= 1 << v31;
          }
          if ( !KiEfficiencyClassSystem )
          {
            v32 = *(unsigned __int8 *)(v6 + 516);
            if ( ((v32 - 2) & 0xFFFFFFFB) == 0 || (_BYTE)v32 == 5 )
            {
              *((_QWORD *)&v2 + 1) = 2LL * v27;
              *(_QWORD *)(v23 + 16LL * v27 + 8) += v10;
            }
          }
          if ( *(_QWORD *)(v6 + 1616) )
          {
            v63 = v29 != 0 ? 8 : 0;
            *(_QWORD *)(v63 + v23 + 16 * (v27 + 8LL)) += v10;
            v64 = 64LL;
            if ( v29 )
              v64 = 72LL;
            *((_QWORD *)&v2 + 1) = 2LL * v27;
            _InterlockedAdd64(
              (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v6 + 1616) + 1672LL) + v64 + 16LL * v27),
              v10);
          }
        }
        v19 &= ~0x20u;
      }
      if ( (v19 & 0x40) != 0 )
      {
        v65 = *(_QWORD *)(v6 + 968);
        if ( v65 )
          *(_BYTE *)(v65 + 64) = 0;
      }
      if ( KiHgsPlusEnabled )
        KiUpdateThreadHgsFeedback(a1, v6, v10, 0LL);
      if ( *(_QWORD *)(a1 + 34480)
        && *(_UNKNOWN **)(v6 + 544) != &KiInitialProcess
        && *(unsigned __int8 *)(v6 + 516) < 7u )
      {
        LODWORD(v2) = *(_DWORD *)(v6 + 84);
        v68 = 0;
        *((_QWORD *)&v2 + 1) = *(unsigned int *)(v6 + 80);
        if ( DWORD2(v2) <= (unsigned int)v2 )
          *((_QWORD *)&v2 + 1) = (unsigned int)v2;
        LOBYTE(v68) = DWORD2(v2) >= KiDynamicHeteroCpuPolicyExpectedCycles;
        v69 = *(unsigned __int8 *)(v6 + 517)
            + KiHgsPlusConfiguration * (v68 + 2 * (unsigned int)*(unsigned __int8 *)(v6 + 516));
        *(_QWORD *)(*(_QWORD *)(a1 + 34480) + 8 * v69) += v10;
      }
      if ( (v19 & 0xBE) != 0 )
      {
        v58 = *(_QWORD *)(v6 + 104);
        if ( v58 )
        {
          v59 = (_QWORD *)(v58 + *(unsigned int *)(a1 + 216));
          do
          {
            *v59 += v10;
            v59 = (_QWORD *)v59[52];
          }
          while ( v59 );
        }
        if ( (*(_BYTE *)(v6 + 2) & 8) != 0 && *(_UNKNOWN **)(v6 + 544) != &KiInitialProcess )
        {
          v70 = *(_QWORD *)(a1 + 192);
          *((_QWORD *)&v2 + 1) = *(_QWORD *)(*(_QWORD *)(v6 + 576) + 8LL * *(unsigned __int16 *)(v70 + 136) + 8);
          if ( (*((_QWORD *)&v2 + 1) & *(_QWORD *)(v70 + 128)) != *(_QWORD *)(v70 + 128) )
            *(_QWORD *)(a1 + 34472) += v10;
        }
        if ( *(_QWORD *)(v6 + 360) )
          KiEndCounterAccumulation(v6, *((_QWORD *)&v2 + 1));
      }
    }
    v33.QuadPart = 0LL;
    v34 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    if ( *(_BYTE *)(a1 + 34524) )
    {
      v37 = KeQueryPerformanceCounter(0LL);
      v38 = *(_BYTE *)(a1 + 172);
      v33 = v37;
      v39 = v37;
      if ( v38 )
        v39.QuadPart = v37.QuadPart << v38;
      v34 = ((unsigned __int64)v39.QuadPart * (unsigned __int128)*(unsigned __int64 *)(a1 + 176)) >> 64;
      v40 = *(_QWORD *)(a1 + 34552);
      v36 = v34 - *(_QWORD *)(a1 + 34432);
      v35 = v37.QuadPart - v40;
      if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
      {
        v60 = v37;
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v61 = (v40 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v60.QuadPart = v33.QuadPart << MEMORY[0xFFFFF78000000369];
        }
        else
        {
          v61 = v40 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        }
        v62 = ((unsigned __int64)(((((unsigned __int64)v60.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                                 * (unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
            - ((unsigned __int64)((*((unsigned __int64 *)&v61 + 1)
                                 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
        if ( v62 )
        {
          *(_DWORD *)(a1 + 34372) += v62;
          *(_DWORD *)(a1 + 34384) += v62;
        }
      }
    }
    *(_QWORD *)(a1 + 34560) += v35;
    *(_QWORD *)(a1 + 34680) += v36;
    if ( (*(_BYTE *)(v6 + 2) & 0x20) != 0 )
    {
      v41 = *(_QWORD *)(a1 + 35248);
      v42 = *(_QWORD *)(a1 + 35256);
      if ( v41 && v42 )
      {
        if ( *(_BYTE *)(v42 + 112) )
        {
          v20 = *(_DWORD *)(v42 + 132);
        }
        else
        {
          v20 = *(_DWORD *)(v42 + 80);
          if ( v20 >= *(_DWORD *)(v41 + 528) )
            v20 = *(_DWORD *)(v41 + 528);
        }
      }
      v43 = 0;
      v44 = (unsigned __int16 *)(a1 + 35434);
      do
      {
        if ( v20 <= *v44 )
          break;
        ++v43;
        ++v44;
      }
      while ( v43 < 3 );
      LOBYTE(v7) = *(_BYTE *)(a1 + 35336) != 0;
      *(_QWORD *)(a1 + 8 * (v7 + 4336 + 2LL * v43)) += v36;
    }
    if ( (*(_BYTE *)(v6 + 2) & 0x40) != 0 )
    {
      v45 = *(_QWORD *)(v6 + 968);
      if ( v45 )
        *(_BYTE *)(v45 + 64) = 1;
    }
    *(LARGE_INTEGER *)(a1 + 34552) = v33;
    *(_QWORD *)(a1 + 34432) = v34;
    if ( (*(_BYTE *)(v6 + 2) & 2) != 0 )
    {
      v46 = *(_QWORD *)(v6 + 360);
      v47 = *(_QWORD *)(v46 + 32);
      if ( v47 )
      {
        if ( KiHwCountersCount )
        {
          v48 = (unsigned int *)&KiHwCounters;
          v49 = (unsigned int)KiHwCountersCount;
          v50 = (_QWORD *)(v46 + 48);
          v51 = 1LL;
          do
          {
            if ( (v47 & v51) != 0 )
              *v50 = __readpmc(*v48);
            v51 *= 2LL;
            v50 += 3;
            ++v48;
            --v49;
          }
          while ( v49 );
        }
      }
    }
    v52 = *(_BYTE *)(a1 + 6) == 0;
    *(_BYTE *)(a1 + 32) = 0;
    if ( !v52 )
    {
      *(_BYTE *)(a1 + 6) = 0;
      HalRequestSoftwareInterrupt(2);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v66 = *SchedulerAssist;
      do
      {
        v67 = v66;
        v66 = _InterlockedCompareExchange(SchedulerAssist, v66 & 0xFFDFFFFF, v66);
      }
      while ( v67 != v66 );
      if ( (v66 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    *((_QWORD *)&v2 + 1) = v71;
  }
  v55 = *(_DWORD *)(v6 + 80);
  v56 = *(_DWORD *)(v6 + 84);
  if ( v55 < v56 && v56 - v55 >= KiShortExecutionCycles )
    return 0;
  **((_QWORD **)&v2 + 1) &= v5;
  return 1;
}
