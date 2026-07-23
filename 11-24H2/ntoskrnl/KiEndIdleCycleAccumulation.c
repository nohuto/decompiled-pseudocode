/*
 * XREFs of KiEndIdleCycleAccumulation @ 0x14036AA80
 * Callers:
 *     KiIdleLoop @ 0x1406ACBD0 (KiIdleLoop.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x140314930 (HalpTimerScaleCounter.c)
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     KiEndCounterAccumulation @ 0x14036AA0C (KiEndCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x14036CDAC (KiUpdateThreadHgsFeedback.c)
 *     HalpHpetQueryCounter @ 0x1403BC400 (HalpHpetQueryCounter.c)
 *     HvlpGetRegister64 @ 0x1403BC420 (HvlpGetRegister64.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KiEndIdleCycleAccumulation(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 v3; // r14
  unsigned __int64 v5; // r11
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // r13
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rdx
  char v13; // cl
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int128 v18; // rax
  int v19; // r8d
  unsigned __int64 v20; // rcx
  char v21; // bl
  unsigned int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // edx
  unsigned int v30; // r9d
  unsigned __int16 *v31; // rcx
  char v32; // r10
  __int64 v33; // rdx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  int v36; // ecx
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  int v44; // r9d
  __int64 v45; // rdx
  __int64 v46; // rax
  char *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  int v51; // r9d
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  int v56; // r9d
  signed __int64 v57; // rdx
  __int64 v58; // r11
  __int64 v59; // r8
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 (__fastcall *v62)(_QWORD); // rdx
  __int64 v63; // rax
  unsigned __int64 v64; // r11
  signed __int64 v65; // rax
  __int64 v66; // r8
  int v67; // r10d
  __int64 v68; // rdx
  __int64 v69; // r9
  __int64 v70; // rcx
  unsigned __int64 v71; // r9
  signed __int64 v72; // rdx
  __int64 v73; // rdi
  __int64 InternalData; // rax
  __int64 (__fastcall *v75)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v77; // r10
  signed __int64 v78; // rax
  int v79; // r8d
  __int64 v80; // rdx
  __int64 v81; // r9
  __int64 v82; // rcx
  unsigned __int64 v83; // r9
  unsigned int v84; // ecx
  __int64 v85; // rcx
  signed __int32 v86[8]; // [rsp+0h] [rbp-60h] BYREF
  __int64 (__fastcall *v87)(_QWORD); // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall *v88)(_QWORD); // [rsp+28h] [rbp-38h] BYREF
  __int64 v89; // [rsp+30h] [rbp-30h]
  __int64 v90; // [rsp+38h] [rbp-28h]
  unsigned __int64 v91; // [rsp+40h] [rbp-20h]
  __int64 v92; // [rsp+48h] [rbp-18h]

  v2 = 0;
  *(_BYTE *)(a1 + 32) = 1;
  v3 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( !*(_BYTE *)(a1 + 34524) )
    goto LABEL_17;
  v8 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v9 = 10000000LL;
    if ( HalpTimerReferencePage )
    {
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v10 = *(_QWORD *)(HalpPerformanceCounter + 72)
            + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v10 = *(_QWORD *)(HalpPerformanceCounter + 72);
      v11 = *(__int64 (__fastcall **)(__int64, __int64))(HalpPerformanceCounter + 112);
      if ( v11 == HalpTscQueryCounterOrdered )
      {
        __asm { rdtscp }
        v12 = (unsigned __int64)v11 | ((_QWORD)HalpTscQueryCounterOrdered << 32);
      }
      else
      {
        v12 = guard_dispatch_icall_no_overrides(v10, HalpTscQueryCounterOrdered);
      }
      v5 = (((unsigned __int64)v12 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
         + MEMORY[0xFFFFF780000003B8];
      goto LABEL_9;
    }
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
    {
      do
      {
        v89 = *(_QWORD *)(v8 + 208);
        do
        {
          v73 = *(_QWORD *)(v8 + 200);
          InternalData = HalpTimerGetInternalData(v8);
          v75 = *(__int64 (__fastcall **)(_QWORD))(v8 + 112);
          if ( v75 == HalpHpetQueryCounter )
            Counter = HalpHpetQueryCounter(InternalData);
          else
            Counter = guard_dispatch_icall_no_overrides(InternalData, v75);
          v77 = Counter;
          _InterlockedOr(v86, 0);
          v78 = *(_QWORD *)(v8 + 200);
        }
        while ( v73 != v78 );
        v58 = v89;
      }
      while ( v89 != *(_QWORD *)(v8 + 208) );
      v79 = *(_DWORD *)(v8 + 220);
      v3 = a2;
      if ( ((v73 ^ v77) & (1LL << ((unsigned __int8)v79 - 1))) != 0 )
      {
        if ( v79 == 64 )
          v81 = -1LL;
        else
          v81 = (1LL << v79) - 1;
        v82 = 0LL;
        if ( v79 != 64 )
          v82 = 1LL << v79;
        v83 = v73 & v81;
        v57 = v77 | v73 ^ v83;
        if ( v77 < v83 )
          v57 += v82;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 200), v57, v78);
      }
      else
      {
        if ( v79 == 64 )
          v80 = -1LL;
        else
          v80 = (1LL << v79) - 1;
        v57 = v77 | v73 & ~v80;
      }
      goto LABEL_113;
    }
    v52 = HalpTimerGetInternalData(HalpPerformanceCounter);
    v53 = *(_QWORD *)(v8 + 112);
    v54 = v52;
    if ( (__int64 (__fastcall *)(_QWORD))v53 == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v57 = __readmsr(0x40000020u);
LABEL_112:
        v58 = *(_QWORD *)(v8 + 208);
LABEL_113:
        v5 = HalpTimerScaleCounter(v58 + v57, *(_QWORD *)(v8 + 192), 10000000LL);
        goto LABEL_9;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v87 = 0LL;
        while ( 1 )
        {
          v55 = (unsigned __int64)HvlpReferenceTscPage;
          v56 = *(_DWORD *)HvlpReferenceTscPage;
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
            v55 = __rdtsc();
            LODWORD(v53) = HIDWORD(v55);
            v55 = (unsigned int)v55;
            v53 = (unsigned int)v53;
          }
          v53 = *((_QWORD *)HvlpReferenceTscPage + 2)
              + (((v55 | (v53 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v87 = (__int64 (__fastcall *)(_QWORD))v53;
          if ( *(_DWORD *)HvlpReferenceTscPage == v56 )
            goto LABEL_111;
        }
        HvlpGetRegister64(589828LL, &v87);
LABEL_111:
        v57 = (signed __int64)v87;
        goto LABEL_112;
      }
      v54 = 0LL;
    }
    v57 = guard_dispatch_icall_no_overrides(v54, v53);
    goto LABEL_112;
  }
  v9 = *(_QWORD *)(HalpPerformanceCounter + 192);
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
  {
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v41 = *(_QWORD *)(HalpPerformanceCounter + 72)
          + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
    else
      v41 = *(_QWORD *)(HalpPerformanceCounter + 72);
    v42 = *(_QWORD *)(HalpPerformanceCounter + 112);
    if ( (__int64 (__fastcall *)(_QWORD))v42 == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v45 = __readmsr(0x40000020u);
LABEL_75:
        v5 = *(_QWORD *)(v8 + 208) + v45;
        goto LABEL_9;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v88 = 0LL;
        while ( 1 )
        {
          v43 = (unsigned __int64)HvlpReferenceTscPage;
          v44 = *(_DWORD *)HvlpReferenceTscPage;
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
            v43 = __rdtsc();
            LODWORD(v42) = HIDWORD(v43);
            v43 = (unsigned int)v43;
            v42 = (unsigned int)v42;
          }
          v42 = *((_QWORD *)HvlpReferenceTscPage + 2)
              + (((v43 | (v42 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v88 = (__int64 (__fastcall *)(_QWORD))v42;
          if ( *(_DWORD *)HvlpReferenceTscPage == v44 )
            goto LABEL_74;
        }
        HvlpGetRegister64(589828LL, &v88);
LABEL_74:
        v45 = (__int64)v88;
        goto LABEL_75;
      }
      v41 = 0LL;
    }
    v45 = guard_dispatch_icall_no_overrides(v41, v42);
    goto LABEL_75;
  }
  do
  {
    v89 = *(_QWORD *)(v8 + 208);
    do
    {
      v60 = *(_QWORD *)(v8 + 200);
      v61 = HalpTimerGetInternalData(v8);
      v62 = *(__int64 (__fastcall **)(_QWORD))(v8 + 112);
      if ( v62 == HalpHpetQueryCounter )
        v63 = HalpHpetQueryCounter(v61);
      else
        v63 = guard_dispatch_icall_no_overrides(v61, v62);
      v64 = v63;
      _InterlockedOr(v86, 0);
      v65 = *(_QWORD *)(v8 + 200);
    }
    while ( v60 != v65 );
    v66 = v89;
  }
  while ( v89 != *(_QWORD *)(v8 + 208) );
  v67 = *(_DWORD *)(v8 + 220);
  if ( ((v60 ^ v64) & (1LL << ((unsigned __int8)v67 - 1))) != 0 )
  {
    if ( v67 == 64 )
      v69 = -1LL;
    else
      v69 = (1LL << v67) - 1;
    v70 = 0LL;
    if ( v67 != 64 )
      v70 = 1LL << v67;
    v71 = v60 & v69;
    v72 = v64 | v60 ^ v71;
    if ( v64 < v71 )
      v72 += v70;
    _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 200), v72, v65);
    v5 = v66 + v72;
  }
  else
  {
    if ( v67 == 64 )
      v68 = -1LL;
    else
      v68 = (1LL << v67) - 1;
    v5 = v89 + (v64 | v60 & ~v68);
  }
LABEL_9:
  if ( v8 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v59 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v59 = 10000000LL;
    v5 = HalpTimerScaleCounter(v5, v9, v59);
  }
  v13 = *(_BYTE *)(a1 + 172);
  v14 = v5;
  v15 = *(_QWORD *)(a1 + 176);
  v92 = 0LL;
  if ( v13 )
    v14 = v5 << v13;
  v92 = (v14 * (unsigned __int128)v15) >> 64;
  v7 = v92 - *(_QWORD *)(a1 + 34432);
  v6 = v92;
  if ( KiTickAccumulationFromAccountingPeriods )
  {
    v16 = *(_QWORD *)(a1 + 34552);
    if ( MEMORY[0xFFFFF78000000300] )
    {
      v90 = 0LL;
      v91 = 0LL;
      v17 = v5;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v18 = (v16 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v17 = v5 << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v18 = v16 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      }
      v90 = *((_QWORD *)&v18 + 1);
      v91 = (v17 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v19 = ((unsigned __int64)((v91 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
          - ((unsigned __int64)((*((unsigned __int64 *)&v18 + 1)
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
      if ( v19 )
      {
        if ( (*(_DWORD *)(v3 + 116) & 0x400) != 0
          || ((v5 >> 4) & 0x1F) >= (unsigned int)__popcnt(*(unsigned int *)(v3 + 1100)) )
        {
          *(_DWORD *)(a1 + 34372) += v19;
          *(_DWORD *)(v3 + 652) += v19;
        }
        else
        {
          *(_DWORD *)(a1 + 34376) += v19;
          *(_DWORD *)(v3 + 732) += v19;
        }
        if ( v3 != *(_QWORD *)(a1 + 24) )
        {
          v47 = (char *)(v3 + 195);
          if ( *(char *)(v3 + 195) < 16 )
          {
            if ( *(_QWORD *)(v3 + 104) )
            {
              v48 = *(_QWORD *)(v3 + 104);
              if ( v48 )
              {
                v49 = v48 + *(unsigned int *)(a1 + 216);
                if ( *v47 < 16 && (*(_DWORD *)(v3 + 120) & 0x200) == 0 )
                {
                  v50 = v48 + *(unsigned int *)(a1 + 216);
                  while ( (*(_BYTE *)(v50 + 112) & 2) == 0 )
                  {
                    v50 = *(_QWORD *)(v50 + 416);
                    if ( !v50 )
                    {
                      do
                      {
                        v51 = *(_DWORD *)(v49 + 124);
                        if ( v51 )
                          break;
                        v49 = *(_QWORD *)(v49 + 416);
                      }
                      while ( v49 );
                      if ( v51 )
                        break;
                      goto LABEL_94;
                    }
                  }
LABEL_96:
                  *(_DWORD *)(a1 + 34412) += v19;
                  goto LABEL_17;
                }
LABEL_94:
                v47 = (char *)(v3 + 195);
              }
            }
          }
          if ( *v47 >= 8 )
            goto LABEL_17;
          goto LABEL_96;
        }
      }
    }
  }
LABEL_17:
  *(_QWORD *)(a1 + 34552) = v5;
  *(_QWORD *)(a1 + 34432) = v6;
  *(_QWORD *)(v3 + 72) += v7;
  if ( v3 != *(_QWORD *)(a1 + 24) )
  {
    v20 = ((v7 * *(unsigned int *)(a1 + 34488)) >> 16) + *(unsigned int *)(v3 + 80);
    if ( v20 > 0xFFFFFFFF )
      LODWORD(v20) = -1;
    *(_DWORD *)(v3 + 80) = v20;
  }
  v21 = *(_BYTE *)(v3 + 2);
  if ( (v21 & 0xBE) != 0 )
  {
    if ( v21 < 0 )
    {
      v22 = (*(_DWORD *)(*(_QWORD *)(v3 + 544) + 400LL) >> 13) & 0x3FFFF;
      _BitScanReverse(&v23, v22);
      v24 = (*(_DWORD *)(*(_QWORD *)(v3 + 544) + 400LL) >> 4) & 0x1FF;
      v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 35760) + 8LL * (v23 - 2)) + 8LL * (v22 ^ (1 << v23)) + 8);
      *(_QWORD *)(v25 + 8 * v24) += v7;
      v21 &= ~0x80u;
    }
    if ( (v21 & 0x10) != 0 )
    {
      *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v3 + 124) + 34440) += v7;
      v21 &= ~0x10u;
    }
    if ( (v21 & 0x20) != 0 )
    {
      v26 = *(_QWORD *)(v3 + 1672);
      if ( v26 )
      {
        v27 = *(_QWORD *)(a1 + 35248);
        v28 = *(_QWORD *)(a1 + 35256);
        if ( v27 && v28 )
        {
          if ( *(_BYTE *)(v28 + 112) )
          {
            v29 = *(_DWORD *)(v28 + 132);
          }
          else
          {
            v29 = *(_DWORD *)(v28 + 80);
            if ( v29 >= *(_DWORD *)(v27 + 528) )
              v29 = *(_DWORD *)(v27 + 528);
          }
        }
        else
        {
          v29 = 100;
        }
        v30 = 0;
        v31 = (unsigned __int16 *)(a1 + 35434);
        do
        {
          if ( v29 <= *v31 )
            break;
          ++v30;
          ++v31;
        }
        while ( v30 < 3 );
        v32 = *(_BYTE *)(a1 + 35336);
        v33 = v32 != 0 ? 8 : 0;
        *(_QWORD *)(v33 + v26 + 16LL * v30) += v7;
        v34 = *(_DWORD *)(v26 + 192);
        if ( KiTimelineBitmapTime > v34 )
        {
          LODWORD(v89) = KiTimelineBitmapTime;
          if ( KiTimelineBitmapTime - v34 >= 0x20 )
            HIDWORD(v89) = 1;
          else
            HIDWORD(v89) = (*(_DWORD *)(v26 + 196) << (KiTimelineBitmapTime - v34)) | 1;
          *(_QWORD *)(v26 + 192) = v89;
        }
        else
        {
          v35 = v34 - KiTimelineBitmapTime;
          if ( v35 < 0x20 )
            *(_DWORD *)(v26 + 196) |= 1 << v35;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v36 = *(unsigned __int8 *)(v3 + 516);
          if ( ((v36 - 2) & 0xFFFFFFFB) == 0 || (_BYTE)v36 == 5 )
            *(_QWORD *)(v26 + 16LL * v30 + 8) += v7;
        }
        if ( *(_QWORD *)(v3 + 1616) )
        {
          v39 = v32 != 0 ? 8 : 0;
          *(_QWORD *)(v39 + v26 + 16 * (v30 + 8LL)) += v7;
          v40 = 64LL;
          if ( v32 )
            v40 = 72LL;
          _InterlockedAdd64(
            (volatile signed __int64 *)(v40 + *(_QWORD *)(*(_QWORD *)(v3 + 1616) + 1672LL) + 16LL * v30),
            v7);
        }
      }
      v21 &= ~0x20u;
    }
    if ( (v21 & 0x40) != 0 )
    {
      v46 = *(_QWORD *)(v3 + 968);
      if ( v46 )
        *(_BYTE *)(v46 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
      KiUpdateThreadHgsFeedback(a1, v3, v7, 0LL);
    if ( *(_QWORD *)(a1 + 34480) && *(_UNKNOWN **)(v3 + 544) != &KiInitialProcess && *(unsigned __int8 *)(v3 + 516) < 7u )
    {
      v84 = *(_DWORD *)(v3 + 80);
      if ( v84 <= *(_DWORD *)(v3 + 84) )
        v84 = *(_DWORD *)(v3 + 84);
      LOBYTE(v2) = v84 >= KiDynamicHeteroCpuPolicyExpectedCycles;
      v85 = *(unsigned __int8 *)(v3 + 517)
          + KiHgsPlusConfiguration * (v2 + 2 * (unsigned int)*(unsigned __int8 *)(v3 + 516));
      *(_QWORD *)(*(_QWORD *)(a1 + 34480) + 8 * v85) += v7;
    }
    if ( (v21 & 0xBE) != 0 )
    {
      v37 = *(_QWORD *)(v3 + 104);
      if ( v37 )
      {
        v38 = (_QWORD *)(v37 + *(unsigned int *)(a1 + 216));
        do
        {
          *v38 += v7;
          v38 = (_QWORD *)v38[52];
        }
        while ( v38 );
      }
      if ( (*(_BYTE *)(v3 + 2) & 8) != 0
        && *(_UNKNOWN **)(v3 + 544) != &KiInitialProcess
        && (*(_QWORD *)(*(_QWORD *)(v3 + 576) + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 136LL) + 8) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL) )
      {
        *(_QWORD *)(a1 + 34472) += v7;
      }
      if ( *(_QWORD *)(v3 + 360) )
        KiEndCounterAccumulation(v3);
    }
  }
}
