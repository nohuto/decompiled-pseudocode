/*
 * XREFs of PopPepProcessEvent @ 0x1402C0980
 * Callers:
 *     PopFxProcessWork @ 0x1402BFE70 (PopFxProcessWork.c)
 *     PopPluginComponentActive @ 0x1402C0850 (PopPluginComponentActive.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1402E680C (PopFxCompleteDevicePowerRequired.c)
 *     PopPluginComponentIdleState @ 0x1403A71EC (PopPluginComponentIdleState.c)
 *     PopFxActivateComponentDependents @ 0x1403A91E0 (PopFxActivateComponentDependents.c)
 *     PopPepCompleteComponentIdleState @ 0x1404C8510 (PopPepCompleteComponentIdleState.c)
 *     PopPepUnregisterDevice @ 0x140A6F098 (PopPepUnregisterDevice.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     PopPepStartComponentActivatingActivity @ 0x1402BFA70 (PopPepStartComponentActivatingActivity.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1402BFAA0 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepRequestWork @ 0x1402BFC80 (PopPepRequestWork.c)
 *     PopPepReleaseActivityLink @ 0x1402C1CE0 (PopPepReleaseActivityLink.c)
 *     PopPepTriggerActivity @ 0x1402C1E00 (PopPepTriggerActivity.c)
 *     PopPepPromoteActivities @ 0x1402C2120 (PopPepPromoteActivities.c)
 *     PopPepCompleteComponentActiveActivity @ 0x1402C2640 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepStartActivity @ 0x1402C2730 (PopPepStartActivity.c)
 *     PopPepTriggerComponentActivatingActivity @ 0x1402C27E0 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepTriggerComponentActiveActivity @ 0x1402C28B0 (PopPepTriggerComponentActiveActivity.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeReleaseSemaphore @ 0x1402F2490 (KeReleaseSemaphore.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     ExpTryQueueWorkItem @ 0x1403AB6FC (ExpTryQueueWorkItem.c)
 *     PopPepGetReadyActivityType @ 0x140444778 (PopPepGetReadyActivityType.c)
 *     PopPepTriggerComponentIdleStateChangeActivity @ 0x14044FEB0 (PopPepTriggerComponentIdleStateChangeActivity.c)
 *     PopPepStartDevicePowerOnActivity @ 0x140478D00 (PopPepStartDevicePowerOnActivity.c)
 *     PopPepStartDevicePowerOffActivity @ 0x14047E8F0 (PopPepStartDevicePowerOffActivity.c)
 *     PopPepCompleteDevicePowerOnActivity @ 0x14047F690 (PopPepCompleteDevicePowerOnActivity.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPepProcessEvent(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  ULONG_PTR v7; // r14
  ULONG_PTR v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int8 CurrentIrql; // r15
  unsigned int v12; // esi
  int i; // ecx
  __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // r10d
  int v17; // edi
  __int64 v18; // rdx
  int *v19; // rcx
  void (__fastcall *v20)(__int64, __int64); // rax
  int v21; // ecx
  BOOL v22; // ecx
  ULONG_PTR v23; // r11
  int v24; // edx
  __int64 v25; // rax
  _DWORD *v26; // r8
  _DWORD *v27; // rax
  __int64 (__fastcall *v28)(); // rax
  int v29; // r14d
  unsigned int *v30; // rsi
  _DWORD **v31; // r9
  unsigned int v32; // r11d
  char v33; // bp
  char *v34; // r8
  int v35; // edx
  int v36; // r9d
  int *v37; // rdx
  int v38; // r8d
  __int64 v39; // r10
  __int64 *v40; // rdx
  int v41; // r8d
  _DWORD **v42; // r9
  unsigned __int64 v43; // r8
  unsigned int v44; // edx
  _DWORD **v45; // r9
  __int64 *v46; // r15
  __int64 v47; // rcx
  __int64 v48; // rbp
  __int64 v49; // rdi
  __int64 v50; // r14
  unsigned int *v51; // r12
  unsigned int v52; // r13d
  int v53; // r11d
  char v54; // cl
  char *v55; // rdx
  int v56; // r8d
  _DWORD **v57; // r10
  char *v58; // rdx
  unsigned int v59; // edi
  unsigned int v60; // r11d
  char *v61; // rsi
  char *v62; // rsi
  char *v63; // r8
  int v64; // edx
  __int64 v65; // r10
  __int64 *v66; // rdx
  int v67; // r8d
  _DWORD **v68; // r10
  __int64 *j; // rdx
  unsigned int v70; // eax
  unsigned int *v71; // rcx
  _DWORD **v72; // r10
  __int64 v73; // rdi
  char v74; // bp
  char *v75; // rdx
  int *v76; // r10
  __int64 v77; // r11
  int v78; // edx
  _DWORD **v79; // r9
  int v80; // edi
  __int64 v81; // r15
  unsigned __int8 v82; // bp
  unsigned int v83; // esi
  unsigned int v84; // eax
  bool v85; // r12
  unsigned int v86; // r14d
  unsigned int kk; // ecx
  _DWORD *v88; // rdx
  volatile signed __int32 *v89; // rdi
  KIRQL v90; // si
  unsigned __int8 v91; // si
  volatile signed __int32 mm; // edx
  bool v93; // zf
  unsigned int v94; // r14d
  int v96; // ecx
  int v97; // ecx
  int v98; // ecx
  int v99; // r8d
  int v100; // r8d
  int v101; // edx
  int **v102; // rcx
  int n; // r9d
  int v104; // edx
  __int64 v105; // rdi
  __int64 (__fastcall *v106)(); // r9
  unsigned __int8 v107; // al
  _DWORD *v108; // rax
  unsigned int ii; // edx
  __int64 v110; // rax
  unsigned int jj; // edx
  int ReadyActivityType; // eax
  KIRQL v113; // al
  unsigned int v114; // eax
  __int64 v115; // rdi
  __int64 v116; // r14
  unsigned int v117; // esi
  int v118; // ecx
  int v119; // ecx
  int v120; // ecx
  int v121; // ecx
  int v122; // ecx
  int v123; // ecx
  int v124; // r8d
  int v125; // r8d
  int v126; // edx
  int v127; // edx
  int v128; // edx
  __int64 v129; // r14
  unsigned int v130; // esi
  unsigned int v131; // r9d
  _DWORD *v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rdx
  _DWORD *v135; // rcx
  unsigned int **v136; // rdx
  int m; // ecx
  __int64 v138; // rdi
  __int64 (__fastcall *v139)(); // r9
  unsigned __int8 started; // al
  _DWORD *v141; // rax
  unsigned int k; // edx
  int v143; // r9d
  int **v144; // rdx
  int v145; // ecx
  int v146; // [rsp+30h] [rbp-68h]
  unsigned int v147; // [rsp+34h] [rbp-64h]
  unsigned int v148; // [rsp+38h] [rbp-60h]
  unsigned int v149; // [rsp+3Ch] [rbp-5Ch]
  KIRQL OldIrql; // [rsp+48h] [rbp-50h]
  __int64 v151; // [rsp+50h] [rbp-48h]
  __int64 v152; // [rsp+58h] [rbp-40h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  char v156; // [rsp+B0h] [rbp+18h]

  v6 = a2;
  v7 = (int)a4;
  v8 = (int)a3;
  v156 = 0;
  v9 = a1;
  v10 = 2LL;
  if ( !v6 || *(_DWORD *)(a1 + 180) == 1 )
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
    v113 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
    OldIrql = v113;
    if ( *(_BYTE *)(v9 + 125) != 1 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v6);
      goto LABEL_15;
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v9 + 64), v113);
    v10 = 2LL;
  }
LABEL_3:
  v156 = 1;
  CurrentIrql = KeGetCurrentIrql();
  OldIrql = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v10);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v12 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(v9 + 64), 0x1Fu) )
      v12 = ExpWaitForSpinLockExclusiveAndAcquire(v9 + 64, CurrentIrql);
    for ( i = *(_DWORD *)(v9 + 64); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(v9 + 64) )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr((volatile signed __int32 *)(v9 + 64), 0x40000000u);
      if ( (++v12 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v12);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9 + 64, CurrentIrql);
  }
  *(_BYTE *)(v9 + 125) = 1;
LABEL_15:
  if ( (_DWORD)v8 == 6 || (v14 = 136 * v8, v15 = HIDWORD(ActivityAttributes[17 * v8 + 1]), v15 < 2) )
  {
    v16 = *(_DWORD *)(v9 + 120);
    v147 = v16;
    v146 = 2;
    v14 = 136 * v8;
LABEL_18:
    v17 = v146;
    v18 = v14;
    if ( v6 )
    {
      v16 += *(_DWORD *)(v6 + 104);
      v147 = v16;
    }
LABEL_20:
    if ( (_DWORD)v8 == 6 )
      goto LABEL_27;
    goto LABEL_21;
  }
  v16 = *(_DWORD *)(v9 + 120);
  v147 = v16;
  v146 = HIDWORD(ActivityAttributes[17 * v8 + 1]);
  if ( v15 == 2 )
    goto LABEL_18;
  v146 = HIDWORD(ActivityAttributes[17 * v8 + 1]);
  v18 = 136 * v8;
  v17 = v146;
  if ( v15 != 3 )
    goto LABEL_20;
  v131 = *(_DWORD *)(v9 + 180);
  v146 = 3;
  if ( !v131 )
    goto LABEL_20;
  v132 = (_DWORD *)(v9 + 296);
  v133 = v131;
  do
  {
    v16 += *v132;
    v132 += 52;
    --v133;
  }
  while ( v133 );
  v18 = 136 * v8;
LABEL_21:
  v147 = v16;
  v146 = v17;
  if ( (unsigned int)v8 <= 5 && *((_BYTE *)ActivityAttributes + v18) == 1 )
  {
    v19 = *(int **)(v9 + 8 * v8 + 72);
    v146 = v17;
    v147 = v16;
  }
  else
  {
    v19 = *(int **)(v6 + 8 * v8 + 56);
  }
  if ( (*v19 & 4) == 0 )
    PopFxBugCheck(0x667uLL, (ULONG_PTR)v19, v8, *v19);
  *v19 &= ~4u;
  v20 = *(void (__fastcall **)(__int64, __int64))((char *)&off_140001080 + v18);
  if ( (char *)v20 == (char *)PopPepCompleteComponentActiveActivity )
  {
    PopPepCompleteComponentActiveActivity(v9, v6, v8);
  }
  else if ( v20 == PopPepCompleteComponentIdleStateChangeActivity )
  {
    PopPepCompleteComponentIdleStateChangeActivity(v9, v6);
  }
  else if ( (char *)v20 == (char *)PopPepCompleteDevicePowerOnActivity )
  {
    PopPepCompleteDevicePowerOnActivity(v9, v6, v8);
  }
  else
  {
    guard_dispatch_icall_no_overrides(v9, v6);
  }
LABEL_27:
  if ( (_DWORD)v7 == 6 )
    goto LABEL_45;
  v21 = HIDWORD(ActivityAttributes[17 * v7]);
  if ( v21 )
  {
    if ( v21 == 1 )
    {
      v96 = dword_140001028[34 * v7];
      if ( v96 )
      {
        v99 = **(_DWORD **)(v9 + 72);
        if ( (v99 & v96) != 0 )
        {
          if ( (v99 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(v9 + 120));
          **(_DWORD **)(v9 + 72) &= 0xFFFFFFFC;
        }
      }
      v97 = dword_140001038[34 * v7];
      if ( v97 )
      {
        v100 = **(_DWORD **)(v9 + 104);
        if ( (v100 & v97) != 0 )
        {
          if ( (v100 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(v9 + 120));
          **(_DWORD **)(v9 + 104) &= 0xFFFFFFFC;
        }
      }
      v98 = dword_14000103C[34 * v7];
      if ( !v98 )
        goto LABEL_29;
      v101 = **(_DWORD **)(v9 + 112);
      if ( (v101 & v98) == 0 )
        goto LABEL_29;
    }
    else
    {
      if ( v21 != 2 )
        goto LABEL_29;
      if ( *(_BYTE *)(v9 + 125) )
      {
        v118 = dword_140001028[34 * v7];
        if ( v118 )
        {
          v128 = **(_DWORD **)(v9 + 72);
          if ( (v128 & v118) != 0 )
          {
            if ( (v128 & 2) != 0 )
              _InterlockedDecrement((volatile signed __int32 *)(v9 + 120));
            **(_DWORD **)(v9 + 72) &= 0xFFFFFFFC;
          }
        }
      }
      v119 = dword_14000102C[34 * v7];
      if ( v119 )
      {
        v124 = **(_DWORD **)(v6 + 64);
        if ( (v124 & v119) != 0 )
        {
          if ( (v124 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(v6 + 104));
          **(_DWORD **)(v6 + 64) &= 0xFFFFFFFC;
        }
      }
      v120 = dword_140001030[34 * v7];
      if ( v120 )
      {
        v125 = **(_DWORD **)(v6 + 72);
        if ( (v125 & v120) != 0 )
        {
          if ( (v125 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(v6 + 104));
          **(_DWORD **)(v6 + 72) &= 0xFFFFFFFC;
        }
      }
      v121 = dword_140001034[34 * v7];
      if ( v121 )
      {
        v126 = **(_DWORD **)(v6 + 80);
        if ( (v126 & v121) != 0 )
        {
          if ( (v126 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(v6 + 104));
          **(_DWORD **)(v6 + 80) &= 0xFFFFFFFC;
        }
      }
      if ( !*(_BYTE *)(v9 + 125) )
        goto LABEL_29;
      v122 = dword_140001038[34 * v7];
      if ( v122 )
      {
        v127 = **(_DWORD **)(v9 + 104);
        if ( (v127 & v122) != 0 )
        {
          if ( (v127 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(v9 + 120));
          **(_DWORD **)(v9 + 104) &= 0xFFFFFFFC;
        }
      }
      v123 = dword_14000103C[34 * v7];
      if ( !v123 )
        goto LABEL_29;
      v101 = **(_DWORD **)(v9 + 112);
      if ( (v101 & v123) == 0 )
        goto LABEL_29;
    }
    if ( (v101 & 2) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 120));
    **(_DWORD **)(v9 + 112) &= 0xFFFFFFFC;
  }
LABEL_29:
  v22 = (unsigned int)v7 <= 5 && LOBYTE(ActivityAttributes[17 * v7]) == 1;
  v23 = v9 + 72;
  v24 = 0;
  if ( !v22 )
    v23 = v6 + 56;
  v25 = 0LL;
  while ( v24 < 6 )
  {
    v26 = *(_DWORD **)(v23 + 8 * v25);
    if ( v26 )
    {
      if ( (dword_140001010[34 * v7 + v25] & *v26) != 0 )
        PopFxBugCheck(0x666uLL, v23, v7, v24);
    }
    ++v24;
    ++v25;
  }
  if ( v6 )
    v27 = *(_DWORD **)(v6 + 8 * v7 + 56);
  else
    v27 = *(_DWORD **)(v9 + 8 * v7 + 72);
  *v27 |= 1u;
  v27[1] = 0;
  v28 = off_140001070[17 * v7];
  if ( (char *)v28 == (char *)PopPepTriggerComponentActivatingActivity )
  {
    PopPepTriggerComponentActivatingActivity(v9, v6, 0LL);
  }
  else if ( (char *)v28 == (char *)PopPepTriggerComponentActiveActivity )
  {
    PopPepTriggerComponentActiveActivity(v9, v6, 0LL);
  }
  else if ( (char *)v28 == (char *)PopPepTriggerComponentIdleStateChangeActivity )
  {
    PopPepTriggerComponentIdleStateChangeActivity(v9, v6, 0LL);
  }
  else
  {
    guard_dispatch_icall_no_overrides(v9, v6);
  }
LABEL_45:
  v29 = v17;
  if ( !v6 && v17 == 2 )
    v29 = 1;
  v30 = *(unsigned int **)(v9 + 72);
  v31 = (_DWORD **)(v9 + 72);
  v32 = *v30;
  if ( (*v30 & 1) != 0 )
  {
    v33 = *((_BYTE *)v30 + 16);
    v34 = byte_140001058;
    v35 = 0;
    if ( !v33 )
      v34 = byte_140001040;
    while ( v35 <= 0 )
    {
      if ( *(_DWORD *)v34 && (*(_DWORD *)v34 & **v31) != 0 )
        goto LABEL_70;
      ++v35;
      ++v31;
      v34 += 4;
    }
    v36 = *(_DWORD *)(v9 + 180);
    v146 = v17;
    while ( !v36 )
    {
      v37 = &dword_14000105C;
      v38 = 1;
      v39 = 1LL;
      if ( !v33 )
        v37 = &dword_140001044;
      while ( v38 <= 3 )
      {
        if ( *v37 && (*v37 & **(_DWORD **)(v9 + 8 * v39 + 248)) != 0 )
          goto LABEL_70;
        ++v38;
        ++v39;
        ++v37;
      }
      v36 = 1;
    }
    v40 = &qword_140001068;
    v41 = 4;
    if ( !v33 )
      v40 = &qword_140001050;
    v42 = (_DWORD **)(v9 + 104);
    while ( v41 <= 5 )
    {
      if ( *(_DWORD *)v40 && (*(_DWORD *)v40 & **v42) != 0 )
        goto LABEL_70;
      ++v41;
      ++v42;
      v40 = (__int64 *)((char *)v40 + 4);
    }
    v30[2] = v30[1];
    *v30 = v32 & 0xFFFFFFFC | 2;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 120));
  }
LABEL_70:
  if ( v29 == 2 )
  {
    v43 = *(unsigned int *)(v6 + 8);
    v44 = *(_DWORD *)(v6 + 8);
    v148 = v44;
    v149 = v44;
  }
  else
  {
    v44 = 0;
    if ( v29 != 3 )
      v44 = *(_DWORD *)(v9 + 180);
    v148 = v44;
    v43 = (unsigned int)(*(_DWORD *)(v9 + 180) - 1);
    if ( v29 != 3 )
      v43 = 0LL;
    v149 = v43;
    if ( v44 > (unsigned int)v43 )
      goto LABEL_107;
  }
  v45 = (_DWORD **)(v9 + 72);
  do
  {
    v46 = qword_140001090;
    v47 = 3LL;
    v48 = 17LL;
    v151 = 3LL;
    v49 = v9 + 208LL * v44 + 192;
    v50 = 64LL;
    v152 = v49;
    do
    {
      v51 = *(unsigned int **)(v50 + v49);
      v52 = *v51;
      if ( (*v51 & 1) != 0 )
      {
        v53 = *(_DWORD *)v46;
        if ( *(_DWORD *)v46 )
        {
          v54 = *((_BYTE *)v51 + 16);
          v55 = byte_140001058;
          v56 = 0;
          v57 = v45;
          if ( !v54 )
            v55 = byte_140001040;
          v9 = a1;
          v58 = &v55[v48 * 8];
          while ( v56 <= 0 )
          {
            if ( *(_DWORD *)v58 && (*(_DWORD *)v58 & **v57) != 0 )
              goto LABEL_103;
            ++v56;
            ++v57;
            v58 += 4;
          }
          if ( v53 == 2 )
          {
            v59 = *(_DWORD *)(v49 + 8);
            v60 = v59;
          }
          else if ( v53 == 3 )
          {
            v60 = 0;
            v59 = *(_DWORD *)(a1 + 180) - 1;
          }
          else
          {
            v60 = *(_DWORD *)(a1 + 180);
            v59 = 0;
          }
          v61 = byte_140001058;
          if ( !v54 )
            v61 = byte_140001040;
          v62 = v61 + 4;
          while ( v60 <= v59 )
          {
            v63 = &v62[v48 * 8];
            v64 = 1;
            v65 = 1LL;
            while ( v64 <= 3 )
            {
              if ( *(_DWORD *)v63 && (*(_DWORD *)v63 & **(_DWORD **)(a1 + 8 * (v65 + 26LL * v60) + 248)) != 0 )
                goto LABEL_246;
              ++v64;
              ++v65;
              v63 += 4;
            }
            ++v60;
          }
          v66 = &qword_140001068;
          v67 = 4;
          if ( !v54 )
            v66 = &qword_140001050;
          v68 = (_DWORD **)(a1 + 104);
          for ( j = &v66[v48]; ; j = (__int64 *)((char *)j + 4) )
          {
            if ( v67 > 5 )
            {
              v70 = v51[1];
              v49 = v152;
              *v51 = v52 & 0xFFFFFFFC | 2;
              v51[2] = v70;
              _InterlockedIncrement((volatile signed __int32 *)(v152 + 104));
              goto LABEL_103;
            }
            if ( *(_DWORD *)j && (*(_DWORD *)j & **v68) != 0 )
              break;
            ++v67;
            ++v68;
          }
LABEL_246:
          v49 = v152;
LABEL_103:
          v43 = v149;
          v45 = (_DWORD **)(a1 + 72);
          v44 = v148;
          v47 = v151;
        }
        else
        {
          v51[2] = v51[1];
          *v51 = v52 & 0xFFFFFFFC | 2;
          _InterlockedIncrement((volatile signed __int32 *)(v49 + 104));
        }
      }
      v48 += 17LL;
      v50 += 8LL;
      v46 += 17;
      v151 = --v47;
    }
    while ( v47 );
    v148 = ++v44;
  }
  while ( v44 <= (unsigned int)v43 );
  v6 = a2;
LABEL_107:
  v71 = *(unsigned int **)(v9 + 104);
  v72 = (_DWORD **)(v9 + 72);
  if ( (*v71 & 1) != 0 )
  {
    *v71 = *v71 & 0xFFFFFFFC | 2;
    v71[2] = v71[1];
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 120));
  }
  v73 = *(_QWORD *)(v9 + 112);
  if ( (*(_DWORD *)v73 & 1) != 0 )
  {
    v74 = *(_BYTE *)(v73 + 16);
    v75 = byte_140001300;
    v43 = 0LL;
    if ( !v74 )
      v75 = byte_1400012E8;
    while ( (int)v43 <= 0 )
    {
      if ( *(_DWORD *)v75 && (*(_DWORD *)v75 & **v72) != 0 )
        goto LABEL_133;
      v43 = (unsigned int)(v43 + 1);
      ++v72;
      v75 += 4;
    }
    for ( k = 0; k <= *(_DWORD *)(v9 + 180) - 1; ++k )
    {
      v76 = &dword_140001304;
      v43 = 1LL;
      v77 = 1LL;
      if ( !v74 )
        v76 = &dword_1400012EC;
      while ( (int)v43 <= 3 )
      {
        if ( *v76 && (*v76 & **(_DWORD **)(v9 + 8 * (v77 + 26LL * k) + 248)) != 0 )
          goto LABEL_133;
        v43 = (unsigned int)(v43 + 1);
        ++v77;
        ++v76;
      }
    }
    v43 = (unsigned __int64)&qword_140001310;
    v78 = 4;
    if ( !v74 )
      v43 = (unsigned __int64)&qword_1400012F8;
    v79 = (_DWORD **)(v9 + 104);
    while ( v78 <= 5 )
    {
      if ( *(_DWORD *)v43 && (*(_DWORD *)v43 & **v79) != 0 )
        goto LABEL_133;
      ++v78;
      ++v79;
      v43 += 4LL;
    }
    *(_DWORD *)v73 = *(_DWORD *)v73 & 0xFFFFFFFC | 2;
    *(_DWORD *)(v73 + 8) = *(_DWORD *)(v73 + 4);
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 120));
  }
LABEL_133:
  v80 = v146;
  v81 = a6;
  v82 = 0;
  if ( a6 )
  {
    if ( *(_DWORD *)(v9 + 120) )
    {
      v136 = (unsigned int **)(v9 + 72);
      for ( m = 0; m <= 0; ++m )
      {
        v43 = **v136;
        if ( (v43 & 2) != 0 || (v43 & 8) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v9 + 120));
          v138 = m;
          v139 = off_140001078[17 * m];
          if ( (char *)v139 == (char *)PopPepStartComponentActivatingActivity )
          {
            started = PopPepStartComponentActivatingActivity(v9, 0LL, a6);
          }
          else if ( (char *)v139 == (char *)PopPepStartDevicePowerOnActivity )
          {
            started = PopPepStartDevicePowerOnActivity(v9, 0LL, a6);
          }
          else if ( (char *)v139 == (char *)PopPepStartDevicePowerOffActivity )
          {
            started = PopPepStartDevicePowerOffActivity(v9, 0LL, a6);
          }
          else
          {
            started = guard_dispatch_icall_no_overrides(v9, 0LL);
          }
          v82 = started;
          **(_DWORD **)(v9 + 8 * v138 + 72) &= ~2u;
          **(_DWORD **)(v9 + 8 * v138 + 72) &= ~8u;
          v141 = *(_DWORD **)(v9 + 8 * v138 + 72);
          v80 = v146;
          *v141 |= 4u;
          goto LABEL_134;
        }
        ++v136;
      }
    }
    v83 = v147;
    if ( v6 && *(_DWORD *)(v6 + 104) )
    {
      v102 = (int **)(v6 + 64);
      for ( n = 1; n <= 3; ++n )
      {
        v104 = **v102;
        if ( (v104 & 2) != 0 || (v104 & 8) != 0 )
          goto LABEL_202;
        ++v102;
      }
      n = 6;
LABEL_202:
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 104));
      v105 = n;
      v106 = off_140001078[17 * n];
      if ( (char *)v106 == (char *)PopPepStartComponentActivatingActivity )
      {
        v107 = PopPepStartComponentActivatingActivity(v9, v6, a6);
      }
      else if ( (char *)v106 == (char *)PopPepStartDevicePowerOnActivity )
      {
        v107 = PopPepStartDevicePowerOnActivity(v9, v6, a6);
      }
      else if ( (char *)v106 == (char *)PopPepStartDevicePowerOffActivity )
      {
        v107 = PopPepStartDevicePowerOffActivity(v9, v6, a6);
      }
      else
      {
        v107 = guard_dispatch_icall_no_overrides(v9, v6);
      }
      v82 = v107;
      **(_DWORD **)(v6 + 8 * v105 + 56) &= ~2u;
      **(_DWORD **)(v6 + 8 * v105 + 56) &= ~8u;
      v108 = *(_DWORD **)(v6 + 8 * v105 + 56);
      v80 = v146;
      *v108 |= 4u;
    }
    else
    {
      if ( *(_BYTE *)(v9 + 125) == 1 )
      {
        v43 = *(unsigned int *)(v9 + 180);
        for ( ii = 0; ii < (unsigned int)v43; ++ii )
        {
          v110 = 208LL * ii;
          if ( *(_DWORD *)(v110 + v9 + 296) )
          {
            v143 = 1;
            v144 = (int **)(v110 + v9 + 256);
            while ( v143 <= 3 )
            {
              v145 = **v144;
              if ( (v145 & 2) != 0 || (v145 & 8) != 0 )
                goto LABEL_332;
              ++v143;
              ++v144;
            }
            v143 = 6;
LABEL_332:
            v82 = PopPepStartActivity(
                    v9,
                    (int)v110 + (int)v9 + 192,
                    (int)v110 + (int)v9 + 248,
                    v143,
                    v110 + v9 + 296,
                    a6);
            goto LABEL_135;
          }
        }
      }
      if ( *(_DWORD *)(v9 + 120) )
      {
        v43 = *(unsigned int *)(v9 + 180);
        for ( jj = 0; jj < (unsigned int)v43; ++jj )
        {
          if ( *(_DWORD *)(208LL * jj + v9 + 296) )
            goto LABEL_135;
        }
        ReadyActivityType = PopPepGetReadyActivityType(v9 + 72, 4LL, 5LL);
        v82 = PopPepStartActivity(v9, 0, (int)v9 + 72, ReadyActivityType, v9 + 120, a6);
      }
    }
  }
  else
  {
LABEL_134:
    v83 = v147;
  }
LABEL_135:
  v84 = *(_DWORD *)(v9 + 120);
  if ( v80 == 2 )
  {
    if ( v6 )
      v84 += *(_DWORD *)(v6 + 104);
  }
  else if ( v80 == 3 )
  {
    v134 = *(unsigned int *)(v9 + 180);
    if ( (_DWORD)v134 )
    {
      v135 = (_DWORD *)(v9 + 296);
      do
      {
        v84 += *v135;
        v135 += 52;
        --v134;
      }
      while ( v134 );
    }
  }
  v85 = 0;
  if ( (*(_QWORD *)(v9 + 24) & 1) == 0 && !v84 && !v82 && !*(_DWORD *)(v9 + 140) )
    v85 = *(_BYTE *)(v9 + 136) != 0;
  if ( v84 > v83 )
  {
    v114 = v84 - v83;
    if ( v114 )
    {
      v115 = v114;
      if ( (*(_QWORD *)(v9 + 24) & 0x20LL) != 0 )
      {
        do
        {
          KeReleaseSemaphore(&stru_140F0DA00, 0, 1, 0);
          v129 = 0LL;
          v130 = 1;
          do
          {
            _m_prefetchw(&dword_140F0DA20);
            if ( (_InterlockedOr(&dword_140F0DA20, v130) & v130) == 0 )
            {
              if ( (unsigned __int8)ExpTryQueueWorkItem(
                                      *((_QWORD *)PspSystemPartition + 2),
                                      (char *)&unk_140F0DA30 + 40 * v129,
                                      48LL) )
                break;
              _InterlockedAnd(&dword_140F0DA20, ~v130);
            }
            v129 = (unsigned int)(v129 + 1);
            v130 = __ROL4__(v130, 1);
          }
          while ( (unsigned int)v129 < 4 );
          --v115;
        }
        while ( v115 );
      }
      else
      {
        do
        {
          KeReleaseSemaphore(&Semaphore, 0, 1, 0);
          v116 = 0LL;
          v117 = 1;
          do
          {
            _m_prefetchw(&dword_140F0D840);
            if ( (_InterlockedOr(&dword_140F0D840, v117) & v117) == 0 )
            {
              if ( (unsigned __int8)ExpTryQueueWorkItem(
                                      *((_QWORD *)PspSystemPartition + 2),
                                      (char *)&unk_140F0D850 + 40 * v116,
                                      48LL) )
                break;
              _InterlockedAnd(&dword_140F0D840, ~v117);
            }
            v116 = (unsigned int)(v116 + 1);
            v117 = __ROL4__(v117, 1);
          }
          while ( (unsigned int)v116 < 4 );
          --v115;
        }
        while ( v115 );
        v81 = a6;
      }
      v6 = a2;
      v9 = a1;
    }
  }
  if ( v156 == 1 )
  {
    v86 = 0;
    for ( kk = 0; kk < 6; ++kk )
    {
      v88 = *(_DWORD **)(v9 + 8LL * kk + 72);
      if ( v88 && *v88 )
      {
        v89 = (volatile signed __int32 *)(v9 + 64);
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 64), OldIrql);
        goto LABEL_157;
      }
    }
    if ( *(_BYTE *)(v9 + 136) )
      *(_BYTE *)(v9 + 125) = 0;
    v89 = (volatile signed __int32 *)(v9 + 64);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v89 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v9 + 64, retaddr);
    v90 = OldIrql;
    if ( KiIrqlFlags )
    {
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), OldIrql);
      v89 = (volatile signed __int32 *)(v9 + 64);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      v86 = 0;
      *(_DWORD *)v6 = 0;
    }
    else
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
      v86 = 0;
    }
    v89 = (volatile signed __int32 *)(v9 + 64);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
    v90 = OldIrql;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), OldIrql);
  }
  __writecr8(v90);
LABEL_157:
  if ( v85 )
  {
    v82 = 0;
    v91 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v91, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset(v89, 0x1Fu) )
        v86 = ExpWaitForSpinLockExclusiveAndAcquire(v89, v91);
      for ( mm = *v89; (*v89 & 0xBFFFFFFF) != 0x80000000; mm = *v89 )
      {
        if ( (mm & 0x40000000) == 0 )
          _InterlockedOr(v89, 0x40000000u);
        if ( (++v86 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v86);
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v89, v91);
    }
    v93 = (*(_BYTE *)(v9 + 24) & 1) == 0;
    *(_BYTE *)(v9 + 125) = 1;
    if ( v93 && !*(_DWORD *)(v9 + 140) && *(_BYTE *)(v9 + 136) && !**(_DWORD **)(v9 + 104) && !**(_DWORD **)(v9 + 112) )
    {
      v94 = *(_DWORD *)(v9 + 120);
      PopPepTriggerActivity(v9, 0LL, 4LL, 0LL);
      PopPepPromoteActivities(v9, 0LL, 1LL);
      if ( v81 && **(_DWORD **)(v9 + 104) == 2 )
        v82 = PopPepStartActivity(v9, 0, (int)v9 + 72, 4, v9 + 120, v81);
      else
        PopPepRequestWork(v9, v94, *(_DWORD *)(v9 + 120));
    }
    LOBYTE(v43) = 1;
    PopPepReleaseActivityLink(v9, 0LL, v43, v91);
  }
  return v82;
}
