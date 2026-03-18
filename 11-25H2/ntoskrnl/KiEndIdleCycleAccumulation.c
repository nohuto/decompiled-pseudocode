/*
 * XREFs of KiEndIdleCycleAccumulation @ 0x14028D760
 * Callers:
 *     KiIdleLoop @ 0x1406A0960 (KiIdleLoop.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     KiUpdateThreadHgsFeedback @ 0x14028C900 (KiUpdateThreadHgsFeedback.c)
 *     KiEndCounterAccumulation @ 0x14028E688 (KiEndCounterAccumulation.c)
 *     HalpTimerScaleCounter @ 0x14028EF68 (HalpTimerScaleCounter.c)
 *     HvlpGetRegister64 @ 0x14028FB00 (HvlpGetRegister64.c)
 *     HalpHpetQueryCounter @ 0x140350770 (HalpHpetQueryCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KiEndIdleCycleAccumulation(__int64 a1, __int64 a2)
{
  unsigned __int128 v2; // rax
  int v3; // r12d
  __int64 v4; // rsi
  unsigned __int64 v6; // r11
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  int v14; // r9d
  signed __int64 v15; // rdx
  __int64 v16; // r13
  char v17; // cl
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int128 v21; // rax
  unsigned __int64 v22; // r10
  int v23; // r8d
  unsigned __int64 v24; // rcx
  char v25; // bl
  unsigned int v26; // ecx
  __int64 v27; // r9
  _QWORD *v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // edx
  unsigned int v33; // r8d
  unsigned __int16 *v34; // rcx
  char v35; // r10
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  int v38; // ecx
  __int64 v39; // rax
  _QWORD *v40; // rcx
  __int64 v41; // rcx
  __int64 (__fastcall *v42)(__int64, __int64); // rax
  __int64 v43; // rdx
  char *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // r9d
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 InternalData; // rax
  __int64 (__fastcall *v52)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v54; // r10
  signed __int64 v55; // rax
  int v56; // r9d
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rcx
  unsigned __int64 v60; // r8
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned __int64 v64; // rax
  int v65; // r9d
  signed __int64 v66; // rdx
  __int64 v67; // r11
  __int64 v68; // r8
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 (__fastcall *v71)(_QWORD); // rdx
  __int64 v72; // rax
  unsigned __int64 v73; // r10
  signed __int64 v74; // rax
  int v75; // r9d
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // rcx
  unsigned __int64 v79; // r8
  unsigned int v80; // ecx
  __int64 v81; // rcx
  signed __int32 v82[8]; // [rsp+0h] [rbp-60h] BYREF
  __int64 (__fastcall *v83)(_QWORD); // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall *v84)(_QWORD); // [rsp+28h] [rbp-38h] BYREF
  __int64 v85; // [rsp+30h] [rbp-30h]
  __int64 v86; // [rsp+38h] [rbp-28h]
  unsigned __int64 v87; // [rsp+40h] [rbp-20h]
  __int64 v88; // [rsp+48h] [rbp-18h]

  *((_QWORD *)&v2 + 1) = a2;
  v3 = 0;
  *(_BYTE *)(a1 + 32) = 1;
  v4 = *((_QWORD *)&v2 + 1);
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !*(_BYTE *)(a1 + 34524) )
    goto LABEL_25;
  v9 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
  {
    v10 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
    {
      do
      {
        v85 = *(_QWORD *)(v9 + 208);
        do
        {
          v50 = *(_QWORD *)(v9 + 200);
          InternalData = HalpTimerGetInternalData(v9);
          v52 = *(__int64 (__fastcall **)(_QWORD))(v9 + 112);
          if ( v52 == HalpHpetQueryCounter )
            Counter = HalpHpetQueryCounter(InternalData);
          else
            Counter = guard_dispatch_icall_no_overrides(InternalData, v52);
          v54 = Counter;
          _InterlockedOr(v82, 0);
          v55 = *(_QWORD *)(v9 + 200);
        }
        while ( v50 != v55 );
        v16 = v85;
      }
      while ( v85 != *(_QWORD *)(v9 + 208) );
      v56 = *(_DWORD *)(v9 + 220);
      if ( ((v50 ^ v54) & (1LL << ((unsigned __int8)v56 - 1))) != 0 )
      {
        if ( v56 == 64 )
          v58 = -1LL;
        else
          v58 = (1LL << v56) - 1;
        v59 = 0LL;
        if ( v56 != 64 )
          v59 = 1LL << v56;
        v60 = v50 & v58;
        v15 = v54 | v50 ^ v60;
        if ( v54 < v60 )
          v15 += v59;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 200), v15, v55);
      }
      else
      {
        if ( v56 == 64 )
          v57 = -1LL;
        else
          v57 = (1LL << v56) - 1;
        v15 = v54 | v50 & ~v57;
      }
      goto LABEL_16;
    }
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v11 = *(_QWORD *)(HalpPerformanceCounter + 72)
          + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
    else
      v11 = *(_QWORD *)(HalpPerformanceCounter + 72);
    v12 = *(_QWORD *)(HalpPerformanceCounter + 112);
    if ( (__int64 (__fastcall *)(_QWORD))v12 == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v15 = __readmsr(0x40000020u);
LABEL_15:
        v16 = *(_QWORD *)(v9 + 208);
LABEL_16:
        v6 = v15 + v16;
        goto LABEL_17;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v84 = 0LL;
        while ( 1 )
        {
          v13 = (unsigned __int64)HvlpReferenceTscPage;
          v14 = *(_DWORD *)HvlpReferenceTscPage;
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
            v13 = __rdtsc();
            LODWORD(v12) = HIDWORD(v13);
            v13 = (unsigned int)v13;
            v12 = (unsigned int)v12;
          }
          v12 = *((_QWORD *)HvlpReferenceTscPage + 2)
              + (((v13 | (v12 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v84 = (__int64 (__fastcall *)(_QWORD))v12;
          if ( *(_DWORD *)HvlpReferenceTscPage == v14 )
            goto LABEL_14;
        }
        HvlpGetRegister64(589828LL, &v84);
LABEL_14:
        v15 = (signed __int64)v84;
        goto LABEL_15;
      }
      v11 = 0LL;
    }
    v15 = guard_dispatch_icall_no_overrides(v11, v12);
    goto LABEL_15;
  }
  v10 = 10000000LL;
  if ( !HalpTimerReferencePage )
  {
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
    {
      do
      {
        v85 = *(_QWORD *)(v9 + 208);
        do
        {
          v69 = *(_QWORD *)(v9 + 200);
          v70 = HalpTimerGetInternalData(v9);
          v71 = *(__int64 (__fastcall **)(_QWORD))(v9 + 112);
          if ( v71 == HalpHpetQueryCounter )
            v72 = HalpHpetQueryCounter(v70);
          else
            v72 = guard_dispatch_icall_no_overrides(v70, v71);
          v73 = v72;
          _InterlockedOr(v82, 0);
          v74 = *(_QWORD *)(v9 + 200);
        }
        while ( v69 != v74 );
        v67 = v85;
      }
      while ( v85 != *(_QWORD *)(v9 + 208) );
      v75 = *(_DWORD *)(v9 + 220);
      if ( ((v69 ^ v73) & (1LL << ((unsigned __int8)v75 - 1))) != 0 )
      {
        if ( v75 == 64 )
          v77 = -1LL;
        else
          v77 = (1LL << v75) - 1;
        v78 = 0LL;
        if ( v75 != 64 )
          v78 = 1LL << v75;
        v79 = v69 & v77;
        v66 = v73 | v69 ^ v79;
        if ( v73 < v79 )
          v66 += v78;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 200), v66, v74);
      }
      else
      {
        if ( v75 == 64 )
          v76 = -1LL;
        else
          v76 = (1LL << v75) - 1;
        v66 = v73 | v69 & ~v76;
      }
      goto LABEL_133;
    }
    v61 = HalpTimerGetInternalData(HalpPerformanceCounter);
    v62 = *(_QWORD *)(v9 + 112);
    v63 = v61;
    if ( (__int64 (__fastcall *)(_QWORD))v62 == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v66 = __readmsr(0x40000020u);
LABEL_132:
        v67 = *(_QWORD *)(v9 + 208);
LABEL_133:
        v6 = HalpTimerScaleCounter(v67 + v66, *(_QWORD *)(v9 + 192), 10000000LL);
        goto LABEL_17;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v83 = 0LL;
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
          v83 = (__int64 (__fastcall *)(_QWORD))v62;
          if ( *(_DWORD *)HvlpReferenceTscPage == v65 )
            goto LABEL_131;
        }
        HvlpGetRegister64(589828LL, &v83);
LABEL_131:
        v66 = (signed __int64)v83;
        goto LABEL_132;
      }
      v63 = 0LL;
    }
    v66 = guard_dispatch_icall_no_overrides(v63, v62);
    goto LABEL_132;
  }
  if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
    v41 = *(_QWORD *)(HalpPerformanceCounter + 72) + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
  else
    v41 = *(_QWORD *)(HalpPerformanceCounter + 72);
  v42 = *(__int64 (__fastcall **)(__int64, __int64))(HalpPerformanceCounter + 112);
  if ( v42 == HalpTscQueryCounterOrdered )
  {
    __asm { rdtscp }
    v43 = (unsigned __int64)v42 | ((_QWORD)HalpTscQueryCounterOrdered << 32);
  }
  else
  {
    v43 = guard_dispatch_icall_no_overrides(v41, HalpTscQueryCounterOrdered);
  }
  v6 = (((unsigned __int64)v43 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
     + MEMORY[0xFFFFF780000003B8];
LABEL_17:
  if ( v9 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v68 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v68 = 10000000LL;
    v6 = HalpTimerScaleCounter(v6, v10, v68);
  }
  v17 = *(_BYTE *)(a1 + 172);
  v18 = v6;
  v19 = *(_QWORD *)(a1 + 176);
  v88 = 0LL;
  if ( v17 )
    v18 = v6 << v17;
  v2 = v18 * (unsigned __int128)v19;
  v88 = *((_QWORD *)&v2 + 1);
  v8 = *((_QWORD *)&v2 + 1) - *(_QWORD *)(a1 + 34432);
  v7 = *((_QWORD *)&v2 + 1);
  if ( KiTickAccumulationFromAccountingPeriods )
  {
    *((_QWORD *)&v2 + 1) = *(_QWORD *)(a1 + 34552);
    if ( MEMORY[0xFFFFF78000000300] )
    {
      v86 = 0LL;
      v87 = 0LL;
      v20 = v6;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v21 = (unsigned __int64)(*((_QWORD *)&v2 + 1) << MEMORY[0xFFFFF78000000369])
            * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v20 = v6 << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v21 = *((unsigned __int64 *)&v2 + 1) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      }
      v86 = *((_QWORD *)&v21 + 1);
      v87 = (v20 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v22 = (*((unsigned __int64 *)&v21 + 1) * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64;
      v2 = v87 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal;
      v23 = (*((_QWORD *)&v2 + 1) >> KiMaximumIncrementShiftCount) - (v22 >> KiMaximumIncrementShiftCount);
      if ( v23 )
      {
        if ( (*(_DWORD *)(v4 + 116) & 0x400) != 0
          || (*((_QWORD *)&v2 + 1) = __popcnt(*(unsigned int *)(v4 + 1100)), ((v6 >> 4) & 0x1F) >= DWORD2(v2)) )
        {
          *(_DWORD *)(a1 + 34372) += v23;
          *(_DWORD *)(v4 + 652) += v23;
        }
        else
        {
          *(_DWORD *)(a1 + 34376) += v23;
          *(_DWORD *)(v4 + 732) += v23;
        }
        if ( v4 != *(_QWORD *)(a1 + 24) )
        {
          v44 = (char *)(v4 + 195);
          if ( *(char *)(v4 + 195) < 16 )
          {
            if ( *(_QWORD *)(v4 + 104) )
            {
              v45 = *(_QWORD *)(v4 + 104);
              if ( v45 )
              {
                *((_QWORD *)&v2 + 1) = v45 + *(unsigned int *)(a1 + 216);
                if ( *v44 < 16 && (*(_DWORD *)(v4 + 120) & 0x200) == 0 )
                {
                  v46 = v45 + *(unsigned int *)(a1 + 216);
                  while ( (*(_BYTE *)(v46 + 112) & 2) == 0 )
                  {
                    v46 = *(_QWORD *)(v46 + 416);
                    if ( !v46 )
                    {
                      do
                      {
                        v47 = *(_DWORD *)(*((_QWORD *)&v2 + 1) + 124LL);
                        if ( v47 )
                          break;
                        *((_QWORD *)&v2 + 1) = *(_QWORD *)(*((_QWORD *)&v2 + 1) + 416LL);
                      }
                      while ( *((_QWORD *)&v2 + 1) );
                      if ( v47 )
                        break;
                      goto LABEL_88;
                    }
                  }
LABEL_90:
                  *(_DWORD *)(a1 + 34412) += v23;
                  goto LABEL_25;
                }
LABEL_88:
                v44 = (char *)(v4 + 195);
              }
            }
          }
          if ( *v44 >= 8 )
            goto LABEL_25;
          goto LABEL_90;
        }
      }
    }
  }
LABEL_25:
  *(_QWORD *)(a1 + 34552) = v6;
  *(_QWORD *)(a1 + 34432) = v7;
  *(_QWORD *)(v4 + 72) += v8;
  if ( v4 != *(_QWORD *)(a1 + 24) )
  {
    v24 = ((v8 * *(unsigned int *)(a1 + 34488)) >> 16) + *(unsigned int *)(v4 + 80);
    if ( v24 > 0xFFFFFFFF )
      LODWORD(v24) = -1;
    *(_DWORD *)(v4 + 80) = v24;
  }
  v25 = *(_BYTE *)(v4 + 2);
  if ( (v25 & 0xBE) != 0 )
  {
    if ( v25 < 0 )
    {
      LODWORD(v2) = (*(_DWORD *)(*(_QWORD *)(v4 + 544) + 400LL) >> 13) & 0x3FFFF;
      _BitScanReverse(&v26, v2);
      v27 = (*(_DWORD *)(*(_QWORD *)(v4 + 544) + 400LL) >> 4) & 0x1FF;
      *((_QWORD *)&v2 + 1) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 35760) + 8LL * (v26 - 2))
                                       + 8LL * ((unsigned int)v2 ^ (1 << v26))
                                       + 8);
      *(_QWORD *)(*((_QWORD *)&v2 + 1) + 8 * v27) += v8;
      v25 &= ~0x80u;
    }
    if ( (v25 & 0x10) != 0 )
    {
      *((_QWORD *)&v2 + 1) = a1 + 8LL * *(unsigned __int8 *)(v4 + 124);
      *(_QWORD *)(*((_QWORD *)&v2 + 1) + 34440LL) += v8;
      v25 &= ~0x10u;
    }
    if ( (v25 & 0x20) != 0 )
    {
      v29 = *(_QWORD *)(v4 + 1672);
      if ( v29 )
      {
        v30 = *(_QWORD *)(a1 + 35248);
        v31 = *(_QWORD *)(a1 + 35256);
        if ( v30 && v31 )
        {
          if ( *(_BYTE *)(v31 + 112) )
          {
            v32 = *(_DWORD *)(v31 + 132);
          }
          else
          {
            v32 = *(_DWORD *)(v31 + 80);
            if ( v32 >= *(_DWORD *)(v30 + 528) )
              v32 = *(_DWORD *)(v30 + 528);
          }
        }
        else
        {
          v32 = 100;
        }
        v33 = 0;
        v34 = (unsigned __int16 *)(a1 + 35434);
        do
        {
          if ( v32 <= *v34 )
            break;
          ++v33;
          ++v34;
        }
        while ( v33 < 3 );
        v35 = *(_BYTE *)(a1 + 35336);
        *((_QWORD *)&v2 + 1) = v35 != 0 ? 8 : 0;
        *(_QWORD *)(*((_QWORD *)&v2 + 1) + v29 + 16LL * v33) += v8;
        v36 = *(_DWORD *)(v29 + 192);
        if ( KiTimelineBitmapTime > v36 )
        {
          LODWORD(v85) = KiTimelineBitmapTime;
          *((_QWORD *)&v2 + 1) = KiTimelineBitmapTime - v36;
          if ( DWORD2(v2) >= 0x20 )
            HIDWORD(v85) = 1;
          else
            HIDWORD(v85) = (*(_DWORD *)(v29 + 196) << (KiTimelineBitmapTime - v36)) | 1;
          *(_QWORD *)(v29 + 192) = v85;
        }
        else
        {
          v37 = v36 - KiTimelineBitmapTime;
          if ( v37 < 0x20 )
            *(_DWORD *)(v29 + 196) |= 1 << v37;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v38 = *(unsigned __int8 *)(v4 + 516);
          if ( ((v38 - 2) & 0xFFFFFFFB) == 0 || (_BYTE)v38 == 5 )
          {
            *((_QWORD *)&v2 + 1) = 2LL * v33;
            *(_QWORD *)(v29 + 16LL * v33 + 8) += v8;
          }
        }
        if ( *(_QWORD *)(v4 + 1616) )
        {
          v48 = v35 != 0 ? 8 : 0;
          *(_QWORD *)(v48 + v29 + 16 * (v33 + 8LL)) += v8;
          *((_QWORD *)&v2 + 1) = 64LL;
          if ( v35 )
            *((_QWORD *)&v2 + 1) = 72LL;
          _InterlockedAdd64(
            (volatile signed __int64 *)(*((_QWORD *)&v2 + 1) + *(_QWORD *)(*(_QWORD *)(v4 + 1616) + 1672LL) + 16LL * v33),
            v8);
        }
      }
      v25 &= ~0x20u;
    }
    if ( (v25 & 0x40) != 0 )
    {
      v49 = *(_QWORD *)(v4 + 968);
      if ( v49 )
        *(_BYTE *)(v49 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
      KiUpdateThreadHgsFeedback(a1, v4, v8, 0);
    v28 = &KiInitialProcess;
    if ( *(_QWORD *)(a1 + 34480) )
    {
      if ( *(_UNKNOWN **)(v4 + 544) != &KiInitialProcess )
      {
        *((_QWORD *)&v2 + 1) = *(unsigned __int8 *)(v4 + 516);
        if ( *(unsigned __int8 *)(v4 + 516) < 7u )
        {
          v80 = *(_DWORD *)(v4 + 80);
          if ( v80 <= *(_DWORD *)(v4 + 84) )
            v80 = *(_DWORD *)(v4 + 84);
          LOBYTE(v3) = v80 >= KiDynamicHeteroCpuPolicyExpectedCycles;
          v81 = (unsigned int)*(unsigned __int8 *)(v4 + 517) + KiHgsPlusConfiguration * (v3 + 2 * DWORD2(v2));
          *(_QWORD *)(*(_QWORD *)(a1 + 34480) + 8 * v81) += v8;
        }
      }
    }
    if ( (v25 & 0xBE) != 0 )
    {
      v39 = *(_QWORD *)(v4 + 104);
      if ( v39 )
      {
        v40 = (_QWORD *)(v39 + *(unsigned int *)(a1 + 216));
        do
        {
          *v40 += v8;
          v40 = (_QWORD *)v40[52];
        }
        while ( v40 );
      }
      if ( (*(_BYTE *)(v4 + 2) & 8) != 0 && *(_UNKNOWN **)(v4 + 544) != &KiInitialProcess )
      {
        v28 = *(_QWORD **)(a1 + 192);
        *((_QWORD *)&v2 + 1) = *(_QWORD *)(*(_QWORD *)(v4 + 576) + 8LL * *((unsigned __int16 *)v28 + 68) + 8);
        if ( (*((_QWORD *)&v2 + 1) & v28[16]) != v28[16] )
          *(_QWORD *)(a1 + 34472) += v8;
      }
      if ( *(_QWORD *)(v4 + 360) )
        KiEndCounterAccumulation(v4, *((_QWORD *)&v2 + 1), v28);
    }
  }
}
