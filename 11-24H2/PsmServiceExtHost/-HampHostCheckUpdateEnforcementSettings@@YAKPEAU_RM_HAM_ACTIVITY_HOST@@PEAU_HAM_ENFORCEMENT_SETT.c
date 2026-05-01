/*
 * XREFs of ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x180024340
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800253A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x18008515C (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x180003F78 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180004960 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180007744 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800090C0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000C344 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180022CD0 (-RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180023360 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z @ 0x180023D68 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800293A0 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800363B8 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA04 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800575E0 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005A8B0 (-HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x1800653D8 (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x180066E80 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180091A10 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     memcmp_0 @ 0x1800A7AE6 (memcmp_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HampHostCheckUpdateEnforcementSettings(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _HAM_ENFORCEMENT_SETTINGS_CONTEXT *a2)
{
  __int64 v2; // rax
  __int128 v5; // xmm1
  __int64 *Value; // rax
  __int64 v8; // rcx
  bool v9; // zf
  __int64 *v10; // rax
  __int64 v11; // rcx
  DWORD v12; // r14d
  _QWORD *v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int64 v16; // r13
  __int64 v17; // r15
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rax
  struct _HAM_ACTIVITY *v31; // rdx
  BOOL v32; // edi
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 *v43; // rax
  __int64 v44; // rcx
  unsigned __int64 v45; // r13
  unsigned int v46; // r12d
  DWORD v47; // esi
  _QWORD *v48; // rdi
  unsigned __int64 v49; // rsi
  int v50; // eax
  DWORD v51; // r14d
  _QWORD *v52; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v54; // rsi
  __int64 v55; // r8
  __int64 v56; // rax
  const wchar_t *v57; // rax
  int v58; // r15d
  unsigned int v59; // ecx
  unsigned __int64 v60; // rdx
  BOOL v61; // r8d
  __int64 v62; // r9
  BOOL v63; // r10d
  int v64; // r8d
  int v65; // r9d
  struct _HAM_DEPENDENCY_GROUP *v66; // rdi
  __int64 v67; // rdx
  unsigned __int64 v68; // rcx
  int v69; // edx
  char v70; // [rsp+50h] [rbp-B0h] BYREF
  BOOL v71; // [rsp+54h] [rbp-ACh]
  int v72; // [rsp+58h] [rbp-A8h] BYREF
  struct _HAM_ENFORCEMENT_SETTINGS_CONTEXT *v73; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v74; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v75; // [rsp+70h] [rbp-90h] BYREF
  struct _HAM_ACTIVITY *v76; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v77; // [rsp+80h] [rbp-80h] BYREF
  struct _HAM_ACTIVITY *v78; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v79; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-68h] BYREF
  __int64 v81; // [rsp+A8h] [rbp-58h]
  __int128 v82; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v83; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v84; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v85; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v86; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v87; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v88; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v89[2]; // [rsp+F8h] [rbp-8h]
  _BYTE v90[24]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v91; // [rsp+120h] [rbp+20h] BYREF
  __int128 v92; // [rsp+130h] [rbp+30h]
  __int128 v93; // [rsp+140h] [rbp+40h] BYREF
  __int128 v94; // [rsp+150h] [rbp+50h]
  __int128 v95; // [rsp+160h] [rbp+60h] BYREF
  __int128 v96; // [rsp+170h] [rbp+70h]
  _OWORD Buf2[2]; // [rsp+180h] [rbp+80h] BYREF
  _OWORD Buf1[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v99; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v100; // [rsp+1D0h] [rbp+D0h]
  struct _EVENT_DATA_DESCRIPTOR v101[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+200h] [rbp+100h] BYREF
  void *v103; // [rsp+210h] [rbp+110h]
  int v104; // [rsp+218h] [rbp+118h]
  int v105; // [rsp+21Ch] [rbp+11Ch]
  const wchar_t *v106; // [rsp+220h] [rbp+120h]
  int v107; // [rsp+228h] [rbp+128h]
  int v108; // [rsp+22Ch] [rbp+12Ch]
  int *v109; // [rsp+230h] [rbp+130h]
  __int64 v110; // [rsp+238h] [rbp+138h]
  __int64 *v111; // [rsp+240h] [rbp+140h]
  __int64 v112; // [rsp+248h] [rbp+148h]
  char *v113; // [rsp+250h] [rbp+150h]
  __int64 v114; // [rsp+258h] [rbp+158h]
  unsigned __int64 *v115; // [rsp+260h] [rbp+160h]
  __int64 v116; // [rsp+268h] [rbp+168h]
  __int64 *v117; // [rsp+270h] [rbp+170h]
  __int64 v118; // [rsp+278h] [rbp+178h]
  __int64 *v119; // [rsp+280h] [rbp+180h]
  __int64 v120; // [rsp+288h] [rbp+188h]

  v2 = *((_QWORD *)a1 + 83);
  v73 = a2;
  v78 = 0LL;
  v77 = 0LL;
  v76 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  v88 = 0LL;
  *(_OWORD *)v89 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  memset(v101, 0, sizeof(v101));
  v99 = 0LL;
  v100 = 0LL;
  if ( (v2 & 0x40000000000000LL) == 0 && (v2 & 0x20000000000000LL) == 0 )
  {
    HampHostComputeStaticEnforcementSettings(
      a1,
      (struct _RM_ENFORCEMENT_SETTINGS *)&v91,
      (struct _RM_COMMIT_THRESHOLDS *)v101,
      (struct _RM_COMMIT_THRESHOLDS *)&v99,
      &v76);
    if ( ((*((_QWORD *)a1 + 83) & 0x80000000000000LL) == 0
       || SDWORD2(v92) < 2 && (BYTE12(v92) & 0x70) == 0 && (BYTE12(v92) & 8) == 0)
      && *((struct _HAM_ACTIVITY **)a1 + 127) == v76 )
    {
      v5 = *(_OWORD *)((char *)a1 + 1144);
      Buf1[0] = 0uLL;
      Buf1[1] = v5;
      Buf2[0] = 0uLL;
      Buf2[1] = v92;
      if ( !memcmp_0(Buf1, Buf2, 0x20uLL)
        && v100 == __PAIR128__(*((_QWORD *)a1 + 108), *((_QWORD *)a1 + 109))
        && !memcmp_0(v101, (char *)a1 + 888, 0x20uLL) )
      {
        *(_DWORD *)a2 = 0;
        return 0LL;
      }
    }
  }
  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v8 = *Value;
    if ( (*Value & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v9 = Value[2]-- == 1;
    if ( v9 )
      *Value = v8 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  dword_1800EA308 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v10 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v11 = *v10;
    if ( (*v10 & 1) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v9 = v10[1]-- == 1;
    if ( v9 )
      *v10 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  RmpActivityHostQueryCommit((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), 0LL, &v77, 0LL);
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v13 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v12) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v13 |= 2uLL;
    ++v13[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
  v14 = *((_QWORD *)a1 + 83);
  if ( (v14 & 0x40000000000000LL) != 0 )
  {
    v14 &= ~0x40000000000000uLL;
    *((_QWORD *)a1 + 108) = 0LL;
    *((_QWORD *)a1 + 83) = v14;
    *((_QWORD *)a1 + 109) = 0LL;
  }
  v15 = (v14 >> 53) & 1;
  if ( (v14 & 0x80000000000000LL) != 0 )
  {
    LODWORD(v15) = v15 | 2;
    *((_QWORD *)a1 + 83) = v14 & 0xFF7FFFFFFFFFFFFFuLL;
  }
  HampHostComputeStaticEnforcementSettings(
    a1,
    (struct _RM_ENFORCEMENT_SETTINGS *)&v95,
    (struct _RM_COMMIT_THRESHOLDS *)&v88,
    (struct _RM_COMMIT_THRESHOLDS *)&v93,
    &v78);
  v16 = v77;
  v17 = -1LL;
  v18 = v88;
  v19 = v89[1];
  v20 = v89[0];
  v21 = v89[1];
  v75 = v77;
  if ( v77 >= (unsigned __int64)v88 )
  {
    if ( v77 < *((_QWORD *)&v88 + 1) )
    {
      v18 = *((_QWORD *)&v88 + 1);
      v22 = v88;
    }
    else if ( v77 < v89[0] )
    {
      v22 = *((_QWORD *)&v88 + 1);
      v18 = v89[0];
    }
    else
    {
      v22 = v89[0];
      v18 = -1LL;
    }
  }
  else
  {
    v22 = 0LL;
  }
  v81 = 0LL;
  v23 = v77 >> 3;
  if ( v89[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    v23 = v89[1] >> 4;
  if ( v23 <= 0x1400000 )
    v23 = 20971520LL;
  v24 = (v23 + v77 - 1) / v23;
  v81 = (v24 * (unsigned __int128)v23) >> 64;
  v25 = v24 * v23;
  if ( is_mul_ok(v24, v23) )
  {
    v74 = v24 * v23;
    v26 = v24 * v23;
  }
  else
  {
    v25 = -1LL;
    v74 = -1LL;
    v26 = -1LL;
  }
  if ( v89[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL && v26 > v89[1] )
  {
    v74 = (v23 + v89[1] - 1) / v23;
    RtlULongLongMult(v74, v23, &v74);
    v19 = v89[1];
    v20 = v89[0];
    v25 = v74;
  }
  v27 = -1LL;
  if ( v25 != -1LL && v25 + v23 >= v25 )
    v27 = v25 + v23;
  if ( v21 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v25 >= v21 )
      v25 = v21;
    v74 = v25;
    if ( v21 < v27 )
      v27 = v21;
  }
  v28 = v25;
  if ( 2 * v23 < v25 )
    v28 = 2 * v23;
  v29 = v25 - v28;
  if ( v22 <= v29 )
    v22 = v29;
  if ( v16 <= v21 && v18 >= v27 )
    v18 = v27;
  *(_QWORD *)&v95 = v22;
  *((_QWORD *)&v95 + 1) = v18;
  if ( v18 != -1LL )
  {
    v30 = *((_QWORD *)a1 + 123);
    if ( v30 <= v18 )
      v30 = v18;
    *((_QWORD *)a1 + 123) = v30;
  }
  v31 = v78;
  if ( *((_QWORD *)a1 + 88) )
  {
    v71 = (*((_QWORD *)a1 + 83) & 0x200000000000000LL) != 0 && *((struct _HAM_ACTIVITY **)a1 + 127) != v78;
    if ( HampHostIsElasticRecipient(a1) )
    {
      if ( v62 != *((_QWORD *)a1 + 142) )
        v61 = v63;
      v71 = v61;
    }
    if ( *((_QWORD *)a1 + 122) )
      v71 = 1;
  }
  else
  {
    v71 = 0;
  }
  v32 = (*((_QWORD *)a1 + 113) > v20 || *((_QWORD *)a1 + 114) > v19) && (*((_BYTE *)a1 + 671) & 1) == 0;
  *((_QWORD *)a1 + 108) = *((_QWORD *)&v94 + 1);
  *((_QWORD *)a1 + 109) = v94;
  *((_QWORD *)a1 + 127) = v31;
  v33 = v88;
  v34 = *(_OWORD *)v89;
  *(_OWORD *)((char *)a1 + 888) = v88;
  *(_OWORD *)((char *)a1 + 904) = v34;
  if ( v31 )
    v35 = *((_QWORD *)v31 + 59);
  else
    v35 = v20;
  if ( v35 == *((_QWORD *)a1 + 110) )
  {
    v72 = 0;
  }
  else
  {
    v72 = 1;
    *((_QWORD *)a1 + 110) = v35;
  }
  v36 = *((_QWORD *)a1 + 121);
  if ( v20 == -1LL || v36 == -1 || (v60 = v36 + v20, v36 + v20 < v20) )
  {
    *((_QWORD *)a1 + 119) = -1LL;
    v37 = *((_QWORD *)a1 + 122);
LABEL_57:
    v38 = -1LL;
    goto LABEL_58;
  }
  *((_QWORD *)a1 + 119) = v60;
  v37 = *((_QWORD *)a1 + 122);
  if ( v60 == -1LL )
    goto LABEL_57;
  if ( v37 == -1 )
    goto LABEL_57;
  v38 = v37 + v60;
  if ( v37 + v60 < v60 )
    goto LABEL_57;
LABEL_58:
  *((_QWORD *)a1 + 119) = v38;
  *(_OWORD *)((char *)a1 + 920) = v33;
  *(_OWORD *)((char *)a1 + 936) = v34;
  v39 = *((_QWORD *)a1 + 118);
  if ( v39 == -1LL || v37 == -1 || v39 + v37 < v39 )
    *((_QWORD *)a1 + 118) = -1LL;
  else
    *((_QWORD *)a1 + 118) = v39 + v37;
  v40 = *((_QWORD *)a1 + 117);
  if ( v40 == -1LL || v37 == -1 || v40 + v37 < v40 )
    *((_QWORD *)a1 + 117) = -1LL;
  else
    *((_QWORD *)a1 + 117) = v40 + v37;
  v41 = *((_QWORD *)a1 + 116);
  if ( v41 == -1LL || v37 == -1 || v41 + v37 < v41 )
    *((_QWORD *)a1 + 116) = -1LL;
  else
    *((_QWORD *)a1 + 116) = v41 + v37;
  v42 = *((_QWORD *)a1 + 115);
  if ( v42 == -1LL || v37 == -1 || v42 + v37 < v42 )
    *((_QWORD *)a1 + 115) = -1LL;
  else
    *((_QWORD *)a1 + 115) = v42 + v37;
  *((_QWORD *)a1 + 83) &= ~0x20000000000000uLL;
  if ( HampLockTrackerId != -1 )
  {
    v43 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v44 = *v43;
    if ( (*v43 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v9 = v43[2]-- == 1;
    if ( v9 )
      *v43 = v44 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  v45 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v32 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 192LL))(
      *((_QWORD *)a1 + 126),
      1LL);
    HampHostAcquireLockExclusiveEx(a1, 0);
    *((_QWORD *)a1 + 83) &= ~0x40000000000000uLL;
    HampHostReleaseLockExclusive(a1);
    RmpSystemResourceTimerSet(a1, *(unsigned int *)(v45 + 1060), *((void **)a1 + 126));
    if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
    {
      v82 = v94;
      v83 = v89[0];
      v84 = v89[1];
      *(_QWORD *)&EventDescriptor.Id = *((_QWORD *)a1 - 4);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1800E82B0,
        (unsigned int)&unk_1800D3871,
        v64,
        v65,
        (__int64)&EventDescriptor,
        (__int64)&v84,
        (__int64)&v83,
        (__int64)&v82 + 8,
        (__int64)&v82);
    }
  }
  if ( v75 >= (unsigned __int64)v88 )
  {
    if ( v75 < *((_QWORD *)&v88 + 1) )
      v46 = 2;
    else
      v46 = 4 - (v75 < v89[0]);
  }
  else
  {
    v46 = 1;
  }
  v47 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v48 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v47) )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v48 |= 1uLL;
    ++v48[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800EA308 = GetCurrentThreadId();
  if ( v46 >= 4 )
  {
    v49 = v89[0];
    v79 = 0LL;
    memset(v90, 0, sizeof(v90));
    if ( (int)RmpActivityHostQueryOfferedMemory((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), &v79) >= 0 )
    {
      if ( v79 )
      {
        *(_OWORD *)&v90[8] = 0LL;
        v67 = (95 * v49 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
        v68 = 20971520LL;
        if ( v75 - ((v67 + ((95 * v49 - v67) >> 1)) >> 6) > 0x1400000 )
          v68 = v75 - ((v67 + ((95 * v49 - v67) >> 1)) >> 6);
        if ( v68 < v79 )
        {
          v69 = 0;
          *(_QWORD *)v90 = v79;
        }
        else
        {
          *(_QWORD *)v90 = -1LL;
          v69 = 1;
        }
        *(_DWORD *)&v90[16] = (4 * v69) | *(_DWORD *)&v90[16] & 0xFFFFFFF8 | (*((_DWORD *)a1 + 301) >> 4) & 1;
        RmpActivityHostDecommitOfferedMemory(
          (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64),
          (struct _RM_OFFERED_DECOMMIT_INFO *)v90);
      }
    }
  }
  v50 = RmpActivityHostApplyEnforcementSettings(
          (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64),
          (struct _RM_ENFORCEMENT_SETTINGS *)&v95,
          v15);
  if ( (*(_BYTE *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          + 120)
                              + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                 + 700) & 1) == 0 )
  {
    if ( v50 >= 0 )
      goto LABEL_81;
    MicrosoftTelemetryAssertTriggeredNoArgs();
LABEL_113:
    v59 = *(_DWORD *)v73 + 1;
    *(_DWORD *)v73 = v59;
    if ( v59 == 5 * (v59 / 5) )
    {
      RmpReleaseGlobalLock();
      LODWORD(v73) = 0;
      HampHostQueueTerminateEx((__int64)a1, 3, 0x1301u, 0LL, 0, 0, 0LL, (unsigned int *)&v73);
      RmpAcquireGlobalLock();
    }
    goto LABEL_82;
  }
  if ( v50 < 0 )
    goto LABEL_113;
LABEL_81:
  *(_DWORD *)v73 = 0;
LABEL_82:
  v51 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v52 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v51) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v52 |= 2uLL;
    ++v52[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  CurrentThreadId = GetCurrentThreadId();
  v9 = v72 == 0;
  v54 = v89[0];
  *((_DWORD *)a1 + 2) = CurrentThreadId;
  v55 = *((_QWORD *)a1 + 166);
  if ( !v9 || v54 != v55 )
  {
    if ( (int)ExecutionModel::ResourceManager::CommitMemoryLimitChange(
                *(ExecutionModel::ResourceManager **)(*((_QWORD *)a1 - 2) + 3536LL),
                (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 24),
                v55,
                v54,
                *((_QWORD *)a1 + 110)) >= 0 )
      *((_QWORD *)a1 + 166) = v54;
    v54 = v89[0];
  }
  if ( *((_DWORD *)a1 + 334) != v46 )
  {
    if ( (unsigned int)dword_1800E82B0 > 4
      && (qword_1800E82C0 & 0x40) != 0
      && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
    {
      v119 = &v85;
      v85 = v96;
      v117 = &v86;
      v115 = &v75;
      v56 = *((_QWORD *)a1 - 4);
      v113 = &v70;
      v87 = v56;
      v72 = *((_DWORD *)a1 + 140);
      v57 = (const wchar_t *)((char *)a1 + 24);
      v111 = &v87;
      v109 = &v72;
      v86 = v54;
      v70 = v46;
      v120 = 8LL;
      v118 = 8LL;
      v116 = 8LL;
      v114 = 1LL;
      v112 = 8LL;
      v110 = 4LL;
      if ( a1 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
      {
        v57 = &word_1800C1FFC;
        v58 = 2;
      }
      else
      {
        do
          v9 = v57[++v17] == 0;
        while ( !v9 );
        v58 = 2 * v17 + 2;
      }
      v106 = v57;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800E82B8;
      v108 = 0;
      v107 = v58;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 64LL;
      UserData.Size = *(unsigned __int16 *)off_1800E82B8;
      v103 = &unk_1800D35CA;
      v105 = 1;
      UserData.Reserved = 2;
      v104 = 119;
      LODWORD(v73) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
    }
    (*(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**(_QWORD **)(v45 + 896) + 32LL))(
      *(_QWORD *)(v45 + 896),
      (char *)a1 - 64,
      *((unsigned int *)a1 + 334),
      v46);
    *((_DWORD *)a1 + 334) = v46;
  }
  if ( v71 )
  {
    v66 = HampHostCheckEnterDependencyWorker(a1);
    if ( v66 )
    {
      HampHostReleaseLockExclusive(a1);
      RmpReleaseGlobalLock();
      HampDepGroupRunStateChangeWorker(v66);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(a1, 0);
    }
  }
  return 1LL;
}
