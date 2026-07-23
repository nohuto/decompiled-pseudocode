/*
 * XREFs of KiStartThreadCycleAccumulationContextSwap @ 0x140350FB0
 * Callers:
 *     SwapContext @ 0x1406A7870 (SwapContext.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpTimerScaleCounter @ 0x14028EF68 (HalpTimerScaleCounter.c)
 *     HvlpGetRegister64 @ 0x14028FB00 (HvlpGetRegister64.c)
 *     HalpHpetQueryCounter @ 0x140350770 (HalpHpetQueryCounter.c)
 *     KiInsertDeferredPreemptionApc @ 0x140351CBC (KiInsertDeferredPreemptionApc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiStartThreadCycleAccumulationContextSwap(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // r15
  __int64 v7; // r11
  __int64 v8; // r13
  __int64 v9; // r15
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, __int64); // rdx
  unsigned __int64 v13; // rax
  int v14; // r9d
  signed __int64 v15; // rdx
  __int64 v16; // r12
  char v17; // cl
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int128 v22; // rax
  int v23; // edx
  __int64 result; // rax
  char v25; // r9
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned int v28; // r8d
  __int64 v29; // rcx
  unsigned __int16 *v30; // rdx
  __int64 v31; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v34; // r9
  unsigned int *v35; // r10
  __int64 v36; // rbx
  _QWORD *v37; // r11
  __int64 v38; // rcx
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // r8
  int v41; // ett
  __int64 v42; // rcx
  __int64 (__fastcall *v43)(__int64, __int64); // rax
  __int64 v44; // rdx
  bool v45; // al
  __int64 v46; // r8
  int v47; // edx
  bool v48; // r9
  int v49; // ett
  __int64 v50; // rbx
  __int64 InternalData; // rax
  __int64 (*v52)(); // rdx
  __int64 Counter; // rax
  unsigned __int64 v54; // r10
  signed __int64 v55; // rax
  int v56; // r9d
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rcx
  unsigned __int64 v60; // r8
  __int64 v61; // rax
  __int64 (__fastcall *v62)(__int64, __int64); // rdx
  __int64 v63; // rcx
  unsigned __int64 v64; // rax
  int v65; // r9d
  signed __int64 v66; // rdx
  __int64 v67; // r12
  __int64 v68; // r8
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 (*v71)(); // rdx
  __int64 v72; // rax
  unsigned __int64 v73; // r10
  signed __int64 v74; // rax
  int v75; // r9d
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // rcx
  unsigned __int64 v79; // r8
  signed __int32 v80[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 (__fastcall *v81)(__int64, __int64); // [rsp+20h] [rbp-48h] BYREF
  __int64 v82; // [rsp+28h] [rbp-40h]
  unsigned __int64 v83; // [rsp+30h] [rbp-38h]
  __int64 v84; // [rsp+38h] [rbp-30h]
  int v85; // [rsp+40h] [rbp-28h] BYREF
  __int128 v86; // [rsp+44h] [rbp-24h]
  __int64 (__fastcall *v87)(__int64, __int64); // [rsp+C8h] [rbp+60h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 1LL;
  if ( !*(_BYTE *)(a1 + 34524) )
    goto LABEL_26;
  v9 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
  {
    v10 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
    {
      do
      {
        v16 = *(_QWORD *)(v9 + 208);
        do
        {
          v50 = *(_QWORD *)(v9 + 200);
          InternalData = HalpTimerGetInternalData(v9);
          v52 = *(__int64 (**)())(v9 + 112);
          if ( v52 == HalpHpetQueryCounter )
            Counter = HalpHpetQueryCounter();
          else
            Counter = guard_dispatch_icall_no_overrides(InternalData, v52);
          v54 = Counter;
          _InterlockedOr(v80, 0);
          v55 = *(_QWORD *)(v9 + 200);
        }
        while ( v50 != v55 );
      }
      while ( v16 != *(_QWORD *)(v9 + 208) );
      v56 = *(_DWORD *)(v9 + 220);
      v8 = 1LL;
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
        v15 = v54 | v50 ^ v60;
        if ( v54 < v60 )
          v15 += v59;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 200), v15, v55);
      }
      else
      {
        if ( v56 == 64 )
          v57 = -1LL;
        else
          v57 = (1LL << v56) - 1;
        v15 = v54 | v50 & ~v57;
      }
      goto LABEL_16;
    }
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v11 = *(_QWORD *)(HalpPerformanceCounter + 72)
          + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
    else
      v11 = *(_QWORD *)(HalpPerformanceCounter + 72);
    v12 = *(__int64 (__fastcall **)(__int64, __int64))(HalpPerformanceCounter + 112);
    if ( v12 == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v15 = __readmsr(0x40000020u);
LABEL_15:
        v16 = *(_QWORD *)(v9 + 208);
LABEL_16:
        v4 = v16 + v15;
        goto LABEL_17;
      }
      if ( (__int64 (__fastcall *)(_QWORD))HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v81 = 0LL;
        while ( 1 )
        {
          v13 = (unsigned __int64)HvlpReferenceTscPage;
          v14 = *(_DWORD *)HvlpReferenceTscPage;
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
            v13 = __rdtsc();
            LODWORD(v12) = HIDWORD(v13);
            v13 = (unsigned int)v13;
            v12 = (__int64 (__fastcall *)(__int64, __int64))(unsigned int)v12;
          }
          v12 = (__int64 (__fastcall *)(__int64, __int64))(*((_QWORD *)HvlpReferenceTscPage + 2)
                                                         + (((v13 | ((_QWORD)v12 << 32))
                                                           * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage
                                                                                + 1)) >> 64));
          v81 = v12;
          if ( *(_DWORD *)HvlpReferenceTscPage == v14 )
            goto LABEL_14;
        }
        HvlpGetRegister64(589828, &v81);
LABEL_14:
        v15 = (signed __int64)v81;
        goto LABEL_15;
      }
      v11 = 0LL;
    }
    v15 = guard_dispatch_icall_no_overrides(v11, v12);
    goto LABEL_15;
  }
  v10 = 10000000LL;
  if ( HalpTimerReferencePage )
  {
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v42 = *(_QWORD *)(HalpPerformanceCounter + 72)
          + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
    else
      v42 = *(_QWORD *)(HalpPerformanceCounter + 72);
    v43 = *(__int64 (__fastcall **)(__int64, __int64))(HalpPerformanceCounter + 112);
    if ( v43 == HalpTscQueryCounterOrdered )
    {
      __asm { rdtscp }
      v44 = (unsigned __int64)v43 | ((_QWORD)HalpTscQueryCounterOrdered << 32);
    }
    else
    {
      v44 = guard_dispatch_icall_no_overrides(v42, HalpTscQueryCounterOrdered);
    }
    v4 = (((unsigned __int64)v44 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
       + MEMORY[0xFFFFF780000003B8];
    goto LABEL_17;
  }
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
  {
    do
    {
      v67 = *(_QWORD *)(v9 + 208);
      do
      {
        v69 = *(_QWORD *)(v9 + 200);
        v70 = HalpTimerGetInternalData(v9);
        v71 = *(__int64 (**)())(v9 + 112);
        if ( v71 == HalpHpetQueryCounter )
          v72 = HalpHpetQueryCounter();
        else
          v72 = guard_dispatch_icall_no_overrides(v70, v71);
        v73 = v72;
        _InterlockedOr(v80, 0);
        v74 = *(_QWORD *)(v9 + 200);
      }
      while ( v69 != v74 );
    }
    while ( v67 != *(_QWORD *)(v9 + 208) );
    v75 = *(_DWORD *)(v9 + 220);
    v8 = 1LL;
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
      _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 200), v66, v74);
    }
    else
    {
      if ( v75 == 64 )
        v76 = -1LL;
      else
        v76 = (1LL << v75) - 1;
      v66 = v73 | v69 & ~v76;
    }
    goto LABEL_120;
  }
  v61 = HalpTimerGetInternalData(HalpPerformanceCounter);
  v62 = *(__int64 (__fastcall **)(__int64, __int64))(v9 + 112);
  v63 = v61;
  if ( v62 != HalpHvCounterQueryCounter )
  {
LABEL_160:
    v66 = guard_dispatch_icall_no_overrides(v63, v62);
    goto LABEL_119;
  }
  if ( HalpHvTimerApi )
  {
    if ( (__int64 (__fastcall *)(_QWORD))HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
    {
      v87 = 0LL;
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
          v62 = (__int64 (__fastcall *)(__int64, __int64))(unsigned int)v62;
        }
        v62 = (__int64 (__fastcall *)(__int64, __int64))(*((_QWORD *)HvlpReferenceTscPage + 2)
                                                       + (((v64 | ((_QWORD)v62 << 32))
                                                         * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage
                                                                              + 1)) >> 64));
        v87 = v62;
        if ( *(_DWORD *)HvlpReferenceTscPage == v65 )
          goto LABEL_118;
      }
      HvlpGetRegister64(589828, &v87);
LABEL_118:
      v66 = (signed __int64)v87;
      goto LABEL_119;
    }
    v63 = 0LL;
    goto LABEL_160;
  }
  v66 = __readmsr(0x40000020u);
LABEL_119:
  v67 = *(_QWORD *)(v9 + 208);
LABEL_120:
  v4 = HalpTimerScaleCounter(v67 + v66, *(_QWORD *)(v9 + 192), 10000000LL);
LABEL_17:
  if ( v9 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v68 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v68 = 10000000LL;
    v4 = HalpTimerScaleCounter(v4, v10, v68);
  }
  v17 = *(_BYTE *)(a1 + 172);
  v18 = v4;
  v19 = *(_QWORD *)(a1 + 176);
  v84 = 0LL;
  if ( v17 )
    v18 = v4 << v17;
  v5 = (v18 * (unsigned __int128)v19) >> 64;
  v84 = v5;
  v20 = *(_QWORD *)(a1 + 34552);
  v7 = v5 - *(_QWORD *)(a1 + 34432);
  v6 = v4 - v20;
  if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
  {
    v82 = 0LL;
    v83 = 0LL;
    v21 = v4;
    if ( MEMORY[0xFFFFF78000000369] )
    {
      v22 = (v20 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      v21 = v4 << MEMORY[0xFFFFF78000000369];
    }
    else
    {
      v22 = v20 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    }
    v82 = *((_QWORD *)&v22 + 1);
    v83 = (v21 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
    v23 = ((unsigned __int64)((v83 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
        - ((unsigned __int64)((*((unsigned __int64 *)&v22 + 1)
                             * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
    if ( v23 )
    {
      *(_DWORD *)(a1 + 34372) += v23;
      *(_DWORD *)(a1 + 34384) += v23;
    }
  }
LABEL_26:
  *(_QWORD *)(a1 + 34560) += v6;
  result = v7 + *(_QWORD *)(a1 + 34680);
  *(_QWORD *)(a1 + 34680) = result;
  *(_QWORD *)(a1 + 34552) = v4;
  *(_QWORD *)(a1 + 34432) = v5;
  v25 = *(_BYTE *)(a2 + 2);
  if ( (v25 & 0xB6) != 0 )
  {
    if ( (v25 & 0x20) != 0 )
    {
      v26 = *(_QWORD *)(a1 + 35248);
      v27 = *(_QWORD *)(a1 + 35256);
      if ( v26 && v27 )
      {
        if ( *(_BYTE *)(v27 + 112) )
        {
          v28 = *(_DWORD *)(v27 + 132);
        }
        else
        {
          v28 = *(_DWORD *)(v27 + 80);
          if ( v28 >= *(_DWORD *)(v26 + 528) )
            v28 = *(_DWORD *)(v26 + 528);
        }
      }
      else
      {
        v28 = 100;
      }
      v29 = 0LL;
      v30 = (unsigned __int16 *)(a1 + 35434);
      do
      {
        if ( v28 <= *v30 )
          break;
        v29 = (unsigned int)(v29 + 1);
        ++v30;
      }
      while ( (unsigned int)v29 < 3 );
      result = (*(_BYTE *)(a1 + 35336) != 0) + 2 * v29 + 4336;
      *(_QWORD *)(a1 + 8 * result) += v7;
    }
    if ( (v25 & 0x40) != 0 )
    {
      result = *(_QWORD *)(a2 + 968);
      if ( result )
        *(_BYTE *)(result + 64) = 1;
    }
    *(_BYTE *)(a1 + 32) = 0;
    v31 = *(_QWORD *)(a2 + 360);
    if ( v31 )
    {
      v34 = *(_QWORD *)(v31 + 32);
      if ( v34 && KiHwCountersCount )
      {
        v35 = (unsigned int *)&KiHwCounters;
        v36 = (unsigned int)KiHwCountersCount;
        v37 = (_QWORD *)(v31 + 48);
        do
        {
          if ( (v34 & v8) != 0 )
            *v37 = __readpmc(*v35);
          v8 *= 2LL;
          v37 += 3;
          ++v35;
          --v36;
        }
        while ( v36 );
      }
      result = *(unsigned int *)(v31 + 16);
      if ( (result & 1) != 0 )
      {
        ++*(_DWORD *)(v31 + 20);
        result = *(unsigned __int8 *)(a2 + 643);
        *(_QWORD *)v31 |= 1LL << result;
      }
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v41 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v41 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    if ( (*(_BYTE *)(a2 + 2) & 4) == 0 )
      goto LABEL_43;
    result = *(unsigned int *)(a2 + 120);
    if ( (result & 0x800) == 0 )
    {
      if ( (result & 0x400) != 0
        || *(char *)(a2 + 195) >= 16
        || (result & 0x200) != 0
        || (result = *(_QWORD *)(a2 + 104)) == 0 )
      {
LABEL_43:
        if ( KiHgsPlusEnabled )
        {
          result = __rdtsc();
          *(_QWORD *)(a2 + 1080) = 0LL;
          *(_QWORD *)(a2 + 1072) = result;
        }
        goto LABEL_45;
      }
      v38 = result + *(unsigned int *)(a1 + 216);
      while ( (*(_BYTE *)(v38 + 112) & 2) == 0 )
      {
        v38 = *(_QWORD *)(v38 + 416);
        if ( !v38 )
          goto LABEL_43;
      }
    }
    LOBYTE(SchedulerAssist) = 1;
    result = KiInsertDeferredPreemptionApc(a1, a2, SchedulerAssist);
    goto LABEL_43;
  }
  --*(_BYTE *)(a1 + 32);
  v39 = KeGetCurrentPrcb();
  v40 = v39->SchedulerAssist;
  if ( v40 )
  {
    _m_prefetchw(v40);
    LODWORD(result) = *v40;
    do
    {
      v49 = result;
      result = (unsigned int)_InterlockedCompareExchange(v40, result & 0xFFDFFFFF, result);
    }
    while ( v49 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick((__int64)v39);
  }
  _enable();
LABEL_45:
  if ( *(_BYTE *)(a1 + 6) )
  {
    *(_BYTE *)(a1 + 6) = 0;
    if ( a2 != *(_QWORD *)(a1 + 24) )
    {
      v86 = 0LL;
      if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
      {
        v45 = HalpDisableInterrupts();
        v47 = *(_DWORD *)(v46 + 168);
        v48 = v45;
        *(_DWORD *)(v46 + 168) = v47 | 4;
        if ( !v47 )
          __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
        if ( v48 )
          _enable();
      }
      v85 = 5;
      return HalpInterruptSendIpi(&v85, 0x2Fu);
    }
  }
  return result;
}
