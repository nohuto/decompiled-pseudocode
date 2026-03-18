/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x14031AFA0
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402691AC (KeSetPriorityAndQuantumProcess.c)
 *     KeYieldExecution @ 0x14027B240 (KeYieldExecution.c)
 *     KiCompleteDirectSwitchThread @ 0x14027FA58 (KiCompleteDirectSwitchThread.c)
 *     KeRemovePriQueue @ 0x140305410 (KeRemovePriQueue.c)
 *     PspRevertContainerImpersonation @ 0x140308400 (PspRevertContainerImpersonation.c)
 *     KiDirectSwitchThread @ 0x140315A20 (KiDirectSwitchThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x14031A800 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeSetPriorityThread @ 0x1403778B0 (KeSetPriorityThread.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1403AB9B4 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeSetBasePriorityThread @ 0x1404713B0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x1404B71EC (KeBoostPriorityThread.c)
 *     KiStartDebugAccumulation @ 0x1405BDFE0 (KiStartDebugAccumulation.c)
 * Callees:
 *     KiUpdateThreadHgsFeedback @ 0x14028C900 (KiUpdateThreadHgsFeedback.c)
 *     KiEndCounterAccumulation @ 0x14028E688 (KiEndCounterAccumulation.c)
 *     HalRequestSoftwareInterrupt @ 0x14028F270 (HalRequestSoftwareInterrupt.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 */

unsigned __int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdi
  LARGE_INTEGER v6; // r11
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  char v10; // cl
  unsigned __int64 v11; // rax
  LARGE_INTEGER v12; // rdx
  unsigned __int64 v13; // rdx
  LARGE_INTEGER v14; // r8
  unsigned __int128 v15; // rax
  int v16; // r8d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  char v19; // bp
  __int64 v20; // r13
  unsigned int v21; // r15d
  unsigned int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // r9
  __int64 v25; // rdx
  LARGE_INTEGER v26; // rbp
  __int64 v27; // r12
  unsigned __int64 v28; // r14
  __int64 v29; // r11
  LARGE_INTEGER v30; // rax
  char v31; // cl
  LARGE_INTEGER v32; // rdx
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // ecx
  unsigned __int16 *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // r11
  unsigned int *v41; // r8
  _QWORD *v42; // r9
  __int64 v43; // r10
  bool v44; // zf
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned int v49; // edx
  unsigned int v50; // r8d
  unsigned __int16 *v51; // rcx
  char v52; // r10
  __int64 v53; // rax
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  int v56; // ecx
  LARGE_INTEGER v57; // r8
  unsigned __int128 v58; // rax
  int v59; // edx
  __int64 v60; // rcx
  _QWORD *v61; // rax
  char *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  int v66; // r9d
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  int v71; // ecx
  unsigned int v72; // edx
  __int64 v73; // rcx
  unsigned __int64 v74; // [rsp+30h] [rbp-68h]
  __int64 v75; // [rsp+A8h] [rbp+10h]

  v3 = 0LL;
  *(_BYTE *)(a1 + 32) = 1;
  v6.QuadPart = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( *(_BYTE *)(a1 + 34524) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v10 = *(_BYTE *)(a1 + 172);
    v6 = PerformanceCounter;
    v11 = *(_QWORD *)(a1 + 176);
    v12 = v6;
    if ( v10 )
      v12.QuadPart = v6.QuadPart << v10;
    v8 = (((unsigned __int64)v12.QuadPart * (unsigned __int128)v11) >> 64) - *(_QWORD *)(a1 + 34432);
    v7 = ((unsigned __int64)v12.QuadPart * (unsigned __int128)v11) >> 64;
    if ( KiTickAccumulationFromAccountingPeriods )
    {
      v13 = *(_QWORD *)(a1 + 34552);
      if ( MEMORY[0xFFFFF78000000300] )
      {
        v14 = v6;
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v15 = (v13 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v14.QuadPart = v6.QuadPart << MEMORY[0xFFFFF78000000369];
        }
        else
        {
          v15 = v13 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        }
        v16 = ((unsigned __int64)(((((unsigned __int64)v14.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                                 * (unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
            - ((unsigned __int64)((*((unsigned __int64 *)&v15 + 1)
                                 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
        if ( v16 )
        {
          if ( (*(_DWORD *)(a2 + 116) & 0x400) != 0
            || (((unsigned __int64)v6.QuadPart >> 4) & 0x1F) >= (unsigned int)__popcnt(*(unsigned int *)(a2 + 1100)) )
          {
            *(_DWORD *)(a1 + 34372) += v16;
            *(_DWORD *)(a2 + 652) += v16;
          }
          else
          {
            *(_DWORD *)(a1 + 34376) += v16;
            *(_DWORD *)(a2 + 732) += v16;
          }
          if ( a2 != *(_QWORD *)(a1 + 24) )
          {
            v62 = (char *)(a2 + 195);
            if ( *(char *)(a2 + 195) < 16 )
            {
              if ( *(_QWORD *)(a2 + 104) )
              {
                v63 = *(_QWORD *)(a2 + 104);
                if ( v63 )
                {
                  v64 = v63 + *(unsigned int *)(a1 + 216);
                  if ( *v62 < 16 && (*(_DWORD *)(a2 + 120) & 0x200) == 0 )
                  {
                    v65 = v63 + *(unsigned int *)(a1 + 216);
                    while ( (*(_BYTE *)(v65 + 112) & 2) == 0 )
                    {
                      v65 = *(_QWORD *)(v65 + 416);
                      if ( !v65 )
                      {
                        do
                        {
                          v66 = *(_DWORD *)(v64 + 124);
                          if ( v66 )
                            break;
                          v64 = *(_QWORD *)(v64 + 416);
                        }
                        while ( v64 );
                        if ( v66 )
                          break;
                        goto LABEL_100;
                      }
                    }
LABEL_102:
                    *(_DWORD *)(a1 + 34412) += v16;
                    goto LABEL_9;
                  }
LABEL_100:
                  v62 = (char *)(a2 + 195);
                }
              }
            }
            if ( *v62 >= 8 )
              goto LABEL_9;
            goto LABEL_102;
          }
        }
      }
    }
  }
LABEL_9:
  *(LARGE_INTEGER *)(a1 + 34552) = v6;
  *(_QWORD *)(a1 + 34432) = v7;
  v17 = v8 + *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 72) = v17;
  v74 = v17;
  if ( a2 != *(_QWORD *)(a1 + 24) )
  {
    v18 = ((v8 * *(unsigned int *)(a1 + 34488)) >> 16) + *(unsigned int *)(a2 + 80);
    if ( v18 > 0xFFFFFFFF )
      LODWORD(v18) = -1;
    *(_DWORD *)(a2 + 80) = v18;
  }
  v19 = *(_BYTE *)(a2 + 2);
  v20 = 1LL;
  v21 = 100;
  if ( (v19 & 0xBE) != 0 )
  {
    if ( v19 < 0 )
    {
      v22 = (*(_DWORD *)(*(_QWORD *)(a2 + 544) + 400LL) >> 13) & 0x3FFFF;
      _BitScanReverse(&v23, v22);
      v24 = (*(_DWORD *)(*(_QWORD *)(a2 + 544) + 400LL) >> 4) & 0x1FF;
      v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 35760) + 8LL * (v23 - 2)) + 8LL * (v22 ^ (1 << v23)) + 8);
      *(_QWORD *)(v25 + 8 * v24) += v8;
      v19 &= ~0x80u;
    }
    if ( (v19 & 0x10) != 0 )
    {
      v69 = a1 + 8LL * *(unsigned __int8 *)(a2 + 124);
      *(_QWORD *)(v69 + 34440) += v8;
      v19 &= ~0x10u;
    }
    if ( (v19 & 0x20) != 0 )
    {
      v46 = *(_QWORD *)(a2 + 1672);
      if ( v46 )
      {
        v47 = *(_QWORD *)(a1 + 35248);
        v48 = *(_QWORD *)(a1 + 35256);
        if ( v47 && v48 )
        {
          if ( *(_BYTE *)(v48 + 112) )
          {
            v49 = *(_DWORD *)(v48 + 132);
          }
          else
          {
            v49 = *(_DWORD *)(v48 + 80);
            if ( v49 >= *(_DWORD *)(v47 + 528) )
              v49 = *(_DWORD *)(v47 + 528);
          }
        }
        else
        {
          v49 = 100;
        }
        v50 = 0;
        v51 = (unsigned __int16 *)(a1 + 35434);
        do
        {
          if ( v49 <= *v51 )
            break;
          ++v50;
          ++v51;
        }
        while ( v50 < 3 );
        v52 = *(_BYTE *)(a1 + 35336);
        v53 = v46 + (v52 != 0 ? 8 : 0);
        *(_QWORD *)(v53 + 16LL * v50) += v8;
        v54 = *(_DWORD *)(v46 + 192);
        if ( KiTimelineBitmapTime > v54 )
        {
          LODWORD(v75) = KiTimelineBitmapTime;
          if ( KiTimelineBitmapTime - v54 >= 0x20 )
            HIDWORD(v75) = 1;
          else
            HIDWORD(v75) = (*(_DWORD *)(v46 + 196) << (KiTimelineBitmapTime - v54)) | 1;
          *(_QWORD *)(v46 + 192) = v75;
        }
        else
        {
          v55 = v54 - KiTimelineBitmapTime;
          if ( v55 < 0x20 )
            *(_DWORD *)(v46 + 196) |= 1 << v55;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v56 = *(unsigned __int8 *)(a2 + 516);
          if ( ((v56 - 2) & 0xFFFFFFFB) == 0 || (_BYTE)v56 == 5 )
            *(_QWORD *)(v46 + 16LL * v50 + 8) += v8;
        }
        if ( *(_QWORD *)(a2 + 1616) )
        {
          v67 = v52 != 0 ? 8 : 0;
          *(_QWORD *)(v67 + v46 + 16 * (v50 + 8LL)) += v8;
          v68 = 64LL;
          if ( v52 )
            v68 = 72LL;
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 1616) + 1672LL) + v68 + 16LL * v50),
            v8);
        }
      }
      v19 &= ~0x20u;
    }
    if ( (v19 & 0x40) != 0 )
    {
      v70 = *(_QWORD *)(a2 + 968);
      if ( v70 )
        *(_BYTE *)(v70 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
      KiUpdateThreadHgsFeedback(a1, a2, v8, 0);
    if ( *(_QWORD *)(a1 + 34480) && *(_UNKNOWN **)(a2 + 544) != &KiInitialProcess && *(unsigned __int8 *)(a2 + 516) < 7u )
    {
      v71 = 0;
      v72 = *(_DWORD *)(a2 + 80);
      if ( v72 <= *(_DWORD *)(a2 + 84) )
        v72 = *(_DWORD *)(a2 + 84);
      LOBYTE(v71) = v72 >= KiDynamicHeteroCpuPolicyExpectedCycles;
      v73 = *(unsigned __int8 *)(a2 + 517)
          + KiHgsPlusConfiguration * (v71 + 2 * (unsigned int)*(unsigned __int8 *)(a2 + 516));
      *(_QWORD *)(*(_QWORD *)(a1 + 34480) + 8 * v73) += v8;
    }
    if ( (v19 & 0xBE) != 0 )
    {
      v60 = *(_QWORD *)(a2 + 104);
      if ( v60 )
      {
        v61 = (_QWORD *)(v60 + *(unsigned int *)(a1 + 216));
        do
        {
          *v61 += v8;
          v61 = (_QWORD *)v61[52];
        }
        while ( v61 );
      }
      if ( (*(_BYTE *)(a2 + 2) & 8) != 0
        && *(_UNKNOWN **)(a2 + 544) != &KiInitialProcess
        && (*(_QWORD *)(*(_QWORD *)(a2 + 576) + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 136LL) + 8) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL) )
      {
        *(_QWORD *)(a1 + 34472) += v8;
      }
      if ( *(_QWORD *)(a2 + 360) )
        KiEndCounterAccumulation(a2);
    }
  }
  if ( a3 )
    *a3 = v7;
  v26.QuadPart = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( *(_BYTE *)(a1 + 34524) )
  {
    v30 = KeQueryPerformanceCounter(0LL);
    v31 = *(_BYTE *)(a1 + 172);
    v26 = v30;
    v32 = v30;
    if ( v31 )
      v32.QuadPart = v30.QuadPart << v31;
    v27 = ((unsigned __int64)v32.QuadPart * (unsigned __int128)*(unsigned __int64 *)(a1 + 176)) >> 64;
    v33 = *(_QWORD *)(a1 + 34552);
    v29 = v27 - *(_QWORD *)(a1 + 34432);
    v28 = v30.QuadPart - v33;
    if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
    {
      v57 = v30;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v58 = (v33 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v57.QuadPart = v26.QuadPart << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v58 = v33 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      }
      v59 = ((unsigned __int64)(((((unsigned __int64)v57.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                               * (unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
          - ((unsigned __int64)((*((unsigned __int64 *)&v58 + 1)
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
      if ( v59 )
      {
        *(_DWORD *)(a1 + 34372) += v59;
        *(_DWORD *)(a1 + 34384) += v59;
      }
    }
  }
  *(_QWORD *)(a1 + 34560) += v28;
  *(_QWORD *)(a1 + 34680) += v29;
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
  {
    v34 = *(_QWORD *)(a1 + 35248);
    v35 = *(_QWORD *)(a1 + 35256);
    if ( v34 && v35 )
    {
      if ( *(_BYTE *)(v35 + 112) )
      {
        v21 = *(_DWORD *)(v35 + 132);
      }
      else
      {
        v21 = *(_DWORD *)(v35 + 80);
        if ( v21 >= *(_DWORD *)(v34 + 528) )
          v21 = *(_DWORD *)(v34 + 528);
      }
    }
    v36 = 0;
    v37 = (unsigned __int16 *)(a1 + 35434);
    do
    {
      if ( v21 <= *v37 )
        break;
      ++v36;
      ++v37;
    }
    while ( v36 < 3 );
    LOBYTE(v3) = *(_BYTE *)(a1 + 35336) != 0;
    *(_QWORD *)(a1 + 8 * (v3 + 4336 + 2LL * v36)) += v29;
  }
  if ( (*(_BYTE *)(a2 + 2) & 0x40) != 0 )
  {
    v38 = *(_QWORD *)(a2 + 968);
    if ( v38 )
      *(_BYTE *)(v38 + 64) = 1;
  }
  *(LARGE_INTEGER *)(a1 + 34552) = v26;
  *(_QWORD *)(a1 + 34432) = v27;
  if ( (*(_BYTE *)(a2 + 2) & 2) != 0 )
  {
    v39 = *(_QWORD *)(a2 + 360);
    v40 = *(_QWORD *)(v39 + 32);
    if ( v40 )
    {
      if ( KiHwCountersCount )
      {
        v41 = (unsigned int *)&KiHwCounters;
        v42 = (_QWORD *)(v39 + 48);
        v43 = (unsigned int)KiHwCountersCount;
        do
        {
          if ( (v40 & v20) != 0 )
            *v42 = __readpmc(*v41);
          v20 *= 2LL;
          v42 += 3;
          ++v41;
          --v43;
        }
        while ( v43 );
      }
    }
  }
  v44 = *(_BYTE *)(a1 + 6) == 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( !v44 )
  {
    *(_BYTE *)(a1 + 6) = 0;
    HalRequestSoftwareInterrupt(2);
  }
  return v74;
}
