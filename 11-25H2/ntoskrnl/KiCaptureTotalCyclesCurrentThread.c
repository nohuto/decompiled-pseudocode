/*
 * XREFs of KiCaptureTotalCyclesCurrentThread @ 0x14028BCF0
 * Callers:
 *     KeYieldExecution @ 0x14027B240 (KeYieldExecution.c)
 *     KiCheckForThreadDispatch @ 0x140285CEC (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiHandleDeferredPreemption @ 0x1402F2F88 (KiHandleDeferredPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403147F4 (KiGroupSchedulingGenerationEnd.c)
 *     KiDispatchInterrupt @ 0x14032E330 (KiDispatchInterrupt.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiIdleSchedule @ 0x140330B40 (KiIdleSchedule.c)
 *     KiExecuteSmtIsolationThread @ 0x1405BEAF0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateThreadHgsFeedback @ 0x14028C900 (KiUpdateThreadHgsFeedback.c)
 *     KiEndCounterAccumulation @ 0x14028E688 (KiEndCounterAccumulation.c)
 *     HalpTimerScaleCounter @ 0x14028EF68 (HalpTimerScaleCounter.c)
 *     HvlpGetRegister64 @ 0x14028FB00 (HvlpGetRegister64.c)
 *     HalpHpetQueryCounter @ 0x140350770 (HalpHpetQueryCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiCaptureTotalCyclesCurrentThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int128 v4; // rax
  __int64 v5; // rsi
  int v7; // r12d
  unsigned __int64 v8; // r11
  __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  int v16; // r9d
  signed __int64 v17; // rdx
  __int64 v18; // r13
  char v19; // cl
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r8
  unsigned __int128 v23; // rax
  unsigned __int64 v24; // r10
  int v25; // r8d
  unsigned __int64 v26; // rcx
  char v27; // bl
  unsigned int v28; // eax
  unsigned int v29; // ecx
  _QWORD *v30; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // edx
  unsigned int v36; // r8d
  unsigned __int16 *v37; // rcx
  char v38; // r10
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  int v41; // ecx
  _QWORD *v42; // rcx
  __int64 v43; // rcx
  __int64 (__fastcall *v44)(__int64, __int64); // rax
  __int64 v45; // rdx
  int v46; // ett
  char *v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rbx
  __int64 InternalData; // rax
  __int64 (__fastcall *v52)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v54; // r10
  signed __int64 v55; // rax
  int v56; // r9d
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rcx
  unsigned __int64 v60; // r8
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned __int64 v64; // rax
  int v65; // r9d
  signed __int64 v66; // rdx
  __int64 v67; // r11
  __int64 v68; // r8
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 (__fastcall *v71)(_QWORD); // rdx
  __int64 v72; // rax
  unsigned __int64 v73; // r10
  signed __int64 v74; // rax
  int v75; // r9d
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // rcx
  unsigned __int64 v79; // r8
  unsigned int v80; // ecx
  __int64 v81; // rcx
  signed __int32 v83[8]; // [rsp+8h] [rbp-39h] BYREF
  __int64 (__fastcall *v84)(_QWORD); // [rsp+28h] [rbp-19h] BYREF
  __int64 (__fastcall *v85)(_QWORD); // [rsp+30h] [rbp-11h] BYREF
  __int64 v86; // [rsp+38h] [rbp-9h]
  __int64 v87; // [rsp+40h] [rbp-1h]
  __int64 v88; // [rsp+48h] [rbp+7h]
  __int64 v89; // [rsp+50h] [rbp+Fh]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF

  *((_QWORD *)&v4 + 1) = a2;
  *(_QWORD *)&v4 = &retaddr;
  v5 = *((_QWORD *)&v4 + 1);
  _disable();
  v7 = 0;
  *(_BYTE *)(a1 + 32) = 1;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( !*(_BYTE *)(a1 + 34524) )
    goto LABEL_25;
  a4 = 10000000LL;
  v11 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
  {
    v12 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
    {
      do
      {
        v86 = *(_QWORD *)(v11 + 208);
        do
        {
          v50 = *(_QWORD *)(v11 + 200);
          InternalData = HalpTimerGetInternalData(v11);
          v52 = *(__int64 (__fastcall **)(_QWORD))(v11 + 112);
          if ( v52 == HalpHpetQueryCounter )
            Counter = HalpHpetQueryCounter(InternalData);
          else
            Counter = guard_dispatch_icall_no_overrides(InternalData, v52);
          v54 = Counter;
          _InterlockedOr(v83, 0);
          v55 = *(_QWORD *)(v11 + 200);
        }
        while ( v50 != v55 );
        v18 = v86;
      }
      while ( v86 != *(_QWORD *)(v11 + 208) );
      v56 = *(_DWORD *)(v11 + 220);
      if ( ((v50 ^ v54) & (1LL << ((unsigned __int8)v56 - 1))) != 0 )
      {
        if ( v56 == 64 )
          v58 = -1LL;
        else
          v58 = (1LL << v56) - 1;
        v59 = 0LL;
        if ( v56 != 64 )
          v59 = 1LL << v56;
        v60 = v50 & v58;
        v17 = v54 | v50 ^ v60;
        if ( v54 < v60 )
          v17 += v59;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 200), v17, v55);
      }
      else
      {
        if ( v56 == 64 )
          v57 = -1LL;
        else
          v57 = (1LL << v56) - 1;
        v17 = v54 | v50 & ~v57;
      }
      goto LABEL_16;
    }
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v13 = *(_QWORD *)(HalpPerformanceCounter + 72)
          + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
    else
      v13 = *(_QWORD *)(HalpPerformanceCounter + 72);
    v14 = *(_QWORD *)(HalpPerformanceCounter + 112);
    if ( (__int64 (__fastcall *)(_QWORD))v14 == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v17 = __readmsr(0x40000020u);
LABEL_15:
        v18 = *(_QWORD *)(v11 + 208);
LABEL_16:
        v8 = v17 + v18;
        a4 = 10000000LL;
        goto LABEL_17;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v85 = 0LL;
        while ( 1 )
        {
          v15 = (unsigned __int64)HvlpReferenceTscPage;
          v16 = *(_DWORD *)HvlpReferenceTscPage;
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
            v15 = __rdtsc();
            LODWORD(v14) = HIDWORD(v15);
            v15 = (unsigned int)v15;
            v14 = (unsigned int)v14;
          }
          v14 = *((_QWORD *)HvlpReferenceTscPage + 2)
              + (((v15 | (v14 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v85 = (__int64 (__fastcall *)(_QWORD))v14;
          if ( *(_DWORD *)HvlpReferenceTscPage == v16 )
            goto LABEL_14;
        }
        HvlpGetRegister64(589828LL, &v85);
LABEL_14:
        v17 = (signed __int64)v85;
        goto LABEL_15;
      }
      v13 = 0LL;
    }
    v17 = guard_dispatch_icall_no_overrides(v13, v14);
    goto LABEL_15;
  }
  v12 = 10000000LL;
  if ( !HalpTimerReferencePage )
  {
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
    {
      do
      {
        v86 = *(_QWORD *)(v11 + 208);
        do
        {
          v69 = *(_QWORD *)(v11 + 200);
          v70 = HalpTimerGetInternalData(v11);
          v71 = *(__int64 (__fastcall **)(_QWORD))(v11 + 112);
          if ( v71 == HalpHpetQueryCounter )
            v72 = HalpHpetQueryCounter(v70);
          else
            v72 = guard_dispatch_icall_no_overrides(v70, v71);
          v73 = v72;
          _InterlockedOr(v83, 0);
          v74 = *(_QWORD *)(v11 + 200);
        }
        while ( v69 != v74 );
        v67 = v86;
      }
      while ( v86 != *(_QWORD *)(v11 + 208) );
      v75 = *(_DWORD *)(v11 + 220);
      if ( ((v69 ^ v73) & (1LL << ((unsigned __int8)v75 - 1))) != 0 )
      {
        if ( v75 == 64 )
          v77 = -1LL;
        else
          v77 = (1LL << v75) - 1;
        v78 = 0LL;
        if ( v75 != 64 )
          v78 = 1LL << v75;
        v79 = v69 & v77;
        v66 = v73 | v69 ^ v79;
        if ( v73 < v79 )
          v66 += v78;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 200), v66, v74);
      }
      else
      {
        if ( v75 == 64 )
          v76 = -1LL;
        else
          v76 = (1LL << v75) - 1;
        v66 = v73 | v69 & ~v76;
      }
      goto LABEL_138;
    }
    v61 = HalpTimerGetInternalData(HalpPerformanceCounter);
    v62 = *(_QWORD *)(v11 + 112);
    v63 = v61;
    if ( (__int64 (__fastcall *)(_QWORD))v62 == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v66 = __readmsr(0x40000020u);
LABEL_137:
        v67 = *(_QWORD *)(v11 + 208);
LABEL_138:
        v8 = HalpTimerScaleCounter(v67 + v66, *(_QWORD *)(v11 + 192), 10000000LL);
        a4 = 10000000LL;
        goto LABEL_17;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v84 = 0LL;
        while ( 1 )
        {
          v64 = (unsigned __int64)HvlpReferenceTscPage;
          v65 = *(_DWORD *)HvlpReferenceTscPage;
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
            v64 = __rdtsc();
            LODWORD(v62) = HIDWORD(v64);
            v64 = (unsigned int)v64;
            v62 = (unsigned int)v62;
          }
          v62 = *((_QWORD *)HvlpReferenceTscPage + 2)
              + (((v64 | (v62 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v84 = (__int64 (__fastcall *)(_QWORD))v62;
          if ( *(_DWORD *)HvlpReferenceTscPage == v65 )
            goto LABEL_136;
        }
        HvlpGetRegister64(589828LL, &v84);
LABEL_136:
        v66 = (signed __int64)v84;
        goto LABEL_137;
      }
      v63 = 0LL;
    }
    v66 = guard_dispatch_icall_no_overrides(v63, v62);
    goto LABEL_137;
  }
  if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
    v43 = *(_QWORD *)(HalpPerformanceCounter + 72) + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
  else
    v43 = *(_QWORD *)(HalpPerformanceCounter + 72);
  v44 = *(__int64 (__fastcall **)(__int64, __int64))(HalpPerformanceCounter + 112);
  if ( v44 == HalpTscQueryCounterOrdered )
  {
    __asm { rdtscp }
    v45 = (unsigned __int64)v44 | ((_QWORD)HalpTscQueryCounterOrdered << 32);
  }
  else
  {
    v45 = guard_dispatch_icall_no_overrides(v43, HalpTscQueryCounterOrdered);
    a4 = 10000000LL;
  }
  v8 = (((unsigned __int64)v45 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
     + MEMORY[0xFFFFF780000003B8];
LABEL_17:
  if ( v11 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v68 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v68 = 10000000LL;
    v8 = HalpTimerScaleCounter(v8, v12, v68);
  }
  v19 = *(_BYTE *)(a1 + 172);
  v20 = v8;
  v21 = *(_QWORD *)(a1 + 176);
  v89 = 0LL;
  if ( v19 )
    v20 = v8 << v19;
  v4 = v20 * (unsigned __int128)v21;
  v89 = *((_QWORD *)&v4 + 1);
  v10 = *((_QWORD *)&v4 + 1) - *(_QWORD *)(a1 + 34432);
  v9 = *((_QWORD *)&v4 + 1);
  if ( KiTickAccumulationFromAccountingPeriods )
  {
    *((_QWORD *)&v4 + 1) = *(_QWORD *)(a1 + 34552);
    *(_QWORD *)&v4 = 0xFFFFF78000000300uLL;
    if ( MEMORY[0xFFFFF78000000300] )
    {
      v87 = 0LL;
      v88 = 0LL;
      v22 = v8;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v23 = (unsigned __int64)(*((_QWORD *)&v4 + 1) << MEMORY[0xFFFFF78000000369])
            * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v22 = v8 << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v23 = *((unsigned __int64 *)&v4 + 1) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      }
      v87 = *((_QWORD *)&v23 + 1);
      a4 = (v22 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v88 = a4;
      v24 = (*((unsigned __int64 *)&v23 + 1) * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64;
      v4 = (unsigned __int64)a4 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal;
      v25 = (*((_QWORD *)&v4 + 1) >> KiMaximumIncrementShiftCount) - (v24 >> KiMaximumIncrementShiftCount);
      if ( v25 )
      {
        if ( (*(_DWORD *)(v5 + 116) & 0x400) != 0
          || (*((_QWORD *)&v4 + 1) = __popcnt(*(unsigned int *)(v5 + 1100)),
              *(_QWORD *)&v4 = (v8 >> 4) & 0x1F,
              (unsigned int)v4 >= DWORD2(v4)) )
        {
          *(_DWORD *)(a1 + 34372) += v25;
          *(_DWORD *)(v5 + 652) += v25;
        }
        else
        {
          *(_DWORD *)(a1 + 34376) += v25;
          *(_DWORD *)(v5 + 732) += v25;
        }
        if ( v5 != *(_QWORD *)(a1 + 24) )
        {
          v47 = (char *)(v5 + 195);
          if ( *(char *)(v5 + 195) < 16 )
          {
            *(_QWORD *)&v4 = *(_QWORD *)(v5 + 104);
            if ( (_QWORD)v4 )
            {
              *(_QWORD *)&v4 = *(_QWORD *)(v5 + 104);
              if ( (_QWORD)v4 )
              {
                a4 = 0LL;
                *((_QWORD *)&v4 + 1) = v4 + *(unsigned int *)(a1 + 216);
                if ( *v47 < 16 && (*(_DWORD *)(v5 + 120) & 0x200) == 0 )
                {
                  v48 = v4 + *(unsigned int *)(a1 + 216);
                  while ( (*(_BYTE *)(v48 + 112) & 2) == 0 )
                  {
                    v48 = *(_QWORD *)(v48 + 416);
                    if ( !v48 )
                    {
                      do
                      {
                        a4 = (unsigned int)(*(_DWORD *)(*((_QWORD *)&v4 + 1) + 124LL) + a4);
                        if ( (_DWORD)a4 )
                          break;
                        *((_QWORD *)&v4 + 1) = *(_QWORD *)(*((_QWORD *)&v4 + 1) + 416LL);
                      }
                      while ( *((_QWORD *)&v4 + 1) );
                      if ( (_DWORD)a4 )
                        break;
                      goto LABEL_93;
                    }
                  }
LABEL_95:
                  *(_DWORD *)(a1 + 34412) += v25;
                  goto LABEL_25;
                }
LABEL_93:
                v47 = (char *)(v5 + 195);
              }
            }
          }
          if ( *v47 >= 8 )
            goto LABEL_25;
          goto LABEL_95;
        }
      }
    }
  }
LABEL_25:
  *(_QWORD *)(a1 + 34552) = v8;
  *(_QWORD *)(a1 + 34432) = v9;
  *(_QWORD *)(v5 + 72) += v10;
  if ( v5 != *(_QWORD *)(a1 + 24) )
  {
    v26 = ((v10 * *(unsigned int *)(a1 + 34488)) >> 16) + *(unsigned int *)(v5 + 80);
    *(_QWORD *)&v4 = 0xFFFFFFFFLL;
    if ( v26 > 0xFFFFFFFF )
      LODWORD(v26) = -1;
    *(_DWORD *)(v5 + 80) = v26;
  }
  v27 = *(_BYTE *)(v5 + 2);
  if ( (v27 & 0xBE) != 0 )
  {
    if ( v27 < 0 )
    {
      v28 = (*(_DWORD *)(*(_QWORD *)(v5 + 544) + 400LL) >> 13) & 0x3FFFF;
      _BitScanReverse(&v29, v28);
      a4 = (*(_DWORD *)(*(_QWORD *)(v5 + 544) + 400LL) >> 4) & 0x1FF;
      *((_QWORD *)&v4 + 1) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 35760) + 8LL * (v29 - 2))
                                       + 8LL * (v28 ^ (1 << v29))
                                       + 8);
      *(_QWORD *)&v4 = v10 + *(_QWORD *)(*((_QWORD *)&v4 + 1) + 8 * a4);
      *(_QWORD *)(*((_QWORD *)&v4 + 1) + 8 * a4) = v4;
      v27 &= ~0x80u;
    }
    if ( (v27 & 0x10) != 0 )
    {
      *(_QWORD *)&v4 = *(unsigned __int8 *)(v5 + 124);
      *((_QWORD *)&v4 + 1) = a1 + 8 * v4;
      *(_QWORD *)(*((_QWORD *)&v4 + 1) + 34440LL) += v10;
      v27 &= ~0x10u;
    }
    if ( (v27 & 0x20) != 0 )
    {
      a4 = *(_QWORD *)(v5 + 1672);
      if ( a4 )
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
        v38 = *(_BYTE *)(a1 + 35336);
        *((_QWORD *)&v4 + 1) = v38 != 0 ? 8 : 0;
        *(_QWORD *)(*((_QWORD *)&v4 + 1) + a4 + 16LL * v36) += v10;
        *(_QWORD *)&v4 = (unsigned int)KiTimelineBitmapTime;
        v39 = *(_DWORD *)(a4 + 192);
        if ( KiTimelineBitmapTime > v39 )
        {
          LODWORD(v86) = KiTimelineBitmapTime;
          *((_QWORD *)&v4 + 1) = KiTimelineBitmapTime - v39;
          if ( DWORD2(v4) >= 0x20 )
            HIDWORD(v86) = 1;
          else
            HIDWORD(v86) = (*(_DWORD *)(a4 + 196) << (KiTimelineBitmapTime - v39)) | 1;
          *(_QWORD *)&v4 = v86;
          *(_QWORD *)(a4 + 192) = v86;
        }
        else
        {
          v40 = v39 - KiTimelineBitmapTime;
          if ( v40 < 0x20 )
            *(_DWORD *)(a4 + 196) |= 1 << v40;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v41 = *(unsigned __int8 *)(v5 + 516);
          *(_QWORD *)&v4 = (unsigned int)(v41 - 2);
          if ( (v4 & 0xFFFFFFFB) == 0 || (_BYTE)v41 == 5 )
          {
            *((_QWORD *)&v4 + 1) = 2LL * v36;
            *(_QWORD *)(a4 + 16LL * v36 + 8) += v10;
          }
        }
        if ( *(_QWORD *)(v5 + 1616) )
        {
          v49 = v38 != 0 ? 8 : 0;
          *(_QWORD *)(v49 + a4 + 16 * (v36 + 8LL)) += v10;
          *((_QWORD *)&v4 + 1) = 64LL;
          if ( v38 )
            *((_QWORD *)&v4 + 1) = 72LL;
          *(_QWORD *)&v4 = *(_QWORD *)(*(_QWORD *)(v5 + 1616) + 1672LL) + 16LL * v36;
          _InterlockedAdd64((volatile signed __int64 *)(*((_QWORD *)&v4 + 1) + v4), v10);
        }
      }
      v27 &= ~0x20u;
    }
    if ( (v27 & 0x40) != 0 )
    {
      *(_QWORD *)&v4 = *(_QWORD *)(v5 + 968);
      if ( (_QWORD)v4 )
        *(_BYTE *)(v4 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
    {
      LOBYTE(a4) = 1;
      *(_QWORD *)&v4 = KiUpdateThreadHgsFeedback(a1, v5, v10, a4);
    }
    v30 = &KiInitialProcess;
    if ( *(_QWORD *)(a1 + 34480) )
    {
      if ( *(_UNKNOWN **)(v5 + 544) != &KiInitialProcess )
      {
        *(_QWORD *)&v4 = *(unsigned __int8 *)(v5 + 516);
        *((_QWORD *)&v4 + 1) = v4;
        if ( (unsigned int)v4 < 7 )
        {
          v80 = *(_DWORD *)(v5 + 80);
          if ( v80 <= *(_DWORD *)(v5 + 84) )
            v80 = *(_DWORD *)(v5 + 84);
          LOBYTE(v7) = v80 >= KiDynamicHeteroCpuPolicyExpectedCycles;
          v81 = (unsigned int)*(unsigned __int8 *)(v5 + 517) + KiHgsPlusConfiguration * (v7 + 2 * (_DWORD)v4);
          *(_QWORD *)&v4 = *(_QWORD *)(a1 + 34480);
          *(_QWORD *)(v4 + 8 * v81) += v10;
        }
      }
    }
    if ( (v27 & 0xBE) != 0 )
    {
      *(_QWORD *)&v4 = *(_QWORD *)(v5 + 104);
      if ( (_QWORD)v4 )
      {
        v42 = (_QWORD *)(v4 + *(unsigned int *)(a1 + 216));
        do
        {
          *v42 += v10;
          v42 = (_QWORD *)v42[52];
        }
        while ( v42 );
      }
      if ( (*(_BYTE *)(v5 + 2) & 8) != 0 && *(_UNKNOWN **)(v5 + 544) != &KiInitialProcess )
      {
        v30 = *(_QWORD **)(a1 + 192);
        *((_QWORD *)&v4 + 1) = *(_QWORD *)(*(_QWORD *)(v5 + 576) + 8LL * *((unsigned __int16 *)v30 + 68) + 8);
        *(_QWORD *)&v4 = *((_QWORD *)&v4 + 1) & v30[16];
        if ( (_QWORD)v4 != v30[16] )
          *(_QWORD *)(a1 + 34472) += v10;
      }
      if ( *(_QWORD *)(v5 + 360) )
        *(_QWORD *)&v4 = KiEndCounterAccumulation(v5, *((_QWORD *)&v4 + 1), v30);
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(v4) = *SchedulerAssist;
    do
    {
      v46 = v4;
      *(_QWORD *)&v4 = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, v4 & 0xFFDFFFFF, v4);
    }
    while ( v46 != (_DWORD)v4 );
    if ( (v4 & 0x200000) != 0 )
      *(_QWORD *)&v4 = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  return v4;
}
