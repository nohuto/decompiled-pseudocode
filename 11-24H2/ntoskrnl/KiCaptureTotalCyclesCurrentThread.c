/*
 * XREFs of KiCaptureTotalCyclesCurrentThread @ 0x14036C1B0
 * Callers:
 *     KiDispatchInterrupt @ 0x1402A32B0 (KiDispatchInterrupt.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiIdleSchedule @ 0x1402A5920 (KiIdleSchedule.c)
 *     KiCheckForThreadDispatch @ 0x1402C5DAC (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x1402D60C0 (KiSwapThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402DA488 (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x1402E03DC (KiHandleDeferredPreemption.c)
 *     KeYieldExecution @ 0x14031B9F0 (KeYieldExecution.c)
 *     KiExecuteSmtIsolationThread @ 0x1405C01A0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpTimerScaleCounter @ 0x140314930 (HalpTimerScaleCounter.c)
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     KiEndCounterAccumulation @ 0x14036AA0C (KiEndCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x14036CDAC (KiUpdateThreadHgsFeedback.c)
 *     HalpHpetQueryCounter @ 0x1403BC400 (HalpHpetQueryCounter.c)
 *     HvlpGetRegister64 @ 0x1403BC420 (HvlpGetRegister64.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KiCaptureTotalCyclesCurrentThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  int v6; // r15d
  unsigned __int64 v7; // r11
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // r13
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  __int64 v14; // rdx
  char v15; // cl
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int128 v20; // rax
  int v21; // r8d
  unsigned __int64 v22; // rcx
  char v23; // bl
  unsigned int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // edx
  unsigned __int16 *v31; // rcx
  char v32; // r10
  __int64 v33; // rdx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  int v36; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  int v46; // r9d
  __int64 v47; // rdx
  __int64 v48; // rax
  char *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  signed __int32 v53; // eax
  signed __int32 v54; // ett
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned __int64 v58; // rax
  int v59; // r9d
  signed __int64 v60; // rdx
  __int64 v61; // r11
  __int64 v62; // r8
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 (__fastcall *v65)(_QWORD); // rdx
  __int64 v66; // rax
  unsigned __int64 v67; // r11
  signed __int64 v68; // rax
  __int64 v69; // r8
  int v70; // r10d
  __int64 v71; // rdx
  __int64 v72; // r9
  __int64 v73; // rcx
  unsigned __int64 v74; // r9
  signed __int64 v75; // rdx
  __int64 v76; // rdi
  __int64 InternalData; // rax
  __int64 (__fastcall *v78)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v80; // r10
  signed __int64 v81; // rax
  int v82; // r8d
  __int64 v83; // rdx
  __int64 v84; // r9
  __int64 v85; // rcx
  unsigned __int64 v86; // r9
  unsigned int v87; // ecx
  __int64 v88; // rcx
  signed __int32 v89[8]; // [rsp+8h] [rbp-39h] BYREF
  __int64 (__fastcall *v90)(_QWORD); // [rsp+28h] [rbp-19h] BYREF
  __int64 (__fastcall *v91)(_QWORD); // [rsp+30h] [rbp-11h] BYREF
  __int64 v92; // [rsp+38h] [rbp-9h]
  __int64 v93; // [rsp+40h] [rbp-1h]
  __int64 v94; // [rsp+48h] [rbp+7h]
  __int64 v95; // [rsp+50h] [rbp+Fh]

  v5 = a2;
  _disable();
  v6 = 0;
  *(_BYTE *)(a1 + 32) = 1;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( !*(_BYTE *)(a1 + 34524) )
    goto LABEL_17;
  a4 = 10000000LL;
  v10 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v11 = 10000000LL;
    if ( HalpTimerReferencePage )
    {
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v12 = *(_QWORD *)(HalpPerformanceCounter + 72)
            + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v12 = *(_QWORD *)(HalpPerformanceCounter + 72);
      v13 = *(__int64 (__fastcall **)(__int64, __int64))(HalpPerformanceCounter + 112);
      if ( v13 == HalpTscQueryCounterOrdered )
      {
        __asm { rdtscp }
        v14 = (unsigned __int64)v13 | ((_QWORD)HalpTscQueryCounterOrdered << 32);
      }
      else
      {
        v14 = guard_dispatch_icall_no_overrides(v12, HalpTscQueryCounterOrdered);
        a4 = 10000000LL;
      }
      v7 = (((unsigned __int64)v14 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
         + MEMORY[0xFFFFF780000003B8];
      goto LABEL_9;
    }
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
    {
      do
      {
        v92 = *(_QWORD *)(v10 + 208);
        do
        {
          v76 = *(_QWORD *)(v10 + 200);
          InternalData = HalpTimerGetInternalData(v10);
          v78 = *(__int64 (__fastcall **)(_QWORD))(v10 + 112);
          if ( v78 == HalpHpetQueryCounter )
            Counter = HalpHpetQueryCounter(InternalData);
          else
            Counter = guard_dispatch_icall_no_overrides(InternalData, v78);
          v80 = Counter;
          _InterlockedOr(v89, 0);
          v81 = *(_QWORD *)(v10 + 200);
        }
        while ( v76 != v81 );
        v61 = v92;
      }
      while ( v92 != *(_QWORD *)(v10 + 208) );
      v82 = *(_DWORD *)(v10 + 220);
      v5 = a2;
      if ( ((v76 ^ v80) & (1LL << ((unsigned __int8)v82 - 1))) != 0 )
      {
        if ( v82 == 64 )
          v84 = -1LL;
        else
          v84 = (1LL << v82) - 1;
        v85 = 0LL;
        if ( v82 != 64 )
          v85 = 1LL << v82;
        v86 = v76 & v84;
        v60 = v80 | v76 ^ v86;
        if ( v80 < v86 )
          v60 += v85;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 200), v60, v81);
      }
      else
      {
        if ( v82 == 64 )
          v83 = -1LL;
        else
          v83 = (1LL << v82) - 1;
        v60 = v80 | v76 & ~v83;
      }
      goto LABEL_118;
    }
    v55 = HalpTimerGetInternalData(HalpPerformanceCounter);
    v56 = *(_QWORD *)(v10 + 112);
    v57 = v55;
    if ( (__int64 (__fastcall *)(_QWORD))v56 == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v60 = __readmsr(0x40000020u);
LABEL_117:
        v61 = *(_QWORD *)(v10 + 208);
LABEL_118:
        v7 = HalpTimerScaleCounter(v61 + v60, *(_QWORD *)(v10 + 192), 10000000LL);
        a4 = 10000000LL;
        goto LABEL_9;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v90 = 0LL;
        while ( 1 )
        {
          v58 = (unsigned __int64)HvlpReferenceTscPage;
          v59 = *(_DWORD *)HvlpReferenceTscPage;
          if ( !*(_DWORD *)HvlpReferenceTscPage )
            break;
          if ( MEMORY[0xFFFFF78000000294] )
          {
            __asm { rdtscp }
          }
          else
          {
            if ( KeGetCurrentPrcb()->CpuVendor == 2 )
            {
              _mm_lfence();
            }
            else if ( KeGetCurrentPrcb()->CpuVendor == 1 )
            {
              _mm_mfence();
            }
            v58 = __rdtsc();
            LODWORD(v56) = HIDWORD(v58);
            v58 = (unsigned int)v58;
            v56 = (unsigned int)v56;
          }
          v56 = *((_QWORD *)HvlpReferenceTscPage + 2)
              + (((v58 | (v56 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v90 = (__int64 (__fastcall *)(_QWORD))v56;
          if ( *(_DWORD *)HvlpReferenceTscPage == v59 )
            goto LABEL_116;
        }
        HvlpGetRegister64(589828LL, &v90);
LABEL_116:
        v60 = (signed __int64)v90;
        goto LABEL_117;
      }
      v57 = 0LL;
    }
    v60 = guard_dispatch_icall_no_overrides(v57, v56);
    goto LABEL_117;
  }
  v11 = *(_QWORD *)(HalpPerformanceCounter + 192);
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
  {
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v43 = *(_QWORD *)(HalpPerformanceCounter + 72)
          + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
    else
      v43 = *(_QWORD *)(HalpPerformanceCounter + 72);
    v44 = *(_QWORD *)(HalpPerformanceCounter + 112);
    if ( (__int64 (__fastcall *)(_QWORD))v44 == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v47 = __readmsr(0x40000020u);
LABEL_76:
        a4 = 10000000LL;
        v7 = *(_QWORD *)(v10 + 208) + v47;
        goto LABEL_9;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v91 = 0LL;
        while ( 1 )
        {
          v45 = (unsigned __int64)HvlpReferenceTscPage;
          v46 = *(_DWORD *)HvlpReferenceTscPage;
          if ( !*(_DWORD *)HvlpReferenceTscPage )
            break;
          if ( MEMORY[0xFFFFF78000000294] )
          {
            __asm { rdtscp }
          }
          else
          {
            if ( KeGetCurrentPrcb()->CpuVendor == 2 )
            {
              _mm_lfence();
            }
            else if ( KeGetCurrentPrcb()->CpuVendor == 1 )
            {
              _mm_mfence();
            }
            v45 = __rdtsc();
            LODWORD(v44) = HIDWORD(v45);
            v45 = (unsigned int)v45;
            v44 = (unsigned int)v44;
          }
          v44 = *((_QWORD *)HvlpReferenceTscPage + 2)
              + (((v45 | (v44 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v91 = (__int64 (__fastcall *)(_QWORD))v44;
          if ( *(_DWORD *)HvlpReferenceTscPage == v46 )
            goto LABEL_75;
        }
        HvlpGetRegister64(589828LL, &v91);
LABEL_75:
        v47 = (__int64)v91;
        goto LABEL_76;
      }
      v43 = 0LL;
    }
    v47 = guard_dispatch_icall_no_overrides(v43, v44);
    goto LABEL_76;
  }
  do
  {
    v92 = *(_QWORD *)(v10 + 208);
    do
    {
      v63 = *(_QWORD *)(v10 + 200);
      v64 = HalpTimerGetInternalData(v10);
      v65 = *(__int64 (__fastcall **)(_QWORD))(v10 + 112);
      if ( v65 == HalpHpetQueryCounter )
        v66 = HalpHpetQueryCounter(v64);
      else
        v66 = guard_dispatch_icall_no_overrides(v64, v65);
      v67 = v66;
      _InterlockedOr(v89, 0);
      v68 = *(_QWORD *)(v10 + 200);
    }
    while ( v63 != v68 );
    v69 = v92;
  }
  while ( v92 != *(_QWORD *)(v10 + 208) );
  v70 = *(_DWORD *)(v10 + 220);
  if ( ((v63 ^ v67) & (1LL << ((unsigned __int8)v70 - 1))) != 0 )
  {
    if ( v70 == 64 )
      v72 = -1LL;
    else
      v72 = (1LL << v70) - 1;
    v73 = 0LL;
    if ( v70 != 64 )
      v73 = 1LL << v70;
    v74 = v63 & v72;
    v75 = v67 | v63 ^ v74;
    if ( v67 < v74 )
      v75 += v73;
    _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 200), v75, v68);
    v7 = v69 + v75;
    a4 = 10000000LL;
  }
  else
  {
    if ( v70 == 64 )
      v71 = -1LL;
    else
      v71 = (1LL << v70) - 1;
    a4 = 10000000LL;
    v7 = v92 + (v67 | v63 & ~v71);
  }
LABEL_9:
  if ( v10 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v62 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v62 = 10000000LL;
    v7 = HalpTimerScaleCounter(v7, v11, v62);
  }
  v15 = *(_BYTE *)(a1 + 172);
  v16 = v7;
  v17 = *(_QWORD *)(a1 + 176);
  v95 = 0LL;
  if ( v15 )
    v16 = v7 << v15;
  v95 = (v16 * (unsigned __int128)v17) >> 64;
  v9 = v95 - *(_QWORD *)(a1 + 34432);
  v8 = v95;
  if ( KiTickAccumulationFromAccountingPeriods )
  {
    v18 = *(_QWORD *)(a1 + 34552);
    if ( MEMORY[0xFFFFF78000000300] )
    {
      v93 = 0LL;
      v94 = 0LL;
      v19 = v7;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v20 = (v18 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v19 = v7 << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v20 = v18 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      }
      v93 = *((_QWORD *)&v20 + 1);
      a4 = (v19 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v94 = a4;
      v21 = ((unsigned __int64)(((unsigned __int64)a4 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
          - ((unsigned __int64)((*((unsigned __int64 *)&v20 + 1)
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
      if ( v21 )
      {
        if ( (*(_DWORD *)(v5 + 116) & 0x400) != 0
          || ((v7 >> 4) & 0x1F) >= (unsigned int)__popcnt(*(unsigned int *)(v5 + 1100)) )
        {
          *(_DWORD *)(a1 + 34372) += v21;
          *(_DWORD *)(v5 + 652) += v21;
        }
        else
        {
          *(_DWORD *)(a1 + 34376) += v21;
          *(_DWORD *)(v5 + 732) += v21;
        }
        if ( v5 != *(_QWORD *)(a1 + 24) )
        {
          v49 = (char *)(v5 + 195);
          if ( *(char *)(v5 + 195) < 16 )
          {
            if ( *(_QWORD *)(v5 + 104) )
            {
              v50 = *(_QWORD *)(v5 + 104);
              if ( v50 )
              {
                a4 = 0LL;
                v51 = v50 + *(unsigned int *)(a1 + 216);
                if ( *v49 < 16 && (*(_DWORD *)(v5 + 120) & 0x200) == 0 )
                {
                  v52 = v50 + *(unsigned int *)(a1 + 216);
                  while ( (*(_BYTE *)(v52 + 112) & 2) == 0 )
                  {
                    v52 = *(_QWORD *)(v52 + 416);
                    if ( !v52 )
                    {
                      do
                      {
                        a4 = (unsigned int)(*(_DWORD *)(v51 + 124) + a4);
                        if ( (_DWORD)a4 )
                          break;
                        v51 = *(_QWORD *)(v51 + 416);
                      }
                      while ( v51 );
                      if ( (_DWORD)a4 )
                        break;
                      goto LABEL_95;
                    }
                  }
LABEL_97:
                  *(_DWORD *)(a1 + 34412) += v21;
                  goto LABEL_17;
                }
LABEL_95:
                v49 = (char *)(v5 + 195);
              }
            }
          }
          if ( *v49 >= 8 )
            goto LABEL_17;
          goto LABEL_97;
        }
      }
    }
  }
LABEL_17:
  *(_QWORD *)(a1 + 34552) = v7;
  *(_QWORD *)(a1 + 34432) = v8;
  *(_QWORD *)(v5 + 72) += v9;
  if ( v5 != *(_QWORD *)(a1 + 24) )
  {
    v22 = ((v9 * *(unsigned int *)(a1 + 34488)) >> 16) + *(unsigned int *)(v5 + 80);
    if ( v22 > 0xFFFFFFFF )
      LODWORD(v22) = -1;
    *(_DWORD *)(v5 + 80) = v22;
  }
  v23 = *(_BYTE *)(v5 + 2);
  if ( (v23 & 0xBE) != 0 )
  {
    if ( v23 < 0 )
    {
      v24 = (*(_DWORD *)(*(_QWORD *)(v5 + 544) + 400LL) >> 13) & 0x3FFFF;
      _BitScanReverse(&v25, v24);
      a4 = (*(_DWORD *)(*(_QWORD *)(v5 + 544) + 400LL) >> 4) & 0x1FF;
      v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 35760) + 8LL * (v25 - 2)) + 8LL * (v24 ^ (1 << v25)) + 8);
      *(_QWORD *)(v26 + 8 * a4) += v9;
      v23 &= ~0x80u;
    }
    if ( (v23 & 0x10) != 0 )
    {
      *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v5 + 124) + 34440) += v9;
      v23 &= ~0x10u;
    }
    if ( (v23 & 0x20) != 0 )
    {
      v27 = *(_QWORD *)(v5 + 1672);
      if ( v27 )
      {
        v28 = *(_QWORD *)(a1 + 35248);
        v29 = *(_QWORD *)(a1 + 35256);
        if ( v28 && v29 )
        {
          if ( *(_BYTE *)(v29 + 112) )
          {
            v30 = *(_DWORD *)(v29 + 132);
          }
          else
          {
            v30 = *(_DWORD *)(v29 + 80);
            if ( v30 >= *(_DWORD *)(v28 + 528) )
              v30 = *(_DWORD *)(v28 + 528);
          }
        }
        else
        {
          v30 = 100;
        }
        a4 = 0LL;
        v31 = (unsigned __int16 *)(a1 + 35434);
        do
        {
          if ( v30 <= *v31 )
            break;
          a4 = (unsigned int)(a4 + 1);
          ++v31;
        }
        while ( (unsigned int)a4 < 3 );
        v32 = *(_BYTE *)(a1 + 35336);
        v33 = v32 != 0 ? 8 : 0;
        *(_QWORD *)(v33 + v27 + 16LL * (unsigned int)a4) += v9;
        v34 = *(_DWORD *)(v27 + 192);
        if ( KiTimelineBitmapTime > v34 )
        {
          LODWORD(v92) = KiTimelineBitmapTime;
          if ( KiTimelineBitmapTime - v34 >= 0x20 )
            HIDWORD(v92) = 1;
          else
            HIDWORD(v92) = (*(_DWORD *)(v27 + 196) << (KiTimelineBitmapTime - v34)) | 1;
          *(_QWORD *)(v27 + 192) = v92;
        }
        else
        {
          v35 = v34 - KiTimelineBitmapTime;
          if ( v35 < 0x20 )
            *(_DWORD *)(v27 + 196) |= 1 << v35;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v36 = *(unsigned __int8 *)(v5 + 516);
          if ( ((v36 - 2) & 0xFFFFFFFB) == 0 || (_BYTE)v36 == 5 )
            *(_QWORD *)(v27 + 16LL * (unsigned int)a4 + 8) += v9;
        }
        if ( *(_QWORD *)(v5 + 1616) )
        {
          v41 = v32 != 0 ? 8 : 0;
          *(_QWORD *)(v41 + v27 + 16 * ((unsigned int)a4 + 8LL)) += v9;
          v42 = 64LL;
          if ( v32 )
            v42 = 72LL;
          _InterlockedAdd64(
            (volatile signed __int64 *)(v42 + *(_QWORD *)(*(_QWORD *)(v5 + 1616) + 1672LL) + 16LL * (unsigned int)a4),
            v9);
        }
      }
      v23 &= ~0x20u;
    }
    if ( (v23 & 0x40) != 0 )
    {
      v48 = *(_QWORD *)(v5 + 968);
      if ( v48 )
        *(_BYTE *)(v48 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
    {
      LOBYTE(a4) = 1;
      KiUpdateThreadHgsFeedback(a1, v5, v9, a4);
    }
    if ( *(_QWORD *)(a1 + 34480) && *(_UNKNOWN **)(v5 + 544) != &KiInitialProcess && *(unsigned __int8 *)(v5 + 516) < 7u )
    {
      v87 = *(_DWORD *)(v5 + 80);
      if ( v87 <= *(_DWORD *)(v5 + 84) )
        v87 = *(_DWORD *)(v5 + 84);
      LOBYTE(v6) = v87 >= KiDynamicHeteroCpuPolicyExpectedCycles;
      v88 = *(unsigned __int8 *)(v5 + 517)
          + KiHgsPlusConfiguration * (v6 + 2 * (unsigned int)*(unsigned __int8 *)(v5 + 516));
      *(_QWORD *)(*(_QWORD *)(a1 + 34480) + 8 * v88) += v9;
    }
    if ( (v23 & 0xBE) != 0 )
    {
      v39 = *(_QWORD *)(v5 + 104);
      if ( v39 )
      {
        v40 = (_QWORD *)(v39 + *(unsigned int *)(a1 + 216));
        do
        {
          *v40 += v9;
          v40 = (_QWORD *)v40[52];
        }
        while ( v40 );
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
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v53 = *SchedulerAssist;
    do
    {
      v54 = v53;
      v53 = _InterlockedCompareExchange(SchedulerAssist, v53 & 0xFFDFFFFF, v53);
    }
    while ( v54 != v53 );
    if ( (v53 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
}
