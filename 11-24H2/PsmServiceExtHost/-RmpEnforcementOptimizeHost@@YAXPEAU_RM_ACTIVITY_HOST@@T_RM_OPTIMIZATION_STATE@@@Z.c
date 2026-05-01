/*
 * XREFs of ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B244
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800253A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180005190 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009D50 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009F48 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18000AE10 (-HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUT.c)
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000AE64 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000AEB8 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z @ 0x18000BAA4 (-HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z.c)
 *     ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000C174 (-RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000C344 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementQuiescePsmApplication@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C398 (-RmpEnforcementQuiescePsmApplication@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostComputeWaitType@@YA?AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000C3C4 (-HampHostComputeWaitType@@YA-AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C710 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180017170 (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180026DF0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180027080 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002AF80 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002B028 (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18002BF20 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C71C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800363B8 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180036B70 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x180037AA4 (-HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180056624 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180056B3C (-RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180056DB4 (-RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ResourceTimerSet@ModernResourceEnforcer@@QEAAJPEAX_KK@Z @ 0x1800682E8 (-ResourceTimerSet@ModernResourceEnforcer@@QEAAJPEAX_KK@Z.c)
 *     ?HampHostEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006F5C8 (-HampHostEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilQueryDesktopWindowCloseTimeout@@YAXPEAK@Z @ 0x18006F848 (-HampUtilQueryDesktopWindowCloseTimeout@@YAXPEAK@Z.c)
 *     ?RmpEnforcementHaltPsmApplication@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18006FBE4 (-RmpEnforcementHaltPsmApplication@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDesktopWindowMessageWorkerArm@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007DC34 (-HampHostDesktopWindowMessageWorkerArm@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x18008515C (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180090FDC (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RmpEnforcementOptimizeHost(__int64 a1, int a2)
{
  char v2; // bl
  unsigned int v4; // r14d
  __int64 v5; // rsi
  int updated; // ebx
  __int64 *Value; // rax
  __int64 v8; // rcx
  bool v9; // zf
  unsigned int v10; // edx
  DWORD v11; // edi
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rax
  struct _HAM_ACTIVITY *FirstActivity; // rbx
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // r12d
  unsigned __int64 v18; // rax
  DWORD v19; // r14d
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int UnbiasedInterruptTimeMs64; // eax
  DWORD v25; // ecx
  __int64 *v26; // rax
  __int64 v27; // rcx
  void *v28; // rbx
  unsigned __int64 v29; // r13
  __int64 v30; // rbx
  char v31; // al
  struct _HAM_APPLICATION *v32; // rbx
  char v33; // r14
  _DWORD *v34; // rdx
  _DWORD *v35; // r8
  int v36; // ecx
  int v37; // ecx
  unsigned int v38; // edx
  DWORD v39; // r14d
  _QWORD *v40; // rbx
  struct _HAM_DEPENDENCY_GROUP *v41; // rbx
  unsigned int v42; // ebx
  unsigned int v43; // eax
  struct _HAM_APPLICATION *v44; // rbx
  char v45; // r14
  _DWORD *v46; // rcx
  _DWORD *v47; // rdx
  int v48; // eax
  unsigned int IsSuspendWaiter; // eax
  int v50; // [rsp+28h] [rbp-30h]
  __int64 v51; // [rsp+30h] [rbp-28h]
  ModernResourceEnforcer *v52; // [rsp+40h] [rbp-18h]
  __int64 v53; // [rsp+48h] [rbp-10h] BYREF
  __int64 v54; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v55; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v56; // [rsp+B0h] [rbp+58h] BYREF
  unsigned __int64 v57; // [rsp+B8h] [rbp+60h] BYREF

  v55 = 0;
  v2 = a2;
  v57 = 0LL;
  v53 = 0LL;
  v4 = 0;
  LODWORD(v54) = 0;
  v5 = a1 + 64;
  v56 = 0;
  if ( ((a2 - 1) & a2) == 0 && (a2 & 0x10) != 0 )
  {
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
    *(_DWORD *)(v5 + 8) = 0;
    RtlReleaseSRWLockExclusive(v5);
    v55 = 1;
    RmHamHostActOnProcesses((struct _RM_ACTIVITY_HOST *)a1, 8193, 1, RmpActivityHostCommitSavingsCallback, &v55);
    v10 = v55;
    *(_DWORD *)(a1 + 1268) = *(_DWORD *)(a1 + 1268) & 0xFFFFFFEF | (16 * (v55 & 1));
    if ( !v10 )
      *(_DWORD *)(a1 + 1264) &= ~4u;
    v11 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v12 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v11) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *v12 |= 2uLL;
      ++v12[2];
    }
    CempLockAcquireExclusive(v5);
    return;
  }
  if ( (a2 & 0x80u) == 0 )
  {
    if ( (a2 & 0x100) != 0 )
    {
      *(_DWORD *)(a1 + 1272) |= 0x100u;
      RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
      RmpEnforcementHaltPsmApplication((struct _RM_ACTIVITY_HOST *)a1);
      if ( *(_DWORD *)((a1 & -(__int64)(v5 != 0)) + 0x270) == 2 )
      {
        if ( !*(_BYTE *)(v5 + 592) )
          HampWakeContextUpdateExternalApplicationState(*(_QWORD *)(v5 + 1064), 2);
        v44 = *(struct _HAM_APPLICATION **)(v5 + 792);
        v45 = *(_BYTE *)(v5 + 592);
        HampAppAcquireLockExclusive(v44);
        v46 = (_DWORD *)((char *)v44 + 616);
        v47 = (_DWORD *)((char *)v44 + 620);
        if ( v45 )
          v48 = *v46 >> 25;
        else
          v48 = *v47 >> 5;
        if ( (v48 & 7u) - 2 > 2 )
        {
          if ( v45 )
          {
            *v46 &= 0xF5FFFFFF;
            *v46 |= 0x4000000u;
          }
          else
          {
            v55 = *v47 & 0xFFFFFF1F | 0x40;
            HampAppCommitStateSummary(v44, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v55);
          }
        }
        HampAppReleaseLockExclusive(v44);
      }
      RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
      *(_DWORD *)(a1 + 1272) &= ~0x100u;
      *(_DWORD *)(a1 + 1268) |= 0x100u;
    }
    else if ( (a2 & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 1272) |= 0x40u;
      RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
      RmpSystemFreezeHostJob((struct _RM_ACTIVITY_HOST *)a1, (v2 & 0x40) != 0);
      RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
      *(_DWORD *)(a1 + 1272) &= ~0x40u;
      *(_DWORD *)(a1 + 1268) |= 0x40u;
    }
    else if ( (a2 & 8) != 0 )
    {
      if ( (*(_QWORD *)(a1 + 728) & 0x200000000000LL) != 0 )
      {
        *(_DWORD *)(a1 + 1268) |= 8u;
      }
      else
      {
        *(_DWORD *)(a1 + 1272) |= 8u;
        RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
        updated = RmpEnforcementUpdateSwapState((struct _RM_ACTIVITY_HOST *)a1, 1u);
        RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
        *(_DWORD *)(a1 + 1268) |= 8u;
        *(_DWORD *)(a1 + 1272) &= ~8u;
        if ( updated < 0 )
          *(_QWORD *)(v5 + 664) |= 0x200000000000uLL;
      }
    }
    else
    {
      v42 = a2 & 0x27;
      if ( (a2 & 0x27) != 0 && *(int *)(a1 + 24) >= 0 )
      {
        *(_DWORD *)(a1 + 1272) |= v42;
        NtClearEvent(*(HANDLE *)(a1 + 1328));
        if ( !*(_DWORD *)(a1 + 1344) || RmpEmptyWorkerWaitForCompleteOrAbort((struct _RM_ACTIVITY_HOST *)a1) )
        {
          if ( *(int *)(a1 + 24) >= 0 )
          {
            RmpEmptyWorkerRun(a1, v42);
            v43 = RmpEmptyWorkerWaitForCompleteOrAbort((struct _RM_ACTIVITY_HOST *)a1);
            *(_DWORD *)(a1 + 1272) &= ~v42;
            if ( v43 )
              *(_DWORD *)(a1 + 1268) |= v42;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 1272) &= ~v42;
        }
      }
    }
    return;
  }
  HampHostCheckWaitForQuiesceTurn((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), (unsigned int *)&v54, &v56);
  if ( (_DWORD)v54 )
    return;
  *(_DWORD *)(a1 + 1272) |= 0x80u;
  v13 = *(_QWORD *)(v5 + 664) & 0xFFFFBFFF3FFFFFFFuLL;
  *(_QWORD *)(v5 + 684) = 0LL;
  *(_QWORD *)(v5 + 664) = v13 | 0x20000000;
  FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v5);
  if ( FirstActivity )
  {
    do
    {
      if ( (*((_BYTE *)FirstActivity + 552) & 8) == 0
        && (unsigned __int8)(*((_BYTE *)FirstActivity + 562) - 2) <= 1u
        && (*((_BYTE *)FirstActivity + 116) & 0x40) != 0 )
      {
        v51 = 0LL;
        v50 = 0;
        HampActRequestStopEx(FirstActivity, 1LL, 10LL);
      }
      v15 = *((_QWORD *)FirstActivity + 12);
      if ( v15 == *((_QWORD *)FirstActivity + 10) + 608LL )
        break;
      FirstActivity = (struct _HAM_ACTIVITY *)(v15 - 96);
    }
    while ( v15 != 96 );
  }
  v16 = HampHostComputeWaitType(v5);
  v17 = v16;
  if ( v16 <= 1 || v16 - 2 > 1 )
    v54 = 0LL;
  else
    v54 = *(_QWORD *)(v5 + 816);
  RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
  if ( v17 )
  {
    switch ( v17 )
    {
      case 1u:
        goto LABEL_85;
      case 2u:
      case 3u:
        HampUtilQueryDesktopWindowCloseTimeout(&v55);
LABEL_34:
        v4 = v55;
        break;
      case 4u:
LABEL_85:
        HampUtilQueryQuiesceTimeouts(&v55, 0LL);
        goto LABEL_34;
    }
  }
  else
  {
    v4 = 5000;
  }
  v18 = v4;
  v19 = HampLockTrackerId;
  v57 = v18;
  if ( HampLockTrackerId != -1 )
  {
    v20 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v19) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v20 |= 2uLL;
    ++v20[2];
  }
  CempLockAcquireExclusive(v5);
  *(_DWORD *)(v5 + 688) = v57;
  UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64(v22, v21, v23);
  v25 = HampLockTrackerId;
  *(_DWORD *)(v5 + 684) = UnbiasedInterruptTimeMs64;
  if ( v25 != -1 )
  {
    v26 = (__int64 *)TlsGetValue(v25);
    v27 = *v26;
    if ( (*v26 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v9 = v26[2]-- == 1;
    if ( v9 )
      *v26 = v27 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v5 + 8) = 0;
  RtlReleaseSRWLockExclusive(v5);
  v28 = *(void **)(v5 + 808);
  v29 = v57;
  v52 = *(ModernResourceEnforcer **)(*(_QWORD *)((a1 & -(__int64)(v5 != 0)) + 0x30) + 40LL);
  if ( (*((int (__fastcall **)(void *, unsigned __int64, _QWORD))v52 + 23))(v28, v57, 0LL) < 0 )
    ModernResourceEnforcer::ResourceTimerSet(v52, v28, v29, 1u);
  if ( *(_DWORD *)((a1 & -(__int64)(v5 != 0)) + 0x270) == 2 && !*(_BYTE *)(v5 + 592) )
  {
    v30 = *(_QWORD *)(v5 + 1064);
    HampWakeContextAcquireLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)v30);
    v31 = *(_BYTE *)(v30 + 184);
    *(_BYTE *)(v30 + 185) |= 0x10u;
    *(_BYTE *)(v30 + 184) = v31 & 0x8F | 0x10;
    HampWakeContextQueueWorker((struct _HAM_HOST_WAKE_CONTEXT *)v30);
    HampWakeContextReleaseLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)v30);
  }
  switch ( v17 )
  {
    case 1u:
      goto LABEL_48;
    case 2u:
      HampHostDesktopWindowMessageWorkerArm((struct _RM_HAM_ACTIVITY_HOST *)v5);
      break;
    case 4u:
      HampHostDesktopWindowMessageWorkerArm((struct _RM_HAM_ACTIVITY_HOST *)v5);
      TpWaitForWork(*(_QWORD *)(v5 + 648), 0LL);
LABEL_48:
      RmpEnforcementQuiescePsmApplication((struct _RM_ACTIVITY_HOST *)a1);
      break;
  }
  if ( *(_DWORD *)((a1 & -(__int64)(v5 != 0)) + 0x270) == 2 )
  {
    v32 = *(struct _HAM_APPLICATION **)(v5 + 792);
    v33 = *(_BYTE *)(v5 + 592);
    HampAppAcquireLockExclusive(v32);
    v34 = (_DWORD *)((char *)v32 + 616);
    v35 = (_DWORD *)((char *)v32 + 620);
    if ( v33 )
      v36 = *v34 >> 25;
    else
      v36 = *v35 >> 5;
    v37 = v36 & 7;
    if ( ((v37 - 1) & 0xFFFFFFFC) != 0 || v37 == 2 )
    {
      if ( v33 )
      {
        *v34 &= 0xF3FFFFFF;
        *v34 |= 0x2000000u;
      }
      else
      {
        v55 = *v35 & 0xFFFFFF1F | 0x20;
        HampAppCommitStateSummary(v32, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v55);
      }
    }
    HampAppReleaseLockExclusive(v32);
  }
  RmHamHostStateWorkerWaitForQuiesce(v5, &v57, &v53, v54, v17, v50, v51);
  if ( v56 )
    HampHostEndQuiesceTurn((struct _RM_HAM_ACTIVITY_HOST *)v5);
  if ( *(char *)(a1 + 1268) >= 0 )
  {
    IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)v5, v38);
    *(_DWORD *)(a1 + 1272) &= ~0x80u;
    HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)v5, IsSuspendWaiter);
  }
  *(_QWORD *)(v5 + 664) &= ~0x400000000000000uLL;
  RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
  RmpAcquireGlobalLock();
  ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(
    *(ExecutionModel::ResourceManager **)(*(_QWORD *)(a1 + 48) + 3536LL),
    (struct _RM_ACTIVITY_HOST *)a1);
  SetEvent(*(HANDLE *)(*(_QWORD *)(a1 + 56) + 88LL));
  v39 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v40 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v39) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v40 |= 2uLL;
    ++v40[2];
  }
  CempLockAcquireExclusive(v5);
  v41 = HampHostCheckEnterDependencyWorker((struct _RM_HAM_ACTIVITY_HOST *)v5);
  if ( v41 )
  {
    RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
    HampDepGroupRunStateChangeWorker(v41);
    RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
  }
}
