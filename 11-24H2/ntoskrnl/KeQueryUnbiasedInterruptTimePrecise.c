/*
 * XREFs of KeQueryUnbiasedInterruptTimePrecise @ 0x140313830
 * Callers:
 *     MiDelayFaultingThread @ 0x140260C98 (MiDelayFaultingThread.c)
 *     MiPerformOnDemandLargePageCoalesce @ 0x1402640DC (MiPerformOnDemandLargePageCoalesce.c)
 *     MiAccumulateTimeBoundTime @ 0x140265384 (MiAccumulateTimeBoundTime.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x140313370 (MiProcessLargeCoalesceBitmapCandidates.c)
 *     IoDiskIoAttributionQuery @ 0x140314874 (IoDiskIoAttributionQuery.c)
 *     VmpQueryAccessedState @ 0x140399630 (VmpQueryAccessedState.c)
 *     VmpProcessInvalidateList @ 0x1404A41E8 (VmpProcessInvalidateList.c)
 *     VmAccessFault @ 0x140A042B0 (VmAccessFault.c)
 *     MiMeasureDemandCoalesceTimeBounds @ 0x140C5BC6C (MiMeasureDemandCoalesceTimeBounds.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x140314930 (HalpTimerScaleCounter.c)
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpHpetQueryCounter @ 0x1403BC400 (HalpHpetQueryCounter.c)
 *     HvlpGetRegister64 @ 0x1403BC420 (HvlpGetRegister64.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

ULONG64 __stdcall KeQueryUnbiasedInterruptTimePrecise(PULONG64 QpcTimeStamp)
{
  __int64 (__fastcall *v1)(); // rdx
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  __int64 i; // rbx
  ULONG_PTR v5; // rbp
  unsigned __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r11
  __int64 v13; // r13
  __int64 v14; // r11
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // r9d
  signed __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rcx
  _BYTE *v23; // r10
  __int64 v24; // r11
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  int v27; // r9d
  signed __int64 v28; // rdx
  __int64 v29; // r14
  __int64 v30; // r8
  __int64 v31; // rdi
  __int64 InternalData; // rax
  __int64 (__fastcall *v33)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v35; // r10
  signed __int64 v36; // rax
  int v37; // r9d
  unsigned __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 (__fastcall *v44)(_QWORD); // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // r10
  signed __int64 v47; // rax
  int v48; // r9d
  unsigned __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rcx
  unsigned __int64 v53; // r8
  signed __int32 v54[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 (__fastcall *v55)(); // [rsp+20h] [rbp-78h] BYREF
  __int64 (__fastcall *v56)(); // [rsp+28h] [rbp-70h] BYREF
  __int64 v57; // [rsp+30h] [rbp-68h]
  __int64 v58; // [rsp+38h] [rbp-60h]
  __int64 v59; // [rsp+40h] [rbp-58h]
  int v61; // [rsp+B0h] [rbp+18h] BYREF
  int v62; // [rsp+B8h] [rbp+20h]

  v1 = HalpTscQueryCounterOrdered;
  v2 = 0xFFFFF780000003B0uLL;
  v3 = 10000000LL;
  do
  {
    v57 = 0LL;
    v59 = MEMORY[0xFFFFF780000003B0];
    while ( 1 )
    {
      for ( i = MEMORY[0xFFFFF78000000340]; (MEMORY[0xFFFFF78000000340] & 1) != 0; i = MEMORY[0xFFFFF78000000340] )
        _mm_pause();
      v5 = HalpPerformanceCounter;
      v6 = MEMORY[0xFFFFF78000000350];
      v7 = MEMORY[0xFFFFF78000000008];
      if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
      {
        v8 = *(_QWORD *)(HalpPerformanceCounter + 192);
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
            v16 = *(_QWORD *)(HalpPerformanceCounter + 72)
                + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
          else
            v16 = *(_QWORD *)(HalpPerformanceCounter + 72);
          v17 = (unsigned __int64)HalpHvCounterQueryCounter;
          if ( *(__int64 (__fastcall **)())(HalpPerformanceCounter + 112) == HalpHvCounterQueryCounter )
          {
            if ( !HalpHvTimerApi )
            {
              v20 = __readmsr(0x40000020u);
              goto LABEL_33;
            }
            if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
            {
              v56 = 0LL;
              while ( 1 )
              {
                v18 = (unsigned __int64)HvlpReferenceTscPage;
                v19 = *(_DWORD *)HvlpReferenceTscPage;
                if ( !*(_DWORD *)HvlpReferenceTscPage )
                  break;
                if ( MEMORY[0xFFFFF78000000294] )
                {
                  __asm { rdtscp }
                  v62 = v16;
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
                  v18 = __rdtsc();
                  LODWORD(v17) = HIDWORD(v18);
                  v18 = (unsigned int)v18;
                  v17 = (unsigned int)v17;
                }
                v2 = *((_QWORD *)HvlpReferenceTscPage + 2);
                v17 = v2
                    + (((v18 | (v17 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
                v56 = (__int64 (__fastcall *)())v17;
                LODWORD(v16) = *(_DWORD *)HvlpReferenceTscPage;
                if ( *(_DWORD *)HvlpReferenceTscPage == v19 )
                  goto LABEL_32;
              }
              HvlpGetRegister64(589828LL, &v56);
LABEL_32:
              v20 = (signed __int64)v56;
LABEL_33:
              v21 = *(_QWORD *)(v5 + 208);
LABEL_34:
              v12 = v21 + v20;
              v3 = 10000000LL;
              goto LABEL_12;
            }
            v16 = 0LL;
          }
          v20 = guard_dispatch_icall_no_overrides(v16, HalpHvCounterQueryCounter);
          goto LABEL_33;
        }
        do
        {
          v21 = *(_QWORD *)(v5 + 208);
          do
          {
            v31 = *(_QWORD *)(v5 + 200);
            InternalData = HalpTimerGetInternalData(v5, v1, v2, v3);
            v33 = *(__int64 (__fastcall **)(_QWORD))(v5 + 112);
            if ( v33 == HalpHpetQueryCounter )
              Counter = HalpHpetQueryCounter(InternalData);
            else
              Counter = guard_dispatch_icall_no_overrides(InternalData, v33);
            v35 = Counter;
            _InterlockedOr(v54, 0);
            v36 = *(_QWORD *)(v5 + 200);
          }
          while ( v31 != v36 );
        }
        while ( v21 != *(_QWORD *)(v5 + 208) );
        v37 = *(_DWORD *)(v5 + 220);
        v38 = v31 ^ v35;
        if ( _bittest64((const __int64 *)&v38, (unsigned __int8)(v37 - 1)) )
        {
          if ( v37 == 64 )
            v40 = -1LL;
          else
            v40 = (1LL << v37) - 1;
          v41 = 0LL;
          if ( v37 != 64 )
            v41 = 1LL << v37;
          v2 = v31 & v40;
          v20 = v35 | v31 ^ v2;
          if ( v35 < v2 )
            v20 += v41;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 200), v20, v36);
        }
        else
        {
          if ( v37 == 64 )
            v39 = -1LL;
          else
            v39 = (1LL << v37) - 1;
          v20 = v35 | v31 & ~v39;
        }
        goto LABEL_34;
      }
      v8 = 10000000LL;
      if ( !HalpTimerReferencePage )
      {
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          v22 = HalpTimerGetInternalData(HalpPerformanceCounter, HalpTscQueryCounterOrdered, v2, 10000000LL);
          v25 = (unsigned __int64)HalpHvCounterQueryCounter;
          if ( *(__int64 (__fastcall **)())(v5 + 112) == HalpHvCounterQueryCounter )
          {
            if ( !HalpHvTimerApi )
            {
              v28 = __readmsr(0x40000020u);
              goto LABEL_45;
            }
            if ( HalpHvTimerApi == v24 )
            {
              v55 = 0LL;
              while ( 1 )
              {
                v26 = (unsigned __int64)HvlpReferenceTscPage;
                v27 = *(_DWORD *)HvlpReferenceTscPage;
                if ( !*(_DWORD *)HvlpReferenceTscPage )
                  break;
                if ( *v23 )
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
                  v26 = __rdtsc();
                  LODWORD(v25) = HIDWORD(v26);
                  v26 = (unsigned int)v26;
                  v25 = (unsigned int)v25;
                }
                v25 = *((_QWORD *)HvlpReferenceTscPage + 2)
                    + (((v26 | (v25 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
                v55 = (__int64 (__fastcall *)())v25;
                if ( *(_DWORD *)HvlpReferenceTscPage == v27 )
                  goto LABEL_44;
              }
              HvlpGetRegister64(589828LL, &v55);
LABEL_44:
              v28 = (signed __int64)v55;
LABEL_45:
              v29 = *(_QWORD *)(v5 + 208);
LABEL_46:
              v12 = HalpTimerScaleCounter(v29 + v28, *(_QWORD *)(v5 + 192), 10000000LL);
              v3 = (unsigned int)v2;
              goto LABEL_12;
            }
            v22 = 0LL;
          }
          v28 = guard_dispatch_icall_no_overrides(v22, HalpHvCounterQueryCounter);
          goto LABEL_45;
        }
        do
        {
          v29 = *(_QWORD *)(v5 + 208);
          do
          {
            v42 = *(_QWORD *)(v5 + 200);
            v43 = HalpTimerGetInternalData(v5, v1, v2, v3);
            v44 = *(__int64 (__fastcall **)(_QWORD))(v5 + 112);
            if ( v44 == HalpHpetQueryCounter )
              v45 = HalpHpetQueryCounter(v43);
            else
              v45 = guard_dispatch_icall_no_overrides(v43, v44);
            v46 = v45;
            _InterlockedOr(v54, 0);
            v47 = *(_QWORD *)(v5 + 200);
          }
          while ( v42 != v47 );
        }
        while ( v29 != *(_QWORD *)(v5 + 208) );
        v48 = *(_DWORD *)(v5 + 220);
        v49 = v42 ^ v46;
        if ( _bittest64((const __int64 *)&v49, (unsigned __int8)(v48 - 1)) )
        {
          if ( v48 == 64 )
            v51 = -1LL;
          else
            v51 = (1LL << v48) - 1;
          v52 = 0LL;
          if ( v48 != 64 )
            v52 = 1LL << v48;
          v53 = v42 & v51;
          v28 = v46 | v42 ^ v53;
          if ( v46 < v53 )
            v28 += v52;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 200), v28, v47);
        }
        else
        {
          if ( v48 == 64 )
            v50 = -1LL;
          else
            v50 = (1LL << v48) - 1;
          v28 = v46 | v42 & ~v50;
        }
        goto LABEL_46;
      }
      v9 = (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0
         ? *(_QWORD *)(HalpPerformanceCounter + 72) + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number
         : *(_QWORD *)(HalpPerformanceCounter + 72);
      v10 = *(_QWORD *)(HalpPerformanceCounter + 112);
      if ( (__int64 (__fastcall *)())v10 == HalpTscQueryCounterOrdered )
      {
        __asm { rdtscp }
        v2 = (unsigned __int64)&v61;
        v61 = v9;
        v11 = v10 | ((_QWORD)HalpTscQueryCounterOrdered << 32);
      }
      else
      {
        v11 = guard_dispatch_icall_no_overrides(v9, HalpTscQueryCounterOrdered);
        v3 = 10000000LL;
      }
      v12 = (((unsigned __int64)v11 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
          + MEMORY[0xFFFFF780000003B8];
LABEL_12:
      if ( v5 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
      {
        v30 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
        if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
          v30 = v3;
        v12 = HalpTimerScaleCounter(v12, v8, v30);
      }
      if ( MEMORY[0xFFFFF78000000340] == i )
        break;
      _mm_pause();
      v3 = 10000000LL;
      v1 = HalpTscQueryCounterOrdered;
    }
    v13 = v57;
    *QpcTimeStamp = v12;
    if ( v12 > v6 )
    {
      v58 = v13;
      v14 = v12 - v6 - 1;
      if ( MEMORY[0xFFFFF78000000369] )
        v14 <<= MEMORY[0xFFFFF78000000369];
      v13 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v58 = v13;
    }
    v2 = 0xFFFFF780000003B0uLL;
    v1 = HalpTscQueryCounterOrdered;
    v3 = 10000000LL;
  }
  while ( v59 != MEMORY[0xFFFFF780000003B0] );
  return v7 + v13 - v59;
}
