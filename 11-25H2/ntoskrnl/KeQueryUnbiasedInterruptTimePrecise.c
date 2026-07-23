/*
 * XREFs of KeQueryUnbiasedInterruptTimePrecise @ 0x14034FFA0
 * Callers:
 *     MiPerformOnDemandLargePageCoalesce @ 0x140223AC0 (MiPerformOnDemandLargePageCoalesce.c)
 *     VmpProcessInvalidateList @ 0x14026F09C (VmpProcessInvalidateList.c)
 *     IoDiskIoAttributionQuery @ 0x14034F130 (IoDiskIoAttributionQuery.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x14034F7E0 (MiProcessLargeCoalesceBitmapCandidates.c)
 *     MiDelayFaultingThread @ 0x1403BF998 (MiDelayFaultingThread.c)
 *     VmpQueryAccessedState @ 0x14042B094 (VmpQueryAccessedState.c)
 *     MiAccumulateTimeBoundTime @ 0x1404CD478 (MiAccumulateTimeBoundTime.c)
 *     VmAccessFault @ 0x140A05C20 (VmAccessFault.c)
 *     MiMeasureDemandCoalesceTimeBounds @ 0x140C487AC (MiMeasureDemandCoalesceTimeBounds.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x14028EF68 (HalpTimerScaleCounter.c)
 *     HvlpGetRegister64 @ 0x14028FB00 (HvlpGetRegister64.c)
 *     HalpHpetQueryCounter @ 0x140350770 (HalpHpetQueryCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

ULONG64 __stdcall KeQueryUnbiasedInterruptTimePrecise(PULONG64 QpcTimeStamp)
{
  signed __int64 v1; // rdx
  __int64 i; // rbx
  __int64 v3; // rbp
  unsigned __int64 v4; // r15
  __int64 v5; // r12
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  int v9; // r9d
  signed __int64 v10; // rdx
  __int64 v11; // r14
  unsigned __int64 v12; // r11
  __int64 v13; // r13
  __int64 v14; // r11
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(__int64, __int64); // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 InternalData; // rax
  __int64 (__fastcall *v21)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v23; // r10
  signed __int64 v24; // rax
  int v25; // r9d
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  signed __int64 v31; // rdx
  __int64 v32; // rcx
  _BYTE *v33; // r8
  __int64 v34; // r9
  __int64 v35; // r10
  unsigned __int64 v36; // rax
  int v37; // r9d
  signed __int64 v38; // rdx
  __int64 v39; // r14
  __int64 v40; // r8
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 (__fastcall *v43)(_QWORD); // rdx
  __int64 v44; // rax
  unsigned __int64 v45; // r10
  signed __int64 v46; // rax
  int v47; // r9d
  unsigned __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rcx
  unsigned __int64 v52; // r8
  signed __int32 v53[8]; // [rsp+0h] [rbp-98h] BYREF
  signed __int64 v54; // [rsp+20h] [rbp-78h] BYREF
  signed __int64 v55; // [rsp+28h] [rbp-70h] BYREF
  __int64 v56; // [rsp+30h] [rbp-68h]
  __int64 v57; // [rsp+38h] [rbp-60h]
  __int64 v58; // [rsp+40h] [rbp-58h]

  v1 = 0LL;
  do
  {
    v58 = MEMORY[0xFFFFF780000003B0];
    v56 = 0LL;
    while ( 1 )
    {
      for ( i = MEMORY[0xFFFFF78000000340]; (MEMORY[0xFFFFF78000000340] & 1) != 0; i = MEMORY[0xFFFFF78000000340] )
        _mm_pause();
      v3 = HalpPerformanceCounter;
      v4 = MEMORY[0xFFFFF78000000350];
      v5 = MEMORY[0xFFFFF78000000008];
      if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
      {
        v6 = *(_QWORD *)(HalpPerformanceCounter + 192);
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
            v7 = *(_QWORD *)(HalpPerformanceCounter + 72)
               + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
          else
            v7 = *(_QWORD *)(HalpPerformanceCounter + 72);
          if ( *(__int64 (__fastcall **)(__int64, __int64))(HalpPerformanceCounter + 112) == HalpHvCounterQueryCounter )
          {
            if ( !HalpHvTimerApi )
            {
              v10 = __readmsr(0x40000020u);
              goto LABEL_18;
            }
            if ( (__int64 (__fastcall *)(_QWORD))HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
            {
              v55 = 0LL;
              while ( 1 )
              {
                v8 = (unsigned __int64)HvlpReferenceTscPage;
                v9 = *(_DWORD *)HvlpReferenceTscPage;
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
                  v8 = __rdtsc();
                  LODWORD(v1) = HIDWORD(v8);
                  v8 = (unsigned int)v8;
                  v1 = (unsigned int)v1;
                }
                v1 = *((_QWORD *)HvlpReferenceTscPage + 2)
                   + (((v8 | (v1 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
                v55 = v1;
                if ( *(_DWORD *)HvlpReferenceTscPage == v9 )
                  goto LABEL_17;
              }
              HvlpGetRegister64(589828, &v55);
LABEL_17:
              v10 = v55;
LABEL_18:
              v11 = *(_QWORD *)(v3 + 208);
LABEL_19:
              v12 = v11 + v10;
              goto LABEL_20;
            }
            v7 = 0LL;
          }
          v10 = guard_dispatch_icall_no_overrides(v7, 0LL);
          goto LABEL_18;
        }
        do
        {
          v11 = *(_QWORD *)(v3 + 208);
          do
          {
            v19 = *(_QWORD *)(v3 + 200);
            InternalData = HalpTimerGetInternalData(v3);
            v21 = *(__int64 (__fastcall **)(_QWORD))(v3 + 112);
            if ( v21 == HalpHpetQueryCounter )
              Counter = HalpHpetQueryCounter(InternalData);
            else
              Counter = guard_dispatch_icall_no_overrides(InternalData, v21);
            v23 = Counter;
            _InterlockedOr(v53, 0);
            v24 = *(_QWORD *)(v3 + 200);
          }
          while ( v19 != v24 );
        }
        while ( v11 != *(_QWORD *)(v3 + 208) );
        v25 = *(_DWORD *)(v3 + 220);
        v26 = v19 ^ v23;
        if ( _bittest64((const __int64 *)&v26, (unsigned __int8)(v25 - 1)) )
        {
          if ( v25 == 64 )
            v28 = -1LL;
          else
            v28 = (1LL << v25) - 1;
          v29 = 0LL;
          if ( v25 != 64 )
            v29 = 1LL << v25;
          v30 = v19 & v28;
          v10 = v23 | v19 ^ v30;
          if ( v23 < v30 )
            v10 += v29;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 200), v10, v24);
        }
        else
        {
          if ( v25 == 64 )
            v27 = -1LL;
          else
            v27 = (1LL << v25) - 1;
          v10 = v23 | v19 & ~v27;
        }
        goto LABEL_19;
      }
      v6 = 10000000LL;
      if ( !HalpTimerReferencePage )
      {
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          v32 = HalpTimerGetInternalData(HalpPerformanceCounter);
          if ( *(_QWORD *)(v3 + 112) == v35 )
          {
            if ( !HalpHvTimerApi )
            {
              v38 = __readmsr(0x40000020u);
              goto LABEL_65;
            }
            if ( HalpHvTimerApi == v34 )
            {
              v54 = v31;
              while ( 1 )
              {
                v36 = (unsigned __int64)HvlpReferenceTscPage;
                v37 = *(_DWORD *)HvlpReferenceTscPage;
                if ( !*(_DWORD *)HvlpReferenceTscPage )
                  break;
                if ( *v33 )
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
                  v36 = __rdtsc();
                  LODWORD(v31) = HIDWORD(v36);
                  v36 = (unsigned int)v36;
                  v31 = (unsigned int)v31;
                }
                v31 = *((_QWORD *)HvlpReferenceTscPage + 2)
                    + (((v36 | (v31 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
                v54 = v31;
                if ( *(_DWORD *)HvlpReferenceTscPage == v37 )
                  goto LABEL_64;
                v33 = (_BYTE *)0xFFFFF78000000294LL;
              }
              HvlpGetRegister64(589828, &v54);
LABEL_64:
              v38 = v54;
LABEL_65:
              v39 = *(_QWORD *)(v3 + 208);
LABEL_66:
              v12 = HalpTimerScaleCounter(v39 + v38, *(_QWORD *)(v3 + 192), 10000000LL);
              goto LABEL_20;
            }
            v32 = 0LL;
          }
          v38 = guard_dispatch_icall_no_overrides(v32, v31);
          goto LABEL_65;
        }
        do
        {
          v39 = *(_QWORD *)(v3 + 208);
          do
          {
            v41 = *(_QWORD *)(v3 + 200);
            v42 = HalpTimerGetInternalData(v3);
            v43 = *(__int64 (__fastcall **)(_QWORD))(v3 + 112);
            if ( v43 == HalpHpetQueryCounter )
              v44 = HalpHpetQueryCounter(v42);
            else
              v44 = guard_dispatch_icall_no_overrides(v42, v43);
            v45 = v44;
            _InterlockedOr(v53, 0);
            v46 = *(_QWORD *)(v3 + 200);
          }
          while ( v41 != v46 );
        }
        while ( v39 != *(_QWORD *)(v3 + 208) );
        v47 = *(_DWORD *)(v3 + 220);
        v48 = v41 ^ v45;
        if ( _bittest64((const __int64 *)&v48, (unsigned __int8)(v47 - 1)) )
        {
          if ( v47 == 64 )
            v50 = -1LL;
          else
            v50 = (1LL << v47) - 1;
          v51 = 0LL;
          if ( v47 != 64 )
            v51 = 1LL << v47;
          v52 = v41 & v50;
          v38 = v45 | v41 ^ v52;
          if ( v45 < v52 )
            v38 += v51;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 200), v38, v46);
        }
        else
        {
          if ( v47 == 64 )
            v49 = -1LL;
          else
            v49 = (1LL << v47) - 1;
          v38 = v45 | v41 & ~v49;
        }
        goto LABEL_66;
      }
      v16 = (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0
          ? *(_QWORD *)(HalpPerformanceCounter + 72)
          + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number
          : *(_QWORD *)(HalpPerformanceCounter + 72);
      v17 = *(__int64 (__fastcall **)(__int64, __int64))(HalpPerformanceCounter + 112);
      if ( v17 == HalpTscQueryCounterOrdered )
      {
        __asm { rdtscp }
        v18 = (unsigned __int64)v17 | ((_QWORD)HalpTscQueryCounterOrdered << 32);
      }
      else
      {
        v18 = guard_dispatch_icall_no_overrides(v16, HalpTscQueryCounterOrdered);
      }
      v12 = (((unsigned __int64)v18 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
          + MEMORY[0xFFFFF780000003B8];
LABEL_20:
      if ( v3 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
      {
        v40 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
        if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
          v40 = 10000000LL;
        v12 = HalpTimerScaleCounter(v12, v6, v40);
      }
      if ( MEMORY[0xFFFFF78000000340] == i )
        break;
      _mm_pause();
      v1 = 0LL;
    }
    v13 = v56;
    *QpcTimeStamp = v12;
    if ( v12 > v4 )
    {
      v57 = 0LL;
      v14 = v12 - v4 - 1;
      if ( MEMORY[0xFFFFF78000000369] )
        v14 <<= MEMORY[0xFFFFF78000000369];
      v13 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v57 = v13;
    }
    v1 = 0LL;
  }
  while ( v58 != MEMORY[0xFFFFF780000003B0] );
  return v5 + v13 - v58;
}
