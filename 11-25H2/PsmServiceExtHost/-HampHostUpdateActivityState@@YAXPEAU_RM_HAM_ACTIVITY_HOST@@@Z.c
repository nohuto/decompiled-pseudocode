/*
 * XREFs of ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800277F0
 * Callers:
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180006AA4 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180009594 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x18001A7A8 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18001B7F0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18001BBD0 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002A900 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18002BFFC (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180034998 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActNotifyResourcesAcquired@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18005D79C (-HampActNotifyResourcesAcquired@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18005E7B8 (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18006CC44 (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180081840 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampActMoveBackPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180081A78 (-HampActMoveBackPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 * Callees:
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x1800091E4 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009DD0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009DF0 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000C0B0 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000D5D0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180026E70 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800270CC (-RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180027100 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     RmpActivityImportanceMergeVectors @ 0x180028280 (RmpActivityImportanceMergeVectors.c)
 *     ?HampHostEvaluatePendState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180028450 (-HampHostEvaluatePendState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180028750 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BBE8 (-HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800566A4 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180066108 (-HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_.c)
 *     ?HampManagerTriggerInswapTurn@@YAXPEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x18006892C (-HampManagerTriggerInswapTurn@@YAXPEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180084C38 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

void __fastcall HampHostUpdateActivityState(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v1; // r14d
  int v3; // r13d
  __int64 v4; // rax
  int v5; // r9d
  struct _RM_HAM_ACTIVITY_HOST *v6; // r8
  char *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  int v11; // r8d
  int v12; // r12d
  struct _RM_HAM_ACTIVITY_HOST *v13; // rsi
  char *v14; // rsi
  unsigned int v15; // ebx
  char v16; // cl
  char v17; // r15
  __int64 v18; // rcx
  char v19; // si
  int v20; // ebx
  __int64 v21; // rcx
  int v22; // r12d
  int v23; // r15d
  DWORD v24; // r13d
  _QWORD *Value; // rsi
  struct _HAM_APPLICATION *v26; // r13
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // r8d
  int v34; // r9d
  struct _HOST_ACTIVITY_MANAGER *v35; // rbx
  struct _HAM_ACTIVITY *v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r10
  char v45; // cl
  char v46; // cl
  char v47; // al
  struct _HAM_ACTIVITY *FirstActivity; // rbx
  __int64 v49; // rcx
  char v50; // al
  __int64 v51; // r8
  unsigned __int64 v52; // [rsp+58h] [rbp-20h]
  int v53; // [rsp+60h] [rbp-18h]
  struct _HAM_APPLICATION *v54; // [rsp+C0h] [rbp+48h] BYREF
  int v55; // [rsp+C8h] [rbp+50h] BYREF
  int v56; // [rsp+D0h] [rbp+58h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+D8h] [rbp+60h] BYREF

  v1 = 0;
  v55 = 0;
  LODWORD(v54) = 0;
  if ( (*((_QWORD *)a1 + 83) & 0x10000000000LL) != 0 )
  {
    v3 = 0;
  }
  else
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v55, (union _RM_OPTIMIZATION_STATE *)&v54);
    if ( (v55 & 0x80u) == 0 || (char)v54 < 0 )
    {
      if ( (v55 & 0x100) == 0 || ((unsigned __int16)v54 & 0x100) != 0 )
      {
        v39 = *((_QWORD *)a1 + 83);
        if ( (v39 & 0x800000000LL) != 0 )
        {
          v3 = 0;
        }
        else if ( (v39 & 0x40000000000LL) == 0 || (v3 = 0, (v39 & 0x30000) == 0) )
        {
          v3 = 1;
        }
      }
      else
      {
        v3 = 0;
      }
    }
    else
    {
      v3 = 0;
    }
  }
  HampHostEvaluatePendState(a1);
  v4 = *((_QWORD *)a1 + 83);
  v5 = 1024;
  if ( (v4 & 0x4000000000LL) == 0 && ((v4 & 0x30000) == 0 || (v4 & 0x8000000000LL) != 0) )
  {
    v6 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 76);
    if ( v6 == (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
      v7 = 0LL;
    else
      v7 = (char *)v6 - 96;
    while ( v7 )
    {
      if ( (v7[552] & 0x48) == 0 )
      {
        v47 = v7[562];
        if ( (v47 == 3 || v47 == 2 && (unsigned __int8)v7[563] >= 3u) && (*((_DWORD *)v7 + 28) & 0x400) != 0 )
        {
          FirstActivity = HampHostGetFirstActivity(a1);
          if ( FirstActivity )
          {
            do
            {
              if ( (unsigned __int8)(*((_BYTE *)FirstActivity + 562) - 2) <= 1u
                && (*((_DWORD *)FirstActivity + 30) & 0x100) != 0
                && (*((_DWORD *)FirstActivity + 138) & 0x300u) < 0x300 )
              {
                v51 = 5LL;
                if ( (*((_QWORD *)a1 + 83) & 0x30000LL) == 0 )
                  v51 = 2LL;
                HampActRequestStopEx(FirstActivity, 3LL, v51);
              }
              v49 = *((_QWORD *)FirstActivity + 12);
              if ( v49 == *((_QWORD *)FirstActivity + 10) + 608LL )
                break;
              FirstActivity = (struct _HAM_ACTIVITY *)(v49 - 96);
            }
            while ( v49 != 96 );
            v5 = 1024;
          }
          break;
        }
      }
      v8 = *((_QWORD *)v7 + 12);
      v9 = *((_QWORD *)v7 + 10);
      v7 = 0LL;
      if ( v8 != v9 + 608 )
        v7 = (char *)(v8 - 96);
    }
  }
  v10 = *((_QWORD *)a1 + 83);
  v11 = 0;
  *((_QWORD *)a1 + 84) &= 0xFFFFFFFFFFFFFFDBuLL;
  v52 = v10 >> 37;
  v12 = (v10 >> 40) & 1;
  v53 = (v10 >> 44) & 1;
  LODWORD(v54) = 1;
  *((_QWORD *)a1 + 83) = v10 & 0x9FFFE09FFFFFFFFFuLL;
  v13 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 76);
  v56 = 0;
  v55 = 0;
  if ( v13 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
  {
    v14 = (char *)v13 - 96;
    if ( v14 )
    {
      v15 = (unsigned int)v54;
      while ( 1 )
      {
        v16 = v14[562];
        if ( (unsigned __int8)(v16 - 1) <= 1u || (v17 = v14[562], v16 == 3) )
        {
          v17 = v14[562];
          if ( (v5 & *((_DWORD *)v14 + 29)) != 0 && (*((_DWORD *)v14 + 30) & 0x200) != 0 )
          {
            *((_QWORD *)a1 + 84) |= 0x20uLL;
            v17 = v14[562];
          }
        }
        if ( (v14[552] & 0x48) != 0 )
          goto LABEL_21;
        if ( v17 == 3 )
          break;
        if ( v17 == 2 && v14[563] )
        {
          v42 = *((unsigned int *)v14 + 106);
          if ( !*((_QWORD *)v14 + 64) && ((v42 & 0x40) != 0 || ((unsigned __int8)v42 & 0xEu) >= 8) )
            *((_QWORD *)a1 + 83) |= 0x100000000000uLL;
          if ( (v5 & *((_DWORD *)v14 + 28)) == 0 )
            v11 = 1;
          v55 = v11;
          goto LABEL_125;
        }
LABEL_21:
        v18 = *((_QWORD *)v14 + 12);
        if ( v18 != *((_QWORD *)v14 + 10) + 608LL )
        {
          v14 = (char *)(v18 - 96);
          if ( v18 != 96 )
            continue;
        }
        goto LABEL_25;
      }
      v42 = *((unsigned int *)v14 + 106);
LABEL_125:
      v15 = RmpActivityImportanceMergeVectors(v15, v42);
      LODWORD(v54) = v15;
      v43 = *((unsigned int *)v14 + 28);
      if ( (v43 & 0x2000) != 0 )
        *((_QWORD *)a1 + 83) |= 0x80000000000uLL;
      v44 = v43 >> 23;
      if ( (unsigned __int8)((v43 >> 23) & 3) <= (unsigned __int8)((*((_QWORD *)a1 + 83) >> 61) & 3) )
        v44 = *((_QWORD *)a1 + 83) >> 61;
      v41 = (v44 << 61) ^ (*((_QWORD *)a1 + 83) ^ (v44 << 61)) & 0x9FFFFFFFFFFFFFFFuLL;
      *((_QWORD *)a1 + 83) = v41;
      if ( (v44 & 3) != 0 )
        *((_QWORD *)a1 + 84) |= 3uLL;
      v45 = v14[562];
      if ( v45 == 3 || v45 == 2 && (unsigned __int8)v14[563] >= 3u )
      {
        v5 = 1024;
        if ( (v43 & 0x400) != 0 )
        {
          v41 |= 0x4000000000uLL;
          *((_QWORD *)a1 + 83) = v41;
        }
        v46 = v14[562];
        if ( v46 == 3 || v46 == 2 && (unsigned __int8)v14[563] >= 5u )
        {
          if ( (v43 & 0x400) != 0 )
          {
            v41 |= 0x10000000000uLL;
            *((_QWORD *)a1 + 83) = v41;
          }
          if ( v17 == 3 )
          {
            if ( (v43 & 0x800) != 0 )
            {
              v41 |= 0x20000000000uLL;
              *((_QWORD *)a1 + 83) = v41;
            }
            if ( (v43 & 0x1000) != 0 )
            {
              v41 |= 0x40000000000uLL;
              *((_QWORD *)a1 + 83) = v41;
            }
            if ( (v14[120] & 8) != 0 )
              *((_QWORD *)a1 + 84) |= 4uLL;
            if ( (v43 & 0x10000) != 0 )
            {
              *((_QWORD *)a1 + 84) |= 8uLL;
              v56 = 1;
            }
            if ( (v43 & 0x1800000) == 0x1000000 )
              *((_QWORD *)a1 + 84) |= 0x10uLL;
            *((_QWORD *)a1 + 83) = v41 | 0x2000000000LL;
          }
        }
      }
      else
      {
        v5 = 1024;
      }
      v11 = v55;
      goto LABEL_21;
    }
  }
  v15 = (unsigned int)v54;
LABEL_25:
  HampHostCheckUpdateSuspendWaitState(a1, v3, v11, v5);
  SystemTimeAsFileTime = 0LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v19 = (char)v54;
  if ( (*((_BYTE *)a1 + 680) & 0xE) == 8 )
  {
    if ( ((unsigned __int8)v54 & 0xE) == 8 )
      goto LABEL_27;
    *((struct _FILETIME *)a1 + 131) = SystemTimeAsFileTime;
  }
  else
  {
    if ( ((unsigned __int8)v54 & 0xE) != 8 )
      goto LABEL_27;
    *((struct _FILETIME *)a1 + 130) = SystemTimeAsFileTime;
  }
  *((_QWORD *)a1 + 83) |= 0x1000000000000000uLL;
  HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 99) + 88LL));
LABEL_27:
  *((_DWORD *)a1 + 170) = v15;
  if ( ((unsigned __int16)v54 & 0x400) == 0 )
    *((_QWORD *)a1 + 83) &= ~0x4000000000000uLL;
  if ( (v19 & 0x40) != 0 && *((_QWORD *)a1 + 124) && *((_QWORD *)a1 + 125) )
  {
    v35 = (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL)
                                                                                + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                   + 120)
                                                       + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          - 392);
    HampManagerAcquireLockExclusive(v35);
    HampManagerTriggerInswapTurn(v35, 1u);
    HampManagerReleaseLockExclusive(v35);
  }
  if ( (*((_QWORD *)a1 + 83) & 0x10000000000LL) != 0 && !v12 && HampHostIsResumed(a1) )
    HampHostChangeApplicationExecutionState((__int64)a1, 0, 1);
  v20 = (unsigned __int16)v54 >> 6;
  v21 = 624LL;
  v22 = (unsigned __int16)v54 >> 4;
  v23 = (unsigned __int16)v54 >> 1;
  if ( a1 )
    v21 = (__int64)a1 + 560;
  if ( *(_DWORD *)v21 == 2 )
  {
    v24 = HampLockTrackerId;
    v54 = (struct _HAM_APPLICATION *)*((_QWORD *)a1 + 99);
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v24) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 0x20uLL;
      ++Value[6];
    }
    v26 = v54;
    RtlAcquireSRWLockExclusive((char *)v54 + 584);
    *((_DWORD *)v26 + 148) = GetCurrentThreadId();
    LODWORD(v54) = v23 & 7 | *((_DWORD *)v26 + 155) & 0xFFFFFCE0 | (8 * (v22 & 3 | (32 * (v56 & 1 | (2 * (v20 & 1))))));
    if ( *((_DWORD *)v26 + 155) != (_DWORD)v54 )
      HampAppCommitStateSummary(v26, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v54);
    if ( HampLockTrackerId != -1 )
    {
      v27 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v28 = *v27;
      if ( (*v27 & 0x20) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      if ( v27[6]-- == 1 )
        *v27 = v28 & 0xFFFFFFFFFFFFFFDFuLL;
    }
    *((_DWORD *)v26 + 148) = 0;
    RtlReleaseSRWLockExclusive((char *)v26 + 584);
  }
  if ( (((unsigned __int8)v52 ^ (unsigned __int8)(*((_QWORD *)a1 + 83) >> 37)) & 1) != 0 )
    RtlWakeAllConditionVariable((char *)a1 + 16);
  v30 = *((_QWORD *)a1 + 83);
  if ( (v30 & 0x100000000000LL) != 0 && !v53 && (v30 & 0x30000) != 0 )
    HampHostIssueStopRequests(a1, 2LL, 5LL);
  RtlWakeAllConditionVariable((char *)a1 + 696);
  HampHostCheckQueueStateWorker(a1, v55 != 0);
  LODWORD(v54) = 0;
  v55 = 0;
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v54, (union _RM_OPTIMIZATION_STATE *)&v55);
  v31 = *((_QWORD *)a1 + 83);
  if ( ((v31 >> 16) & 3) != 0 )
  {
    switch ( (*((_QWORD *)a1 + 83) >> 16) & 3LL )
    {
      case 1LL:
        if ( (char)v54 >= 0 || (v55 & 0x80u) != 0 || (v31 & 0x40000000000LL) != 0 )
          goto LABEL_48;
        v36 = HampHostGetFirstActivity(a1);
        while ( v36 )
        {
          if ( (*((_BYTE *)v36 + 552) & 0x48) == 0 )
          {
            v50 = *((_BYTE *)v36 + 562);
            if ( (v50 == 3 || v50 == 2 && *((_BYTE *)v36 + 563) >= 5u) && (*((_DWORD *)v36 + 28) & 0x2000) != 0 )
              goto LABEL_48;
          }
          v37 = *((_QWORD *)v36 + 12);
          v38 = *((_QWORD *)v36 + 10);
          v36 = 0LL;
          if ( v37 != v38 + 608 )
            v36 = (struct _HAM_ACTIVITY *)(v37 - 96);
        }
        break;
      case 2LL:
        if ( (v31 & 0x8000000000000LL) != 0 )
          goto LABEL_48;
        break;
      case 3LL:
        break;
      default:
        goto LABEL_48;
    }
    v32 = *((_QWORD *)a1 + 83);
    if ( (v32 & 0x800000000LL) == 0 )
    {
      v55 = 0;
      LODWORD(v54) = 0;
      if ( (v32 & 0x10000000000LL) == 0 )
      {
        RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v55, (union _RM_OPTIMIZATION_STATE *)&v54);
        if ( ((v55 & 0x80u) == 0 || (char)v54 < 0) && ((v55 & 0x100) == 0 || ((unsigned __int16)v54 & 0x100) != 0) )
        {
          v40 = *((_QWORD *)a1 + 83);
          if ( (v40 & 0x800000000LL) == 0 && ((v40 & 0x40000000000LL) == 0 || (v40 & 0x30000) == 0) )
            v1 = 1;
        }
      }
      *((_QWORD *)a1 + 83) |= 0x800000000uLL;
      RmActivityHostReferenceFromHam(a1);
      TpPostWork(*((_QWORD *)a1 + 79));
      HampHostCheckUpdateSuspendWaitState(a1, v1, v33, v34);
    }
  }
LABEL_48:
  HampHostCheckQueueInterruptiveUIChangeWorker(a1);
}
