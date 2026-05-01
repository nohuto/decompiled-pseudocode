/*
 * XREFs of ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180009594
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180008670 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180008C40 (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009DD0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009DF0 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009FC8 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x18000A058 (-HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z @ 0x18000A080 (-HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z.c)
 *     ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000A444 (-HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000A89C (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18000AB20 (-HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampUtilHostTypeNameFromType@@YAPEBGK@Z @ 0x18000AE58 (-HampUtilHostTypeNameFromType@@YAPEBGK@Z.c)
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000AEE4 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000AF38 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800171F0 (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180026E70 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180027100 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800277F0 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18002BFA0 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002C3FC (-HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C79C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180056DAC (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180084C38 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall HampHostNotifyZeroProcess(__int64 a1, unsigned int a2, unsigned int a3, int a4, _DWORD *a5)
{
  DWORD v5; // r14d
  unsigned int v8; // esi
  _QWORD *Value; // rbx
  __int64 v10; // rbx
  DWORD v11; // ecx
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  int v19; // eax
  HKEY v20; // rbx
  const WCHAR *v21; // rax
  DWORD v22; // r14d
  _QWORD *v23; // rbx
  __int64 v24; // r13
  int v25; // ebx
  unsigned int v26; // r12d
  __int64 v27; // rbx
  char v28; // al
  struct _HAM_APPLICATION *v29; // rbx
  char v30; // r14
  _DWORD *v31; // rcx
  _DWORD *v32; // rdx
  int v33; // eax
  struct _HAM_ACTIVITY *FirstActivity; // rax
  __int64 v35; // r14
  struct _HAM_ACTIVITY *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  int v44; // eax
  const wchar_t *v45; // r14
  int v46; // [rsp+30h] [rbp-D0h] BYREF
  char v47; // [rsp+34h] [rbp-CCh] BYREF
  char v48; // [rsp+35h] [rbp-CBh] BYREF
  char v49; // [rsp+36h] [rbp-CAh] BYREF
  int v50; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v51; // [rsp+3Ch] [rbp-C4h] BYREF
  int v52; // [rsp+40h] [rbp-C0h] BYREF
  int v53; // [rsp+44h] [rbp-BCh] BYREF
  int v54; // [rsp+48h] [rbp-B8h] BYREF
  int v55; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v56; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A0h]
  BYTE Data[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v60; // [rsp+70h] [rbp-90h] BYREF
  __int64 v61; // [rsp+78h] [rbp-88h] BYREF
  __int64 v62; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v65; // [rsp+B0h] [rbp-50h]
  int v66; // [rsp+B8h] [rbp-48h]
  int v67; // [rsp+BCh] [rbp-44h]
  const wchar_t *v68; // [rsp+C0h] [rbp-40h]
  int v69; // [rsp+C8h] [rbp-38h]
  int v70; // [rsp+CCh] [rbp-34h]
  __int64 *v71; // [rsp+D0h] [rbp-30h]
  __int64 v72; // [rsp+D8h] [rbp-28h]
  char *v73; // [rsp+E0h] [rbp-20h]
  __int64 v74; // [rsp+E8h] [rbp-18h]
  char *v75; // [rsp+F0h] [rbp-10h]
  __int64 v76; // [rsp+F8h] [rbp-8h]
  int *v77; // [rsp+100h] [rbp+0h]
  __int64 v78; // [rsp+108h] [rbp+8h]
  int *v79; // [rsp+110h] [rbp+10h]
  __int64 v80; // [rsp+118h] [rbp+18h]
  int *v81; // [rsp+120h] [rbp+20h]
  __int64 v82; // [rsp+128h] [rbp+28h]
  char *v83; // [rsp+130h] [rbp+30h]
  __int64 v84; // [rsp+138h] [rbp+38h]
  __int64 *v85; // [rsp+140h] [rbp+40h]
  __int64 v86; // [rsp+148h] [rbp+48h]
  _WORD *v87; // [rsp+150h] [rbp+50h]
  int v88; // [rsp+158h] [rbp+58h]
  int v89; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v90; // [rsp+160h] [rbp+60h]
  __int64 v91; // [rsp+168h] [rbp+68h]
  _WORD v92[136]; // [rsp+170h] [rbp+70h] BYREF

  v5 = HampLockTrackerId;
  v50 = a4;
  v46 = a3;
  v51 = a2;
  v8 = 1;
  v52 = 0;
  v56 = 0LL;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  CempLockAcquireExclusive(a1);
  v10 = *(_QWORD *)(a1 + 1056);
  *(_QWORD *)(a1 + 664) |= 0x8000000000000000uLL;
  v11 = HampLockTrackerId;
  v12 = *(_QWORD *)(a1 + 840);
  *(_QWORD *)(a1 + 1056) = 0LL;
  v13 = -1LL;
  if ( v11 != -1 )
  {
    v14 = (__int64 *)TlsGetValue(v11);
    v15 = *v14;
    if ( (*v14 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v14[2]-- == 1 )
      *v14 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  RtlReleaseSRWLockExclusive(a1);
  if ( v10 )
  {
    TpWaitForTimer(v10, 1LL);
    TpReleaseTimer(v10);
  }
  if ( v12 )
  {
    TpSetTimer(v12, 0LL, 0LL, 0LL);
    TpWaitForTimer(v12, 1LL);
  }
  if ( (*(_QWORD *)(a1 + 664) & 0x2000000000000LL) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 984);
    if ( (int)HampUtilQueryHostHistoricCommitUse((struct _RM_HAM_ACTIVITY_HOST *)a1, &v56) < 0
      || (v18 = v56, v56 == -1LL) )
    {
      v18 = v17;
    }
    hKey = 0LL;
    v56 = (v18 >> 1) + (v17 >> 1);
    *(_QWORD *)Data = v56;
    v19 = HampUtilOpenApplicationHistoryKey((struct _RM_HAM_ACTIVITY_HOST *)a1, 1u, &hKey);
    v20 = hKey;
    if ( v19 >= 0 )
    {
      v21 = HampUtilHostTypeNameFromType(*(_DWORD *)(a1 + 560));
      RegSetValueExW(v20, v21, 0, 0xBu, Data, 8u);
    }
    if ( v20 )
      RegCloseKey(v20);
    if ( *(_DWORD *)(a1 + 560) == 2 )
      HampAppSaveTerminateReason(*(_QWORD *)(a1 + 792), a3);
    HampHostUpdateUsageInfoProcesses((struct _RM_HAM_ACTIVITY_HOST *)a1);
  }
  v22 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v23 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v22) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v23 |= 2uLL;
    ++v23[2];
  }
  CempLockAcquireExclusive(a1);
  v24 = *(_QWORD *)(a1 + 816);
  v58 = v24 + 1;
  if ( (*(_QWORD *)(a1 + 664) & 0x2000000000000LL) != 0 )
  {
    *a5 = 1;
    if ( *(_DWORD *)(a1 + 852) )
      v25 = CempQueryUnbiasedInterruptTimeMs64() - *(_DWORD *)(a1 + 852);
    else
      v25 = 0;
    if ( dword_1800E72B0
      && (v45 = (const wchar_t *)(a1 + 24),
          v52 = 130,
          PsmGetAumidFromKey(a1 + 24, &v52, v92),
          (unsigned int)dword_1800E72B0 > 4)
      && (qword_1800E72C0 & 0x400000000008LL) != 0
      && (qword_1800E72C8 & 0x400000000008LL) == qword_1800E72C8 )
    {
      v26 = v46;
      v47 = (unsigned __int64)*(unsigned int *)(a1 + 664) >> 18;
      v53 = v50;
      v48 = v51;
      v49 = *(_BYTE *)(a1 - 64 + 624);
      v60 = 0x1000000LL;
      v61 = v24;
      v54 = v25;
      v55 = v46;
      v91 = 8LL;
      v62 = *(_QWORD *)(((a1 - 64) & -(__int64)(a1 != 0)) + 0x20);
      v90 = &v60;
      v43 = -1LL;
      do
        ++v43;
      while ( v92[v43] );
      v89 = 0;
      v88 = 2 * v43 + 2;
      v85 = &v61;
      v83 = &v47;
      v81 = &v53;
      v79 = &v54;
      v77 = &v55;
      v75 = &v48;
      v73 = &v49;
      v71 = &v62;
      v87 = v92;
      v86 = 8LL;
      v84 = 1LL;
      v82 = 4LL;
      v80 = 4LL;
      v78 = 4LL;
      v76 = 1LL;
      v74 = 1LL;
      v72 = 8LL;
      if ( a1 == -24 )
      {
        v45 = &word_1800C10AC;
        v44 = 2;
      }
      else
      {
        do
          ++v13;
        while ( v45[v13] );
        v44 = 2 * v13 + 2;
      }
      v69 = v44;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800E72B8;
      v70 = 0;
      EventDescriptor.Keyword = 0x400000000008LL;
      v68 = v45;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_1800E72B8;
      v65 = &unk_1800D2D74;
      UserData.Reserved = 2;
      v66 = 173;
      v67 = 1;
      v51 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xDu, &UserData);
    }
    else
    {
      v26 = v46;
    }
    if ( *(_DWORD *)(a1 + 560) != 2 )
      goto LABEL_42;
    if ( !*(_BYTE *)(a1 + 592) )
    {
      v42 = *(_QWORD *)(a1 + 792);
      HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v42);
      *(_WORD *)(v42 + 616) = v26;
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v42);
    }
  }
  else
  {
    *a5 = 0;
    v26 = v46;
  }
  if ( *(_DWORD *)(a1 + 560) == 2 )
  {
    if ( !*(_BYTE *)(a1 + 592) )
    {
      v27 = *(_QWORD *)(a1 + 1064);
      HampWakeContextAcquireLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)v27);
      v28 = *(_BYTE *)(v27 + 184);
      *(_BYTE *)(v27 + 185) |= 0x10u;
      *(_BYTE *)(v27 + 184) = v28 & 0x8F | 0x30;
      HampWakeContextQueueWorker((struct _HAM_HOST_WAKE_CONTEXT *)v27);
      HampWakeContextReleaseLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)v27);
    }
    v29 = *(struct _HAM_APPLICATION **)(a1 + 792);
    v30 = *(_BYTE *)(a1 + 592);
    HampAppAcquireLockExclusive(v29);
    v31 = (_DWORD *)((char *)v29 + 616);
    v32 = (_DWORD *)((char *)v29 + 620);
    if ( v30 )
      v33 = *v31 >> 25;
    else
      v33 = *v32 >> 5;
    if ( (v33 & 7u) - 3 > 1 )
    {
      if ( v30 )
      {
        *v31 &= ~0x8000000u;
        *v31 |= 0x6000000u;
      }
      else
      {
        v51 = *v32 & 0xFFFFFF1F | 0x60;
        HampAppCommitStateSummary(v29, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v51);
      }
    }
    HampAppReleaseLockExclusive(v29);
  }
LABEL_42:
  v46 = 0;
  v50 = 0;
  if ( (*(_QWORD *)(a1 + 664) & 0x10000000000LL) != 0
    || (RmHamHostGetCurrentState(
          (struct _RM_HAM_ACTIVITY_HOST *)a1,
          (union _RM_OPTIMIZATION_STATE *)&v46,
          (union _RM_OPTIMIZATION_STATE *)&v50),
        (v46 & 0x80u) != 0)
    && (v50 & 0x80u) == 0
    || (v46 & 0x100) != 0 && (v50 & 0x100) == 0
    || (v41 = *(_QWORD *)(a1 + 664), (v41 & 0x800000000LL) != 0)
    || (v41 & 0x40000000000LL) != 0 && (v41 & 0x30000) != 0 )
  {
    v8 = 0;
  }
  FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
  v35 = v58;
  v36 = FirstActivity;
  if ( FirstActivity )
  {
    do
    {
      if ( HampActCanBeInvalidated(v36) )
      {
        HampActInvalidateAndNotify(v37, v26);
        v40 = *((_QWORD *)v36 + 9);
        if ( v40 )
        {
          if ( *(_BYTE *)(v40 + 40) == 2 )
            *((_QWORD *)v36 + 64) = v35;
        }
      }
      v38 = *((_QWORD *)v36 + 12);
      if ( v38 == *((_QWORD *)v36 + 10) + 608LL )
        break;
      v36 = (struct _HAM_ACTIVITY *)(v38 - 96);
    }
    while ( v38 != 96 );
  }
  HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)a1, v8);
  *(_QWORD *)(a1 + 664) &= 0xFFFFFFFFFFFCFFFFuLL;
  *(_QWORD *)(a1 + 672) &= 0xFFFFFFFFFFFFFFE7uLL;
  *(_QWORD *)(a1 + 848) = 0LL;
  *(_WORD *)(a1 + 664) = 0;
  v39 = *(_QWORD *)(a1 + 664) & 0x7FF5FFFFFC03FFFFLL;
  *(_QWORD *)(a1 + 816) = v35;
  *(_QWORD *)(a1 + 968) = 0LL;
  *(_QWORD *)(a1 + 664) = v39 | 0x1940000;
  *(_QWORD *)(a1 + 984) = 0LL;
  *(_DWORD *)(a1 + 856) = 0;
  HampHostUpdateActivityState((struct _RM_HAM_ACTIVITY_HOST *)a1);
  RtlWakeAddressAll(a1 + 816);
  HampHostCheckQueueDependencyWorker((struct _RM_HAM_ACTIVITY_HOST *)a1);
  HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(*(_QWORD *)(a1 + 792) + 88LL));
}
