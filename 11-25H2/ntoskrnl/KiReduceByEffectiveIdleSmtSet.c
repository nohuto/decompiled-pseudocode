/*
 * XREFs of KiReduceByEffectiveIdleSmtSet @ 0x140318A40
 * Callers:
 *     KiSelectIdleProcessor @ 0x1403F74D0 (KiSelectIdleProcessor.c)
 *     KiChooseTargetProcessor @ 0x1404E7040 (KiChooseTargetProcessor.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateThreadHgsFeedback @ 0x14028C900 (KiUpdateThreadHgsFeedback.c)
 *     KiEndCounterAccumulation @ 0x14028E688 (KiEndCounterAccumulation.c)
 *     HalRequestSoftwareInterrupt @ 0x14028F270 (HalRequestSoftwareInterrupt.c)
 *     KiQueryEffectivePriorityThread @ 0x1403188E0 (KiQueryEffectivePriorityThread.c)
 *     PoGetFrequencyBucket @ 0x14031A790 (PoGetFrequencyBucket.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 */

char __fastcall KiReduceByEffectiveIdleSmtSet(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rdi
  LARGE_INTEGER v7; // rbp
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  char v11; // cl
  unsigned __int64 v12; // rax
  LARGE_INTEGER v13; // rdx
  unsigned __int64 v14; // rdx
  LARGE_INTEGER v15; // r8
  unsigned __int128 v16; // rax
  int v17; // r13d
  unsigned __int64 v18; // rcx
  char v19; // bp
  __int64 v20; // r13
  unsigned int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // r9
  __int64 v24; // rdx
  LARGE_INTEGER v25; // rbp
  __int64 v26; // r12
  unsigned __int64 v27; // r15
  __int64 v28; // r11
  LARGE_INTEGER v29; // rax
  char v30; // cl
  LARGE_INTEGER v31; // rdx
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r8
  unsigned int v35; // r8d
  unsigned int v36; // ecx
  unsigned __int16 *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // r11
  unsigned int *v41; // r8
  _QWORD *v42; // r9
  __int64 v43; // r10
  bool v44; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned int v47; // ecx
  unsigned int v48; // eax
  unsigned int FrequencyBucket; // eax
  __int64 v51; // r9
  char v52; // r11
  __int64 v53; // r10
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rdx
  unsigned int v57; // eax
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  int v60; // ecx
  LARGE_INTEGER v61; // r8
  unsigned __int128 v62; // rax
  int v63; // edx
  __int64 v64; // rcx
  _QWORD *v65; // rax
  signed __int32 v66; // eax
  signed __int32 v67; // ett
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  int v72; // ecx
  unsigned int v73; // edx
  __int64 v74; // rcx
  _QWORD *v75; // [rsp+A8h] [rbp+10h]
  __int64 v76; // [rsp+B0h] [rbp+18h]

  v75 = a2;
  v3 = *a2 & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 16LL);
  v4 = *(_QWORD *)(a1 + 36448) & ~*(_QWORD *)(a1 + 200);
  if ( (*a2 & v4) == 0 || (v3 & v4) != v4 || (*(_BYTE *)(a1 + 14524) & 1) != 0 || *(_DWORD *)(a1 + 33752) )
    return 0;
  v5 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(a1 + 32) )
  {
    _disable();
    v6 = 0LL;
    *(_BYTE *)(a1 + 32) = 1;
    v7.QuadPart = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    if ( *(_BYTE *)(a1 + 34524) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v11 = *(_BYTE *)(a1 + 172);
      v7 = PerformanceCounter;
      v12 = *(_QWORD *)(a1 + 176);
      v13 = v7;
      if ( v11 )
        v13.QuadPart = v7.QuadPart << v11;
      v9 = (((unsigned __int64)v13.QuadPart * (unsigned __int128)v12) >> 64) - *(_QWORD *)(a1 + 34432);
      v8 = ((unsigned __int64)v13.QuadPart * (unsigned __int128)v12) >> 64;
      if ( KiTickAccumulationFromAccountingPeriods )
      {
        v14 = *(_QWORD *)(a1 + 34552);
        if ( MEMORY[0xFFFFF78000000300] )
        {
          v15 = v7;
          if ( MEMORY[0xFFFFF78000000369] )
          {
            v16 = (v14 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
            v15.QuadPart = v7.QuadPart << MEMORY[0xFFFFF78000000369];
          }
          else
          {
            v16 = v14 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          }
          v17 = ((unsigned __int64)(((((unsigned __int64)v15.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                                   * (unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
              - ((unsigned __int64)((*((unsigned __int64 *)&v16 + 1)
                                   * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
          if ( v17 )
          {
            if ( (*(_DWORD *)(v5 + 116) & 0x400) != 0
              || (((unsigned __int64)v7.QuadPart >> 4) & 0x1F) >= (unsigned int)__popcnt(*(unsigned int *)(v5 + 1100)) )
            {
              *(_DWORD *)(a1 + 34372) += v17;
              *(_DWORD *)(v5 + 652) += v17;
            }
            else
            {
              *(_DWORD *)(a1 + 34376) += v17;
              *(_DWORD *)(v5 + 732) += v17;
            }
            if ( v5 != *(_QWORD *)(a1 + 24) && (int)KiQueryEffectivePriorityThread(v5, (struct _KPRCB *)a1) < 8 )
              *(_DWORD *)(a1 + 34412) += v17;
          }
        }
      }
    }
    *(LARGE_INTEGER *)(a1 + 34552) = v7;
    *(_QWORD *)(a1 + 34432) = v8;
    *(_QWORD *)(v5 + 72) += v9;
    if ( v5 != *(_QWORD *)(a1 + 24) )
    {
      v18 = ((v9 * *(unsigned int *)(a1 + 34488)) >> 16) + *(unsigned int *)(v5 + 80);
      if ( v18 > 0xFFFFFFFF )
        LODWORD(v18) = -1;
      *(_DWORD *)(v5 + 80) = v18;
    }
    v19 = *(_BYTE *)(v5 + 2);
    v20 = 1LL;
    if ( (v19 & 0xBE) != 0 )
    {
      if ( v19 < 0 )
      {
        v21 = (*(_DWORD *)(*(_QWORD *)(v5 + 544) + 400LL) >> 13) & 0x3FFFF;
        _BitScanReverse(&v22, v21);
        v23 = (*(_DWORD *)(*(_QWORD *)(v5 + 544) + 400LL) >> 4) & 0x1FF;
        v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 35760) + 8LL * (v22 - 2)) + 8LL * (v21 ^ (1 << v22)) + 8);
        *(_QWORD *)(v24 + 8 * v23) += v9;
        v19 &= ~0x80u;
      }
      if ( (v19 & 0x10) != 0 )
      {
        v70 = a1 + 8LL * *(unsigned __int8 *)(v5 + 124);
        *(_QWORD *)(v70 + 34440) += v9;
        v19 &= ~0x10u;
      }
      if ( (v19 & 0x20) != 0 )
      {
        if ( *(_QWORD *)(v5 + 1672) )
        {
          FrequencyBucket = PoGetFrequencyBucket(a1);
          v52 = *(_BYTE *)(a1 + 35336);
          v53 = FrequencyBucket;
          v54 = 2LL * FrequencyBucket;
          v55 = v51 + (v52 != 0 ? 8 : 0);
          v56 = *(_QWORD *)(v55 + 16LL * FrequencyBucket);
          v57 = KiTimelineBitmapTime;
          *(_QWORD *)(v55 + 8 * v54) = v9 + v56;
          v58 = *(_DWORD *)(v51 + 192);
          if ( v57 > v58 )
          {
            LODWORD(v76) = v57;
            if ( v57 - v58 >= 0x20 )
              HIDWORD(v76) = 1;
            else
              HIDWORD(v76) = (*(_DWORD *)(v51 + 196) << (v57 - v58)) | 1;
            *(_QWORD *)(v51 + 192) = v76;
          }
          else
          {
            v59 = v58 - v57;
            if ( v59 < 0x20 )
              *(_DWORD *)(v51 + 196) |= 1 << v59;
          }
          if ( !KiEfficiencyClassSystem )
          {
            v60 = *(unsigned __int8 *)(v5 + 516);
            if ( ((v60 - 2) & 0xFFFFFFFB) == 0 || (_BYTE)v60 == 5 )
              *(_QWORD *)(v51 + 16 * v53 + 8) += v9;
          }
          if ( *(_QWORD *)(v5 + 1616) )
          {
            v68 = v52 != 0 ? 8 : 0;
            *(_QWORD *)(v68 + v51 + 16 * (v53 + 8)) += v9;
            v69 = 64LL;
            if ( v52 )
              v69 = 72LL;
            _InterlockedAdd64(
              (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v5 + 1616) + 1672LL) + v69 + 16 * v53),
              v9);
          }
        }
        v19 &= ~0x20u;
      }
      if ( (v19 & 0x40) != 0 )
      {
        v71 = *(_QWORD *)(v5 + 968);
        if ( v71 )
          *(_BYTE *)(v71 + 64) = 0;
      }
      if ( KiHgsPlusEnabled )
        KiUpdateThreadHgsFeedback(a1, v5, v9, 0);
      if ( *(_QWORD *)(a1 + 34480)
        && *(_UNKNOWN **)(v5 + 544) != &KiInitialProcess
        && *(unsigned __int8 *)(v5 + 516) < 7u )
      {
        v72 = 0;
        v73 = *(_DWORD *)(v5 + 80);
        if ( v73 <= *(_DWORD *)(v5 + 84) )
          v73 = *(_DWORD *)(v5 + 84);
        LOBYTE(v72) = v73 >= KiDynamicHeteroCpuPolicyExpectedCycles;
        v74 = *(unsigned __int8 *)(v5 + 517)
            + KiHgsPlusConfiguration * (v72 + 2 * (unsigned int)*(unsigned __int8 *)(v5 + 516));
        *(_QWORD *)(*(_QWORD *)(a1 + 34480) + 8 * v74) += v9;
      }
      if ( (v19 & 0xBE) != 0 )
      {
        v64 = *(_QWORD *)(v5 + 104);
        if ( v64 )
        {
          v65 = (_QWORD *)(v64 + *(unsigned int *)(a1 + 216));
          do
          {
            *v65 += v9;
            v65 = (_QWORD *)v65[52];
          }
          while ( v65 );
        }
        if ( (*(_BYTE *)(v5 + 2) & 8) != 0
          && *(_UNKNOWN **)(v5 + 544) != &KiInitialProcess
          && (*(_QWORD *)(*(_QWORD *)(v5 + 576) + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 136LL) + 8) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL) )
        {
          *(_QWORD *)(a1 + 34472) += v9;
        }
        if ( *(_QWORD *)(v5 + 360) )
          KiEndCounterAccumulation(v5);
      }
    }
    v25.QuadPart = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    if ( *(_BYTE *)(a1 + 34524) )
    {
      v29 = KeQueryPerformanceCounter(0LL);
      v30 = *(_BYTE *)(a1 + 172);
      v25 = v29;
      v31 = v29;
      if ( v30 )
        v31.QuadPart = v29.QuadPart << v30;
      v26 = ((unsigned __int64)v31.QuadPart * (unsigned __int128)*(unsigned __int64 *)(a1 + 176)) >> 64;
      v32 = *(_QWORD *)(a1 + 34552);
      v28 = v26 - *(_QWORD *)(a1 + 34432);
      v27 = v29.QuadPart - v32;
      if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
      {
        v61 = v29;
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v62 = (v32 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v61.QuadPart = v25.QuadPart << MEMORY[0xFFFFF78000000369];
        }
        else
        {
          v62 = v32 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        }
        v63 = ((unsigned __int64)(((((unsigned __int64)v61.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                                 * (unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
            - ((unsigned __int64)((*((unsigned __int64 *)&v62 + 1)
                                 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
        if ( v63 )
        {
          *(_DWORD *)(a1 + 34372) += v63;
          *(_DWORD *)(a1 + 34384) += v63;
        }
      }
    }
    *(_QWORD *)(a1 + 34560) += v27;
    *(_QWORD *)(a1 + 34680) += v28;
    if ( (*(_BYTE *)(v5 + 2) & 0x20) != 0 )
    {
      v33 = *(_QWORD *)(a1 + 35248);
      v34 = *(_QWORD *)(a1 + 35256);
      if ( v33 && v34 )
      {
        if ( *(_BYTE *)(v34 + 112) )
        {
          v35 = *(_DWORD *)(v34 + 132);
        }
        else
        {
          v35 = *(_DWORD *)(v34 + 80);
          if ( v35 >= *(_DWORD *)(v33 + 528) )
            v35 = *(_DWORD *)(v33 + 528);
        }
      }
      else
      {
        v35 = 100;
      }
      v36 = 0;
      v37 = (unsigned __int16 *)(a1 + 35434);
      do
      {
        if ( v35 <= *v37 )
          break;
        ++v36;
        ++v37;
      }
      while ( v36 < 3 );
      LOBYTE(v6) = *(_BYTE *)(a1 + 35336) != 0;
      *(_QWORD *)(a1 + 8 * (v6 + 4336 + 2LL * v36)) += v28;
    }
    if ( (*(_BYTE *)(v5 + 2) & 0x40) != 0 )
    {
      v38 = *(_QWORD *)(v5 + 968);
      if ( v38 )
        *(_BYTE *)(v38 + 64) = 1;
    }
    *(LARGE_INTEGER *)(a1 + 34552) = v25;
    *(_QWORD *)(a1 + 34432) = v26;
    if ( (*(_BYTE *)(v5 + 2) & 2) != 0 )
    {
      v39 = *(_QWORD *)(v5 + 360);
      v40 = *(_QWORD *)(v39 + 32);
      if ( v40 )
      {
        if ( KiHwCountersCount )
        {
          v41 = (unsigned int *)&KiHwCounters;
          v42 = (_QWORD *)(v39 + 48);
          v43 = (unsigned int)KiHwCountersCount;
          do
          {
            if ( (v40 & v20) != 0 )
              *v42 = __readpmc(*v41);
            v20 *= 2LL;
            v42 += 3;
            ++v41;
            --v43;
          }
          while ( v43 );
        }
      }
    }
    v44 = *(_BYTE *)(a1 + 6) == 0;
    *(_BYTE *)(a1 + 32) = 0;
    if ( !v44 )
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
    a2 = v75;
  }
  v47 = *(_DWORD *)(v5 + 80);
  v48 = *(_DWORD *)(v5 + 84);
  if ( v47 < v48 && v48 - v47 >= KiShortExecutionCycles )
    return 0;
  *a2 &= v4;
  return 1;
}
