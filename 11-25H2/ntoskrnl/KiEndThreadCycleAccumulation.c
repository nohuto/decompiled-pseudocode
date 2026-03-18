/*
 * XREFs of KiEndThreadCycleAccumulation @ 0x14028CBB0
 * Callers:
 *     PpmCheckCustomRun @ 0x140202CF8 (PpmCheckCustomRun.c)
 *     KeUpdateThreadTag @ 0x140202F10 (KeUpdateThreadTag.c)
 *     KiStartInterruptCycleAccumulation @ 0x14028E700 (KiStartInterruptCycleAccumulation.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     KiUpdateThreadHgsFeedback @ 0x14028C900 (KiUpdateThreadHgsFeedback.c)
 *     KiEndCounterAccumulation @ 0x14028E688 (KiEndCounterAccumulation.c)
 *     HalpTimerScaleCounter @ 0x14028EF68 (HalpTimerScaleCounter.c)
 *     HvlpGetRegister64 @ 0x14028FB00 (HvlpGetRegister64.c)
 *     HalpHpetQueryCounter @ 0x140350770 (HalpHpetQueryCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall KiEndThreadCycleAccumulation(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  int v4; // r12d
  unsigned __int64 v7; // r11
  __int64 v8; // r15
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 (__fastcall *v15)(); // rcx
  unsigned __int64 v16; // rax
  int v17; // r9d
  signed __int64 v18; // rdx
  __int64 v19; // r13
  char v20; // cl
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int128 v25; // rax
  int v26; // r8d
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rcx
  char v29; // bl
  __int64 v30; // r8
  unsigned int v31; // eax
  unsigned int v32; // ecx
  __int64 v33; // r9
  int v34; // edx
  __int64 v35; // rcx
  _QWORD *v36; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned int v41; // edx
  unsigned int v42; // eax
  unsigned int v43; // r8d
  unsigned __int16 *v44; // rcx
  char v45; // r10
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  int v48; // ecx
  __int64 v49; // rax
  _QWORD *v50; // rcx
  __int64 v51; // rcx
  __int64 (__fastcall *v52)(__int64, __int64); // rax
  __int64 v53; // rdx
  char *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  int v58; // r9d
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 InternalData; // rax
  __int64 (__fastcall *v63)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v65; // r10
  signed __int64 v66; // rax
  int v67; // r9d
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rcx
  unsigned __int64 v71; // r8
  __int64 v72; // rax
  char v73; // r11
  unsigned __int64 v74; // rdx
  __int64 v75; // rcx
  unsigned __int64 v76; // rax
  int v77; // r9d
  signed __int64 v78; // rdx
  __int64 v79; // r11
  __int64 v80; // r8
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 (__fastcall *v83)(_QWORD); // rdx
  __int64 v84; // rax
  unsigned __int64 v85; // r10
  signed __int64 v86; // rax
  int v87; // r9d
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // rcx
  unsigned __int64 v91; // r8
  unsigned int v92; // ecx
  __int64 v93; // rcx
  signed __int32 v94[8]; // [rsp+0h] [rbp-68h] BYREF
  int v95; // [rsp+20h] [rbp-48h]
  int v96; // [rsp+24h] [rbp-44h]
  __int64 (__fastcall *v97)(_QWORD); // [rsp+28h] [rbp-40h] BYREF
  __int64 (__fastcall *v98)(_QWORD); // [rsp+30h] [rbp-38h] BYREF
  __int64 v99; // [rsp+38h] [rbp-30h]
  __int64 v100; // [rsp+40h] [rbp-28h]
  unsigned __int64 v101; // [rsp+48h] [rbp-20h]
  __int64 v102; // [rsp+50h] [rbp-18h]

  v4 = 0;
  *(_BYTE *)(a1 + 32) = 1;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 1LL;
  if ( *(_BYTE *)(a1 + 34524) )
  {
    v11 = HalpPerformanceCounter;
    if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
    {
      v12 = *(_QWORD *)(HalpPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
      {
        do
        {
          v99 = *(_QWORD *)(v11 + 208);
          do
          {
            v61 = *(_QWORD *)(v11 + 200);
            InternalData = HalpTimerGetInternalData(v11);
            v63 = *(__int64 (__fastcall **)(_QWORD))(v11 + 112);
            if ( v63 == HalpHpetQueryCounter )
              Counter = HalpHpetQueryCounter(InternalData);
            else
              Counter = guard_dispatch_icall_no_overrides(InternalData, v63);
            v65 = Counter;
            _InterlockedOr(v94, 0);
            v66 = *(_QWORD *)(v11 + 200);
          }
          while ( v61 != v66 );
          v19 = v99;
        }
        while ( v99 != *(_QWORD *)(v11 + 208) );
        v67 = *(_DWORD *)(v11 + 220);
        if ( ((v61 ^ v65) & (1LL << ((unsigned __int8)v67 - 1))) != 0 )
        {
          if ( v67 == 64 )
            v69 = -1LL;
          else
            v69 = (1LL << v67) - 1;
          v70 = 0LL;
          if ( v67 != 64 )
            v70 = 1LL << v67;
          v71 = v61 & v69;
          v18 = v65 | v61 ^ v71;
          if ( v65 < v71 )
            v18 += v70;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 200), v18, v66);
        }
        else
        {
          if ( v67 == 64 )
            v68 = -1LL;
          else
            v68 = (1LL << v67) - 1;
          v18 = v65 | v61 & ~v68;
        }
        goto LABEL_16;
      }
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v13 = *(_QWORD *)(HalpPerformanceCounter + 72)
            + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v13 = *(_QWORD *)(HalpPerformanceCounter + 72);
      v14 = *(_QWORD *)(HalpPerformanceCounter + 112);
      if ( (__int64 (__fastcall *)(_QWORD))v14 == HalpHvCounterQueryCounter )
      {
        if ( !HalpHvTimerApi )
        {
          v18 = __readmsr(0x40000020u);
LABEL_15:
          v19 = *(_QWORD *)(v11 + 208);
LABEL_16:
          v7 = v18 + v19;
          goto LABEL_17;
        }
        v15 = HvlGetReferenceTimeUsingTscPage;
        if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
        {
          v98 = 0LL;
          v95 = 0;
          while ( 1 )
          {
            v16 = (unsigned __int64)HvlpReferenceTscPage;
            v17 = *(_DWORD *)HvlpReferenceTscPage;
            if ( !*(_DWORD *)HvlpReferenceTscPage )
              break;
            if ( MEMORY[0xFFFFF78000000294] )
            {
              __asm { rdtscp }
              v95 = (int)v15;
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
              v16 = __rdtsc();
              LODWORD(v14) = HIDWORD(v16);
              v16 = (unsigned int)v16;
              v14 = (unsigned int)v14;
            }
            v14 = *((_QWORD *)HvlpReferenceTscPage + 2)
                + (((v16 | (v14 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
            v98 = (__int64 (__fastcall *)(_QWORD))v14;
            LODWORD(v15) = *(_DWORD *)HvlpReferenceTscPage;
            if ( *(_DWORD *)HvlpReferenceTscPage == v17 )
              goto LABEL_14;
          }
          HvlpGetRegister64(589828LL, &v98);
LABEL_14:
          v18 = (signed __int64)v98;
          goto LABEL_15;
        }
        v13 = 0LL;
      }
      v18 = guard_dispatch_icall_no_overrides(v13, v14);
      goto LABEL_15;
    }
    v12 = 10000000LL;
    if ( HalpTimerReferencePage )
    {
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v51 = *(_QWORD *)(HalpPerformanceCounter + 72)
            + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v51 = *(_QWORD *)(HalpPerformanceCounter + 72);
      v52 = *(__int64 (__fastcall **)(__int64, __int64))(HalpPerformanceCounter + 112);
      if ( v52 == HalpTscQueryCounterOrdered )
      {
        __asm { rdtscp }
        v53 = (unsigned __int64)v52 | ((_QWORD)HalpTscQueryCounterOrdered << 32);
      }
      else
      {
        v53 = guard_dispatch_icall_no_overrides(v51, HalpTscQueryCounterOrdered);
      }
      v7 = (((unsigned __int64)v53 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
         + MEMORY[0xFFFFF780000003B8];
LABEL_17:
      if ( v11 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
      {
        v80 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
        if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
          v80 = 10000000LL;
        v7 = HalpTimerScaleCounter(v7, v12, v80);
      }
      v20 = *(_BYTE *)(a1 + 172);
      v21 = v7;
      v22 = *(_QWORD *)(a1 + 176);
      v102 = 0LL;
      if ( v20 )
        v21 = v7 << v20;
      v102 = (v21 * (unsigned __int128)v22) >> 64;
      v9 = v102 - *(_QWORD *)(a1 + 34432);
      v8 = v102;
      if ( !KiTickAccumulationFromAccountingPeriods )
        goto LABEL_25;
      v23 = *(_QWORD *)(a1 + 34552);
      if ( !MEMORY[0xFFFFF78000000300] )
        goto LABEL_25;
      v100 = 0LL;
      v101 = 0LL;
      v24 = v7;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v25 = (v23 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v24 = v7 << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v25 = v23 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      }
      v100 = *((_QWORD *)&v25 + 1);
      v101 = (v24 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v26 = ((unsigned __int64)((v101 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
          - ((unsigned __int64)((*((unsigned __int64 *)&v25 + 1)
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
      if ( !v26 )
        goto LABEL_25;
      if ( (*(_DWORD *)(a2 + 116) & 0x400) != 0
        || ((v7 >> 4) & 0x1F) >= (unsigned int)__popcnt(*(unsigned int *)(a2 + 1100)) )
      {
        *(_DWORD *)(a1 + 34372) += v26;
        *(_DWORD *)(a2 + 652) += v26;
      }
      else
      {
        *(_DWORD *)(a1 + 34376) += v26;
        *(_DWORD *)(a2 + 732) += v26;
      }
      if ( a2 == *(_QWORD *)(a1 + 24) )
        goto LABEL_25;
      v54 = (char *)(a2 + 195);
      if ( *(char *)(a2 + 195) < 16 )
      {
        if ( *(_QWORD *)(a2 + 104) )
        {
          v55 = *(_QWORD *)(a2 + 104);
          if ( v55 )
          {
            v56 = v55 + *(unsigned int *)(a1 + 216);
            if ( *v54 < 16 && (*(_DWORD *)(a2 + 120) & 0x200) == 0 )
            {
              v57 = v55 + *(unsigned int *)(a1 + 216);
              while ( (*(_BYTE *)(v57 + 112) & 2) == 0 )
              {
                v57 = *(_QWORD *)(v57 + 416);
                if ( !v57 )
                {
                  do
                  {
                    v58 = *(_DWORD *)(v56 + 124);
                    if ( v58 )
                      break;
                    v56 = *(_QWORD *)(v56 + 416);
                  }
                  while ( v56 );
                  if ( v58 )
                    goto LABEL_93;
                  goto LABEL_91;
                }
              }
              goto LABEL_93;
            }
LABEL_91:
            v54 = (char *)(a2 + 195);
          }
        }
      }
      if ( *v54 >= 8 )
      {
LABEL_25:
        v10 = 1LL;
        goto LABEL_26;
      }
LABEL_93:
      *(_DWORD *)(a1 + 34412) += v26;
      goto LABEL_25;
    }
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
    {
      do
      {
        v99 = *(_QWORD *)(v11 + 208);
        do
        {
          v81 = *(_QWORD *)(v11 + 200);
          v82 = HalpTimerGetInternalData(v11);
          v83 = *(__int64 (__fastcall **)(_QWORD))(v11 + 112);
          if ( v83 == HalpHpetQueryCounter )
            v84 = HalpHpetQueryCounter(v82);
          else
            v84 = guard_dispatch_icall_no_overrides(v82, v83);
          v85 = v84;
          _InterlockedOr(v94, 0);
          v86 = *(_QWORD *)(v11 + 200);
        }
        while ( v81 != v86 );
        v79 = v99;
      }
      while ( v99 != *(_QWORD *)(v11 + 208) );
      v87 = *(_DWORD *)(v11 + 220);
      if ( ((v81 ^ v85) & (1LL << ((unsigned __int8)v87 - 1))) != 0 )
      {
        if ( v87 == 64 )
          v89 = -1LL;
        else
          v89 = (1LL << v87) - 1;
        v90 = 0LL;
        if ( v87 != 64 )
          v90 = 1LL << v87;
        v91 = v81 & v89;
        v78 = v85 | v81 ^ v91;
        if ( v85 < v91 )
          v78 += v90;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 200), v78, v86);
      }
      else
      {
        if ( v87 == 64 )
          v88 = -1LL;
        else
          v88 = (1LL << v87) - 1;
        v78 = v85 | v81 & ~v88;
      }
      goto LABEL_136;
    }
    v72 = HalpTimerGetInternalData(HalpPerformanceCounter);
    v74 = *(_QWORD *)(v11 + 112);
    v75 = v72;
    if ( (__int64 (__fastcall *)(_QWORD))v74 == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v78 = __readmsr(0x40000020u);
LABEL_135:
        v79 = *(_QWORD *)(v11 + 208);
LABEL_136:
        v7 = HalpTimerScaleCounter(v79 + v78, *(_QWORD *)(v11 + 192), 10000000LL);
        goto LABEL_17;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v97 = 0LL;
        while ( 1 )
        {
          v76 = (unsigned __int64)HvlpReferenceTscPage;
          v77 = *(_DWORD *)HvlpReferenceTscPage;
          if ( !*(_DWORD *)HvlpReferenceTscPage )
            break;
          if ( MEMORY[0xFFFFF78000000294] == v73 )
          {
            if ( KeGetCurrentPrcb()->CpuVendor == 2 )
            {
              _mm_lfence();
            }
            else if ( KeGetCurrentPrcb()->CpuVendor == 1 )
            {
              _mm_mfence();
            }
            v76 = __rdtsc();
            LODWORD(v74) = HIDWORD(v76);
            v76 = (unsigned int)v76;
            v74 = (unsigned int)v74;
          }
          else
          {
            __asm { rdtscp }
          }
          v74 = *((_QWORD *)HvlpReferenceTscPage + 2)
              + (((v76 | (v74 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v97 = (__int64 (__fastcall *)(_QWORD))v74;
          if ( *(_DWORD *)HvlpReferenceTscPage == v77 )
            goto LABEL_134;
        }
        HvlpGetRegister64(589828LL, &v97);
LABEL_134:
        v78 = (signed __int64)v97;
        goto LABEL_135;
      }
      v75 = 0LL;
    }
    v78 = guard_dispatch_icall_no_overrides(v75, v74);
    goto LABEL_135;
  }
LABEL_26:
  *(_QWORD *)(a1 + 34552) = v7;
  *(_QWORD *)(a1 + 34432) = v8;
  v27 = v9 + *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 72) = v27;
  if ( a2 != *(_QWORD *)(a1 + 24) )
  {
    v28 = ((v9 * *(unsigned int *)(a1 + 34488)) >> 16) + *(unsigned int *)(a2 + 80);
    if ( v28 > 0xFFFFFFFF )
      LODWORD(v28) = -1;
    *(_DWORD *)(a2 + 80) = v28;
  }
  v29 = *(_BYTE *)(a2 + 2);
  if ( (v29 & 0xBE) != 0 )
  {
    if ( v29 < 0 )
    {
      v30 = *(_QWORD *)(a1 + 35760);
      v31 = (*(_DWORD *)(*(_QWORD *)(a2 + 544) + 400LL) >> 13) & 0x3FFFF;
      _BitScanReverse(&v32, v31);
      v33 = (*(_DWORD *)(*(_QWORD *)(a2 + 544) + 400LL) >> 4) & 0x1FF;
      v34 = 1 << v32;
      v35 = v32 - 2;
      v96 = v35;
      v10 = *(_QWORD *)(*(_QWORD *)(v30 + 8 * v35) + 8LL * (v31 ^ v34) + 8);
      *(_QWORD *)(v10 + 8 * v33) += v9;
      v29 &= ~0x80u;
    }
    if ( (v29 & 0x10) != 0 )
    {
      v10 = a1 + 8LL * *(unsigned __int8 *)(a2 + 124);
      *(_QWORD *)(v10 + 34440) += v9;
      v29 &= ~0x10u;
    }
    if ( (v29 & 0x20) != 0 )
    {
      v38 = *(_QWORD *)(a2 + 1672);
      if ( v38 )
      {
        v39 = *(_QWORD *)(a1 + 35248);
        v40 = *(_QWORD *)(a1 + 35256);
        if ( v39 && v40 )
        {
          if ( *(_BYTE *)(v40 + 112) )
          {
            v41 = *(_DWORD *)(v40 + 132);
          }
          else
          {
            v41 = *(_DWORD *)(v40 + 80);
            v42 = *(_DWORD *)(v39 + 528);
            if ( v41 >= v42 )
              v41 = v42;
          }
        }
        else
        {
          v41 = 100;
        }
        v43 = 0;
        v44 = (unsigned __int16 *)(a1 + 35434);
        do
        {
          if ( v41 <= *v44 )
            break;
          ++v43;
          ++v44;
        }
        while ( v43 < 3 );
        v45 = *(_BYTE *)(a1 + 35336);
        v10 = v45 != 0 ? 8 : 0;
        *(_QWORD *)(v10 + v38 + 16LL * v43) += v9;
        v46 = *(_DWORD *)(v38 + 192);
        if ( KiTimelineBitmapTime > v46 )
        {
          LODWORD(v99) = KiTimelineBitmapTime;
          v10 = KiTimelineBitmapTime - v46;
          if ( (unsigned int)v10 >= 0x20 )
            HIDWORD(v99) = 1;
          else
            HIDWORD(v99) = (*(_DWORD *)(v38 + 196) << (KiTimelineBitmapTime - v46)) | 1;
          *(_QWORD *)(v38 + 192) = v99;
        }
        else
        {
          v47 = v46 - KiTimelineBitmapTime;
          if ( v47 < 0x20 )
            *(_DWORD *)(v38 + 196) |= 1 << v47;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v48 = *(unsigned __int8 *)(a2 + 516);
          if ( ((v48 - 2) & 0xFFFFFFFB) == 0 || (_BYTE)v48 == 5 )
          {
            v10 = 2LL * v43;
            *(_QWORD *)(v38 + 16LL * v43 + 8) += v9;
          }
        }
        if ( *(_QWORD *)(a2 + 1616) )
        {
          v59 = v45 != 0 ? 8 : 0;
          *(_QWORD *)(v59 + v38 + 16 * (v43 + 8LL)) += v9;
          v10 = 64LL;
          if ( v45 )
            v10 = 72LL;
          _InterlockedAdd64(
            (volatile signed __int64 *)(v10 + *(_QWORD *)(*(_QWORD *)(a2 + 1616) + 1672LL) + 16LL * v43),
            v9);
        }
      }
      v29 &= ~0x20u;
    }
    if ( (v29 & 0x40) != 0 )
    {
      v60 = *(_QWORD *)(a2 + 968);
      if ( v60 )
        *(_BYTE *)(v60 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
      KiUpdateThreadHgsFeedback(a1, a2, v9, a4);
    v36 = &KiInitialProcess;
    if ( *(_QWORD *)(a1 + 34480) )
    {
      if ( *(_UNKNOWN **)(a2 + 544) != &KiInitialProcess )
      {
        v10 = *(unsigned __int8 *)(a2 + 516);
        if ( *(unsigned __int8 *)(a2 + 516) < 7u )
        {
          v92 = *(_DWORD *)(a2 + 80);
          if ( v92 <= *(_DWORD *)(a2 + 84) )
            v92 = *(_DWORD *)(a2 + 84);
          LOBYTE(v4) = v92 >= KiDynamicHeteroCpuPolicyExpectedCycles;
          v93 = (unsigned int)*(unsigned __int8 *)(a2 + 517) + KiHgsPlusConfiguration * (v4 + 2 * (_DWORD)v10);
          *(_QWORD *)(*(_QWORD *)(a1 + 34480) + 8 * v93) += v9;
        }
      }
    }
    if ( (v29 & 0xBE) != 0 )
    {
      v49 = *(_QWORD *)(a2 + 104);
      if ( v49 )
      {
        v50 = (_QWORD *)(v49 + *(unsigned int *)(a1 + 216));
        do
        {
          *v50 += v9;
          v50 = (_QWORD *)v50[52];
        }
        while ( v50 );
      }
      if ( (*(_BYTE *)(a2 + 2) & 8) != 0 && *(_UNKNOWN **)(a2 + 544) != &KiInitialProcess )
      {
        v36 = *(_QWORD **)(a1 + 192);
        v10 = *(_QWORD *)(*(_QWORD *)(a2 + 576) + 8LL * *((unsigned __int16 *)v36 + 68) + 8);
        if ( (v10 & v36[16]) != v36[16] )
          *(_QWORD *)(a1 + 34472) += v9;
      }
      if ( *(_QWORD *)(a2 + 360) )
        KiEndCounterAccumulation(a2, v10, v36);
    }
  }
  if ( a3 )
    *a3 = v8;
  return v27;
}
