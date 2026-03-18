/*
 * XREFs of KiStartThreadCycleAccumulationContextSwap @ 0x14030BC30
 * Callers:
 *     SwapContext @ 0x1406B2B40 (SwapContext.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpTimerScaleCounter @ 0x14030AA50 (HalpTimerScaleCounter.c)
 *     KiInsertDeferredPreemptionApc @ 0x14030C908 (KiInsertDeferredPreemptionApc.c)
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpHpetQueryCounter @ 0x1403D6DB0 (HalpHpetQueryCounter.c)
 *     HvlpGetRegister64 @ 0x1403D6DD0 (HvlpGetRegister64.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiStartThreadCycleAccumulationContextSwap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // r12
  __int64 v8; // r11
  __int64 v9; // r15
  ULONG_PTR v10; // r13
  __int64 v11; // r9
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // cl
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int128 v20; // rax
  __int64 result; // rax
  char v22; // r9
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned int v25; // r8d
  __int64 v26; // rcx
  unsigned __int16 *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rbx
  unsigned int *v30; // r9
  __int64 v31; // r11
  _QWORD *v32; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  _DWORD *v35; // r8
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  int v39; // r9d
  __int64 v40; // rdx
  int v41; // ett
  char v42; // al
  __int64 v43; // r8
  int v44; // edx
  char v45; // r9
  int v46; // ett
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  int v53; // r9d
  signed __int64 v54; // rdx
  __int64 v55; // r12
  __int64 v56; // r8
  __int64 v57; // rdi
  __int64 InternalData; // rax
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 (__fastcall *v61)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v63; // r10
  signed __int64 v64; // rax
  __int64 v65; // r12
  int v66; // r9d
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rcx
  unsigned __int64 v70; // r8
  signed __int64 v71; // rdx
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 (__fastcall *v76)(_QWORD); // rdx
  __int64 v77; // rax
  unsigned __int64 v78; // r10
  signed __int64 v79; // rax
  int v80; // r9d
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // rcx
  unsigned __int64 v84; // r8
  unsigned __int64 v85; // rax
  signed __int32 v86[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 (__fastcall *v87)(); // [rsp+20h] [rbp-48h] BYREF
  __int64 v88; // [rsp+28h] [rbp-40h]
  unsigned __int64 v89; // [rsp+30h] [rbp-38h]
  __int64 v90; // [rsp+38h] [rbp-30h]
  __int64 v91; // [rsp+40h] [rbp-28h]
  int v92; // [rsp+48h] [rbp-20h] BYREF
  __int128 v93; // [rsp+4Ch] [rbp-1Ch]
  __int64 (__fastcall *v94)(); // [rsp+C8h] [rbp+60h] BYREF

  v3 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 1LL;
  if ( !*(_BYTE *)(a1 + 34524) )
    goto LABEL_18;
  v10 = HalpPerformanceCounter;
  v11 = 10000000LL;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
  {
    v12 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
    {
      do
      {
        v90 = *(_QWORD *)(v10 + 208);
        do
        {
          v57 = *(_QWORD *)(v10 + 200);
          InternalData = HalpTimerGetInternalData(v10, a2, a3, v11);
          v61 = *(__int64 (__fastcall **)(_QWORD))(v10 + 112);
          if ( v61 == HalpHpetQueryCounter )
            Counter = HalpHpetQueryCounter(InternalData);
          else
            Counter = guard_dispatch_icall_no_overrides(InternalData, v61, v59, v60);
          v63 = Counter;
          _InterlockedOr(v86, 0);
          v64 = *(_QWORD *)(v10 + 200);
        }
        while ( v57 != v64 );
        v65 = v90;
      }
      while ( v90 != *(_QWORD *)(v10 + 208) );
      v66 = *(_DWORD *)(v10 + 220);
      if ( ((v57 ^ v63) & (1LL << ((unsigned __int8)v66 - 1))) != 0 )
      {
        if ( v66 == 64 )
          v68 = -1LL;
        else
          v68 = (1LL << v66) - 1;
        v69 = 0LL;
        if ( v66 != 64 )
          v69 = 1LL << v66;
        v70 = v57 & v68;
        v71 = v63 | v57 ^ v70;
        if ( v63 < v70 )
          v71 += v69;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 200), v71, v64);
        v5 = v65 + v71;
      }
      else
      {
        if ( v66 == 64 )
          v67 = -1LL;
        else
          v67 = (1LL << v66) - 1;
        v5 = v90 + (v63 | v57 & ~v67);
      }
      goto LABEL_9;
    }
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v36 = *(_QWORD *)(HalpPerformanceCounter + 72)
          + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
    else
      v36 = *(_QWORD *)(HalpPerformanceCounter + 72);
    v37 = *(_QWORD *)(HalpPerformanceCounter + 112);
    if ( (__int64 (__fastcall *)())v37 == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v40 = __readmsr(0x40000020u);
LABEL_71:
        v5 = *(_QWORD *)(v10 + 208) + v40;
        goto LABEL_9;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v87 = 0LL;
        while ( 1 )
        {
          v38 = (unsigned __int64)HvlpReferenceTscPage;
          v39 = *(_DWORD *)HvlpReferenceTscPage;
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
            v38 = __rdtsc();
            LODWORD(v37) = HIDWORD(v38);
            v38 = (unsigned int)v38;
            v37 = (unsigned int)v37;
          }
          a3 = *((_QWORD *)HvlpReferenceTscPage + 2);
          v37 = a3 + (((v38 | (v37 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v87 = (__int64 (__fastcall *)())v37;
          if ( *(_DWORD *)HvlpReferenceTscPage == v39 )
            goto LABEL_70;
        }
        HvlpGetRegister64(589828LL, &v87, a3);
LABEL_70:
        v40 = (__int64)v87;
        goto LABEL_71;
      }
      v36 = 0LL;
    }
    v40 = guard_dispatch_icall_no_overrides(v36, v37, a3, 10000000LL);
    goto LABEL_71;
  }
  v12 = 10000000LL;
  if ( HalpTimerReferencePage )
  {
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v13 = *(_QWORD *)(HalpPerformanceCounter + 72)
          + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
    else
      v13 = *(_QWORD *)(HalpPerformanceCounter + 72);
    v14 = *(_QWORD *)(HalpPerformanceCounter + 112);
    if ( (__int64 (__fastcall *)())v14 == HalpTscQueryCounterOrdered )
    {
      __asm { rdtscp }
      v15 = v14 | ((_QWORD)HalpTscQueryCounterOrdered << 32);
    }
    else
    {
      v15 = guard_dispatch_icall_no_overrides(v13, HalpTscQueryCounterOrdered, a3, 10000000LL);
    }
    v5 = (((unsigned __int64)v15 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
       + MEMORY[0xFFFFF780000003B8];
    goto LABEL_9;
  }
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
  {
    do
    {
      v90 = *(_QWORD *)(v10 + 208);
      do
      {
        v72 = *(_QWORD *)(v10 + 200);
        v73 = HalpTimerGetInternalData(v10, a2, a3, v11);
        v76 = *(__int64 (__fastcall **)(_QWORD))(v10 + 112);
        if ( v76 == HalpHpetQueryCounter )
          v77 = HalpHpetQueryCounter(v73);
        else
          v77 = guard_dispatch_icall_no_overrides(v73, v76, v74, v75);
        v78 = v77;
        _InterlockedOr(v86, 0);
        v79 = *(_QWORD *)(v10 + 200);
      }
      while ( v72 != v79 );
      v55 = v90;
    }
    while ( v90 != *(_QWORD *)(v10 + 208) );
    v80 = *(_DWORD *)(v10 + 220);
    if ( ((v72 ^ v78) & (1LL << ((unsigned __int8)v80 - 1))) != 0 )
    {
      if ( v80 == 64 )
        v82 = -1LL;
      else
        v82 = (1LL << v80) - 1;
      v83 = 0LL;
      if ( v80 != 64 )
        v83 = 1LL << v80;
      v84 = v72 & v82;
      v54 = v78 | v72 ^ v84;
      if ( v78 < v84 )
        v54 += v83;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 200), v54, v79);
    }
    else
    {
      if ( v80 == 64 )
        v81 = -1LL;
      else
        v81 = (1LL << v80) - 1;
      v54 = v78 | v72 & ~v81;
    }
    goto LABEL_100;
  }
  v47 = HalpTimerGetInternalData(HalpPerformanceCounter, a2, a3, 10000000LL);
  v50 = *(_QWORD *)(v10 + 112);
  v51 = v47;
  if ( (__int64 (__fastcall *)())v50 != HalpHvCounterQueryCounter )
  {
LABEL_158:
    v54 = guard_dispatch_icall_no_overrides(v51, v50, v48, v49);
    goto LABEL_99;
  }
  if ( HalpHvTimerApi )
  {
    if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
    {
      v94 = 0LL;
      while ( 1 )
      {
        v52 = (unsigned __int64)HvlpReferenceTscPage;
        v53 = *(_DWORD *)HvlpReferenceTscPage;
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
          v52 = __rdtsc();
          LODWORD(v50) = HIDWORD(v52);
          v52 = (unsigned int)v52;
          v50 = (unsigned int)v50;
        }
        v48 = *((_QWORD *)HvlpReferenceTscPage + 2);
        v50 = v48 + (((v52 | (v50 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
        v94 = (__int64 (__fastcall *)())v50;
        if ( *(_DWORD *)HvlpReferenceTscPage == v53 )
          goto LABEL_98;
      }
      HvlpGetRegister64(589828LL, &v94, v48);
LABEL_98:
      v54 = (signed __int64)v94;
      goto LABEL_99;
    }
    v51 = 0LL;
    goto LABEL_158;
  }
  v54 = __readmsr(0x40000020u);
LABEL_99:
  v55 = *(_QWORD *)(v10 + 208);
LABEL_100:
  v5 = HalpTimerScaleCounter(v55 + v54, *(_QWORD *)(v10 + 192), 10000000LL);
LABEL_9:
  if ( v10 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v56 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v56 = 10000000LL;
    v5 = HalpTimerScaleCounter(v5, v12, v56);
  }
  v16 = *(_BYTE *)(a1 + 172);
  v17 = *(_QWORD *)(a1 + 176);
  v18 = v5;
  v91 = 0LL;
  if ( v16 )
    v18 = v5 << v16;
  v6 = (v18 * (unsigned __int128)v17) >> 64;
  v91 = v6;
  a2 = *(_QWORD *)(a1 + 34552);
  v8 = v6 - *(_QWORD *)(a1 + 34432);
  v7 = v5 - a2;
  if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
  {
    v88 = 0LL;
    v89 = 0LL;
    v19 = v5;
    if ( MEMORY[0xFFFFF78000000369] )
    {
      v20 = (a2 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      v19 = v5 << MEMORY[0xFFFFF78000000369];
    }
    else
    {
      v20 = a2 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    }
    v88 = *((_QWORD *)&v20 + 1);
    v89 = (v19 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
    a2 = (unsigned int)((unsigned __int64)((v89 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
       - (unsigned int)((unsigned __int64)((*((unsigned __int64 *)&v20 + 1)
                                          * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
    if ( (_DWORD)a2 )
    {
      *(_DWORD *)(a1 + 34372) += a2;
      *(_DWORD *)(a1 + 34384) += a2;
    }
  }
LABEL_18:
  *(_QWORD *)(a1 + 34560) += v7;
  result = v8 + *(_QWORD *)(a1 + 34680);
  *(_QWORD *)(a1 + 34680) = result;
  *(_QWORD *)(a1 + 34552) = v5;
  *(_QWORD *)(a1 + 34432) = v6;
  v22 = *(_BYTE *)(v3 + 2);
  if ( (v22 & 0xB6) != 0 )
  {
    if ( (v22 & 0x20) != 0 )
    {
      v23 = *(_QWORD *)(a1 + 35248);
      v24 = *(_QWORD *)(a1 + 35256);
      if ( v23 && v24 )
      {
        if ( *(_BYTE *)(v24 + 112) )
        {
          v25 = *(_DWORD *)(v24 + 132);
        }
        else
        {
          v25 = *(_DWORD *)(v24 + 80);
          if ( v25 >= *(_DWORD *)(v23 + 528) )
            v25 = *(_DWORD *)(v23 + 528);
        }
      }
      else
      {
        v25 = 100;
      }
      v26 = 0LL;
      v27 = (unsigned __int16 *)(a1 + 35434);
      do
      {
        if ( v25 <= *v27 )
          break;
        v26 = (unsigned int)(v26 + 1);
        ++v27;
      }
      while ( (unsigned int)v26 < 3 );
      result = (*(_BYTE *)(a1 + 35336) != 0) + 2 * v26 + 4336;
      a2 = a1 + 8 * result;
      *(_QWORD *)a2 += v8;
    }
    if ( (v22 & 0x40) != 0 )
    {
      result = *(_QWORD *)(v3 + 968);
      if ( result )
        *(_BYTE *)(result + 64) = 1;
    }
    *(_BYTE *)(a1 + 32) = 0;
    v28 = *(_QWORD *)(v3 + 360);
    if ( v28 )
    {
      v29 = *(_QWORD *)(v28 + 32);
      if ( v29 && KiHwCountersCount )
      {
        v30 = (unsigned int *)&KiHwCounters;
        v31 = (unsigned int)KiHwCountersCount;
        v32 = (_QWORD *)(v28 + 48);
        do
        {
          if ( (v29 & v9) != 0 )
          {
            v85 = __readpmc(*v30);
            a2 = (unsigned __int64)HIDWORD(v85) << 32;
            *v32 = v85;
          }
          v9 *= 2LL;
          v32 += 3;
          ++v30;
          --v31;
        }
        while ( v31 );
      }
      result = *(unsigned int *)(v28 + 16);
      if ( (result & 1) != 0 )
      {
        ++*(_DWORD *)(v28 + 20);
        result = *(unsigned __int8 *)(v3 + 643);
        *(_QWORD *)v28 |= 1LL << result;
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
        a2 = (unsigned int)result;
        LODWORD(a2) = result & 0xFFDFFFFF;
        v41 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v41 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    if ( (*(_BYTE *)(v3 + 2) & 4) == 0 )
      goto LABEL_44;
    result = *(unsigned int *)(v3 + 120);
    if ( (result & 0x800) == 0 )
    {
      if ( (result & 0x400) != 0
        || *(char *)(v3 + 195) >= 16
        || (result & 0x200) != 0
        || (result = *(_QWORD *)(v3 + 104)) == 0 )
      {
LABEL_44:
        if ( KiHgsPlusEnabled )
        {
          result = __rdtsc();
          a2 = (unsigned __int64)HIDWORD(result) << 32;
          *(_QWORD *)(v3 + 1080) = 0LL;
          *(_QWORD *)(v3 + 1072) = result;
        }
        goto LABEL_46;
      }
      CurrentPrcb = (struct _KPRCB *)(result + *(unsigned int *)(a1 + 216));
      while ( (CurrentPrcb->HalReserved[5] & 2) == 0 )
      {
        CurrentPrcb = (struct _KPRCB *)CurrentPrcb->ProcessorState.SpecialRegisters.Cr8;
        if ( !CurrentPrcb )
          goto LABEL_44;
      }
    }
    LOBYTE(SchedulerAssist) = 1;
    result = KiInsertDeferredPreemptionApc(a1, v3, SchedulerAssist);
    goto LABEL_44;
  }
  --*(_BYTE *)(a1 + 32);
  CurrentPrcb = KeGetCurrentPrcb();
  v35 = CurrentPrcb->SchedulerAssist;
  if ( v35 )
  {
    _m_prefetchw(v35);
    LODWORD(result) = *v35;
    do
    {
      a2 = (unsigned int)result;
      LODWORD(a2) = result & 0xFFDFFFFF;
      v46 = result;
      result = (unsigned int)_InterlockedCompareExchange(v35, result & 0xFFDFFFFF, result);
    }
    while ( v46 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
LABEL_46:
  if ( *(_BYTE *)(a1 + 6) )
  {
    *(_BYTE *)(a1 + 6) = 0;
    if ( v3 != *(_QWORD *)(a1 + 24) )
    {
      v93 = 0LL;
      if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
      {
        v42 = HalpDisableInterrupts(CurrentPrcb, a2, KeGetCurrentPrcb());
        v44 = *(_DWORD *)(v43 + 168);
        v45 = v42;
        *(_DWORD *)(v43 + 168) = v44 | 4;
        if ( !v44 )
          __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
        if ( v45 )
          _enable();
      }
      v92 = 5;
      return HalpInterruptSendIpi(&v92, 47LL);
    }
  }
  return result;
}
