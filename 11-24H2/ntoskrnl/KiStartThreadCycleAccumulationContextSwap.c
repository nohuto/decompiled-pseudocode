/*
 * XREFs of KiStartThreadCycleAccumulationContextSwap @ 0x1402DAC90
 * Callers:
 *     SwapContext @ 0x1406B3AE0 (SwapContext.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     KiInsertDeferredPreemptionApc @ 0x1402DB968 (KiInsertDeferredPreemptionApc.c)
 *     HalpTimerScaleCounter @ 0x140314930 (HalpTimerScaleCounter.c)
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpHpetQueryCounter @ 0x1403BC400 (HalpHpetQueryCounter.c)
 *     HvlpGetRegister64 @ 0x1403BC420 (HvlpGetRegister64.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiStartThreadCycleAccumulationContextSwap(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // r12
  __int64 v8; // r11
  __int64 v9; // r15
  ULONG_PTR v10; // r13
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // cl
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int128 v21; // rax
  int v22; // edx
  __int64 result; // rax
  char v24; // r9
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned int v27; // r8d
  __int64 v28; // rcx
  unsigned __int16 *v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rbx
  unsigned int *v32; // r9
  __int64 v33; // r11
  _QWORD *v34; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v37; // rcx
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // r8
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  int v43; // r9d
  __int64 v44; // rdx
  int v45; // ett
  bool v46; // al
  __int64 v47; // r8
  int v48; // edx
  bool v49; // r9
  int v50; // ett
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned __int64 v54; // rax
  int v55; // r9d
  signed __int64 v56; // rdx
  __int64 v57; // r12
  __int64 v58; // r8
  __int64 v59; // rdi
  __int64 InternalData; // rax
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
  __int64 (__fastcall *v74)(_QWORD); // rdx
  __int64 v75; // rax
  unsigned __int64 v76; // r10
  signed __int64 v77; // rax
  int v78; // r9d
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // rcx
  unsigned __int64 v82; // r8
  signed __int32 v83[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 (__fastcall *v84)(); // [rsp+20h] [rbp-48h] BYREF
  __int64 v85; // [rsp+28h] [rbp-40h]
  unsigned __int64 v86; // [rsp+30h] [rbp-38h]
  __int64 v87; // [rsp+38h] [rbp-30h]
  __int64 v88; // [rsp+40h] [rbp-28h]
  unsigned int v89; // [rsp+48h] [rbp-20h] BYREF
  __int128 v90; // [rsp+4Ch] [rbp-1Ch]
  __int64 (__fastcall *v91)(); // [rsp+C8h] [rbp+60h] BYREF

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
        v87 = *(_QWORD *)(v10 + 208);
        do
        {
          v59 = *(_QWORD *)(v10 + 200);
          InternalData = HalpTimerGetInternalData(v10, a2, a3, v11);
          v61 = *(__int64 (__fastcall **)(_QWORD))(v10 + 112);
          if ( v61 == HalpHpetQueryCounter )
            Counter = HalpHpetQueryCounter(InternalData);
          else
            Counter = guard_dispatch_icall_no_overrides(InternalData, v61);
          v63 = Counter;
          _InterlockedOr(v83, 0);
          v64 = *(_QWORD *)(v10 + 200);
        }
        while ( v59 != v64 );
        v65 = v87;
      }
      while ( v87 != *(_QWORD *)(v10 + 208) );
      v66 = *(_DWORD *)(v10 + 220);
      if ( ((v59 ^ v63) & (1LL << ((unsigned __int8)v66 - 1))) != 0 )
      {
        if ( v66 == 64 )
          v68 = -1LL;
        else
          v68 = (1LL << v66) - 1;
        v69 = 0LL;
        if ( v66 != 64 )
          v69 = 1LL << v66;
        v70 = v59 & v68;
        v71 = v63 | v59 ^ v70;
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
        v5 = v87 + (v63 | v59 & ~v67);
      }
      goto LABEL_9;
    }
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v40 = *(_QWORD *)(HalpPerformanceCounter + 72)
          + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
    else
      v40 = *(_QWORD *)(HalpPerformanceCounter + 72);
    v41 = *(_QWORD *)(HalpPerformanceCounter + 112);
    if ( (__int64 (__fastcall *)())v41 == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v44 = __readmsr(0x40000020u);
LABEL_71:
        v5 = *(_QWORD *)(v10 + 208) + v44;
        goto LABEL_9;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v84 = 0LL;
        while ( 1 )
        {
          v42 = (unsigned __int64)HvlpReferenceTscPage;
          v43 = *(_DWORD *)HvlpReferenceTscPage;
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
            v42 = __rdtsc();
            LODWORD(v41) = HIDWORD(v42);
            v42 = (unsigned int)v42;
            v41 = (unsigned int)v41;
          }
          v41 = *((_QWORD *)HvlpReferenceTscPage + 2)
              + (((v42 | (v41 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v84 = (__int64 (__fastcall *)())v41;
          if ( *(_DWORD *)HvlpReferenceTscPage == v43 )
            goto LABEL_70;
        }
        HvlpGetRegister64(589828LL, &v84);
LABEL_70:
        v44 = (__int64)v84;
        goto LABEL_71;
      }
      v40 = 0LL;
    }
    v44 = guard_dispatch_icall_no_overrides(v40, v41);
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
      v15 = guard_dispatch_icall_no_overrides(v13, HalpTscQueryCounterOrdered);
    }
    v5 = (((unsigned __int64)v15 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
       + MEMORY[0xFFFFF780000003B8];
    goto LABEL_9;
  }
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
  {
    do
    {
      v87 = *(_QWORD *)(v10 + 208);
      do
      {
        v72 = *(_QWORD *)(v10 + 200);
        v73 = HalpTimerGetInternalData(v10, a2, a3, v11);
        v74 = *(__int64 (__fastcall **)(_QWORD))(v10 + 112);
        if ( v74 == HalpHpetQueryCounter )
          v75 = HalpHpetQueryCounter(v73);
        else
          v75 = guard_dispatch_icall_no_overrides(v73, v74);
        v76 = v75;
        _InterlockedOr(v83, 0);
        v77 = *(_QWORD *)(v10 + 200);
      }
      while ( v72 != v77 );
      v57 = v87;
    }
    while ( v87 != *(_QWORD *)(v10 + 208) );
    v78 = *(_DWORD *)(v10 + 220);
    if ( ((v72 ^ v76) & (1LL << ((unsigned __int8)v78 - 1))) != 0 )
    {
      if ( v78 == 64 )
        v80 = -1LL;
      else
        v80 = (1LL << v78) - 1;
      v81 = 0LL;
      if ( v78 != 64 )
        v81 = 1LL << v78;
      v82 = v72 & v80;
      v56 = v76 | v72 ^ v82;
      if ( v76 < v82 )
        v56 += v81;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 200), v56, v77);
    }
    else
    {
      if ( v78 == 64 )
        v79 = -1LL;
      else
        v79 = (1LL << v78) - 1;
      v56 = v76 | v72 & ~v79;
    }
    goto LABEL_100;
  }
  v51 = HalpTimerGetInternalData(HalpPerformanceCounter, a2, a3, 10000000LL);
  v52 = *(_QWORD *)(v10 + 112);
  v53 = v51;
  if ( (__int64 (__fastcall *)())v52 != HalpHvCounterQueryCounter )
  {
LABEL_158:
    v56 = guard_dispatch_icall_no_overrides(v53, v52);
    goto LABEL_99;
  }
  if ( HalpHvTimerApi )
  {
    if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
    {
      v91 = 0LL;
      while ( 1 )
      {
        v54 = (unsigned __int64)HvlpReferenceTscPage;
        v55 = *(_DWORD *)HvlpReferenceTscPage;
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
          v54 = __rdtsc();
          LODWORD(v52) = HIDWORD(v54);
          v54 = (unsigned int)v54;
          v52 = (unsigned int)v52;
        }
        v52 = *((_QWORD *)HvlpReferenceTscPage + 2)
            + (((v54 | (v52 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
        v91 = (__int64 (__fastcall *)())v52;
        if ( *(_DWORD *)HvlpReferenceTscPage == v55 )
          goto LABEL_98;
      }
      HvlpGetRegister64(589828LL, &v91);
LABEL_98:
      v56 = (signed __int64)v91;
      goto LABEL_99;
    }
    v53 = 0LL;
    goto LABEL_158;
  }
  v56 = __readmsr(0x40000020u);
LABEL_99:
  v57 = *(_QWORD *)(v10 + 208);
LABEL_100:
  v5 = HalpTimerScaleCounter(v57 + v56, *(_QWORD *)(v10 + 192), 10000000LL);
LABEL_9:
  if ( v10 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v58 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v58 = 10000000LL;
    v5 = HalpTimerScaleCounter(v5, v12, v58);
  }
  v16 = *(_BYTE *)(a1 + 172);
  v17 = *(_QWORD *)(a1 + 176);
  v18 = v5;
  v88 = 0LL;
  if ( v16 )
    v18 = v5 << v16;
  v6 = ((unsigned __int64)v18 * (unsigned __int128)v17) >> 64;
  v88 = v6;
  v19 = *(_QWORD *)(a1 + 34552);
  v8 = v6 - *(_QWORD *)(a1 + 34432);
  v7 = v5 - v19;
  if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
  {
    v85 = 0LL;
    v86 = 0LL;
    v20 = v5;
    if ( MEMORY[0xFFFFF78000000369] )
    {
      v21 = (v19 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      v20 = v5 << MEMORY[0xFFFFF78000000369];
    }
    else
    {
      v21 = v19 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    }
    v85 = *((_QWORD *)&v21 + 1);
    v86 = ((unsigned __int64)v20 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
    v22 = ((unsigned __int64)((v86 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
        - ((unsigned __int64)((*((unsigned __int64 *)&v21 + 1)
                             * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
    if ( v22 )
    {
      *(_DWORD *)(a1 + 34372) += v22;
      *(_DWORD *)(a1 + 34384) += v22;
    }
  }
LABEL_18:
  *(_QWORD *)(a1 + 34560) += v7;
  result = v8 + *(_QWORD *)(a1 + 34680);
  *(_QWORD *)(a1 + 34680) = result;
  *(_QWORD *)(a1 + 34552) = v5;
  *(_QWORD *)(a1 + 34432) = v6;
  v24 = *(_BYTE *)(a2 + 2);
  if ( (v24 & 0xB6) != 0 )
  {
    if ( (v24 & 0x20) != 0 )
    {
      v25 = *(_QWORD *)(a1 + 35248);
      v26 = *(_QWORD *)(a1 + 35256);
      if ( v25 && v26 )
      {
        if ( *(_BYTE *)(v26 + 112) )
        {
          v27 = *(_DWORD *)(v26 + 132);
        }
        else
        {
          v27 = *(_DWORD *)(v26 + 80);
          if ( v27 >= *(_DWORD *)(v25 + 528) )
            v27 = *(_DWORD *)(v25 + 528);
        }
      }
      else
      {
        v27 = 100;
      }
      v28 = 0LL;
      v29 = (unsigned __int16 *)(a1 + 35434);
      do
      {
        if ( v27 <= *v29 )
          break;
        v28 = (unsigned int)(v28 + 1);
        ++v29;
      }
      while ( (unsigned int)v28 < 3 );
      result = (*(_BYTE *)(a1 + 35336) != 0) + 2 * v28 + 4336;
      *(_QWORD *)(a1 + 8 * result) += v8;
    }
    if ( (v24 & 0x40) != 0 )
    {
      result = *(_QWORD *)(a2 + 968);
      if ( result )
        *(_BYTE *)(result + 64) = 1;
    }
    *(_BYTE *)(a1 + 32) = 0;
    v30 = *(_QWORD *)(a2 + 360);
    if ( v30 )
    {
      v31 = *(_QWORD *)(v30 + 32);
      if ( v31 && KiHwCountersCount )
      {
        v32 = (unsigned int *)&KiHwCounters;
        v33 = (unsigned int)KiHwCountersCount;
        v34 = (_QWORD *)(v30 + 48);
        do
        {
          if ( (v31 & v9) != 0 )
            *v34 = __readpmc(*v32);
          v9 *= 2LL;
          v34 += 3;
          ++v32;
          --v33;
        }
        while ( v33 );
      }
      result = *(unsigned int *)(v30 + 16);
      if ( (result & 1) != 0 )
      {
        ++*(_DWORD *)(v30 + 20);
        result = *(unsigned __int8 *)(a2 + 643);
        *(_QWORD *)v30 |= 1LL << result;
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
        v45 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v45 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    if ( (*(_BYTE *)(a2 + 2) & 4) == 0 )
      goto LABEL_44;
    result = *(unsigned int *)(a2 + 120);
    if ( (result & 0x800) == 0 )
    {
      if ( (result & 0x400) != 0
        || *(char *)(a2 + 195) >= 16
        || (result & 0x200) != 0
        || (result = *(_QWORD *)(a2 + 104)) == 0 )
      {
LABEL_44:
        if ( KiHgsPlusEnabled )
        {
          result = __rdtsc();
          *(_QWORD *)(a2 + 1080) = 0LL;
          *(_QWORD *)(a2 + 1072) = result;
        }
        goto LABEL_46;
      }
      v37 = result + *(unsigned int *)(a1 + 216);
      while ( (*(_BYTE *)(v37 + 112) & 2) == 0 )
      {
        v37 = *(_QWORD *)(v37 + 416);
        if ( !v37 )
          goto LABEL_44;
      }
    }
    LOBYTE(SchedulerAssist) = 1;
    result = KiInsertDeferredPreemptionApc(a1, a2, SchedulerAssist);
    goto LABEL_44;
  }
  --*(_BYTE *)(a1 + 32);
  v38 = KeGetCurrentPrcb();
  v39 = v38->SchedulerAssist;
  if ( v39 )
  {
    _m_prefetchw(v39);
    LODWORD(result) = *v39;
    do
    {
      v50 = result;
      result = (unsigned int)_InterlockedCompareExchange(v39, result & 0xFFDFFFFF, result);
    }
    while ( v50 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick((__int64)v38);
  }
  _enable();
LABEL_46:
  if ( *(_BYTE *)(a1 + 6) )
  {
    *(_BYTE *)(a1 + 6) = 0;
    if ( a2 != *(_QWORD *)(a1 + 24) )
    {
      v90 = 0LL;
      if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
      {
        v46 = HalpDisableInterrupts();
        v48 = *(_DWORD *)(v47 + 168);
        v49 = v46;
        *(_DWORD *)(v47 + 168) = v48 | 4;
        if ( !v48 )
          __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
        if ( v49 )
          _enable();
      }
      v89 = 5;
      return HalpInterruptSendIpi(&v89, 0x2Fu);
    }
  }
  return result;
}
