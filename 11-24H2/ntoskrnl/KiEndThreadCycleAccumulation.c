/*
 * XREFs of KiEndThreadCycleAccumulation @ 0x14034D120
 * Callers:
 *     KiStartInterruptCycleAccumulation @ 0x14034C150 (KiStartInterruptCycleAccumulation.c)
 *     PpmCheckCustomRun @ 0x1403B45DC (PpmCheckCustomRun.c)
 *     KeUpdateThreadTag @ 0x140472120 (KeUpdateThreadTag.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x14030AA50 (HalpTimerScaleCounter.c)
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     KiEndCounterAccumulation @ 0x14034C52C (KiEndCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x14034E8CC (KiUpdateThreadHgsFeedback.c)
 *     HalpHpetQueryCounter @ 0x1403D6DB0 (HalpHpetQueryCounter.c)
 *     HvlpGetRegister64 @ 0x1403D6DD0 (HvlpGetRegister64.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned __int64 v66; // rax
  int v67; // r9d
  signed __int64 v68; // rdx
  __int64 v69; // r13
  __int64 v70; // r8
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 (__fastcall *v75)(_QWORD); // rdx
  __int64 v76; // rax
  unsigned __int64 v77; // r10
  signed __int64 v78; // rax
  __int64 v79; // r13
  int v80; // r9d
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // rcx
  unsigned __int64 v84; // r8
  signed __int64 v85; // rdx
  __int64 v86; // rdi
  __int64 InternalData; // rax
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 (__fastcall *v90)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v92; // r10
  signed __int64 v93; // rax
  int v94; // r9d
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // rcx
  unsigned __int64 v98; // r8
  unsigned int v99; // ecx
  __int64 v100; // rcx
  signed __int32 v101[8]; // [rsp+0h] [rbp-68h] BYREF
  int v102; // [rsp+20h] [rbp-48h]
  int v103; // [rsp+24h] [rbp-44h]
  __int64 (__fastcall *v104)(_QWORD); // [rsp+28h] [rbp-40h] BYREF
  __int64 (__fastcall *v105)(_QWORD); // [rsp+30h] [rbp-38h] BYREF
  __int64 v106; // [rsp+38h] [rbp-30h]
  __int64 v107; // [rsp+40h] [rbp-28h]
  unsigned __int64 v108; // [rsp+48h] [rbp-20h]
  __int64 v109; // [rsp+50h] [rbp-18h]
  _QWORD *v110; // [rsp+C0h] [rbp+58h]

  v110 = a3;
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
        v14 = guard_dispatch_icall_no_overrides(v12, HalpTscQueryCounterOrdered, a3, 10000000LL);
      }
      v7 = (((unsigned __int64)v14 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
         + MEMORY[0xFFFFF780000003B8];
      goto LABEL_9;
    }
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
    {
      do
      {
        v106 = *(_QWORD *)(v10 + 208);
        do
        {
          v86 = *(_QWORD *)(v10 + 200);
          InternalData = HalpTimerGetInternalData(v10);
          v90 = *(__int64 (__fastcall **)(_QWORD))(v10 + 112);
          if ( v90 == HalpHpetQueryCounter )
            Counter = HalpHpetQueryCounter(InternalData);
          else
            Counter = guard_dispatch_icall_no_overrides(InternalData, v90, v88, v89);
          v92 = Counter;
          _InterlockedOr(v101, 0);
          v93 = *(_QWORD *)(v10 + 200);
        }
        while ( v86 != v93 );
        v69 = v106;
      }
      while ( v106 != *(_QWORD *)(v10 + 208) );
      v94 = *(_DWORD *)(v10 + 220);
      if ( ((v86 ^ v92) & (1LL << ((unsigned __int8)v94 - 1))) != 0 )
      {
        if ( v94 == 64 )
          v96 = -1LL;
        else
          v96 = (1LL << v94) - 1;
        v97 = 0LL;
        if ( v94 != 64 )
          v97 = 1LL << v94;
        v98 = v86 & v96;
        v68 = v92 | v86 ^ v98;
        if ( v92 < v98 )
          v68 += v97;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 200), v68, v93);
      }
      else
      {
        if ( v94 == 64 )
          v95 = -1LL;
        else
          v95 = (1LL << v94) - 1;
        v68 = v92 | v86 & ~v95;
      }
      goto LABEL_115;
    }
    v61 = HalpTimerGetInternalData(HalpPerformanceCounter);
    v64 = *(_QWORD *)(v10 + 112);
    v65 = v61;
    if ( (__int64 (__fastcall *)(_QWORD))v64 == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v68 = __readmsr(0x40000020u);
LABEL_114:
        v69 = *(_QWORD *)(v10 + 208);
LABEL_115:
        v7 = HalpTimerScaleCounter(v68 + v69, *(_QWORD *)(v10 + 192), 10000000LL);
        goto LABEL_9;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v104 = 0LL;
        while ( 1 )
        {
          v66 = (unsigned __int64)HvlpReferenceTscPage;
          v67 = *(_DWORD *)HvlpReferenceTscPage;
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
            v66 = __rdtsc();
            LODWORD(v64) = HIDWORD(v66);
            v66 = (unsigned int)v66;
            v64 = (unsigned int)v64;
          }
          v62 = *((_QWORD *)HvlpReferenceTscPage + 2);
          v64 = v62 + (((v66 | (v64 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v104 = (__int64 (__fastcall *)(_QWORD))v64;
          if ( *(_DWORD *)HvlpReferenceTscPage == v67 )
            goto LABEL_113;
        }
        HvlpGetRegister64(589828LL, &v104, v62);
LABEL_113:
        v68 = (signed __int64)v104;
        goto LABEL_114;
      }
      v65 = 0LL;
    }
    v68 = guard_dispatch_icall_no_overrides(v65, v64, v62, v63);
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
        v105 = 0LL;
        v102 = 0;
        while ( 1 )
        {
          v51 = (unsigned __int64)HvlpReferenceTscPage;
          v52 = *(_DWORD *)HvlpReferenceTscPage;
          if ( !*(_DWORD *)HvlpReferenceTscPage )
            break;
          if ( MEMORY[0xFFFFF78000000294] )
          {
            __asm { rdtscp }
            v102 = (int)v50;
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
          a3 = (_QWORD *)*((_QWORD *)HvlpReferenceTscPage + 2);
          v49 = (unsigned __int64)a3
              + (((v51 | (v49 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v105 = (__int64 (__fastcall *)(_QWORD))v49;
          LODWORD(v50) = *(_DWORD *)HvlpReferenceTscPage;
          if ( *(_DWORD *)HvlpReferenceTscPage == v52 )
            goto LABEL_76;
        }
        HvlpGetRegister64(589828LL, &v105, a3);
LABEL_76:
        v53 = (__int64)v105;
        goto LABEL_77;
      }
      v48 = 0LL;
    }
    v53 = guard_dispatch_icall_no_overrides(v48, v49, a3, 10000000LL);
    goto LABEL_77;
  }
  do
  {
    v106 = *(_QWORD *)(v10 + 208);
    do
    {
      v71 = *(_QWORD *)(v10 + 200);
      v72 = HalpTimerGetInternalData(v10);
      v75 = *(__int64 (__fastcall **)(_QWORD))(v10 + 112);
      if ( v75 == HalpHpetQueryCounter )
        v76 = HalpHpetQueryCounter(v72);
      else
        v76 = guard_dispatch_icall_no_overrides(v72, v75, v73, v74);
      v77 = v76;
      _InterlockedOr(v101, 0);
      v78 = *(_QWORD *)(v10 + 200);
    }
    while ( v71 != v78 );
    v79 = v106;
  }
  while ( v106 != *(_QWORD *)(v10 + 208) );
  v80 = *(_DWORD *)(v10 + 220);
  if ( ((v71 ^ v77) & (1LL << ((unsigned __int8)v80 - 1))) != 0 )
  {
    if ( v80 == 64 )
      v82 = -1LL;
    else
      v82 = (1LL << v80) - 1;
    v83 = 0LL;
    if ( v80 != 64 )
      v83 = 1LL << v80;
    v84 = v71 & v82;
    v85 = v77 | v71 ^ v84;
    if ( v77 < v84 )
      v85 += v83;
    _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 200), v85, v78);
    v7 = v85 + v79;
  }
  else
  {
    if ( v80 == 64 )
      v81 = -1LL;
    else
      v81 = (1LL << v80) - 1;
    v7 = (v77 | v71 & ~v81) + v106;
  }
LABEL_9:
  if ( v10 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v70 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v70 = 10000000LL;
    v7 = HalpTimerScaleCounter(v7, v11, v70);
  }
  v15 = *(_BYTE *)(a1 + 172);
  v16 = v7;
  v17 = *(_QWORD *)(a1 + 176);
  v109 = 0LL;
  if ( v15 )
    v16 = v7 << v15;
  v109 = (v16 * (unsigned __int128)v17) >> 64;
  v9 = v109 - *(_QWORD *)(a1 + 34432);
  v8 = v109;
  if ( KiTickAccumulationFromAccountingPeriods )
  {
    v18 = *(_QWORD *)(a1 + 34552);
    if ( MEMORY[0xFFFFF78000000300] )
    {
      v107 = 0LL;
      v108 = 0LL;
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
      v107 = *((_QWORD *)&v20 + 1);
      v108 = (v19 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v21 = ((unsigned __int64)((v108 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
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
      v103 = v30;
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
          LODWORD(v106) = KiTimelineBitmapTime;
          if ( KiTimelineBitmapTime - v40 >= 0x20 )
            HIDWORD(v106) = 1;
          else
            HIDWORD(v106) = (*(_DWORD *)(v32 + 196) << (KiTimelineBitmapTime - v40)) | 1;
          *(_QWORD *)(v32 + 192) = v106;
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
      v99 = *(_DWORD *)(a2 + 80);
      if ( v99 <= *(_DWORD *)(a2 + 84) )
        v99 = *(_DWORD *)(a2 + 84);
      LOBYTE(v4) = v99 >= KiDynamicHeteroCpuPolicyExpectedCycles;
      v100 = *(unsigned __int8 *)(a2 + 517)
           + KiHgsPlusConfiguration * (v4 + 2 * (unsigned int)*(unsigned __int8 *)(a2 + 516));
      *(_QWORD *)(*(_QWORD *)(a1 + 34480) + 8 * v100) += v9;
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
  if ( v110 )
    *v110 = v8;
  return v22;
}
