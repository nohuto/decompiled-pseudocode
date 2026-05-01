/*
 * XREFs of ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026390
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800253A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009F48 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180017344 (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18001E7A4 (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180026B24 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800286D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002AF80 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002B028 (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18002BF20 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003C604 (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043E08 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18005B3C4 (-HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostVetoesSuspendLicense@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005E188 (-HampHostVetoesSuspendLicense@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800625F8 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18006A03C (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x180072BBC (IsPackageRundownNotificationForStoreLicense2Present.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x1800850F8 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HampAppCheckDowngradeLicense(struct _HAM_APPLICATION *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rax
  int i; // esi
  int v8; // esi
  unsigned int v9; // r15d
  unsigned int v10; // r13d
  struct _RM_HAM_ACTIVITY_HOST *j; // rax
  struct _RM_HAM_ACTIVITY_HOST *v12; // r14
  __int64 v13; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v14; // rax
  struct _RM_HAM_ACTIVITY_HOST *v15; // rsi
  __int64 v16; // r9
  int v17; // eax
  DWORD v18; // r14d
  __int64 v19; // rsi
  const struct _TraceLoggingMetadata_t *v20; // rdx
  struct _RM_HAM_ACTIVITY_HOST *k; // rsi
  __int64 *v22; // rax
  __int64 v23; // rcx
  bool v24; // zf
  DWORD v25; // r15d
  _QWORD *v26; // r14
  __int64 *v27; // rax
  __int64 v28; // rcx
  int v29; // edx
  const wchar_t *v30; // rax
  int v31; // esi
  const wchar_t *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  _QWORD *Value; // r13
  unsigned int v36; // edx
  __int64 *v37; // rax
  __int64 v38; // rcx
  int v39; // esi
  char v40; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v41; // [rsp+34h] [rbp-CCh] BYREF
  DWORD dwTlsIndex; // [rsp+38h] [rbp-C8h] BYREF
  int v43; // [rsp+3Ch] [rbp-C4h] BYREF
  int v44; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR v47; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v50; // [rsp+90h] [rbp-70h]
  int v51; // [rsp+98h] [rbp-68h]
  int v52; // [rsp+9Ch] [rbp-64h]
  unsigned int *v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  const wchar_t *v55; // [rsp+B0h] [rbp-50h]
  int v56; // [rsp+B8h] [rbp-48h]
  int v57; // [rsp+BCh] [rbp-44h]
  __int64 *v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+D0h] [rbp-30h] BYREF
  void *v61; // [rsp+E0h] [rbp-20h]
  int v62; // [rsp+E8h] [rbp-18h]
  int v63; // [rsp+ECh] [rbp-14h]
  DWORD *p_dwTlsIndex; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+F8h] [rbp-8h]
  const wchar_t *v66; // [rsp+100h] [rbp+0h]
  int v67; // [rsp+108h] [rbp+8h]
  int v68; // [rsp+10Ch] [rbp+Ch]
  __int64 *v69; // [rsp+110h] [rbp+10h]
  __int64 v70; // [rsp+118h] [rbp+18h]
  char *v71; // [rsp+120h] [rbp+20h]
  __int64 v72; // [rsp+128h] [rbp+28h]

  if ( ((*((_QWORD *)a2 + 83) >> 61) & 3) != 0 )
    return 0LL;
  v43 = 0;
  v44 = 0;
  RmHamHostGetCurrentState(a2, (union _RM_OPTIMIZATION_STATE *)&v43, (union _RM_OPTIMIZATION_STATE *)&v44);
  if ( (v43 & 0x100) == 0
    || (v44 & 0x100) != 0
    || *((_BYTE *)a2 + 592) == 1 && (*((_QWORD *)a2 + 83) & 0x2000000000000LL) != 0 )
  {
    return 0LL;
  }
  v4 = *((_QWORD *)a2 + 84);
  if ( (v4 & 1) == 0 && ((v4 & 2) == 0 || (*((_QWORD *)a2 + 83) & 0x2000000000000LL) != 0) )
    return 0LL;
  v6 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  *((_QWORD *)a2 + 84) = v6;
  if ( (*((_QWORD *)a2 + 83) & 0x2000000000000LL) == 0 )
    *((_QWORD *)a2 + 84) = v6 & 0xFFFFFFFFFFFFFFFDuLL;
  RmReleaseEnforcementLocks((struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 64));
  HampAppAcquireLockExclusive(a1);
  for ( i = *((_DWORD *)a1 + 154); (i & 0x100000) != 0; i = *((_DWORD *)a1 + 154) )
  {
    HampAppTraceWaitForLicenseWorkerForHost(a2);
    HampAppWaitForFlagChange(a1);
  }
  v8 = i | 0x100000;
  v9 = (v8 & 0xFF9FFFFF) >> 23;
  *((_DWORD *)a1 + 154) = v8 & 0xFE1FFFFF;
  HampAppReleaseLockExclusive(a1);
  v41 = 0;
  v10 = 0;
  for ( j = HampAppGetFirstHost(a1); ; j = HampAppGetNextHost(v12) )
  {
    v12 = j;
    if ( !j )
      break;
    dwTlsIndex = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(dwTlsIndex) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 2uLL;
      ++Value[2];
      v10 = v41;
    }
    RtlAcquireSRWLockShared(v12);
    if ( HampHostVetoesSuspendLicense(v12) )
    {
      HampHostReleaseLockSharedEx(v12, v36);
      RmHamHostDereference(v12);
      HampAppAcquireLockExclusive(a1);
      v39 = *((_DWORD *)a1 + 154) ^ (*((_DWORD *)a1 + 154) ^ v8) & 0x600000;
      *((_DWORD *)a1 + 154) = v39 ^ (v39 ^ (v9 << 23)) & 0x1800000;
      HampAppReleaseLockExclusive(a1);
      HampAppCheckQueueHostWorkersPostLicensing(a1, a2);
      goto LABEL_27;
    }
    v10 |= (*((_QWORD *)v12 + 83) >> 49) & 1;
    v41 = v10;
    if ( HampLockTrackerId != -1 )
    {
      v37 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v38 = *v37;
      if ( (*v37 & 2) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v24 = v37[2]-- == 1;
      if ( v24 )
        *v37 = v38 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    RtlReleaseSRWLockShared(v12);
  }
  if ( (unsigned __int8)((__int64 (*)(void))IsPackageRundownNotificationForStoreLicense2Present)() )
  {
    v14 = HampAppTryReferenceMixedHost(a1);
    v15 = v14;
    if ( v14 )
      v16 = *((_QWORD *)v14 + 72);
    else
      v16 = 0LL;
    v17 = PackageSuspendedNotificationForStoreLicense2(
            (char *)a1 + 96,
            *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 88LL) + 160LL) + 88LL),
            *((_QWORD *)a1 + 11) + 228LL,
            v16);
    v18 = 0;
    if ( v17 < 0 )
      v18 = v17;
    if ( v15 )
      RmHamHostDereference(v15);
  }
  else
  {
    v18 = 0;
  }
  v19 = -1LL;
  v20 = &TraceLoggingMetadata;
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v32 = (const wchar_t *)((char *)a2 + 24);
    v45 = *((_QWORD *)a2 - 4);
    v40 = v9 & 3;
    v71 = &v40;
    v69 = &v45;
    dwTlsIndex = v18;
    v72 = 1LL;
    v70 = 8LL;
    if ( a2 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
    {
      v32 = &word_1800C1FFC;
      v34 = 2;
    }
    else
    {
      v33 = -1LL;
      do
        v24 = v32[++v33] == 0;
      while ( !v24 );
      v34 = 2 * v33 + 2;
    }
    v67 = v34;
    v66 = v32;
    p_dwTlsIndex = &dwTlsIndex;
    *(_DWORD *)&v47.Level = 4;
    v60.Ptr = (ULONGLONG)off_1800E82B8;
    v68 = 0;
    v65 = 4LL;
    *(_DWORD *)&v47.Id = 184549376;
    v47.Keyword = 8LL;
    v60.Size = *(unsigned __int16 *)off_1800E82B8;
    v61 = &unk_1800D6CF0;
    v60.Reserved = 2;
    v62 = 65;
    v63 = 1;
    v41 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v47, 0LL, 0LL, 6u, &v60);
  }
  if ( !v10 )
  {
    if ( !(unsigned __int8)IsPackageRundownNotificationForStoreLicense2Present(v13, v20)
      || (v29 = PackageRundownNotificationForStoreLicense2(
                  (char *)a1 + 96,
                  *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 88LL) + 160LL) + 88LL),
                  *((_QWORD *)a1 + 11) + 228LL),
          v29 >= 0) )
    {
      v29 = 0;
    }
    if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
    {
      v46 = *((_QWORD *)a2 - 4);
      v30 = (const wchar_t *)((char *)a2 + 24);
      v41 = v29;
      v58 = &v46;
      v59 = 8LL;
      if ( a2 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
      {
        v30 = &word_1800C1FFC;
        v31 = 2;
      }
      else
      {
        do
          v24 = v30[++v19] == 0;
        while ( !v24 );
        v31 = 2 * v19 + 2;
      }
      v55 = v30;
      v56 = v31;
      v53 = &v41;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800E82B8;
      v57 = 0;
      v54 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 8LL;
      UserData.Size = *(unsigned __int16 *)off_1800E82B8;
      v50 = &unk_1800D6ED4;
      UserData.Reserved = 2;
      v51 = 55;
      v52 = 1;
      dwTlsIndex = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  for ( k = HampAppGetFirstHost(a1); k; k = HampAppGetNextHost(k) )
  {
    if ( k != a2 )
    {
      v25 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v26 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v25) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
        *v26 |= 2uLL;
        ++v26[2];
      }
      RtlAcquireSRWLockExclusive(k);
      *((_DWORD *)k + 2) = GetCurrentThreadId();
      HampHostCheckQueueStateWorker(k, 0);
      if ( HampLockTrackerId != -1 )
      {
        v27 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v28 = *v27;
        if ( (*v27 & 2) == 0 )
          NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
        v24 = v27[2]-- == 1;
        if ( v24 )
          *v27 = v28 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      *((_DWORD *)k + 2) = 0;
      RtlReleaseSRWLockExclusive(k);
    }
  }
LABEL_27:
  HampAppAcquireLockExclusive(a1);
  HampAppExitLicenseWorker(a1);
  if ( HampLockTrackerId != -1 )
  {
    v22 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v23 = *v22;
    if ( (*v22 & 0x20) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v24 = v22[6]-- == 1;
    if ( v24 )
      *v22 = v23 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  *((_DWORD *)a1 + 148) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 584);
  RmAcquireEnforcementLocks((struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 64));
  return 1LL;
}
