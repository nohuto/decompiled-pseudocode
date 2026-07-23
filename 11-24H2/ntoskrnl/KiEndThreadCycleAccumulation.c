/*
 * XREFs of KiEndThreadCycleAccumulation @ 0x14036B600
 * Callers:
 *     KiStartInterruptCycleAccumulation @ 0x14036A630 (KiStartInterruptCycleAccumulation.c)
 *     PpmCheckCustomRun @ 0x14044C05C (PpmCheckCustomRun.c)
 *     KeUpdateThreadTag @ 0x14046E3F0 (KeUpdateThreadTag.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x140314930 (HalpTimerScaleCounter.c)
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     KiEndCounterAccumulation @ 0x14036AA0C (KiEndCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x14036CDAC (KiUpdateThreadHgsFeedback.c)
 *     HalpHpetQueryCounter @ 0x1403BC400 (HalpHpetQueryCounter.c)
 *     HvlpGetRegister64 @ 0x1403BC420 (HvlpGetRegister64.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall KiEndThreadCycleAccumulation(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int8 a4)
{
  int v4; // r12d
  unsigned __int64 v7; // r11
  __int64 v8; // r15
  unsigned __int64 v9; // rdi
  __int64 v10; // r15
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
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rcx
  char v24; // bl
  __int64 v25; // r8
  unsigned int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // r9
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // edx
  unsigned int v36; // r9d
  unsigned __int16 *v37; // rcx
  char v38; // r10
  __int64 v39; // rdx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  int v42; // ecx
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // rdx
  __int64 (__fastcall *v50)(); // rcx
  unsigned __int64 v51; // rax
  int v52; // r9d
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rax
  char *v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  int v60; // r9d
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned __int64 v64; // rax
  int v65; // r9d
  signed __int64 v66; // rdx
  __int64 v67; // r13
  __int64 v68; // r8
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 (__fastcall *v71)(_QWORD); // rdx
  __int64 v72; // rax
  unsigned __int64 v73; // r10
  signed __int64 v74; // rax
  __int64 v75; // r13
  int v76; // r9d
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // rcx
  unsigned __int64 v80; // r8
  signed __int64 v81; // rdx
  __int64 v82; // rdi
  __int64 InternalData; // rax
  __int64 (__fastcall *v84)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v86; // r10
  signed __int64 v87; // rax
  int v88; // r9d
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // rcx
  unsigned __int64 v92; // r8
  unsigned int v93; // ecx
  __int64 v94; // rcx
  signed __int32 v95[8]; // [rsp+0h] [rbp-68h] BYREF
  int v96; // [rsp+20h] [rbp-48h]
  int v97; // [rsp+24h] [rbp-44h]
  __int64 (__fastcall *v98)(_QWORD); // [rsp+28h] [rbp-40h] BYREF
  __int64 (__fastcall *v99)(_QWORD); // [rsp+30h] [rbp-38h] BYREF
  __int64 v100; // [rsp+38h] [rbp-30h]
  __int64 v101; // [rsp+40h] [rbp-28h]
  unsigned __int64 v102; // [rsp+48h] [rbp-20h]
  __int64 v103; // [rsp+50h] [rbp-18h]

  v4 = 0;
  *(_BYTE *)(a1 + 32) = 1;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( !*(_BYTE *)(a1 + 34524) )
    goto LABEL_17;
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
      }
      v7 = (((unsigned __int64)v14 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
         + MEMORY[0xFFFFF780000003B8];
      goto LABEL_9;
    }
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
    {
      do
      {
        v100 = *(_QWORD *)(v10 + 208);
        do
        {
          v82 = *(_QWORD *)(v10 + 200);
          InternalData = HalpTimerGetInternalData(v10);
          v84 = *(__int64 (__fastcall **)(_QWORD))(v10 + 112);
          if ( v84 == HalpHpetQueryCounter )
            Counter = HalpHpetQueryCounter(InternalData);
          else
            Counter = guard_dispatch_icall_no_overrides(InternalData, v84);
          v86 = Counter;
          _InterlockedOr(v95, 0);
          v87 = *(_QWORD *)(v10 + 200);
        }
        while ( v82 != v87 );
        v67 = v100;
      }
      while ( v100 != *(_QWORD *)(v10 + 208) );
      v88 = *(_DWORD *)(v10 + 220);
      if ( ((v82 ^ v86) & (1LL << ((unsigned __int8)v88 - 1))) != 0 )
      {
        if ( v88 == 64 )
          v90 = -1LL;
        else
          v90 = (1LL << v88) - 1;
        v91 = 0LL;
        if ( v88 != 64 )
          v91 = 1LL << v88;
        v92 = v82 & v90;
        v66 = v86 | v82 ^ v92;
        if ( v86 < v92 )
          v66 += v91;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 200), v66, v87);
      }
      else
      {
        if ( v88 == 64 )
          v89 = -1LL;
        else
          v89 = (1LL << v88) - 1;
        v66 = v86 | v82 & ~v89;
      }
      goto LABEL_115;
    }
    v61 = HalpTimerGetInternalData(HalpPerformanceCounter);
    v62 = *(_QWORD *)(v10 + 112);
    v63 = v61;
    if ( (__int64 (__fastcall *)(_QWORD))v62 == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v66 = __readmsr(0x40000020u);
LABEL_114:
        v67 = *(_QWORD *)(v10 + 208);
LABEL_115:
        v7 = HalpTimerScaleCounter(v66 + v67, *(_QWORD *)(v10 + 192), 10000000LL);
        goto LABEL_9;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v98 = 0LL;
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
          v98 = (__int64 (__fastcall *)(_QWORD))v62;
          if ( *(_DWORD *)HvlpReferenceTscPage == v65 )
            goto LABEL_113;
        }
        HvlpGetRegister64(589828LL, &v98);
LABEL_113:
        v66 = (signed __int64)v98;
        goto LABEL_114;
      }
      v63 = 0LL;
    }
    v66 = guard_dispatch_icall_no_overrides(v63, v62);
    goto LABEL_114;
  }
  v11 = *(_QWORD *)(HalpPerformanceCounter + 192);
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
  {
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v48 = *(_QWORD *)(HalpPerformanceCounter + 72)
          + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
    else
      v48 = *(_QWORD *)(HalpPerformanceCounter + 72);
    v49 = *(_QWORD *)(HalpPerformanceCounter + 112);
    if ( (__int64 (__fastcall *)(_QWORD))v49 == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v53 = __readmsr(0x40000020u);
LABEL_77:
        v7 = v53 + *(_QWORD *)(v10 + 208);
        goto LABEL_9;
      }
      v50 = HvlGetReferenceTimeUsingTscPage;
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v99 = 0LL;
        v96 = 0;
        while ( 1 )
        {
          v51 = (unsigned __int64)HvlpReferenceTscPage;
          v52 = *(_DWORD *)HvlpReferenceTscPage;
          if ( !*(_DWORD *)HvlpReferenceTscPage )
            break;
          if ( MEMORY[0xFFFFF78000000294] )
          {
            __asm { rdtscp }
            v96 = (int)v50;
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
            v51 = __rdtsc();
            LODWORD(v49) = HIDWORD(v51);
            v51 = (unsigned int)v51;
            v49 = (unsigned int)v49;
          }
          v49 = *((_QWORD *)HvlpReferenceTscPage + 2)
              + (((v51 | (v49 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v99 = (__int64 (__fastcall *)(_QWORD))v49;
          LODWORD(v50) = *(_DWORD *)HvlpReferenceTscPage;
          if ( *(_DWORD *)HvlpReferenceTscPage == v52 )
            goto LABEL_76;
        }
        HvlpGetRegister64(589828LL, &v99);
LABEL_76:
        v53 = (__int64)v99;
        goto LABEL_77;
      }
      v48 = 0LL;
    }
    v53 = guard_dispatch_icall_no_overrides(v48, v49);
    goto LABEL_77;
  }
  do
  {
    v100 = *(_QWORD *)(v10 + 208);
    do
    {
      v69 = *(_QWORD *)(v10 + 200);
      v70 = HalpTimerGetInternalData(v10);
      v71 = *(__int64 (__fastcall **)(_QWORD))(v10 + 112);
      if ( v71 == HalpHpetQueryCounter )
        v72 = HalpHpetQueryCounter(v70);
      else
        v72 = guard_dispatch_icall_no_overrides(v70, v71);
      v73 = v72;
      _InterlockedOr(v95, 0);
      v74 = *(_QWORD *)(v10 + 200);
    }
    while ( v69 != v74 );
    v75 = v100;
  }
  while ( v100 != *(_QWORD *)(v10 + 208) );
  v76 = *(_DWORD *)(v10 + 220);
  if ( ((v69 ^ v73) & (1LL << ((unsigned __int8)v76 - 1))) != 0 )
  {
    if ( v76 == 64 )
      v78 = -1LL;
    else
      v78 = (1LL << v76) - 1;
    v79 = 0LL;
    if ( v76 != 64 )
      v79 = 1LL << v76;
    v80 = v69 & v78;
    v81 = v73 | v69 ^ v80;
    if ( v73 < v80 )
      v81 += v79;
    _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 200), v81, v74);
    v7 = v81 + v75;
  }
  else
  {
    if ( v76 == 64 )
      v77 = -1LL;
    else
      v77 = (1LL << v76) - 1;
    v7 = (v73 | v69 & ~v77) + v100;
  }
LABEL_9:
  if ( v10 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v68 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v68 = 10000000LL;
    v7 = HalpTimerScaleCounter(v7, v11, v68);
  }
  v15 = *(_BYTE *)(a1 + 172);
  v16 = v7;
  v17 = *(_QWORD *)(a1 + 176);
  v103 = 0LL;
  if ( v15 )
    v16 = v7 << v15;
  v103 = (v16 * (unsigned __int128)v17) >> 64;
  v9 = v103 - *(_QWORD *)(a1 + 34432);
  v8 = v103;
  if ( KiTickAccumulationFromAccountingPeriods )
  {
    v18 = *(_QWORD *)(a1 + 34552);
    if ( MEMORY[0xFFFFF78000000300] )
    {
      v101 = 0LL;
      v102 = 0LL;
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
      v101 = *((_QWORD *)&v20 + 1);
      v102 = (v19 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v21 = ((unsigned __int64)((v102 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
          - ((unsigned __int64)((*((unsigned __int64 *)&v20 + 1)
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
      if ( v21 )
      {
        if ( (*(_DWORD *)(a2 + 116) & 0x400) != 0
          || ((v7 >> 4) & 0x1F) >= (unsigned int)__popcnt(*(unsigned int *)(a2 + 1100)) )
        {
          *(_DWORD *)(a1 + 34372) += v21;
          *(_DWORD *)(a2 + 652) += v21;
        }
        else
        {
          *(_DWORD *)(a1 + 34376) += v21;
          *(_DWORD *)(a2 + 732) += v21;
        }
        if ( a2 != *(_QWORD *)(a1 + 24) )
        {
          v56 = (char *)(a2 + 195);
          if ( *(char *)(a2 + 195) < 16 )
          {
            if ( *(_QWORD *)(a2 + 104) )
            {
              v57 = *(_QWORD *)(a2 + 104);
              if ( v57 )
              {
                v58 = v57 + *(unsigned int *)(a1 + 216);
                if ( *v56 < 16 && (*(_DWORD *)(a2 + 120) & 0x200) == 0 )
                {
                  v59 = v57 + *(unsigned int *)(a1 + 216);
                  while ( (*(_BYTE *)(v59 + 112) & 2) == 0 )
                  {
                    v59 = *(_QWORD *)(v59 + 416);
                    if ( !v59 )
                    {
                      do
                      {
                        v60 = *(_DWORD *)(v58 + 124);
                        if ( v60 )
                          break;
                        v58 = *(_QWORD *)(v58 + 416);
                      }
                      while ( v58 );
                      if ( v60 )
                        break;
                      goto LABEL_96;
                    }
                  }
LABEL_98:
                  *(_DWORD *)(a1 + 34412) += v21;
                  goto LABEL_17;
                }
LABEL_96:
                v56 = (char *)(a2 + 195);
              }
            }
          }
          if ( *v56 >= 8 )
            goto LABEL_17;
          goto LABEL_98;
        }
      }
    }
  }
LABEL_17:
  *(_QWORD *)(a1 + 34552) = v7;
  *(_QWORD *)(a1 + 34432) = v8;
  v22 = v9 + *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 72) = v22;
  if ( a2 != *(_QWORD *)(a1 + 24) )
  {
    v23 = ((v9 * *(unsigned int *)(a1 + 34488)) >> 16) + *(unsigned int *)(a2 + 80);
    if ( v23 > 0xFFFFFFFF )
      LODWORD(v23) = -1;
    *(_DWORD *)(a2 + 80) = v23;
  }
  v24 = *(_BYTE *)(a2 + 2);
  if ( (v24 & 0xBE) != 0 )
  {
    if ( v24 < 0 )
    {
      v25 = *(_QWORD *)(a1 + 35760);
      v26 = (*(_DWORD *)(*(_QWORD *)(a2 + 544) + 400LL) >> 13) & 0x3FFFF;
      _BitScanReverse(&v27, v26);
      v28 = (*(_DWORD *)(*(_QWORD *)(a2 + 544) + 400LL) >> 4) & 0x1FF;
      v29 = 1 << v27;
      v30 = v27 - 2;
      v97 = v30;
      v31 = *(_QWORD *)(*(_QWORD *)(v25 + 8 * v30) + 8LL * (v26 ^ v29) + 8);
      *(_QWORD *)(v31 + 8 * v28) += v9;
      v24 &= ~0x80u;
    }
    if ( (v24 & 0x10) != 0 )
    {
      v54 = a1 + 8LL * *(unsigned __int8 *)(a2 + 124);
      *(_QWORD *)(v54 + 34440) += v9;
      v24 &= ~0x10u;
    }
    if ( (v24 & 0x20) != 0 )
    {
      v32 = *(_QWORD *)(a2 + 1672);
      if ( v32 )
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
        v39 = v38 != 0 ? 8 : 0;
        *(_QWORD *)(v39 + v32 + 16LL * v36) += v9;
        v40 = *(_DWORD *)(v32 + 192);
        if ( KiTimelineBitmapTime > v40 )
        {
          LODWORD(v100) = KiTimelineBitmapTime;
          if ( KiTimelineBitmapTime - v40 >= 0x20 )
            HIDWORD(v100) = 1;
          else
            HIDWORD(v100) = (*(_DWORD *)(v32 + 196) << (KiTimelineBitmapTime - v40)) | 1;
          *(_QWORD *)(v32 + 192) = v100;
        }
        else
        {
          v41 = v40 - KiTimelineBitmapTime;
          if ( v41 < 0x20 )
            *(_DWORD *)(v32 + 196) |= 1 << v41;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v42 = *(unsigned __int8 *)(a2 + 516);
          if ( ((v42 - 2) & 0xFFFFFFFB) == 0 || (_BYTE)v42 == 5 )
            *(_QWORD *)(v32 + 16LL * v36 + 8) += v9;
        }
        if ( *(_QWORD *)(a2 + 1616) )
        {
          v46 = v38 != 0 ? 8 : 0;
          *(_QWORD *)(v46 + v32 + 16 * (v36 + 8LL)) += v9;
          v47 = 64LL;
          if ( v38 )
            v47 = 72LL;
          _InterlockedAdd64(
            (volatile signed __int64 *)(v47 + *(_QWORD *)(*(_QWORD *)(a2 + 1616) + 1672LL) + 16LL * v36),
            v9);
        }
      }
      v24 &= ~0x20u;
    }
    if ( (v24 & 0x40) != 0 )
    {
      v55 = *(_QWORD *)(a2 + 968);
      if ( v55 )
        *(_BYTE *)(v55 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
      KiUpdateThreadHgsFeedback(a1, a2, v9, a4);
    if ( *(_QWORD *)(a1 + 34480) && *(_UNKNOWN **)(a2 + 544) != &KiInitialProcess && *(unsigned __int8 *)(a2 + 516) < 7u )
    {
      v93 = *(_DWORD *)(a2 + 80);
      if ( v93 <= *(_DWORD *)(a2 + 84) )
        v93 = *(_DWORD *)(a2 + 84);
      LOBYTE(v4) = v93 >= KiDynamicHeteroCpuPolicyExpectedCycles;
      v94 = *(unsigned __int8 *)(a2 + 517)
          + KiHgsPlusConfiguration * (v4 + 2 * (unsigned int)*(unsigned __int8 *)(a2 + 516));
      *(_QWORD *)(*(_QWORD *)(a1 + 34480) + 8 * v94) += v9;
    }
    if ( (v24 & 0xBE) != 0 )
    {
      v44 = *(_QWORD *)(a2 + 104);
      if ( v44 )
      {
        v45 = (_QWORD *)(v44 + *(unsigned int *)(a1 + 216));
        do
        {
          *v45 += v9;
          v45 = (_QWORD *)v45[52];
        }
        while ( v45 );
      }
      if ( (*(_BYTE *)(a2 + 2) & 8) != 0
        && *(_UNKNOWN **)(a2 + 544) != &KiInitialProcess
        && (*(_QWORD *)(*(_QWORD *)(a2 + 576) + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 136LL) + 8) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL) )
      {
        *(_QWORD *)(a1 + 34472) += v9;
      }
      if ( *(_QWORD *)(a2 + 360) )
        KiEndCounterAccumulation(a2);
    }
  }
  if ( a3 )
    *a3 = v8;
  return v22;
}
