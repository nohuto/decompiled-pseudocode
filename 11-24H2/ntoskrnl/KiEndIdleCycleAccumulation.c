/*
 * XREFs of KiEndIdleCycleAccumulation @ 0x14034C5A0
 * Callers:
 *     KiIdleLoop @ 0x1406ABC30 (KiIdleLoop.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x14030AA50 (HalpTimerScaleCounter.c)
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     KiEndCounterAccumulation @ 0x14034C52C (KiEndCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x14034E8CC (KiUpdateThreadHgsFeedback.c)
 *     HalpHpetQueryCounter @ 0x1403D6DB0 (HalpHpetQueryCounter.c)
 *     HvlpGetRegister64 @ 0x1403D6DD0 (HvlpGetRegister64.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KiEndIdleCycleAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  __int64 v4; // r14
  unsigned __int64 v6; // r11
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // r13
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  __int64 v13; // rdx
  char v14; // cl
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int128 v19; // rax
  int v20; // r8d
  unsigned __int64 v21; // rcx
  char v22; // bl
  unsigned int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // edx
  unsigned int v31; // r9d
  unsigned __int16 *v32; // rcx
  char v33; // r10
  __int64 v34; // rdx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  int v37; // ecx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  int v45; // r9d
  __int64 v46; // rdx
  __int64 v47; // rax
  char *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  int v52; // r9d
  __int64 v53; // rax
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned __int64 v58; // rax
  int v59; // r9d
  signed __int64 v60; // rdx
  __int64 v61; // r11
  __int64 v62; // r8
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 (__fastcall *v67)(_QWORD); // rdx
  __int64 v68; // rax
  unsigned __int64 v69; // r11
  signed __int64 v70; // rax
  __int64 v71; // r8
  int v72; // r10d
  __int64 v73; // rdx
  __int64 v74; // r9
  __int64 v75; // rcx
  unsigned __int64 v76; // r9
  signed __int64 v77; // rdx
  __int64 v78; // rdi
  __int64 InternalData; // rax
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 (__fastcall *v82)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v84; // r10
  signed __int64 v85; // rax
  int v86; // r8d
  __int64 v87; // rdx
  __int64 v88; // r9
  __int64 v89; // rcx
  unsigned __int64 v90; // r9
  unsigned int v91; // ecx
  __int64 v92; // rcx
  signed __int32 v93[8]; // [rsp+0h] [rbp-60h] BYREF
  __int64 (__fastcall *v94)(_QWORD); // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall *v95)(_QWORD); // [rsp+28h] [rbp-38h] BYREF
  __int64 v96; // [rsp+30h] [rbp-30h]
  __int64 v97; // [rsp+38h] [rbp-28h]
  unsigned __int64 v98; // [rsp+40h] [rbp-20h]
  __int64 v99; // [rsp+48h] [rbp-18h]

  v3 = 0;
  *(_BYTE *)(a1 + 32) = 1;
  v4 = a2;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !*(_BYTE *)(a1 + 34524) )
    goto LABEL_17;
  v9 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v10 = 10000000LL;
    if ( HalpTimerReferencePage )
    {
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v11 = *(_QWORD *)(HalpPerformanceCounter + 72)
            + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v11 = *(_QWORD *)(HalpPerformanceCounter + 72);
      v12 = *(__int64 (__fastcall **)(__int64, __int64))(HalpPerformanceCounter + 112);
      if ( v12 == HalpTscQueryCounterOrdered )
      {
        __asm { rdtscp }
        v13 = (unsigned __int64)v12 | ((_QWORD)HalpTscQueryCounterOrdered << 32);
      }
      else
      {
        v13 = guard_dispatch_icall_no_overrides(v11, HalpTscQueryCounterOrdered, a3, 10000000LL);
      }
      v6 = (((unsigned __int64)v13 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
         + MEMORY[0xFFFFF780000003B8];
      goto LABEL_9;
    }
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
    {
      do
      {
        v96 = *(_QWORD *)(v9 + 208);
        do
        {
          v78 = *(_QWORD *)(v9 + 200);
          InternalData = HalpTimerGetInternalData(v9);
          v82 = *(__int64 (__fastcall **)(_QWORD))(v9 + 112);
          if ( v82 == HalpHpetQueryCounter )
            Counter = HalpHpetQueryCounter(InternalData);
          else
            Counter = guard_dispatch_icall_no_overrides(InternalData, v82, v80, v81);
          v84 = Counter;
          _InterlockedOr(v93, 0);
          v85 = *(_QWORD *)(v9 + 200);
        }
        while ( v78 != v85 );
        v61 = v96;
      }
      while ( v96 != *(_QWORD *)(v9 + 208) );
      v86 = *(_DWORD *)(v9 + 220);
      v4 = a2;
      if ( ((v78 ^ v84) & (1LL << ((unsigned __int8)v86 - 1))) != 0 )
      {
        if ( v86 == 64 )
          v88 = -1LL;
        else
          v88 = (1LL << v86) - 1;
        v89 = 0LL;
        if ( v86 != 64 )
          v89 = 1LL << v86;
        v90 = v78 & v88;
        v60 = v84 | v78 ^ v90;
        if ( v84 < v90 )
          v60 += v89;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 200), v60, v85);
      }
      else
      {
        if ( v86 == 64 )
          v87 = -1LL;
        else
          v87 = (1LL << v86) - 1;
        v60 = v84 | v78 & ~v87;
      }
      goto LABEL_113;
    }
    v53 = HalpTimerGetInternalData(HalpPerformanceCounter);
    v56 = *(_QWORD *)(v9 + 112);
    v57 = v53;
    if ( (__int64 (__fastcall *)(_QWORD))v56 == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v60 = __readmsr(0x40000020u);
LABEL_112:
        v61 = *(_QWORD *)(v9 + 208);
LABEL_113:
        v6 = HalpTimerScaleCounter(v61 + v60, *(_QWORD *)(v9 + 192), 10000000LL);
        goto LABEL_9;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v94 = 0LL;
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
          v54 = *((_QWORD *)HvlpReferenceTscPage + 2);
          v56 = v54 + (((v58 | (v56 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v94 = (__int64 (__fastcall *)(_QWORD))v56;
          if ( *(_DWORD *)HvlpReferenceTscPage == v59 )
            goto LABEL_111;
        }
        HvlpGetRegister64(589828LL, &v94, v54);
LABEL_111:
        v60 = (signed __int64)v94;
        goto LABEL_112;
      }
      v57 = 0LL;
    }
    v60 = guard_dispatch_icall_no_overrides(v57, v56, v54, v55);
    goto LABEL_112;
  }
  v10 = *(_QWORD *)(HalpPerformanceCounter + 192);
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
  {
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v42 = *(_QWORD *)(HalpPerformanceCounter + 72)
          + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
    else
      v42 = *(_QWORD *)(HalpPerformanceCounter + 72);
    v43 = *(_QWORD *)(HalpPerformanceCounter + 112);
    if ( (__int64 (__fastcall *)(_QWORD))v43 == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v46 = __readmsr(0x40000020u);
LABEL_75:
        v6 = *(_QWORD *)(v9 + 208) + v46;
        goto LABEL_9;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v95 = 0LL;
        while ( 1 )
        {
          v44 = (unsigned __int64)HvlpReferenceTscPage;
          v45 = *(_DWORD *)HvlpReferenceTscPage;
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
            v44 = __rdtsc();
            LODWORD(v43) = HIDWORD(v44);
            v44 = (unsigned int)v44;
            v43 = (unsigned int)v43;
          }
          a3 = *((_QWORD *)HvlpReferenceTscPage + 2);
          v43 = a3 + (((v44 | (v43 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v95 = (__int64 (__fastcall *)(_QWORD))v43;
          if ( *(_DWORD *)HvlpReferenceTscPage == v45 )
            goto LABEL_74;
        }
        HvlpGetRegister64(589828LL, &v95, a3);
LABEL_74:
        v46 = (__int64)v95;
        goto LABEL_75;
      }
      v42 = 0LL;
    }
    v46 = guard_dispatch_icall_no_overrides(v42, v43, a3, 10000000LL);
    goto LABEL_75;
  }
  do
  {
    v96 = *(_QWORD *)(v9 + 208);
    do
    {
      v63 = *(_QWORD *)(v9 + 200);
      v64 = HalpTimerGetInternalData(v9);
      v67 = *(__int64 (__fastcall **)(_QWORD))(v9 + 112);
      if ( v67 == HalpHpetQueryCounter )
        v68 = HalpHpetQueryCounter(v64);
      else
        v68 = guard_dispatch_icall_no_overrides(v64, v67, v65, v66);
      v69 = v68;
      _InterlockedOr(v93, 0);
      v70 = *(_QWORD *)(v9 + 200);
    }
    while ( v63 != v70 );
    v71 = v96;
  }
  while ( v96 != *(_QWORD *)(v9 + 208) );
  v72 = *(_DWORD *)(v9 + 220);
  if ( ((v63 ^ v69) & (1LL << ((unsigned __int8)v72 - 1))) != 0 )
  {
    if ( v72 == 64 )
      v74 = -1LL;
    else
      v74 = (1LL << v72) - 1;
    v75 = 0LL;
    if ( v72 != 64 )
      v75 = 1LL << v72;
    v76 = v63 & v74;
    v77 = v69 | v63 ^ v76;
    if ( v69 < v76 )
      v77 += v75;
    _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 200), v77, v70);
    v6 = v71 + v77;
  }
  else
  {
    if ( v72 == 64 )
      v73 = -1LL;
    else
      v73 = (1LL << v72) - 1;
    v6 = v96 + (v69 | v63 & ~v73);
  }
LABEL_9:
  if ( v9 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v62 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v62 = 10000000LL;
    v6 = HalpTimerScaleCounter(v6, v10, v62);
  }
  v14 = *(_BYTE *)(a1 + 172);
  v15 = v6;
  v16 = *(_QWORD *)(a1 + 176);
  v99 = 0LL;
  if ( v14 )
    v15 = v6 << v14;
  v99 = (v15 * (unsigned __int128)v16) >> 64;
  v8 = v99 - *(_QWORD *)(a1 + 34432);
  v7 = v99;
  if ( KiTickAccumulationFromAccountingPeriods )
  {
    v17 = *(_QWORD *)(a1 + 34552);
    if ( MEMORY[0xFFFFF78000000300] )
    {
      v97 = 0LL;
      v98 = 0LL;
      v18 = v6;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v19 = (v17 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v18 = v6 << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v19 = v17 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      }
      v97 = *((_QWORD *)&v19 + 1);
      v98 = (v18 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v20 = ((unsigned __int64)((v98 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
          - ((unsigned __int64)((*((unsigned __int64 *)&v19 + 1)
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
      if ( v20 )
      {
        if ( (*(_DWORD *)(v4 + 116) & 0x400) != 0
          || ((v6 >> 4) & 0x1F) >= (unsigned int)__popcnt(*(unsigned int *)(v4 + 1100)) )
        {
          *(_DWORD *)(a1 + 34372) += v20;
          *(_DWORD *)(v4 + 652) += v20;
        }
        else
        {
          *(_DWORD *)(a1 + 34376) += v20;
          *(_DWORD *)(v4 + 732) += v20;
        }
        if ( v4 != *(_QWORD *)(a1 + 24) )
        {
          v48 = (char *)(v4 + 195);
          if ( *(char *)(v4 + 195) < 16 )
          {
            if ( *(_QWORD *)(v4 + 104) )
            {
              v49 = *(_QWORD *)(v4 + 104);
              if ( v49 )
              {
                v50 = v49 + *(unsigned int *)(a1 + 216);
                if ( *v48 < 16 && (*(_DWORD *)(v4 + 120) & 0x200) == 0 )
                {
                  v51 = v49 + *(unsigned int *)(a1 + 216);
                  while ( (*(_BYTE *)(v51 + 112) & 2) == 0 )
                  {
                    v51 = *(_QWORD *)(v51 + 416);
                    if ( !v51 )
                    {
                      do
                      {
                        v52 = *(_DWORD *)(v50 + 124);
                        if ( v52 )
                          break;
                        v50 = *(_QWORD *)(v50 + 416);
                      }
                      while ( v50 );
                      if ( v52 )
                        break;
                      goto LABEL_94;
                    }
                  }
LABEL_96:
                  *(_DWORD *)(a1 + 34412) += v20;
                  goto LABEL_17;
                }
LABEL_94:
                v48 = (char *)(v4 + 195);
              }
            }
          }
          if ( *v48 >= 8 )
            goto LABEL_17;
          goto LABEL_96;
        }
      }
    }
  }
LABEL_17:
  *(_QWORD *)(a1 + 34552) = v6;
  *(_QWORD *)(a1 + 34432) = v7;
  *(_QWORD *)(v4 + 72) += v8;
  if ( v4 != *(_QWORD *)(a1 + 24) )
  {
    v21 = ((v8 * *(unsigned int *)(a1 + 34488)) >> 16) + *(unsigned int *)(v4 + 80);
    if ( v21 > 0xFFFFFFFF )
      LODWORD(v21) = -1;
    *(_DWORD *)(v4 + 80) = v21;
  }
  v22 = *(_BYTE *)(v4 + 2);
  if ( (v22 & 0xBE) != 0 )
  {
    if ( v22 < 0 )
    {
      v23 = (*(_DWORD *)(*(_QWORD *)(v4 + 544) + 400LL) >> 13) & 0x3FFFF;
      _BitScanReverse(&v24, v23);
      v25 = (*(_DWORD *)(*(_QWORD *)(v4 + 544) + 400LL) >> 4) & 0x1FF;
      v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 35760) + 8LL * (v24 - 2)) + 8LL * (v23 ^ (1 << v24)) + 8);
      *(_QWORD *)(v26 + 8 * v25) += v8;
      v22 &= ~0x80u;
    }
    if ( (v22 & 0x10) != 0 )
    {
      *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v4 + 124) + 34440) += v8;
      v22 &= ~0x10u;
    }
    if ( (v22 & 0x20) != 0 )
    {
      v27 = *(_QWORD *)(v4 + 1672);
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
        v31 = 0;
        v32 = (unsigned __int16 *)(a1 + 35434);
        do
        {
          if ( v30 <= *v32 )
            break;
          ++v31;
          ++v32;
        }
        while ( v31 < 3 );
        v33 = *(_BYTE *)(a1 + 35336);
        v34 = v33 != 0 ? 8 : 0;
        *(_QWORD *)(v34 + v27 + 16LL * v31) += v8;
        v35 = *(_DWORD *)(v27 + 192);
        if ( KiTimelineBitmapTime > v35 )
        {
          LODWORD(v96) = KiTimelineBitmapTime;
          if ( KiTimelineBitmapTime - v35 >= 0x20 )
            HIDWORD(v96) = 1;
          else
            HIDWORD(v96) = (*(_DWORD *)(v27 + 196) << (KiTimelineBitmapTime - v35)) | 1;
          *(_QWORD *)(v27 + 192) = v96;
        }
        else
        {
          v36 = v35 - KiTimelineBitmapTime;
          if ( v36 < 0x20 )
            *(_DWORD *)(v27 + 196) |= 1 << v36;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v37 = *(unsigned __int8 *)(v4 + 516);
          if ( ((v37 - 2) & 0xFFFFFFFB) == 0 || (_BYTE)v37 == 5 )
            *(_QWORD *)(v27 + 16LL * v31 + 8) += v8;
        }
        if ( *(_QWORD *)(v4 + 1616) )
        {
          v40 = v33 != 0 ? 8 : 0;
          *(_QWORD *)(v40 + v27 + 16 * (v31 + 8LL)) += v8;
          v41 = 64LL;
          if ( v33 )
            v41 = 72LL;
          _InterlockedAdd64(
            (volatile signed __int64 *)(v41 + *(_QWORD *)(*(_QWORD *)(v4 + 1616) + 1672LL) + 16LL * v31),
            v8);
        }
      }
      v22 &= ~0x20u;
    }
    if ( (v22 & 0x40) != 0 )
    {
      v47 = *(_QWORD *)(v4 + 968);
      if ( v47 )
        *(_BYTE *)(v47 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
      KiUpdateThreadHgsFeedback(a1, v4, v8, 0LL);
    if ( *(_QWORD *)(a1 + 34480) && *(_UNKNOWN **)(v4 + 544) != &KiInitialProcess && *(unsigned __int8 *)(v4 + 516) < 7u )
    {
      v91 = *(_DWORD *)(v4 + 80);
      if ( v91 <= *(_DWORD *)(v4 + 84) )
        v91 = *(_DWORD *)(v4 + 84);
      LOBYTE(v3) = v91 >= KiDynamicHeteroCpuPolicyExpectedCycles;
      v92 = *(unsigned __int8 *)(v4 + 517)
          + KiHgsPlusConfiguration * (v3 + 2 * (unsigned int)*(unsigned __int8 *)(v4 + 516));
      *(_QWORD *)(*(_QWORD *)(a1 + 34480) + 8 * v92) += v8;
    }
    if ( (v22 & 0xBE) != 0 )
    {
      v38 = *(_QWORD *)(v4 + 104);
      if ( v38 )
      {
        v39 = (_QWORD *)(v38 + *(unsigned int *)(a1 + 216));
        do
        {
          *v39 += v8;
          v39 = (_QWORD *)v39[52];
        }
        while ( v39 );
      }
      if ( (*(_BYTE *)(v4 + 2) & 8) != 0
        && *(_UNKNOWN **)(v4 + 544) != &KiInitialProcess
        && (*(_QWORD *)(*(_QWORD *)(v4 + 576) + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 136LL) + 8) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL) )
      {
        *(_QWORD *)(a1 + 34472) += v8;
      }
      if ( *(_QWORD *)(v4 + 360) )
        KiEndCounterAccumulation(v4);
    }
  }
}
