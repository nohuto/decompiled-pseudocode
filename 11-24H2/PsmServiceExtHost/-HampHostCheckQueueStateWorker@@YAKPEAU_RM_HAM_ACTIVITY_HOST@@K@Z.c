/*
 * XREFs of ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800286D0
 * Callers:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180007744 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x1800080F8 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019064 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18001BB50 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18001ECC0 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026390 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x180027440 (-RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027770 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029D98 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180036180 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampHostDelayedEnforcementTimerCallback@@YAXPEAX0@Z @ 0x18003C240 (-HampHostDelayedEnforcementTimerCallback@@YAXPEAX0@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x180043770 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180055814 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampActNotifyResourcesAcquired@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18005D71C (-HampActNotifyResourcesAcquired@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180060D18 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800625F8 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18006C498 (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007DA9C (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007E4C4 (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180083A74 (-HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     ?HampHostArmStateWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002908C (-HampHostArmStateWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800293A0 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003642C (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005682C (-RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x1800850F8 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     memcmp_0 @ 0x1800A7AE6 (memcmp_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostCheckQueueStateWorker(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  __int64 v2; // r14
  unsigned int v3; // r15d
  unsigned int v5; // esi
  DWORD v6; // edi
  __int64 v7; // r12
  _QWORD *Value; // rbx
  bool v9; // bl
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // r12
  char v15; // r14
  _QWORD *v16; // r12
  unsigned int v17; // r12d
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // r12
  __int128 v23; // xmm1
  int v24; // r12d
  __int64 v25; // rcx
  __int128 v26; // xmm1
  DWORD v27; // ebx
  __int64 *v29; // rax
  __int64 v30; // rcx
  bool v31; // zf
  char *v32; // r9
  struct _RM_HAM_ACTIVITY_HOST *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  char v42; // al
  __int64 *v43; // [rsp+30h] [rbp-D0h]
  __int64 v44; // [rsp+30h] [rbp-D0h]
  DWORD dwTlsIndex[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v46; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+48h] [rbp-B8h] BYREF
  struct _HAM_ACTIVITY *v48; // [rsp+50h] [rbp-B0h] BYREF
  int v49; // [rsp+58h] [rbp-A8h] BYREF
  int v50; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned __int64 v51; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v52; // [rsp+68h] [rbp-98h]
  __int128 v53; // [rsp+70h] [rbp-90h] BYREF
  __int128 v54; // [rsp+80h] [rbp-80h]
  __int128 Buf2; // [rsp+90h] [rbp-70h] BYREF
  __int128 v56; // [rsp+A0h] [rbp-60h]
  __int128 Buf1; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v58; // [rsp+C0h] [rbp-40h]
  __int128 v59; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v60; // [rsp+E0h] [rbp-20h]
  __int128 v61; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v62; // [rsp+100h] [rbp+0h]

  v2 = *((_QWORD *)a1 + 88);
  v3 = 0;
  v49 = 0;
  v50 = 0;
  LODWORD(v48) = a2 & 1;
  v46 = 0;
  LODWORD(v51) = 0;
  if ( v2 )
  {
    HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v2);
    v36 = *((_QWORD *)a1 + 88);
    v37 = *((_QWORD *)a1 + 78);
    dwTlsIndex[0] = 1;
    LODWORD(v52) = *(_QWORD *)(v36 + 104) < v37;
    LODWORD(v47) = *(_DWORD *)(v36 + 92) != 0;
  }
  else
  {
    LODWORD(v52) = 0;
    LODWORD(v47) = 0;
    dwTlsIndex[0] = 0;
  }
  LOWORD(v5) = 0;
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v46, (union _RM_OPTIMIZATION_STATE *)&v51);
  v6 = HampLockTrackerId;
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v6) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockShared(v7 + 304);
  v9 = (*(_DWORD *)(v7 + 340) & 4) != 0;
  if ( HampLockTrackerId != -1 )
  {
    v10 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v11 = *v10;
    if ( (*v10 & 0x40) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v31 = v10[7]-- == 1;
    if ( v31 )
      *v10 = v11 & 0xFFFFFFFFFFFFFFBFuLL;
  }
  RtlReleaseSRWLockShared(v7 + 304);
  if ( !v9
    || (v38 = *((_QWORD *)a1 + 83), v43 = (__int64 *)((char *)a1 + 664), (v38 & 0x10000000000000LL) != 0)
    || ((v46 & 0x80u) != 0 || (v51 & 0x80u) != 0LL ? (v39 = 0) : (v39 = 1),
        (v38 & 0x30000) != 0 || (v38 & 0x2000000000000LL) == 0 || !v39) )
  {
    if ( (_DWORD)v52 )
    {
      LOWORD(v5) = v46 & 0x188;
      v43 = (__int64 *)((char *)a1 + 664);
      goto LABEL_17;
    }
    v12 = *((_QWORD *)a1 + 83);
    v43 = (__int64 *)((char *)a1 + 664);
    if ( (v12 & 0x10000000000LL) != 0 )
    {
      if ( !(_DWORD)v47 )
        goto LABEL_17;
      LOWORD(v5) = v46;
    }
    else
    {
      if ( v2 && *(_DWORD *)(v2 + 88) )
        v5 = v46 & 0x100 | 0x80;
      else
        v5 = 384;
      if ( (v12 & 0x2080000000000LL) == 0x2000000000000LL && !*((_BYTE *)a1 + 592) )
        v5 |= v5 >> 5;
    }
    v43 = (__int64 *)((char *)a1 + 664);
  }
LABEL_17:
  if ( dwTlsIndex[0] )
  {
    *(_DWORD *)(v2 + 16) = 0;
    RtlReleaseSRWLockExclusive(v2 + 8);
    if ( HampLockTrackerId != -1 )
    {
      v29 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v30 = *v29;
      if ( (*v29 & 8) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v31 = v29[4]-- == 1;
      if ( v31 )
        *v29 = v30 & 0xFFFFFFFFFFFFFFF7uLL;
    }
  }
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v49, (union _RM_OPTIMIZATION_STATE *)&v50);
  v13 = v49 & 0x188;
  v14 = *((_QWORD *)a1 + 99);
  v15 = v50 & 0x88;
  v47 = v14;
  dwTlsIndex[0] = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v16 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(dwTlsIndex[0]) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v16 |= 0x20uLL;
    ++v16[6];
    v14 = v47;
  }
  *(_QWORD *)dwTlsIndex = v14 + 584;
  RtlAcquireSRWLockShared(v14 + 584);
  v17 = (*(_DWORD *)(v14 + 616) >> 23) & 3;
  if ( HampLockTrackerId != -1 )
  {
    v18 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v19 = *v18;
    if ( (*v18 & 0x20) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v31 = v18[6]-- == 1;
    if ( v31 )
      *v18 = v19 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  RtlReleaseSRWLockShared(*(_QWORD *)dwTlsIndex);
  v20 = v43;
  v51 = ((unsigned __int64)*v43 >> 61) & 3;
  v52 = v17;
  if ( (_DWORD)v48 || (v5 & 0x188) != v13 )
    goto LABEL_35;
  dwTlsIndex[0] = 0;
  LODWORD(v47) = 0;
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)dwTlsIndex, (union _RM_OPTIMIZATION_STATE *)&v47);
  v21 = *v43;
  if ( (((unsigned __int64)*v43 >> 16) & 3) != 0 )
  {
    if ( (((unsigned __int64)*v43 >> 16) & 3) == 1 )
    {
      if ( SLOBYTE(dwTlsIndex[0]) < 0 && (v47 & 0x80u) == 0LL && (v21 & 0x40000000000LL) == 0 )
      {
        v32 = 0LL;
        v33 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 76);
        if ( v33 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
          v32 = (char *)v33 - 96;
        while ( v32 )
        {
          if ( (v32[552] & 0x48) == 0 )
          {
            v42 = v32[562];
            if ( (v42 == 3 || v42 == 2 && (unsigned __int8)v32[563] >= 5u) && (*((_DWORD *)v32 + 28) & 0x2000) != 0 )
              goto LABEL_28;
          }
          v40 = *((_QWORD *)v32 + 12);
          v41 = *((_QWORD *)v32 + 10);
          v32 = 0LL;
          if ( v40 != v41 + 608 )
            v32 = (char *)(v40 - 96);
        }
        goto LABEL_86;
      }
    }
    else
    {
      if ( (((unsigned __int64)*v43 >> 16) & 3) == 2 )
        v31 = (v21 & 0x8000000000000LL) == 0;
      else
        v31 = (((unsigned __int64)*v43 >> 16) & 3) == 3;
      if ( v31 )
        goto LABEL_86;
    }
  }
LABEL_28:
  if ( (v21 & 0x8000000000000LL) != 0
    || (v48 = 0LL, v53 = 0LL, v54 = 0LL, v61 = 0LL, v62 = 0LL, v59 = 0LL, v60 = 0LL, (v21 & 0x40000000000000LL) != 0)
    || (v21 & 0x20000000000000LL) != 0 )
  {
LABEL_86:
    v20 = v43;
    goto LABEL_35;
  }
  HampHostComputeStaticEnforcementSettings(
    a1,
    (struct _RM_ENFORCEMENT_SETTINGS *)&v53,
    (struct _RM_COMMIT_THRESHOLDS *)&v61,
    (struct _RM_COMMIT_THRESHOLDS *)&v59,
    &v48);
  v22 = *v43;
  if ( ((*v43 & 0x80000000000000LL) == 0 || SDWORD2(v54) < 2 && (BYTE12(v54) & 0x70) == 0 && (BYTE12(v54) & 8) == 0)
    && *((struct _HAM_ACTIVITY **)a1 + 127) == v48
    && (v23 = *(_OWORD *)((char *)a1 + 1144),
        Buf1 = 0uLL,
        v58 = v23,
        Buf2 = 0uLL,
        v56 = v54,
        !memcmp_0(&Buf1, &Buf2, 0x20uLL))
    && v60 == __PAIR128__(*((_QWORD *)a1 + 108), *((_QWORD *)a1 + 109))
    && !memcmp_0(&v61, (char *)a1 + 888, 0x20uLL) )
  {
    if ( ((v22 >> 61) & 3) != 0 )
    {
      v20 = v43;
    }
    else
    {
      dwTlsIndex[0] = 0;
      LODWORD(v47) = 0;
      RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)dwTlsIndex, (union _RM_OPTIMIZATION_STATE *)&v47);
      v20 = v43;
      if ( (dwTlsIndex[0] & 0x100) != 0 && (v47 & 0x100) == 0 )
      {
        v34 = *v43;
        if ( *((_BYTE *)a1 + 592) != 1 || (v34 & 0x2000000000000LL) == 0 )
        {
          v35 = *((_QWORD *)a1 + 84);
          if ( (v35 & 1) != 0 || (v35 & 2) != 0 && (v34 & 0x2000000000000LL) == 0 )
            goto LABEL_35;
        }
      }
    }
    if ( v51 <= v52 )
    {
      v24 = 0;
      goto LABEL_36;
    }
  }
  else
  {
    v20 = v43;
  }
LABEL_35:
  v24 = 1;
LABEL_36:
  v25 = *v20;
  if ( (v25 & 0x8000000000000LL) == 0
    || (v25 & 0xE0000000) == 0
    || (dwTlsIndex[0] = 1, (v25 & 0xE0000000) == 0xA0000000LL) )
  {
    dwTlsIndex[0] = 0;
  }
  v48 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  Buf2 = 0LL;
  v56 = 0LL;
  if ( (v25 & 0x40000000000000LL) != 0
    || (v25 & 0x20000000000000LL) != 0
    || (HampHostComputeStaticEnforcementSettings(
          a1,
          (struct _RM_ENFORCEMENT_SETTINGS *)&v53,
          (struct _RM_COMMIT_THRESHOLDS *)&v61,
          (struct _RM_COMMIT_THRESHOLDS *)&Buf2,
          &v48),
        v44 = *v43,
        (v44 & 0x80000000000000LL) != 0)
    && (SDWORD2(v54) >= 2 || (BYTE12(v54) & 0x70) != 0 || (BYTE12(v54) & 8) != 0)
    || *((struct _HAM_ACTIVITY **)a1 + 127) != v48
    || (v26 = *(_OWORD *)((char *)a1 + 1144),
        Buf1 = 0uLL,
        v58 = v26,
        v59 = 0uLL,
        v60 = v54,
        memcmp_0(&Buf1, &v59, 0x20uLL))
    || v56 != __PAIR128__(*((_QWORD *)a1 + 108), *((_QWORD *)a1 + 109))
    || memcmp_0(&v61, (char *)a1 + 888, 0x20uLL) )
  {
    v3 = 1;
    v27 = 1;
  }
  else
  {
    if ( (v5 & 0x80u) != 0 || ((v13 | v15) & 0x80u) == 0 )
    {
      if ( (v5 & 8) == 0 && ((v49 & 8) != 0 || (v50 & 8) != 0) )
      {
        v3 = 1;
      }
      else if ( (v44 & 0x8000000000000LL) != 0 )
      {
        v3 = 1;
      }
      else if ( v51 > v52 )
      {
        v3 = 1;
      }
    }
    else
    {
      v3 = 1;
    }
    v27 = dwTlsIndex[0];
    if ( !dwTlsIndex[0] && !v3 )
    {
      if ( v24 )
      {
LABEL_61:
        HampHostArmStateWorker(a1);
        return v3;
      }
      return v3;
    }
  }
  if ( v24 )
  {
    if ( (*((_BYTE *)a1 + 1208) & 0x27) != 0 )
      RmHamEnforcementEmptySignalAbort(a1);
    if ( v27 )
      RtlWakeAllConditionVariable((char *)a1 + 696);
    goto LABEL_61;
  }
  return v3;
}
