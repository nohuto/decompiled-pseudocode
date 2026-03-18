/*
 * XREFs of KeQueryUnbiasedInterruptTimePrecise @ 0x140309950
 * Callers:
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x140309490 (MiProcessLargeCoalesceBitmapCandidates.c)
 *     IoDiskIoAttributionQuery @ 0x14030A994 (IoDiskIoAttributionQuery.c)
 *     VmpQueryAccessedState @ 0x1403AAF1C (VmpQueryAccessedState.c)
 *     MiPerformOnDemandLargePageCoalesce @ 0x1403D5278 (MiPerformOnDemandLargePageCoalesce.c)
 *     MiAccumulateTimeBoundTime @ 0x1403D6238 (MiAccumulateTimeBoundTime.c)
 *     MiDelayFaultingThread @ 0x14048F028 (MiDelayFaultingThread.c)
 *     VmpProcessInvalidateList @ 0x1404A9F18 (VmpProcessInvalidateList.c)
 *     VmAccessFault @ 0x140A07D80 (VmAccessFault.c)
 *     MiMeasureDemandCoalesceTimeBounds @ 0x140C59ADC (MiMeasureDemandCoalesceTimeBounds.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x14030AA50 (HalpTimerScaleCounter.c)
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpHpetQueryCounter @ 0x1403D6DB0 (HalpHpetQueryCounter.c)
 *     HvlpGetRegister64 @ 0x1403D6DD0 (HvlpGetRegister64.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v23; // r8
  __int64 v24; // r9
  _BYTE *v25; // r10
  __int64 v26; // r11
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  int v29; // r9d
  signed __int64 v30; // rdx
  __int64 v31; // r14
  __int64 v32; // r8
  __int64 v33; // rdi
  __int64 InternalData; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 (__fastcall *v37)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v39; // r10
  signed __int64 v40; // rax
  int v41; // r9d
  unsigned __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 (__fastcall *v50)(_QWORD); // rdx
  __int64 v51; // rax
  unsigned __int64 v52; // r10
  signed __int64 v53; // rax
  int v54; // r9d
  unsigned __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rcx
  unsigned __int64 v59; // r8
  signed __int32 v60[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 (__fastcall *v61)(); // [rsp+20h] [rbp-78h] BYREF
  __int64 (__fastcall *v62)(); // [rsp+28h] [rbp-70h] BYREF
  __int64 v63; // [rsp+30h] [rbp-68h]
  __int64 v64; // [rsp+38h] [rbp-60h]
  __int64 v65; // [rsp+40h] [rbp-58h]
  int v67; // [rsp+B0h] [rbp+18h] BYREF
  int v68; // [rsp+B8h] [rbp+20h]

  v1 = HalpTscQueryCounterOrdered;
  v2 = 0xFFFFF780000003B0uLL;
  v3 = 10000000LL;
  do
  {
    v63 = 0LL;
    v65 = MEMORY[0xFFFFF780000003B0];
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
              v62 = 0LL;
              while ( 1 )
              {
                v18 = (unsigned __int64)HvlpReferenceTscPage;
                v19 = *(_DWORD *)HvlpReferenceTscPage;
                if ( !*(_DWORD *)HvlpReferenceTscPage )
                  break;
                if ( MEMORY[0xFFFFF78000000294] )
                {
                  __asm { rdtscp }
                  v68 = v16;
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
                v62 = (__int64 (__fastcall *)())v17;
                LODWORD(v16) = *(_DWORD *)HvlpReferenceTscPage;
                if ( *(_DWORD *)HvlpReferenceTscPage == v19 )
                  goto LABEL_32;
              }
              HvlpGetRegister64(589828LL, &v62, v2);
LABEL_32:
              v20 = (signed __int64)v62;
LABEL_33:
              v21 = *(_QWORD *)(v5 + 208);
LABEL_34:
              v12 = v21 + v20;
              v3 = 10000000LL;
              goto LABEL_12;
            }
            v16 = 0LL;
          }
          v20 = guard_dispatch_icall_no_overrides(v16, HalpHvCounterQueryCounter, v2, 10000000LL);
          goto LABEL_33;
        }
        do
        {
          v21 = *(_QWORD *)(v5 + 208);
          do
          {
            v33 = *(_QWORD *)(v5 + 200);
            InternalData = HalpTimerGetInternalData(v5, v1, v2, v3);
            v37 = *(__int64 (__fastcall **)(_QWORD))(v5 + 112);
            if ( v37 == HalpHpetQueryCounter )
              Counter = HalpHpetQueryCounter(InternalData);
            else
              Counter = guard_dispatch_icall_no_overrides(InternalData, v37, v35, v36);
            v39 = Counter;
            _InterlockedOr(v60, 0);
            v40 = *(_QWORD *)(v5 + 200);
          }
          while ( v33 != v40 );
        }
        while ( v21 != *(_QWORD *)(v5 + 208) );
        v41 = *(_DWORD *)(v5 + 220);
        v42 = v33 ^ v39;
        if ( _bittest64((const __int64 *)&v42, (unsigned __int8)(v41 - 1)) )
        {
          if ( v41 == 64 )
            v44 = -1LL;
          else
            v44 = (1LL << v41) - 1;
          v45 = 0LL;
          if ( v41 != 64 )
            v45 = 1LL << v41;
          v2 = v33 & v44;
          v20 = v39 | v33 ^ v2;
          if ( v39 < v2 )
            v20 += v45;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 200), v20, v40);
        }
        else
        {
          if ( v41 == 64 )
            v43 = -1LL;
          else
            v43 = (1LL << v41) - 1;
          v20 = v39 | v33 & ~v43;
        }
        goto LABEL_34;
      }
      v8 = 10000000LL;
      if ( !HalpTimerReferencePage )
      {
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          v22 = HalpTimerGetInternalData(HalpPerformanceCounter, HalpTscQueryCounterOrdered, v2, 10000000LL);
          v27 = (unsigned __int64)HalpHvCounterQueryCounter;
          if ( *(__int64 (__fastcall **)())(v5 + 112) == HalpHvCounterQueryCounter )
          {
            if ( !HalpHvTimerApi )
            {
              v30 = __readmsr(0x40000020u);
              goto LABEL_45;
            }
            if ( HalpHvTimerApi == v26 )
            {
              v61 = 0LL;
              while ( 1 )
              {
                v28 = (unsigned __int64)HvlpReferenceTscPage;
                v29 = *(_DWORD *)HvlpReferenceTscPage;
                if ( !*(_DWORD *)HvlpReferenceTscPage )
                  break;
                if ( *v25 )
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
                  v28 = __rdtsc();
                  LODWORD(v27) = HIDWORD(v28);
                  v28 = (unsigned int)v28;
                  v27 = (unsigned int)v27;
                }
                v23 = *((_QWORD *)HvlpReferenceTscPage + 2);
                v27 = v23
                    + (((v28 | (v27 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
                v61 = (__int64 (__fastcall *)())v27;
                if ( *(_DWORD *)HvlpReferenceTscPage == v29 )
                  goto LABEL_44;
              }
              HvlpGetRegister64(589828LL, &v61, v23);
LABEL_44:
              v30 = (signed __int64)v61;
LABEL_45:
              v31 = *(_QWORD *)(v5 + 208);
LABEL_46:
              v12 = HalpTimerScaleCounter(v31 + v30, *(_QWORD *)(v5 + 192), 10000000LL);
              v3 = (unsigned int)v2;
              goto LABEL_12;
            }
            v22 = 0LL;
          }
          v30 = guard_dispatch_icall_no_overrides(v22, HalpHvCounterQueryCounter, v23, v24);
          goto LABEL_45;
        }
        do
        {
          v31 = *(_QWORD *)(v5 + 208);
          do
          {
            v46 = *(_QWORD *)(v5 + 200);
            v47 = HalpTimerGetInternalData(v5, v1, v2, v3);
            v50 = *(__int64 (__fastcall **)(_QWORD))(v5 + 112);
            if ( v50 == HalpHpetQueryCounter )
              v51 = HalpHpetQueryCounter(v47);
            else
              v51 = guard_dispatch_icall_no_overrides(v47, v50, v48, v49);
            v52 = v51;
            _InterlockedOr(v60, 0);
            v53 = *(_QWORD *)(v5 + 200);
          }
          while ( v46 != v53 );
        }
        while ( v31 != *(_QWORD *)(v5 + 208) );
        v54 = *(_DWORD *)(v5 + 220);
        v55 = v46 ^ v52;
        if ( _bittest64((const __int64 *)&v55, (unsigned __int8)(v54 - 1)) )
        {
          if ( v54 == 64 )
            v57 = -1LL;
          else
            v57 = (1LL << v54) - 1;
          v58 = 0LL;
          if ( v54 != 64 )
            v58 = 1LL << v54;
          v59 = v46 & v57;
          v30 = v52 | v46 ^ v59;
          if ( v52 < v59 )
            v30 += v58;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 200), v30, v53);
        }
        else
        {
          if ( v54 == 64 )
            v56 = -1LL;
          else
            v56 = (1LL << v54) - 1;
          v30 = v52 | v46 & ~v56;
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
        v2 = (unsigned __int64)&v67;
        v67 = v9;
        v11 = v10 | ((_QWORD)HalpTscQueryCounterOrdered << 32);
      }
      else
      {
        v11 = guard_dispatch_icall_no_overrides(v9, HalpTscQueryCounterOrdered, v2, 10000000LL);
        v3 = 10000000LL;
      }
      v12 = (((unsigned __int64)v11 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
          + MEMORY[0xFFFFF780000003B8];
LABEL_12:
      if ( v5 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
      {
        v32 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
        if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
          v32 = v3;
        v12 = HalpTimerScaleCounter(v12, v8, v32);
      }
      if ( MEMORY[0xFFFFF78000000340] == i )
        break;
      _mm_pause();
      v3 = 10000000LL;
      v1 = HalpTscQueryCounterOrdered;
    }
    v13 = v63;
    *QpcTimeStamp = v12;
    if ( v12 > v6 )
    {
      v64 = v13;
      v14 = v12 - v6 - 1;
      if ( MEMORY[0xFFFFF78000000369] )
        v14 <<= MEMORY[0xFFFFF78000000369];
      v13 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v64 = v13;
    }
    v2 = 0xFFFFF780000003B0uLL;
    v1 = HalpTscQueryCounterOrdered;
    v3 = 10000000LL;
  }
  while ( v65 != MEMORY[0xFFFFF780000003B0] );
  return v7 + v13 - v65;
}
