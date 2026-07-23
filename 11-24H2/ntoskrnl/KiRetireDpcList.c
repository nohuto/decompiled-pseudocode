/*
 * XREFs of KiRetireDpcList @ 0x1402824C0
 * Callers:
 *     KiExecuteSmtIsolationThread @ 0x1405C01A0 (KiExecuteSmtIsolationThread.c)
 *     KiExecuteDpcDelegate @ 0x1405C47B0 (KiExecuteDpcDelegate.c)
 *     KiIdleLoop @ 0x1406ACBD0 (KiIdleLoop.c)
 *     KxSwapStacksAndRetireDpcList @ 0x1406B39E0 (KxSwapStacksAndRetireDpcList.c)
 * Callees:
 *     KiNormalPriorityReadyScan @ 0x140282170 (KiNormalPriorityReadyScan.c)
 *     PoGetFrequencyBucket @ 0x140282450 (PoGetFrequencyBucket.c)
 *     RtlBackoff @ 0x140284140 (RtlBackoff.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KiTimerExpiration @ 0x140315160 (KiTimerExpiration.c)
 *     KiRcuReportQuiescentState @ 0x14031C844 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14031C9F0 (KiRcuFlushCompleted.c)
 *     KiQueryEffectivePriorityThread @ 0x14036A4C0 (KiQueryEffectivePriorityThread.c)
 *     KiEndCounterAccumulation @ 0x14036AA0C (KiEndCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x14036CDAC (KiUpdateThreadHgsFeedback.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KiTimer2Expiration @ 0x1403AFFE0 (KiTimer2Expiration.c)
 *     KiSelectActiveTimerTable @ 0x1404362A0 (KiSelectActiveTimerTable.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSrcuFlushCompleted @ 0x1405BE474 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BEDC8 (KiSrcuReportQuiescent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

signed __int16 __fastcall KiRetireDpcList(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  __int64 v4; // rsi
  unsigned __int64 v5; // r12
  LARGE_INTEGER *v6; // r15
  __int64 v7; // r13
  __int64 v8; // rdx
  LARGE_INTEGER v9; // rdi
  __int64 v10; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  char v12; // cl
  LARGE_INTEGER v13; // rdx
  _QWORD *v14; // r11
  _QWORD *v15; // rax
  LARGE_INTEGER v16; // rdx
  LARGE_INTEGER v17; // r8
  unsigned __int128 v18; // rax
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r10
  LARGE_INTEGER *v23; // rcx
  int v24; // r15d
  unsigned __int64 CurrentPrcb; // rcx
  char v26; // di
  unsigned int v27; // eax
  unsigned int v28; // ecx
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // edx
  unsigned __int16 *v34; // rcx
  char v35; // r10
  char *v36; // rax
  __int16 v37; // di
  struct _KPRCB *v38; // rcx
  unsigned __int32 *v39; // r8
  __int64 v40; // rdx
  __int64 v41; // r9
  struct _KPRCB *v42; // rcx
  unsigned __int32 *v43; // r8
  volatile signed __int32 *v44; // rdi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *v46; // r12
  __int64 v47; // r8
  unsigned int v48; // r14d
  _QWORD *v49; // r14
  _QWORD *v50; // rcx
  _QWORD *v51; // rax
  _QWORD *v52; // rdx
  char v53; // cl
  bool v54; // zf
  LARGE_INTEGER v55; // rdi
  __int64 v56; // r15
  LONGLONG v57; // r11
  __int64 v58; // r10
  LARGE_INTEGER v59; // rax
  char v60; // cl
  unsigned __int64 v61; // rax
  LARGE_INTEGER v62; // rdx
  LARGE_INTEGER *v63; // r14
  __int64 v64; // rax
  __int64 v65; // r8
  unsigned int v66; // ecx
  unsigned int v67; // edx
  unsigned __int16 *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  unsigned int *v72; // r10
  __int64 v73; // rdi
  _QWORD *v74; // r11
  signed __int16 result; // ax
  signed __int16 v76; // tt
  __int16 v77; // r9
  signed __int16 v78; // tt
  _QWORD *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  unsigned __int128 v82; // rax
  LARGE_INTEGER v83; // r8
  int v84; // edx
  LARGE_INTEGER v85; // r10
  __int64 v86; // r15
  unsigned __int64 v87; // r14
  __int64 v88; // r11
  LARGE_INTEGER v89; // rax
  char v90; // cl
  unsigned __int64 v91; // rax
  LARGE_INTEGER v92; // rdx
  unsigned __int64 v93; // rdx
  _QWORD *v94; // rdx
  __int64 v95; // r11
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // r10
  _QWORD *v99; // r8
  __int64 v100; // r9
  unsigned int *v101; // rbx
  _QWORD *v102; // rcx
  LARGE_INTEGER v103; // r8
  unsigned __int64 v104; // rdx
  int v105; // edx
  __int64 v106; // rax
  int EffectivePriorityThread; // eax
  __int64 active; // rax
  __int64 v109; // rdx
  unsigned int v110; // r13d
  unsigned __int64 v111; // r15
  __int64 v112; // r10
  __int64 v113; // r8
  bool v114; // r12
  bool v115; // r14
  struct _KPRCB *v116; // rcx
  unsigned __int32 *v117; // r8
  unsigned __int32 v118; // eax
  __int64 v119; // rdx
  unsigned __int32 v120; // ett
  unsigned __int32 v121; // eax
  unsigned __int32 v122; // ett
  unsigned int v123; // eax
  struct _KPRCB *v124; // rcx
  unsigned __int32 *v125; // r8
  struct _KPRCB *v126; // rcx
  unsigned __int32 *v127; // r8
  unsigned __int32 v128; // eax
  __int64 v129; // rdx
  unsigned __int32 v130; // ett
  unsigned __int32 v131; // eax
  __int64 v132; // rdx
  unsigned __int32 v133; // ett
  unsigned __int32 v134; // eax
  __int64 v135; // rdx
  unsigned __int32 v136; // ett
  char v137; // al
  struct _KPRCB *v138; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v140; // eax
  __int64 v141; // rdx
  unsigned __int32 v142; // ett
  unsigned int v143; // eax
  unsigned __int8 v144; // al
  unsigned __int32 v145; // eax
  unsigned __int32 v146; // ett
  _QWORD *v147; // rdi
  __int64 v148; // rax
  __int64 *v149; // rax
  __int64 v150; // rax
  unsigned __int32 *v151; // r8
  unsigned __int32 v152; // eax
  unsigned __int32 v153; // ett
  _QWORD *v154; // rax
  __int64 v155; // rdx
  unsigned __int64 *v156; // rax
  unsigned __int32 v157; // ett
  signed __int32 v158[8]; // [rsp+0h] [rbp-100h] BYREF
  char v159[16]; // [rsp+20h] [rbp-E0h]
  _QWORD *v160; // [rsp+30h] [rbp-D0h]
  __int64 *v161; // [rsp+38h] [rbp-C8h]
  LARGE_INTEGER *v162; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v163; // [rsp+50h] [rbp-B0h]
  __int64 v164; // [rsp+58h] [rbp-A8h]
  int v165; // [rsp+60h] [rbp-A0h]
  __int64 v166; // [rsp+68h] [rbp-98h]
  unsigned __int64 v167; // [rsp+70h] [rbp-90h]
  __int64 v168; // [rsp+78h] [rbp-88h]
  __int64 v169; // [rsp+80h] [rbp-80h]
  unsigned __int64 v170; // [rsp+88h] [rbp-78h]
  __int64 v171; // [rsp+98h] [rbp-68h]
  __int64 v172; // [rsp+A0h] [rbp-60h]
  __int64 v173; // [rsp+A8h] [rbp-58h]
  __int64 v174; // [rsp+B0h] [rbp-50h]
  int v175; // [rsp+C0h] [rbp-40h] BYREF
  char v176[4]; // [rsp+C4h] [rbp-3Ch] BYREF
  __int64 v177; // [rsp+C8h] [rbp-38h]

  v1 = a1;
  v174 = a1;
  memset_0(v176, 0, 0x18CuLL);
  v4 = *(_QWORD *)(v1 + 8);
  v5 = 0LL;
  v161 = (__int64 *)(v1 + 34552);
  v175 = 0;
  v6 = (LARGE_INTEGER *)(v1 + 34552);
  v162 = (LARGE_INTEGER *)(v1 + 34552);
  v160 = (_QWORD *)(v1 + 34432);
  v7 = 1LL;
  v163 = (_QWORD *)(v1 + 34432);
  while ( 1 )
  {
    *(_BYTE *)(v1 + 32) = 1;
    v8 = 0xFFFFFFFFLL;
    v9.QuadPart = 0LL;
    v10 = 0LL;
    if ( !*(_BYTE *)(v1 + 34524) )
    {
LABEL_136:
      v15 = v160;
      v23 = (LARGE_INTEGER *)v161;
      goto LABEL_11;
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v12 = *(_BYTE *)(v1 + 172);
    v171 = 0LL;
    v9 = PerformanceCounter;
    v13 = PerformanceCounter;
    if ( v12 )
      v13.QuadPart = PerformanceCounter.QuadPart << v12;
    v14 = v163;
    v15 = v163;
    v171 = ((unsigned __int64)v13.QuadPart * (unsigned __int128)*(unsigned __int64 *)(v1 + 176)) >> 64;
    v5 = v171 - *v163;
    v10 = v171;
    v160 = v163;
    if ( !KiTickAccumulationFromAccountingPeriods )
    {
      v23 = (LARGE_INTEGER *)v161;
LABEL_10:
      v8 = 0xFFFFFFFFLL;
      goto LABEL_11;
    }
    v16 = *v6;
    if ( !MEMORY[0xFFFFF78000000300] )
    {
      v15 = v163;
      v23 = v6;
      v160 = v163;
      v161 = (__int64 *)v6;
      goto LABEL_10;
    }
    v166 = 0LL;
    v167 = 0LL;
    v17 = v9;
    if ( MEMORY[0xFFFFF78000000369] )
    {
      v18 = (unsigned __int64)(v16.QuadPart << MEMORY[0xFFFFF78000000369])
          * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      v17.QuadPart = v9.QuadPart << MEMORY[0xFFFFF78000000369];
    }
    else
    {
      v18 = (unsigned __int64)v16.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    }
    v19 = *((_QWORD *)&v18 + 1);
    v166 = *((_QWORD *)&v18 + 1);
    v20 = ((unsigned __int64)v17.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
    v2 = (__int64)v162;
    v3 = v20;
    v167 = v20;
    v21 = (v20 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64;
    v22 = (unsigned __int64)((v19 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount;
    v15 = v163;
    v160 = v163;
    v23 = v162;
    v161 = (__int64 *)v162;
    v24 = (v21 >> KiMaximumIncrementShiftCount) - v22;
    if ( (unsigned int)(v21 >> KiMaximumIncrementShiftCount) == (_DWORD)v22 )
      goto LABEL_10;
    if ( (*(_DWORD *)(v4 + 116) & 0x400) != 0
      || (((unsigned __int64)v9.QuadPart >> 4) & 0x1F) >= (unsigned int)__popcnt(*(unsigned int *)(v4 + 1100)) )
    {
      *(_DWORD *)(v1 + 34372) += v24;
      *(_DWORD *)(v4 + 652) += v24;
    }
    else
    {
      *(_DWORD *)(v1 + 34376) += v24;
      *(_DWORD *)(v4 + 732) += v24;
    }
    v15 = v14;
    v161 = (__int64 *)v23;
    v160 = v14;
    if ( v4 == *(_QWORD *)(v1 + 24) )
      goto LABEL_10;
    v160 = v14;
    v161 = (__int64 *)v2;
    EffectivePriorityThread = KiQueryEffectivePriorityThread(v4, v1);
    v8 = 0xFFFFFFFFLL;
    if ( EffectivePriorityThread >= 8 )
      goto LABEL_136;
    *(_DWORD *)(v1 + 34412) += v24;
    v15 = v163;
    v23 = v162;
    v160 = v163;
    v161 = (__int64 *)v162;
LABEL_11:
    *v23 = v9;
    *v15 = v10;
    CurrentPrcb = v5 + *(_QWORD *)(v4 + 72);
    *(_QWORD *)(v4 + 72) = CurrentPrcb;
    if ( v4 != *(_QWORD *)(v1 + 24) )
    {
      CurrentPrcb = ((v5 * *(unsigned int *)(v1 + 34488)) >> 16) + *(unsigned int *)(v4 + 80);
      if ( CurrentPrcb > 0xFFFFFFFF )
        CurrentPrcb = 0xFFFFFFFFLL;
      *(_DWORD *)(v4 + 80) = CurrentPrcb;
    }
    v26 = *(_BYTE *)(v4 + 2);
    if ( (v26 & 0xBE) != 0 )
    {
      if ( v26 < 0 )
      {
        v2 = *(_QWORD *)(v1 + 35760);
        v27 = (*(_DWORD *)(*(_QWORD *)(v4 + 544) + 400LL) >> 13) & 0x3FFFF;
        _BitScanReverse(&v28, v27);
        v3 = (*(_DWORD *)(*(_QWORD *)(v4 + 544) + 400LL) >> 4) & 0x1FF;
        v29 = 1 << v28;
        v30 = v28 - 2;
        v165 = v30;
        CurrentPrcb = *(_QWORD *)(v2 + 8 * v30);
        v8 = *(_QWORD *)(CurrentPrcb + 8LL * (v27 ^ v29) + 8);
        *(_QWORD *)(v8 + 8 * v3) += v5;
        v26 &= ~0x80u;
      }
      if ( (v26 & 0x10) != 0 )
      {
        v8 = 8LL * *(unsigned __int8 *)(v4 + 124) + 34440;
        CurrentPrcb = v5 + *(_QWORD *)(v1 + v8);
        *(_QWORD *)(v1 + v8) = CurrentPrcb;
        v26 &= ~0x10u;
      }
      if ( (v26 & 0x20) != 0 )
      {
        v3 = *(_QWORD *)(v4 + 1672);
        if ( v3 )
        {
          v31 = *(_QWORD *)(v1 + 35248);
          v32 = *(_QWORD *)(v1 + 35256);
          if ( v31 && v32 )
          {
            if ( *(_BYTE *)(v32 + 112) )
            {
              v33 = *(_DWORD *)(v32 + 132);
            }
            else
            {
              v33 = *(_DWORD *)(v32 + 80);
              if ( v33 >= *(_DWORD *)(v31 + 528) )
                v33 = *(_DWORD *)(v31 + 528);
            }
          }
          else
          {
            v33 = 100;
          }
          v2 = 0LL;
          v34 = (unsigned __int16 *)(v1 + 35434);
          do
          {
            if ( v33 <= *v34 )
              break;
            v2 = (unsigned int)(v2 + 1);
            ++v34;
          }
          while ( (unsigned int)v2 < 3 );
          v35 = *(_BYTE *)(v1 + 35336);
          v164 = 0LL;
          v8 = 2LL * (unsigned int)v2;
          v36 = (char *)(v3 + (v35 != 0 ? 8 : 0));
          *(_QWORD *)&v36[16 * (unsigned int)v2] += v5;
          CurrentPrcb = *(unsigned int *)(v3 + 192);
          if ( KiTimelineBitmapTime > (unsigned int)CurrentPrcb )
          {
            LODWORD(v164) = KiTimelineBitmapTime;
            v8 = (unsigned int)(KiTimelineBitmapTime - CurrentPrcb);
            if ( (unsigned int)v8 >= 0x20 )
            {
              HIDWORD(v164) = 1;
            }
            else
            {
              CurrentPrcb = (unsigned int)v8;
              HIDWORD(v164) = (*(_DWORD *)(v3 + 196) << v8) | 1;
            }
            *(_QWORD *)(v3 + 192) = v164;
          }
          else
          {
            CurrentPrcb = (unsigned int)(CurrentPrcb - KiTimelineBitmapTime);
            if ( (unsigned int)CurrentPrcb < 0x20 )
              *(_DWORD *)(v3 + 196) |= 1 << CurrentPrcb;
          }
          if ( !KiEfficiencyClassSystem )
          {
            CurrentPrcb = *(unsigned __int8 *)(v4 + 516);
            if ( (((_DWORD)CurrentPrcb - 2) & 0xFFFFFFFB) == 0 || (_BYTE)CurrentPrcb == 5 )
            {
              v8 = 2LL * (unsigned int)v2;
              CurrentPrcb = v5 + *(_QWORD *)(v3 + 16LL * (unsigned int)v2 + 8);
              *(_QWORD *)(v3 + 16LL * (unsigned int)v2 + 8) = CurrentPrcb;
            }
          }
          if ( *(_QWORD *)(v4 + 1616) )
          {
            v80 = v35 != 0 ? 8 : 0;
            *(_QWORD *)(v80 + v3 + 16 * ((unsigned int)v2 + 8LL)) += v5;
            CurrentPrcb = *(_QWORD *)(*(_QWORD *)(v4 + 1616) + 1672LL);
            v81 = 64LL;
            if ( v35 )
              v81 = 72LL;
            v8 = 2LL * (unsigned int)v2;
            _InterlockedAdd64((volatile signed __int64 *)(CurrentPrcb + v81 + 16LL * (unsigned int)v2), v5);
          }
        }
        v26 &= ~0x20u;
      }
      if ( (v26 & 0x40) != 0 )
      {
        v106 = *(_QWORD *)(v4 + 968);
        if ( v106 )
          *(_BYTE *)(v106 + 64) = 0;
      }
      if ( KiHgsPlusEnabled )
        KiUpdateThreadHgsFeedback(v1, v4, v5, 0LL);
      if ( *(_QWORD *)(v1 + 34480) )
      {
        if ( *(_UNKNOWN **)(v4 + 544) != &KiInitialProcess )
        {
          v2 = *(unsigned __int8 *)(v4 + 516);
          if ( *(unsigned __int8 *)(v4 + 516) < 7u )
          {
            v143 = *(_DWORD *)(v4 + 84);
            v8 = *(unsigned int *)(v4 + 80);
            if ( (unsigned int)v8 <= v143 )
              v8 = v143;
            CurrentPrcb = *(unsigned __int8 *)(v4 + 517)
                        + KiHgsPlusConfiguration
                        * ((unsigned int)((unsigned int)v8 >= KiDynamicHeteroCpuPolicyExpectedCycles) + 2 * (_DWORD)v2);
            *(_QWORD *)(*(_QWORD *)(v1 + 34480) + 8 * CurrentPrcb) += v5;
          }
        }
      }
      if ( (v26 & 0xBE) != 0 )
      {
        CurrentPrcb = *(_QWORD *)(v4 + 104);
        if ( CurrentPrcb )
        {
          v79 = (_QWORD *)(CurrentPrcb + *(unsigned int *)(v1 + 216));
          do
          {
            *v79 += v5;
            v79 = (_QWORD *)v79[52];
          }
          while ( v79 );
        }
        if ( (*(_BYTE *)(v4 + 2) & 8) != 0 && *(_UNKNOWN **)(v4 + 544) != &KiInitialProcess )
        {
          v2 = *(_QWORD *)(v1 + 192);
          v8 = *(_QWORD *)(*(_QWORD *)(v4 + 576) + 8LL * *(unsigned __int16 *)(v2 + 136) + 8);
          CurrentPrcb = *(_QWORD *)(v2 + 128);
          if ( (v8 & CurrentPrcb) != CurrentPrcb )
            *(_QWORD *)(v1 + 34472) += v5;
        }
        if ( *(_QWORD *)(v4 + 360) )
          KiEndCounterAccumulation(v4, v8);
      }
    }
    if ( *(_BYTE *)(v1 + 32) <= 1u )
    {
      if ( !*(_QWORD *)(v1 + 14584) )
        goto LABEL_47;
      v144 = KeDisableInterrupts(CurrentPrcb, v8, v2, v3);
      CurrentPrcb = *(_QWORD *)(v1 + 14584);
      v2 = v144;
      if ( CurrentPrcb )
      {
        v147 = (_QWORD *)(CurrentPrcb - 8);
        v148 = *(_QWORD *)CurrentPrcb;
        if ( *(_QWORD *)(CurrentPrcb - 8) )
        {
          if ( CurrentPrcb != v148 )
            *(_QWORD *)(v1 + 14584) = v148;
        }
        else
        {
          if ( v148 == CurrentPrcb )
          {
            *(_QWORD *)(v1 + 14584) = 0LL;
          }
          else
          {
            *(_QWORD *)(v1 + 14584) = v148;
            v8 = *(_QWORD *)CurrentPrcb;
            v149 = *(__int64 **)(CurrentPrcb + 8);
            if ( *(_QWORD *)(*(_QWORD *)CurrentPrcb + 8LL) != CurrentPrcb || *v149 != CurrentPrcb )
LABEL_64:
              __fastfail(3u);
            *v149 = v8;
            *(_QWORD *)(v8 + 8) = v149;
          }
          v150 = v147[7];
          *(_QWORD *)CurrentPrcb = 0LL;
          v147[3] = *(_QWORD *)(v150 + 56);
        }
        if ( (_BYTE)v2 )
        {
          CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
          v151 = *(unsigned __int32 **)(CurrentPrcb + 36536);
          if ( v151 )
          {
            _m_prefetchw(v151);
            v152 = *v151;
            do
            {
              v8 = v152;
              LODWORD(v8) = v152 & 0xFFDFFFFF;
              v153 = v152;
              v152 = _InterlockedCompareExchange((volatile signed __int32 *)v151, v152 & 0xFFDFFFFF, v152);
            }
            while ( v153 != v152 );
            if ( (v152 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb, v8, v151, v3);
          }
          _enable();
        }
        v2 = v147[3];
        if ( v2 == v147[4] )
          goto LABEL_47;
        v154 = (_QWORD *)v147[6];
        v155 = v147[5];
        if ( (*v154 & *(_QWORD *)(v155 + 40)) == 0LL )
        {
          if ( (unsigned int)KiSrcuReportQuiescent(v147, v147[3]) )
            KiSrcuFlushCompleted(v147[7]);
          goto LABEL_47;
        }
        v2 = (unsigned __int8)KeDisableInterrupts(*v154, v155, v2, v3);
        if ( !v147[1] )
        {
          v8 = *(_QWORD *)(v1 + 14584);
          CurrentPrcb = (unsigned __int64)(v147 + 1);
          if ( v8 )
          {
            v156 = *(unsigned __int64 **)(v8 + 8);
            if ( *v156 != v8 )
              goto LABEL_64;
            *(_QWORD *)CurrentPrcb = v8;
            v147[2] = v156;
            *v156 = CurrentPrcb;
            *(_QWORD *)(v8 + 8) = CurrentPrcb;
          }
          else
          {
            v147[2] = v147 + 1;
            *(_QWORD *)CurrentPrcb = CurrentPrcb;
            CurrentPrcb = (unsigned __int64)(v147 + 1);
            *(_QWORD *)(v1 + 14584) = v147 + 1;
          }
        }
        if ( !(_BYTE)v2 )
          goto LABEL_47;
        CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
        v2 = *(_QWORD *)(CurrentPrcb + 36536);
        if ( v2 )
        {
          _m_prefetchw((const void *)v2);
          v145 = *(_DWORD *)v2;
          do
          {
            v8 = v145;
            LODWORD(v8) = v145 & 0xFFDFFFFF;
            v157 = v145;
            v145 = _InterlockedCompareExchange((volatile signed __int32 *)v2, v145 & 0xFFDFFFFF, v145);
          }
          while ( v157 != v145 );
          goto LABEL_243;
        }
LABEL_245:
        _enable();
      }
      else if ( v144 )
      {
        CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
        v2 = *(_QWORD *)(CurrentPrcb + 36536);
        if ( v2 )
        {
          _m_prefetchw((const void *)v2);
          v145 = *(_DWORD *)v2;
          do
          {
            v8 = v145;
            LODWORD(v8) = v145 & 0xFFDFFFFF;
            v146 = v145;
            v145 = _InterlockedCompareExchange((volatile signed __int32 *)v2, v145 & 0xFFDFFFFF, v145);
          }
          while ( v146 != v145 );
LABEL_243:
          if ( (v145 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v8, v2, v3);
        }
        goto LABEL_245;
      }
LABEL_47:
      if ( *(_BYTE *)(v1 + 14565) && !*(_DWORD *)(v1 + 14560) )
      {
        v137 = KeDisableInterrupts(CurrentPrcb, v8, v2, v3);
        if ( *(_BYTE *)(v1 + 14565) && !*(_DWORD *)(v1 + 14560) )
        {
          *(_BYTE *)(v1 + 14565) = 0;
          _InterlockedOr(v158, 0);
          *(_QWORD *)(v1 + 14568) = qword_140F205C8;
        }
        if ( v137 )
        {
          v138 = KeGetCurrentPrcb();
          SchedulerAssist = (unsigned __int32 *)v138->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v140 = *SchedulerAssist;
            do
            {
              v141 = v140;
              LODWORD(v141) = v140 & 0xFFDFFFFF;
              v142 = v140;
              v140 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v140 & 0xFFDFFFFF, v140);
            }
            while ( v142 != v140 );
            if ( (v140 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v138, v141, SchedulerAssist, v3);
          }
          _enable();
        }
      }
      v8 = *(_QWORD *)(v1 + 14568);
      if ( v8 != *(_QWORD *)(v1 + 14576) )
      {
        v102 = (_QWORD *)((char *)&KiRcuData + 32 * *(unsigned int *)(v1 + 36));
        if ( (*v102 & *(_QWORD *)(v102[1] + 56LL)) == 0LL )
        {
          if ( (unsigned int)KiRcuReportQuiescentState() )
            KiRcuFlushCompleted(*(unsigned __int8 *)(v1 + 14566));
        }
      }
    }
    v37 = *(_WORD *)(v1 + 14524);
    *(_WORD *)(v1 + 14524) = 1;
    if ( (v37 & 8) != 0 )
    {
      LOBYTE(v8) = 1;
      v37 &= ~8u;
      active = KiSelectActiveTimerTable(v1, v8);
      v109 = active;
      if ( active )
      {
        v110 = *(_DWORD *)(active + 16912);
        v111 = MEMORY[0xFFFFF78000000008];
        v112 = KiLastNonHrTimerExpiration;
        v113 = KiLastPseudoHrTimerExpiration;
        v3 = *(_QWORD *)(active + 16896);
        v114 = KiLastPseudoHrTimerExpiration != v3;
        v115 = KiLastNonHrTimerExpiration != *(_QWORD *)(active + 16904);
        if ( KiGlobalTimerResolutionRequests )
          v115 = KiLastPseudoHrTimerExpiration != v3;
        if ( KiLastPseudoHrTimerExpiration != v3 )
        {
          *(_QWORD *)(active + 16896) = KiLastPseudoHrTimerExpiration;
          *(_DWORD *)(active + 16912) = v111 >> 18;
        }
        if ( v115 )
        {
          v123 = *(_DWORD *)(active + 16916);
          *(_QWORD *)(v109 + 16904) = v112;
          if ( v110 >= v123 )
            v110 = v123;
          *(_DWORD *)(v109 + 16916) = v111 >> 18;
        }
        if ( v113 != v3 || v115 )
        {
          v116 = KeGetCurrentPrcb();
          v117 = (unsigned __int32 *)v116->SchedulerAssist;
          if ( v117 )
          {
            _m_prefetchw(v117);
            v128 = *v117;
            do
            {
              v129 = v128;
              LODWORD(v129) = v128 & 0xFFDFFFFF;
              v130 = v128;
              v128 = _InterlockedCompareExchange((volatile signed __int32 *)v117, v128 & 0xFFDFFFFF, v128);
            }
            while ( v130 != v128 );
            if ( (v128 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v116, v129, v117, v3);
          }
          _enable();
          v177 = MEMORY[0xFFFFF78000000014];
          KiTimerExpiration(v1, v110, v111, v115, (__int64)&v175);
        }
        else
        {
          v124 = KeGetCurrentPrcb();
          v125 = (unsigned __int32 *)v124->SchedulerAssist;
          if ( v125 )
          {
            _m_prefetchw(v125);
            v131 = *v125;
            do
            {
              v132 = v131;
              LODWORD(v132) = v131 & 0xFFDFFFFF;
              v133 = v131;
              v131 = _InterlockedCompareExchange((volatile signed __int32 *)v125, v131 & 0xFFDFFFFF, v131);
            }
            while ( v133 != v131 );
            if ( (v131 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v124, v132, v125, v3);
          }
          _enable();
          v177 = MEMORY[0xFFFFF78000000014];
        }
        if ( *(_BYTE *)(v1 + 33) )
          KiTimer2Expiration(v1, v111, v114, v115, (__int64)&v175);
        v7 = 1LL;
        _disable();
      }
      else
      {
        v126 = KeGetCurrentPrcb();
        v127 = (unsigned __int32 *)v126->SchedulerAssist;
        if ( v127 )
        {
          _m_prefetchw(v127);
          v134 = *v127;
          do
          {
            v135 = v134;
            LODWORD(v135) = v134 & 0xFFDFFFFF;
            v136 = v134;
            v134 = _InterlockedCompareExchange((volatile signed __int32 *)v127, v134 & 0xFFDFFFFF, v134);
          }
          while ( v136 != v134 );
          if ( (v134 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v126, v135, v127, v3);
        }
        _enable();
        v177 = MEMORY[0xFFFFF78000000014];
        _disable();
      }
    }
    if ( (v37 & 0x40) != 0 )
    {
      v38 = KeGetCurrentPrcb();
      v37 &= ~0x40u;
      v39 = (unsigned __int32 *)v38->SchedulerAssist;
      if ( v39 )
      {
        _m_prefetchw(v39);
        v118 = *v39;
        do
        {
          v119 = v118;
          LODWORD(v119) = v118 & 0xFFDFFFFF;
          v120 = v118;
          v118 = _InterlockedCompareExchange((volatile signed __int32 *)v39, v118 & 0xFFDFFFFF, v118);
        }
        while ( v120 != v118 );
        if ( (v118 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v38, v119, v39, v3);
      }
      _enable();
      KiNormalPriorityReadyScan((_DWORD *)v1);
      _disable();
    }
    if ( !(unsigned __int8)KiExecuteAllDpcs(v1, v4, &v175, 0LL) )
      break;
    if ( (v37 & 4) != 0 )
    {
      v42 = KeGetCurrentPrcb();
      v43 = (unsigned __int32 *)v42->SchedulerAssist;
      if ( v43 )
      {
        _m_prefetchw(v43);
        v121 = *v43;
        do
        {
          v40 = v121;
          LODWORD(v40) = v121 & 0xFFDFFFFF;
          v122 = v121;
          v121 = _InterlockedCompareExchange((volatile signed __int32 *)v43, v121 & 0xFFDFFFFF, v121);
        }
        while ( v122 != v121 );
        if ( (v121 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v42, v40, v43, v41);
      }
      _enable();
      v44 = (volatile signed __int32 *)(v1 + 33600);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      v46 = KeGetCurrentPrcb();
      v47 = 0LL;
      v48 = 0;
      if ( _interlockedbittestandset(v44, 7u) )
      {
        do
        {
          if ( (++v48 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v42, v40, v47, v41) )
          {
            HvlNotifyLongSpinWait(v48);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( (*v44 & 0x80u) != 0 || _interlockedbittestandset(v44, 7u) );
      }
      if ( !*(_DWORD *)(v1 + 33604) )
      {
        v49 = *(_QWORD **)(v1 + 33608);
        *(_DWORD *)(v1 + 33604) = 1;
        while ( v49 != (_QWORD *)(v1 + 33608) )
        {
          v50 = (_QWORD *)*v49;
          v51 = v49;
          v49 = v50;
          v52 = (_QWORD *)v51[1];
          if ( (_QWORD *)v50[1] != v51 || (_QWORD *)*v52 != v51 )
            goto LABEL_64;
          *v52 = v50;
          v50[1] = v52;
          v53 = *((_BYTE *)v51 + 16);
          switch ( v53 )
          {
            case 1:
              if ( (unsigned __int8)KiTryUnwaitThread(v46, v51, *((unsigned __int16 *)v51 + 9), 0LL) )
              {
                v54 = (*(_DWORD *)(v1 + 33604))-- == 1;
                if ( v54 )
                  goto LABEL_68;
              }
              break;
            case 2:
              *((_BYTE *)v51 + 17) = 5;
              KiInsertQueueInternal(v51[3], v51);
              v54 = (*(_DWORD *)(v1 + 33604))-- == 1;
              if ( v54 )
                goto LABEL_68;
              break;
            case 4:
              *((_BYTE *)v51 + 17) = 5;
              *(_DWORD *)(v1 + 33604) = 0;
              KeInsertQueueDpc((PRKDPC)v51[3], (PVOID)(v1 + 33600), v51);
              break;
            default:
              KiTryUnwaitThread(v46, v51, 256LL, 0LL);
              break;
          }
        }
      }
LABEL_68:
      _InterlockedAnd(v44, 0xFFFFFF7F);
      v159[0] = CurrentIrql;
      v7 = 1LL;
      KiExitDispatcher(v46, v159[0]);
      _disable();
    }
    v5 = 0LL;
    v55.QuadPart = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    if ( *(_BYTE *)(v1 + 34524) )
    {
      v59 = KeQueryPerformanceCounter(0LL);
      v60 = *(_BYTE *)(v1 + 172);
      v55 = v59;
      v61 = *(_QWORD *)(v1 + 176);
      v62 = v55;
      v172 = 0LL;
      if ( v60 )
        v62.QuadPart = v55.QuadPart << v60;
      v63 = (LARGE_INTEGER *)v161;
      v3 = (unsigned __int64)v160;
      v2 = *v161;
      v172 = ((unsigned __int64)v62.QuadPart * (unsigned __int128)v61) >> 64;
      v58 = v172 - *v160;
      v57 = v55.QuadPart - v2;
      v56 = v172;
      if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
      {
        v168 = 0LL;
        v169 = 0LL;
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v82 = (unsigned __int64)(v2 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v83.QuadPart = v55.QuadPart << MEMORY[0xFFFFF78000000369];
        }
        else
        {
          v82 = (unsigned __int64)v2 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v83 = v55;
        }
        v168 = *((_QWORD *)&v82 + 1);
        v2 = ((unsigned __int64)v83.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
        v169 = v2;
        v63 = (LARGE_INTEGER *)v161;
        v84 = ((unsigned __int64)(((unsigned __int64)v2
                                 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
            - ((unsigned __int64)((*((unsigned __int64 *)&v82 + 1)
                                 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
        v3 = (unsigned __int64)v160;
        if ( v84 )
        {
          *(_DWORD *)(v1 + 34372) += v84;
          *(_DWORD *)(v1 + 34380) += v84;
        }
      }
    }
    else
    {
      v3 = (unsigned __int64)v160;
      v63 = (LARGE_INTEGER *)v161;
    }
    *(_QWORD *)(v1 + 34560) += v57;
    *(_QWORD *)(v1 + 34680) += v58;
    if ( (*(_BYTE *)(v4 + 2) & 0x20) != 0 )
    {
      v64 = *(_QWORD *)(v1 + 35248);
      v65 = *(_QWORD *)(v1 + 35256);
      if ( v64 && v65 )
      {
        if ( *(_BYTE *)(v65 + 112) )
        {
          v2 = *(unsigned int *)(v65 + 132);
        }
        else
        {
          v2 = *(unsigned int *)(v65 + 80);
          v66 = *(_DWORD *)(v64 + 528);
          if ( (unsigned int)v2 >= v66 )
            v2 = v66;
        }
      }
      else
      {
        v2 = 100LL;
      }
      v67 = 0;
      v68 = (unsigned __int16 *)(v1 + 35434);
      do
      {
        if ( (unsigned int)v2 <= *v68 )
          break;
        ++v67;
        ++v68;
      }
      while ( v67 < 3 );
      v69 = (*(_BYTE *)(v1 + 35336) != 0) + 2LL * v67 + 4336;
      *(_QWORD *)(v1 + 8 * v69) += v58;
    }
    if ( (*(_BYTE *)(v4 + 2) & 0x40) != 0 )
    {
      v70 = *(_QWORD *)(v4 + 968);
      if ( v70 )
        *(_BYTE *)(v70 + 64) = 1;
    }
    *v63 = v55;
    *(_QWORD *)v3 = v56;
    if ( (*(_BYTE *)(v4 + 2) & 2) != 0 )
    {
      v71 = *(_QWORD *)(v4 + 360);
      v3 = *(_QWORD *)(v71 + 32);
      if ( v3 )
      {
        v2 = 1LL;
        if ( KiHwCountersCount )
        {
          v72 = (unsigned int *)&KiHwCounters;
          v73 = (unsigned int)KiHwCountersCount;
          v74 = (_QWORD *)(v71 + 48);
          do
          {
            if ( (v3 & v2) != 0 )
              *v74 = __readpmc(*v72);
            v2 *= 2LL;
            v74 += 3;
            ++v72;
            --v73;
          }
          while ( v73 );
        }
      }
    }
    *(_BYTE *)(v1 + 32) = 0;
    if ( *(_BYTE *)(v1 + 6) )
      *(_BYTE *)(v1 + 6) = 0;
    result = _InterlockedCompareExchange16((volatile signed __int16 *)(v1 + 14524), 0, 1);
    if ( result == 1 )
      goto LABEL_102;
    v6 = v162;
  }
  v85.QuadPart = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  if ( *(_BYTE *)(v1 + 34524) )
  {
    v89 = KeQueryPerformanceCounter(0LL);
    v90 = *(_BYTE *)(v1 + 172);
    v85 = v89;
    v91 = *(_QWORD *)(v1 + 176);
    v92 = v85;
    v173 = 0LL;
    if ( v90 )
      v92.QuadPart = v85.QuadPart << v90;
    v86 = ((unsigned __int64)v92.QuadPart * (unsigned __int128)v91) >> 64;
    v173 = v86;
    v93 = *(_QWORD *)(v1 + 34552);
    v88 = v86 - *(_QWORD *)(v1 + 34432);
    v87 = v85.QuadPart - v93;
    if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
    {
      v163 = 0LL;
      v103 = v85;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v104 = ((v93 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
        v103.QuadPart = v85.QuadPart << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v104 = (v93 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      }
      v163 = (_QWORD *)v104;
      v170 = ((unsigned __int64)v103.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v105 = ((unsigned __int64)((v170 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
           - ((unsigned __int64)((v104 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
      if ( v105 )
      {
        *(_DWORD *)(v1 + 34372) += v105;
        *(_DWORD *)(v1 + 34380) += v105;
      }
    }
  }
  *(_QWORD *)(v1 + 34560) += v87;
  *(_QWORD *)(v1 + 34680) += v88;
  if ( (*(_BYTE *)(v4 + 2) & 0x20) != 0 )
  {
    v94 = (_QWORD *)(v1 + 8 * ((*(_BYTE *)(v1 + 35336) != 0) + 2LL * (unsigned int)PoGetFrequencyBucket(v1) + 4336));
    *v94 += v95;
  }
  if ( (*(_BYTE *)(v4 + 2) & 0x40) != 0 )
  {
    v96 = *(_QWORD *)(v4 + 968);
    if ( v96 )
      *(_BYTE *)(v96 + 64) = 1;
  }
  *(LARGE_INTEGER *)(v1 + 34552) = v85;
  *(_QWORD *)(v1 + 34432) = v86;
  if ( (*(_BYTE *)(v4 + 2) & 2) != 0 )
  {
    v97 = *(_QWORD *)(v4 + 360);
    v98 = *(_QWORD *)(v97 + 32);
    if ( v98 )
    {
      if ( KiHwCountersCount )
      {
        v99 = (_QWORD *)(v97 + 48);
        v100 = (unsigned int)KiHwCountersCount;
        v101 = (unsigned int *)&KiHwCounters;
        do
        {
          if ( (v98 & v7) != 0 )
            *v99 = __readpmc(*v101);
          v7 *= 2LL;
          v99 += 3;
          ++v101;
          --v100;
        }
        while ( v100 );
        v1 = v174;
      }
    }
  }
  v54 = *(_BYTE *)(v1 + 6) == 0;
  *(_BYTE *)(v1 + 32) = 0;
  if ( !v54 )
    *(_BYTE *)(v1 + 6) = 0;
  LODWORD(v162) = 0;
  _m_prefetchw((const void *)(v1 + 14524));
  v76 = *(_WORD *)(v1 + 14524);
  result = _InterlockedCompareExchange16((volatile signed __int16 *)(v1 + 14524), (v37 | v76) & 0xFF7E | 0x80, v76);
  if ( v76 != result )
  {
    do
    {
      RtlBackoff(&v162);
      _m_prefetchw((const void *)(v1 + 14524));
      v78 = *(_WORD *)(v1 + 14524);
      result = _InterlockedCompareExchange16((volatile signed __int16 *)(v1 + 14524), v77 | (v37 | v78) & 0xFFFE, v78);
    }
    while ( v78 != result );
  }
LABEL_102:
  *(_QWORD *)(v1 + 14432) = 0LL;
  return result;
}
