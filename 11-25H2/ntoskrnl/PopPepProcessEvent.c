/*
 * XREFs of PopPepProcessEvent @ 0x1402BD780
 * Callers:
 *     PopPluginComponentActive @ 0x1402BC504 (PopPluginComponentActive.c)
 *     PopFxIdleWorkerTail @ 0x1403492B0 (PopFxIdleWorkerTail.c)
 *     PopFxActivateComponentWorker @ 0x140349BD0 (PopFxActivateComponentWorker.c)
 *     PopFxProcessWork @ 0x14034B940 (PopFxProcessWork.c)
 *     PopFxActivateComponentDependents @ 0x14034C650 (PopFxActivateComponentDependents.c)
 *     PopPluginComponentIdleState @ 0x140357BF0 (PopPluginComponentIdleState.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140359474 (PopFxCompleteDevicePowerRequired.c)
 *     PopPepCompleteComponentIdleState @ 0x1404CBFBC (PopPepCompleteComponentIdleState.c)
 *     PopPepUnregisterDevice @ 0x140A72A18 (PopPepUnregisterDevice.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     ExpTryQueueWorkItem @ 0x14028214C (ExpTryQueueWorkItem.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     PopPepStartActivity @ 0x1402BC628 (PopPepStartActivity.c)
 *     PopPepReleaseActivityLink @ 0x1402BE970 (PopPepReleaseActivityLink.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     PopPepTriggerActivity @ 0x1402BEB90 (PopPepTriggerActivity.c)
 *     PopPepPromoteActivities @ 0x1402BEEB0 (PopPepPromoteActivities.c)
 *     PopPepCompleteComponentActiveActivity @ 0x1402BF3A0 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepTriggerComponentActiveActivity @ 0x1402C0C40 (PopPepTriggerComponentActiveActivity.c)
 *     PopPepTriggerComponentActivatingActivity @ 0x1402C0C60 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepRequestWork @ 0x1402C126C (PopPepRequestWork.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     PopPepStartComponentActivatingActivity @ 0x14034E210 (PopPepStartComponentActivatingActivity.c)
 *     PopPepStartDevicePowerOnActivity @ 0x14034E240 (PopPepStartDevicePowerOnActivity.c)
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     PopPepStartDevicePowerOffActivity @ 0x14034E320 (PopPepStartDevicePowerOffActivity.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1403576E0 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     PopPepGetReadyActivityType @ 0x14044E04C (PopPepGetReadyActivityType.c)
 *     PopPepTriggerComponentIdleStateChangeActivity @ 0x14045AF30 (PopPepTriggerComponentIdleStateChangeActivity.c)
 *     PopPepCompleteDevicePowerOnActivity @ 0x1404838A0 (PopPepCompleteDevicePowerOnActivity.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPepProcessEvent(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  ULONG_PTR v6; // rsi
  __int64 v7; // r13
  ULONG_PTR v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // ecx
  unsigned int v12; // r10d
  int v13; // r12d
  __int64 v14; // rdx
  int *v15; // rcx
  __int64 (__fastcall *v16)(_QWORD, _QWORD, _QWORD); // rax
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  BOOL v21; // ecx
  ULONG_PTR v22; // r11
  int v23; // edx
  __int64 v24; // rax
  _DWORD *v25; // r8
  _DWORD *v26; // rax
  __int64 (__fastcall *v27)(); // rax
  int v28; // ebp
  unsigned int *v29; // rdi
  _DWORD **v30; // r9
  unsigned int v31; // r10d
  char v32; // r14
  char *v33; // r8
  int v34; // edx
  int v35; // r9d
  int *v36; // rdx
  __int64 v37; // r11
  int i; // r8d
  __int64 *v39; // rdx
  int v40; // r8d
  _DWORD **v41; // r9
  unsigned int v42; // r8d
  unsigned int v43; // edx
  _DWORD **v44; // r9
  __int64 *v45; // r15
  __int64 v46; // rcx
  __int64 v47; // rbp
  __int64 v48; // rdi
  __int64 v49; // r14
  unsigned int *v50; // r12
  unsigned int v51; // r13d
  int v52; // r11d
  char *v53; // rdx
  int v54; // r8d
  _DWORD **v55; // r10
  char *v56; // rdx
  unsigned int v57; // edi
  unsigned int v58; // r11d
  char *v59; // rax
  char *v60; // r8
  int v61; // edx
  __int64 v62; // r10
  __int64 *v63; // rdx
  int v64; // r8d
  _DWORD **v65; // r10
  __int64 *j; // rdx
  unsigned int v67; // eax
  unsigned int *v68; // rcx
  _DWORD **v69; // r9
  __int64 v70; // r11
  char v71; // bp
  char *v72; // rdx
  int v73; // r8d
  int *v74; // r10
  int v75; // r8d
  __int64 v76; // rdi
  __int64 *v77; // r8
  int v78; // edx
  _DWORD **v79; // r9
  __int64 v80; // r14
  unsigned __int8 v81; // si
  unsigned int v82; // r15d
  unsigned int v83; // eax
  bool v84; // bp
  unsigned int jj; // ecx
  _DWORD *v86; // rdx
  volatile LONG *v87; // rdi
  KIRQL v88; // al
  __int64 v89; // r8
  bool v90; // zf
  KIRQL v91; // bp
  unsigned int v92; // r15d
  int v94; // r8d
  int v95; // r8d
  int v96; // edx
  int v97; // r9d
  int **v98; // rcx
  int v99; // edx
  __int64 v100; // rdi
  __int64 (__fastcall *v101)(); // rax
  unsigned __int8 v102; // al
  unsigned int n; // edx
  __int64 v104; // rax
  unsigned int ii; // edx
  int ReadyActivityType; // eax
  KIRQL v107; // al
  unsigned int v108; // eax
  __int64 v109; // rdi
  unsigned int v110; // r12d
  unsigned int v111; // r15d
  int v112; // ecx
  int v113; // ecx
  int v114; // ecx
  int v115; // ecx
  int v116; // ecx
  int v117; // ecx
  int v118; // r8d
  int v119; // r8d
  int v120; // edx
  int v121; // edx
  int v122; // edx
  unsigned int v123; // r12d
  unsigned int v124; // r15d
  unsigned int v125; // r9d
  _DWORD *v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rdx
  _DWORD *v129; // rcx
  int **v130; // rdx
  int m; // ecx
  int v132; // r8d
  __int64 v133; // rdi
  __int64 (__fastcall *v134)(); // rax
  unsigned __int8 started; // al
  unsigned int k; // edx
  int v137; // r9d
  int **v138; // rdx
  int v139; // ecx
  char v140; // [rsp+30h] [rbp-68h]
  unsigned int v141; // [rsp+34h] [rbp-64h]
  int v142; // [rsp+38h] [rbp-60h]
  unsigned int v143; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v144; // [rsp+40h] [rbp-58h]
  __int64 v145; // [rsp+48h] [rbp-50h]
  __int64 v146; // [rsp+50h] [rbp-48h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  char v150; // [rsp+B0h] [rbp+18h]
  KIRQL v151; // [rsp+C0h] [rbp+28h]

  v6 = (int)a4;
  v7 = a2;
  v8 = (int)a3;
  v9 = a1;
  v150 = 0;
  if ( !a2 || *(_DWORD *)(a1 + 180) == 1 )
    goto LABEL_3;
  if ( a3 == 6 )
  {
    if ( a4 == 6 )
      goto LABEL_3;
  }
  else if ( a3 <= 5 && LOBYTE(ActivityAttributes[17 * (int)a3]) == 1 )
  {
    goto LABEL_3;
  }
  if ( a4 > 5 || LOBYTE(ActivityAttributes[17 * (int)a4]) != 1 )
  {
    v107 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
    v151 = v107;
    if ( *(_BYTE *)(v9 + 125) != 1 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v7);
      goto LABEL_4;
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v9 + 64), v107);
  }
LABEL_3:
  v150 = 1;
  v151 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 64));
  *(_BYTE *)(v9 + 125) = 1;
LABEL_4:
  if ( (_DWORD)v8 == 6 || (v10 = 136 * v8, v11 = HIDWORD(ActivityAttributes[17 * v8 + 1]), v11 < 2) )
  {
    v12 = *(_DWORD *)(v9 + 120);
    v141 = v12;
    v142 = 2;
    v10 = 136 * v8;
LABEL_7:
    v13 = v142;
    v14 = v10;
    if ( v7 )
    {
      v12 += *(_DWORD *)(v7 + 104);
      v141 = v12;
    }
LABEL_9:
    if ( (_DWORD)v8 == 6 )
      goto LABEL_16;
    goto LABEL_10;
  }
  v12 = *(_DWORD *)(v9 + 120);
  v141 = v12;
  v142 = HIDWORD(ActivityAttributes[17 * v8 + 1]);
  if ( v11 == 2 )
    goto LABEL_7;
  v142 = HIDWORD(ActivityAttributes[17 * v8 + 1]);
  v14 = 136 * v8;
  v13 = v142;
  if ( v11 != 3 )
    goto LABEL_9;
  v125 = *(_DWORD *)(v9 + 180);
  v142 = 3;
  if ( !v125 )
    goto LABEL_9;
  v126 = (_DWORD *)(v9 + 296);
  v127 = v125;
  do
  {
    v12 += *v126;
    v126 += 52;
    --v127;
  }
  while ( v127 );
  v14 = 136 * v8;
LABEL_10:
  v141 = v12;
  v142 = v13;
  if ( (unsigned int)v8 <= 5 && *((_BYTE *)ActivityAttributes + v14) == 1 )
  {
    v15 = *(int **)(v9 + 8 * v8 + 72);
    v142 = v13;
    v141 = v12;
  }
  else
  {
    v15 = *(int **)(v7 + 8 * v8 + 56);
  }
  if ( (*v15 & 4) == 0 )
    PopFxBugCheck(0x667uLL, (ULONG_PTR)v15, v8, *v15);
  *v15 &= ~4u;
  v16 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))((char *)&off_140001B80 + v14);
  if ( v16 == PopPepCompleteComponentActiveActivity )
  {
    PopPepCompleteComponentActiveActivity(v9, v7, v8);
  }
  else if ( v16 == PopPepCompleteComponentIdleStateChangeActivity )
  {
    PopPepCompleteComponentIdleStateChangeActivity(v9, v7, v8);
  }
  else if ( v16 == PopPepCompleteDevicePowerOnActivity )
  {
    PopPepCompleteDevicePowerOnActivity(v9, v7, v8);
  }
  else
  {
    guard_dispatch_icall_no_overrides(v9, v7);
  }
LABEL_16:
  if ( (_DWORD)v6 == 6 )
    goto LABEL_38;
  v17 = HIDWORD(ActivityAttributes[17 * v6]);
  if ( v17 )
  {
    if ( v17 == 1 )
    {
      v18 = dword_140001B28[34 * v6];
      if ( v18 )
      {
        v94 = **(_DWORD **)(v9 + 72);
        if ( (v94 & v18) != 0 )
        {
          if ( (v94 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(v9 + 120));
          **(_DWORD **)(v9 + 72) &= 0xFFFFFFFC;
        }
      }
      v19 = dword_140001B38[34 * v6];
      if ( v19 )
      {
        v95 = **(_DWORD **)(v9 + 104);
        if ( (v95 & v19) != 0 )
        {
          if ( (v95 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(v9 + 120));
          **(_DWORD **)(v9 + 104) &= 0xFFFFFFFC;
        }
      }
      v20 = dword_140001B3C[34 * v6];
      if ( !v20 )
        goto LABEL_22;
      v96 = **(_DWORD **)(v9 + 112);
      if ( (v96 & v20) == 0 )
        goto LABEL_22;
    }
    else
    {
      if ( v17 != 2 )
        goto LABEL_22;
      if ( *(_BYTE *)(v9 + 125) )
      {
        v112 = dword_140001B28[34 * v6];
        if ( v112 )
        {
          v122 = **(_DWORD **)(v9 + 72);
          if ( (v122 & v112) != 0 )
          {
            if ( (v122 & 2) != 0 )
              _InterlockedDecrement((volatile signed __int32 *)(v9 + 120));
            **(_DWORD **)(v9 + 72) &= 0xFFFFFFFC;
          }
        }
      }
      v113 = dword_140001B2C[34 * v6];
      if ( v113 )
      {
        v118 = **(_DWORD **)(v7 + 64);
        if ( (v118 & v113) != 0 )
        {
          if ( (v118 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(v7 + 104));
          **(_DWORD **)(v7 + 64) &= 0xFFFFFFFC;
        }
      }
      v114 = dword_140001B30[34 * v6];
      if ( v114 )
      {
        v119 = **(_DWORD **)(v7 + 72);
        if ( (v119 & v114) != 0 )
        {
          if ( (v119 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(v7 + 104));
          **(_DWORD **)(v7 + 72) &= 0xFFFFFFFC;
        }
      }
      v115 = dword_140001B34[34 * v6];
      if ( v115 )
      {
        v120 = **(_DWORD **)(v7 + 80);
        if ( (v120 & v115) != 0 )
        {
          if ( (v120 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(v7 + 104));
          **(_DWORD **)(v7 + 80) &= 0xFFFFFFFC;
        }
      }
      if ( !*(_BYTE *)(v9 + 125) )
        goto LABEL_22;
      v116 = dword_140001B38[34 * v6];
      if ( v116 )
      {
        v121 = **(_DWORD **)(v9 + 104);
        if ( (v121 & v116) != 0 )
        {
          if ( (v121 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(v9 + 120));
          **(_DWORD **)(v9 + 104) &= 0xFFFFFFFC;
        }
      }
      v117 = dword_140001B3C[34 * v6];
      if ( !v117 )
        goto LABEL_22;
      v96 = **(_DWORD **)(v9 + 112);
      if ( (v96 & v117) == 0 )
        goto LABEL_22;
    }
    if ( (v96 & 2) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 120));
    **(_DWORD **)(v9 + 112) &= 0xFFFFFFFC;
  }
LABEL_22:
  v21 = (unsigned int)v6 <= 5 && LOBYTE(ActivityAttributes[17 * v6]) == 1;
  v22 = v9 + 72;
  v23 = 0;
  if ( !v21 )
    v22 = v7 + 56;
  v24 = 0LL;
  while ( v23 < 6 )
  {
    v25 = *(_DWORD **)(v22 + 8 * v24);
    if ( v25 )
    {
      if ( (dword_140001B10[34 * v6 + v24] & *v25) != 0 )
        PopFxBugCheck(0x666uLL, v22, v6, v23);
    }
    ++v23;
    ++v24;
  }
  if ( v7 )
    v26 = *(_DWORD **)(v7 + 8 * v6 + 56);
  else
    v26 = *(_DWORD **)(v9 + 8 * v6 + 72);
  *v26 |= 1u;
  v26[1] = 0;
  v27 = off_140001B70[17 * v6];
  if ( (char *)v27 == (char *)PopPepTriggerComponentActiveActivity )
  {
    PopPepTriggerComponentActiveActivity(v9, v7, 0LL);
  }
  else if ( (char *)v27 == (char *)PopPepTriggerComponentActivatingActivity )
  {
    PopPepTriggerComponentActivatingActivity(v9, v7, 0LL);
  }
  else if ( (char *)v27 == (char *)PopPepTriggerComponentIdleStateChangeActivity )
  {
    PopPepTriggerComponentIdleStateChangeActivity(v9, v7, 0LL);
  }
  else
  {
    guard_dispatch_icall_no_overrides(v9, v7);
  }
LABEL_38:
  v28 = v13;
  if ( !v7 && v13 == 2 )
    v28 = 1;
  v29 = *(unsigned int **)(v9 + 72);
  v30 = (_DWORD **)(v9 + 72);
  v31 = *v29;
  if ( (*v29 & 1) != 0 )
  {
    v32 = *((_BYTE *)v29 + 16);
    v33 = byte_140001B58;
    v34 = 0;
    if ( !v32 )
      v33 = byte_140001B40;
    while ( v34 <= 0 )
    {
      if ( *(_DWORD *)v33 && (*(_DWORD *)v33 & **v30) != 0 )
        goto LABEL_64;
      ++v34;
      ++v30;
      v33 += 4;
    }
    v35 = *(_DWORD *)(v9 + 180);
    v142 = v13;
    while ( !v35 )
    {
      v36 = &dword_140001B5C;
      v37 = 1LL;
      if ( !v32 )
        v36 = &dword_140001B44;
      for ( i = 1; i <= 3; ++i )
      {
        if ( *v36 && (*v36 & **(_DWORD **)(v9 + 8 * v37 + 248)) != 0 )
          goto LABEL_64;
        ++v37;
        ++v36;
      }
      v35 = 1;
    }
    v39 = &qword_140001B68;
    v40 = 4;
    if ( !v32 )
      v39 = &qword_140001B50;
    v41 = (_DWORD **)(v9 + 104);
    while ( v40 <= 5 )
    {
      if ( *(_DWORD *)v39 && (*(_DWORD *)v39 & **v41) != 0 )
        goto LABEL_64;
      ++v40;
      ++v41;
      v39 = (__int64 *)((char *)v39 + 4);
    }
    v29[2] = v29[1];
    *v29 = v31 & 0xFFFFFFFC | 2;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 120));
  }
LABEL_64:
  if ( v28 == 2 )
  {
    v42 = *(_DWORD *)(v7 + 8);
    v43 = v42;
    v143 = v42;
    v144 = v42;
  }
  else
  {
    v43 = 0;
    if ( v28 != 3 )
      v43 = *(_DWORD *)(v9 + 180);
    v143 = v43;
    v42 = *(_DWORD *)(v9 + 180) - 1;
    if ( v28 != 3 )
      v42 = 0;
    v144 = v42;
    if ( v43 > v42 )
      goto LABEL_100;
  }
  v44 = (_DWORD **)(v9 + 72);
  do
  {
    v45 = qword_140001B90;
    v46 = 3LL;
    v47 = 17LL;
    v145 = 3LL;
    v48 = v9 + 208LL * v43 + 192;
    v49 = 64LL;
    v146 = v48;
    do
    {
      v50 = *(unsigned int **)(v49 + v48);
      v51 = *v50;
      if ( (*v50 & 1) != 0 )
      {
        v52 = *(_DWORD *)v45;
        if ( *(_DWORD *)v45 )
        {
          v53 = byte_140001B58;
          v140 = *((_BYTE *)v50 + 16);
          v54 = 0;
          v9 = a1;
          v55 = v44;
          if ( !v140 )
            v53 = byte_140001B40;
          v56 = &v53[v47 * 8];
          while ( v54 <= 0 )
          {
            if ( *(_DWORD *)v56 && (*(_DWORD *)v56 & **v55) != 0 )
              goto LABEL_96;
            ++v54;
            ++v55;
            v56 += 4;
          }
          if ( v52 == 2 )
          {
            v57 = *(_DWORD *)(v48 + 8);
            v58 = v57;
          }
          else if ( v52 == 3 )
          {
            v57 = *(_DWORD *)(a1 + 180) - 1;
            v58 = 0;
          }
          else
          {
            v58 = *(_DWORD *)(a1 + 180);
            v57 = 0;
          }
          v59 = byte_140001B58;
          if ( !v140 )
            v59 = byte_140001B40;
          while ( v58 <= v57 )
          {
            v60 = &v59[v47 * 8 + 4];
            v61 = 1;
            v62 = 1LL;
            while ( v61 <= 3 )
            {
              if ( *(_DWORD *)v60 && (*(_DWORD *)v60 & **(_DWORD **)(a1 + 8 * (v62 + 26LL * v58) + 248)) != 0 )
                goto LABEL_216;
              ++v61;
              ++v62;
              v60 += 4;
            }
            ++v58;
          }
          v63 = &qword_140001B68;
          v64 = 4;
          if ( !v140 )
            v63 = &qword_140001B50;
          v65 = (_DWORD **)(a1 + 104);
          for ( j = &v63[v47]; ; j = (__int64 *)((char *)j + 4) )
          {
            if ( v64 > 5 )
            {
              v67 = v50[1];
              v48 = v146;
              *v50 = v51 & 0xFFFFFFFC | 2;
              v50[2] = v67;
              _InterlockedIncrement((volatile signed __int32 *)(v146 + 104));
              goto LABEL_96;
            }
            if ( *(_DWORD *)j && (*(_DWORD *)j & **v65) != 0 )
              break;
            ++v64;
            ++v65;
          }
LABEL_216:
          v48 = v146;
LABEL_96:
          v42 = v144;
          v44 = (_DWORD **)(a1 + 72);
          v43 = v143;
          v46 = v145;
        }
        else
        {
          v50[2] = v50[1];
          *v50 = v51 & 0xFFFFFFFC | 2;
          _InterlockedIncrement((volatile signed __int32 *)(v48 + 104));
        }
      }
      v47 += 17LL;
      v49 += 8LL;
      v45 += 17;
      v145 = --v46;
    }
    while ( v46 );
    v143 = ++v43;
  }
  while ( v43 <= v42 );
  v7 = a2;
  v13 = v142;
LABEL_100:
  v68 = *(unsigned int **)(v9 + 104);
  v69 = (_DWORD **)(v9 + 72);
  if ( (*v68 & 1) != 0 )
  {
    *v68 = *v68 & 0xFFFFFFFC | 2;
    v68[2] = v68[1];
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 120));
  }
  v70 = *(_QWORD *)(v9 + 112);
  if ( (*(_DWORD *)v70 & 1) != 0 )
  {
    v71 = *(_BYTE *)(v70 + 16);
    v72 = byte_140001E00;
    v73 = 0;
    if ( !v71 )
      v72 = byte_140001DE8;
    while ( v73 <= 0 )
    {
      if ( *(_DWORD *)v72 && (*(_DWORD *)v72 & **v69) != 0 )
        goto LABEL_126;
      ++v73;
      ++v69;
      v72 += 4;
    }
    for ( k = 0; k <= *(_DWORD *)(v9 + 180) - 1; ++k )
    {
      v74 = &dword_140001E04;
      v75 = 1;
      v76 = 1LL;
      if ( !v71 )
        v74 = &dword_140001DEC;
      while ( v75 <= 3 )
      {
        if ( *v74 && (*v74 & **(_DWORD **)(v9 + 8 * (v76 + 26LL * k) + 248)) != 0 )
          goto LABEL_126;
        ++v75;
        ++v76;
        ++v74;
      }
    }
    v77 = &qword_140001E10;
    v78 = 4;
    if ( !v71 )
      v77 = &qword_140001DF8;
    v79 = (_DWORD **)(v9 + 104);
    while ( v78 <= 5 )
    {
      if ( *(_DWORD *)v77 && (*(_DWORD *)v77 & **v79) != 0 )
        goto LABEL_126;
      ++v78;
      ++v79;
      v77 = (__int64 *)((char *)v77 + 4);
    }
    *(_DWORD *)v70 = *(_DWORD *)v70 & 0xFFFFFFFC | 2;
    *(_DWORD *)(v70 + 8) = *(_DWORD *)(v70 + 4);
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 120));
  }
LABEL_126:
  v80 = a6;
  v81 = 0;
  if ( a6 )
  {
    if ( *(_DWORD *)(v9 + 120) )
    {
      v130 = (int **)(v9 + 72);
      for ( m = 0; m <= 0; ++m )
      {
        v132 = **v130;
        if ( (v132 & 2) != 0 || (v132 & 8) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v9 + 120));
          v133 = m;
          v134 = off_140001B78[17 * m];
          if ( (char *)v134 == (char *)PopPepStartComponentActivatingActivity )
          {
            started = PopPepStartComponentActivatingActivity(v9, 0LL, a6);
          }
          else if ( (char *)v134 == (char *)PopPepStartDevicePowerOnActivity )
          {
            started = PopPepStartDevicePowerOnActivity(v9, 0LL, a6);
          }
          else if ( (char *)v134 == (char *)PopPepStartDevicePowerOffActivity )
          {
            started = PopPepStartDevicePowerOffActivity(v9, 0LL, a6);
          }
          else
          {
            started = guard_dispatch_icall_no_overrides(v9, 0LL);
          }
          v81 = started;
          **(_DWORD **)(v9 + 8 * v133 + 72) &= ~2u;
          **(_DWORD **)(v9 + 8 * v133 + 72) &= ~8u;
          **(_DWORD **)(v9 + 8 * v133 + 72) |= 4u;
          goto LABEL_127;
        }
        ++v130;
      }
    }
    v82 = v141;
    if ( v7 && *(_DWORD *)(v7 + 104) )
    {
      v97 = 1;
      v98 = (int **)(v7 + 64);
      while ( v97 <= 3 )
      {
        v99 = **v98;
        if ( (v99 & 2) != 0 || (v99 & 8) != 0 )
          goto LABEL_179;
        ++v97;
        ++v98;
      }
      v97 = 6;
LABEL_179:
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 104));
      v100 = v97;
      v101 = off_140001B78[17 * v97];
      if ( (char *)v101 == (char *)PopPepStartComponentActivatingActivity )
      {
        v102 = PopPepStartComponentActivatingActivity(v9, v7, a6);
      }
      else if ( (char *)v101 == (char *)PopPepStartDevicePowerOnActivity )
      {
        v102 = PopPepStartDevicePowerOnActivity(v9, v7, a6);
      }
      else if ( (char *)v101 == (char *)PopPepStartDevicePowerOffActivity )
      {
        v102 = PopPepStartDevicePowerOffActivity(v9, v7, a6);
      }
      else
      {
        v102 = guard_dispatch_icall_no_overrides(v9, v7);
      }
      v81 = v102;
      **(_DWORD **)(v7 + 8 * v100 + 56) &= ~2u;
      **(_DWORD **)(v7 + 8 * v100 + 56) &= ~8u;
      **(_DWORD **)(v7 + 8 * v100 + 56) |= 4u;
    }
    else
    {
      if ( *(_BYTE *)(v9 + 125) == 1 )
      {
        for ( n = 0; n < *(_DWORD *)(v9 + 180); ++n )
        {
          v104 = 208LL * n;
          if ( *(_DWORD *)(v104 + v9 + 296) )
          {
            v137 = 1;
            v138 = (int **)(v104 + v9 + 256);
            while ( v137 <= 3 )
            {
              v139 = **v138;
              if ( (v139 & 2) != 0 || (v139 & 8) != 0 )
                goto LABEL_301;
              ++v137;
              ++v138;
            }
            v137 = 6;
LABEL_301:
            v81 = PopPepStartActivity(
                    v9,
                    v104 + v9 + 192,
                    v104 + v9 + 248,
                    v137,
                    (volatile signed __int32 *)(v104 + v9 + 296),
                    a6);
            goto LABEL_128;
          }
        }
      }
      if ( *(_DWORD *)(v9 + 120) )
      {
        for ( ii = 0; ii < *(_DWORD *)(v9 + 180); ++ii )
        {
          if ( *(_DWORD *)(208LL * ii + v9 + 296) )
            goto LABEL_128;
        }
        ReadyActivityType = PopPepGetReadyActivityType(v9 + 72, 4LL, 5LL);
        v81 = PopPepStartActivity(v9, 0LL, v9 + 72, ReadyActivityType, (volatile signed __int32 *)(v9 + 120), a6);
      }
    }
  }
  else
  {
LABEL_127:
    v82 = v141;
  }
LABEL_128:
  v83 = *(_DWORD *)(v9 + 120);
  if ( v13 == 2 )
  {
    if ( v7 )
      v83 += *(_DWORD *)(v7 + 104);
  }
  else if ( v13 == 3 )
  {
    v128 = *(unsigned int *)(v9 + 180);
    if ( (_DWORD)v128 )
    {
      v129 = (_DWORD *)(v9 + 296);
      do
      {
        v83 += *v129;
        v129 += 52;
        --v128;
      }
      while ( v128 );
    }
  }
  v84 = 0;
  if ( (*(_QWORD *)(v9 + 24) & 1) == 0 && !v83 && !v81 && !*(_DWORD *)(v9 + 140) )
    v84 = *(_BYTE *)(v9 + 136) != 0;
  if ( v83 > v82 )
  {
    v108 = v83 - v82;
    if ( v108 )
    {
      v109 = v108;
      if ( (*(_QWORD *)(v9 + 24) & 0x20LL) != 0 )
      {
        do
        {
          KeReleaseSemaphore(&Semaphore, 0, 1, 0);
          v110 = 0;
          v111 = 1;
          do
          {
            _m_prefetchw(&dword_140F0CF60);
            if ( (_InterlockedOr(&dword_140F0CF60, v111) & v111) == 0 )
            {
              if ( ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), &qword_140F0CF70[5 * v110], 48, 0) )
                break;
              _InterlockedAnd(&dword_140F0CF60, ~v111);
            }
            ++v110;
            v111 = __ROL4__(v111, 1);
          }
          while ( v110 < 4 );
          --v109;
        }
        while ( v109 );
      }
      else
      {
        do
        {
          KeReleaseSemaphore(&stru_140F0D200, 0, 1, 0);
          v123 = 0;
          v124 = 1;
          do
          {
            _m_prefetchw(&dword_140F0D220);
            if ( (_InterlockedOr(&dword_140F0D220, v124) & v124) == 0 )
            {
              if ( ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), &qword_140F0D230[5 * v123], 48, 0) )
                break;
              _InterlockedAnd(&dword_140F0D220, ~v124);
            }
            ++v123;
            v124 = __ROL4__(v124, 1);
          }
          while ( v123 < 4 );
          --v109;
        }
        while ( v109 );
      }
      v7 = a2;
      v80 = a6;
      v9 = a1;
    }
  }
  if ( v150 == 1 )
  {
    for ( jj = 0; jj < 6; ++jj )
    {
      v86 = *(_DWORD **)(v9 + 8LL * jj + 72);
      if ( v86 && *v86 )
      {
        v87 = (volatile LONG *)(v9 + 64);
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 64), v151);
        goto LABEL_150;
      }
    }
    if ( *(_BYTE *)(v9 + 136) )
      *(_BYTE *)(v9 + 125) = 0;
    v87 = (volatile LONG *)(v9 + 64);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v87 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v9 + 64, retaddr);
  }
  else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    v87 = (volatile LONG *)(v9 + 64);
    *(_DWORD *)v7 = 0;
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
  }
  else
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
    v87 = (volatile LONG *)(v9 + 64);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v151);
  __writecr8(v151);
LABEL_150:
  if ( v84 )
  {
    v81 = 0;
    v88 = ExAcquireSpinLockExclusive(v87);
    v90 = (*(_BYTE *)(v9 + 24) & 1) == 0;
    v91 = v88;
    *(_BYTE *)(v9 + 125) = 1;
    if ( v90 && !*(_DWORD *)(v9 + 140) && *(_BYTE *)(v9 + 136) && !**(_DWORD **)(v9 + 104) && !**(_DWORD **)(v9 + 112) )
    {
      v92 = *(_DWORD *)(v9 + 120);
      PopPepTriggerActivity(v9, 0LL, 4LL);
      PopPepPromoteActivities(v9, 0LL, 1LL);
      if ( v80 && **(_DWORD **)(v9 + 104) == 2 )
        v81 = PopPepStartActivity(v9, 0LL, v9 + 72, 4, (volatile signed __int32 *)(v9 + 120), v80);
      else
        PopPepRequestWork(v9, v92, *(unsigned int *)(v9 + 120));
    }
    LOBYTE(v89) = 1;
    PopPepReleaseActivityLink(v9, 0LL, v89, v91);
  }
  return v81;
}
