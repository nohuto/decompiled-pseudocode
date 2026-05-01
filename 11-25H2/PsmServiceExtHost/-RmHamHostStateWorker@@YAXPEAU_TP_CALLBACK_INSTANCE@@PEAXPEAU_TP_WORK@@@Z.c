/*
 * XREFs of ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180025420
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009DD0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B2C4 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000BC20 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C9A4 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000EA6C (-RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800192E8 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024218 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x1800243C0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025290 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025E50 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026410 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180026E70 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800270CC (-RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027700 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampAppCheckWaitForLicenseForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002A5E0 (-HampAppCheckWaitForLicenseForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002B000 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002B0A8 (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800381F8 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180084C38 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall RmHamHostStateWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  DWORD v3; // ebx
  __int64 v5; // r13
  __int64 v6; // r12
  int v7; // r14d
  unsigned __int64 v8; // r8
  struct _HAM_APPLICATION *v9; // rbx
  int v10; // r14d
  int v11; // ebx
  bool v12; // sf
  __int64 *Value; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // rax
  __int64 v19; // rdx
  DWORD v20; // ebx
  bool v21; // zf
  unsigned int v22; // ebx
  struct _RM_ACTIVITY_HOST *v23; // rbx
  int v24; // edx
  struct _HAM_ACTIVITY *FirstActivity; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  char **v28; // r8
  void **v29; // rdx
  __int64 v30; // rax
  char v31; // al
  int v32; // [rsp+30h] [rbp-D0h] BYREF
  int v33; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v34; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v35; // [rsp+3Ch] [rbp-C4h]
  int v36; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+44h] [rbp-BCh] BYREF
  int v38; // [rsp+48h] [rbp-B8h] BYREF
  int v39; // [rsp+4Ch] [rbp-B4h] BYREF
  int v40; // [rsp+50h] [rbp-B0h] BYREF
  int v41; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR v47; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR v48; // [rsp+98h] [rbp-68h] BYREF
  _OWORD TlsValue[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v50; // [rsp+130h] [rbp+30h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+140h] [rbp+40h] BYREF
  void *v52; // [rsp+150h] [rbp+50h]
  int v53; // [rsp+158h] [rbp+58h]
  int v54; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  int *v57; // [rsp+170h] [rbp+70h]
  __int64 v58; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+180h] [rbp+80h] BYREF
  void *v60; // [rsp+190h] [rbp+90h]
  int v61; // [rsp+198h] [rbp+98h]
  int v62; // [rsp+19Ch] [rbp+9Ch]
  __int64 *v63; // [rsp+1A0h] [rbp+A0h]
  __int64 v64; // [rsp+1A8h] [rbp+A8h]
  int *v65; // [rsp+1B0h] [rbp+B0h]
  __int64 v66; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v68; // [rsp+1D0h] [rbp+D0h]
  int v69; // [rsp+1D8h] [rbp+D8h]
  int v70; // [rsp+1DCh] [rbp+DCh]
  __int64 *v71; // [rsp+1E0h] [rbp+E0h]
  __int64 v72; // [rsp+1E8h] [rbp+E8h]
  int *v73; // [rsp+1F0h] [rbp+F0h]
  __int64 v74; // [rsp+1F8h] [rbp+F8h]

  v3 = HampLockTrackerId;
  v50 = 0LL;
  memset(TlsValue, 0, sizeof(TlsValue));
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v3, TlsValue);
  }
  v5 = *((_QWORD *)a2 + 6);
  v6 = *((_QWORD *)a2 + 4);
  v7 = 0;
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
  {
    v40 = *((_DWORD *)a2 + 317);
    v44 = v6;
    v57 = &v40;
    v55 = &v44;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E72B8;
    v58 = 4LL;
    v56 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E72B8;
    v52 = &unk_1800D7A74;
    UserData.Reserved = 2;
    v53 = 42;
    v54 = 1;
    v34 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  v34 = 0;
  RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a2);
  *((_DWORD *)a2 + 180) = GetCurrentThreadId();
  while ( *((int *)a2 + 6) >= 0 )
  {
    HampHostCheckStartPendingActivities((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64));
    v43 = 0LL;
    v36 = 0;
    v37 = 0;
    RmHamHostGetCurrentState(
      (struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64),
      (union _RM_OPTIMIZATION_STATE *)&v36,
      (union _RM_OPTIMIZATION_STATE *)&v37);
    v8 = *((_QWORD *)a2 + 91);
    if ( ((v8 >> 16) & 3) != 0 )
    {
      if ( ((*((_QWORD *)a2 + 91) >> 16) & 3LL) == 1 )
      {
        if ( (v36 & 0x80u) == 0 || (v37 & 0x80u) != 0 || (v8 & 0x40000000000LL) != 0 )
          goto LABEL_11;
        FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64));
        while ( FirstActivity )
        {
          if ( (*((_BYTE *)FirstActivity + 552) & 0x48) == 0 )
          {
            v31 = *((_BYTE *)FirstActivity + 562);
            if ( (v31 == 3 || v31 == 2 && *((_BYTE *)FirstActivity + 563) >= 5u)
              && (*((_DWORD *)FirstActivity + 28) & 0x2000) != 0 )
            {
              goto LABEL_11;
            }
          }
          v26 = *((_QWORD *)FirstActivity + 12);
          v27 = *((_QWORD *)FirstActivity + 10);
          FirstActivity = 0LL;
          if ( v26 != v27 + 608 )
            FirstActivity = (struct _HAM_ACTIVITY *)(v26 - 96);
        }
      }
      else
      {
        if ( ((*((_QWORD *)a2 + 91) >> 16) & 3LL) == 2 )
          v21 = (v8 & 0x8000000000000LL) == 0;
        else
          v21 = ((*((_QWORD *)a2 + 91) >> 16) & 3LL) == 3;
        if ( !v21 )
          goto LABEL_11;
      }
      if ( (v8 & 0x800000000LL) == 0 )
      {
        v38 = 0;
        v33 = 0;
        if ( (v8 & 0x10000000000LL) != 0 )
        {
          v22 = 0;
        }
        else
        {
          RmHamHostGetCurrentState(
            (struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64),
            (union _RM_OPTIMIZATION_STATE *)&v38,
            (union _RM_OPTIMIZATION_STATE *)&v33);
          if ( (v38 & 0x80u) == 0 || (v33 & 0x80u) != 0 )
          {
            if ( (v38 & 0x100) == 0 || (v33 & 0x100) != 0 )
            {
              v30 = *((_QWORD *)a2 + 91);
              if ( (v30 & 0x800000000LL) != 0 )
              {
                v22 = 0;
              }
              else if ( (v30 & 0x40000000000LL) == 0 || (v22 = 0, (v30 & 0x30000) == 0) )
              {
                v22 = 1;
              }
            }
            else
            {
              v22 = 0;
            }
          }
          else
          {
            v22 = 0;
          }
        }
        *((_QWORD *)a2 + 91) |= 0x800000000uLL;
        RmActivityHostReferenceFromHam((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64));
        TpPostWork(*((_QWORD *)a2 + 87));
        HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64), v22);
      }
      if ( (*((_DWORD *)a2 + 182) & 0x30000) != 0 )
      {
        v23 = 0LL;
        if ( a2 != (char *)-64LL )
          v23 = (struct _RM_ACTIVITY_HOST *)a2;
        do
        {
          v43 = *((_QWORD *)a2 + 110);
          RmReleaseEnforcementLocks(v23);
          RtlWaitOnAddress(a2 + 880, &v43, 8LL);
          RmAcquireEnforcementLocks(v23);
        }
        while ( (*((_DWORD *)a2 + 182) & 0x30000) != 0 );
        v7 = 0;
      }
    }
    else
    {
LABEL_11:
      if ( (v8 & 0x8000000000000LL) != 0 )
      {
        HampHostCollectErrorReport((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64));
      }
      else if ( (a2[736] & 0x40) != 0 )
      {
        RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a2);
        TpWaitForWork(*((_QWORD *)a2 + 89), 0LL);
        RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a2);
      }
      else
      {
        v9 = (struct _HAM_APPLICATION *)*((_QWORD *)a2 + 107);
        if ( !HampAppCheckQueueLicenseUpgradeForHost(v9, (struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64))
          && ((a2[1268] & 8) != 0 || !HampAppCheckWaitForLicenseForHost(v9, (struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64)))
          && !HampAppCheckDowngradeLicense(v9, (struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64)) )
        {
          v10 = HampHostCheckUpdateEnforcementSettings(
                  (struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64),
                  (struct _HAM_ENFORCEMENT_SETTINGS_CONTEXT *)&v34);
          v11 = RmpPolicyComputeDesiredState((__int64)a2);
          if ( (v11 & 8) != 0
            && (a2[1268] & 8) == 0
            && (*((_QWORD *)a2 + 91) & 0x200000000000LL) == 0
            && !RmpPolicyIsActivityHostSwappable((struct _RM_ACTIVITY_HOST *)a2) )
          {
            *((_QWORD *)a2 + 91) |= 0x200000000000uLL;
          }
          if ( *((_DWORD *)a2 + 317) == v11 )
          {
            if ( !v10 )
            {
              v7 = 0;
              break;
            }
            v7 = 0;
            if ( RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)a2) )
              break;
          }
          else
          {
            if ( (unsigned int)dword_1800E72B0 > 4
              && (qword_1800E72C0 & 0x40) != 0
              && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
            {
              v41 = v11;
              v65 = &v41;
              v45 = v6;
              v63 = &v45;
              v7 = 0;
              *(_DWORD *)&v47.Level = 4;
              v59.Ptr = (ULONGLONG)off_1800E72B8;
              v66 = 4LL;
              v64 = 8LL;
              *(_DWORD *)&v47.Id = 184549376;
              v47.Keyword = 64LL;
              v59.Size = *(unsigned __int16 *)off_1800E72B8;
              v60 = &unk_1800D7966;
              v59.Reserved = 2;
              v61 = 51;
              v62 = 1;
              v35 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
              EventWriteTransfer(RegHandle, &v47, 0LL, 0LL, 4u, &v59);
            }
            else
            {
              v7 = 0;
            }
            v24 = *((_DWORD *)a2 + 317);
            if ( (v11 & v24) == v11 )
              RmpEnforcementUnoptimizeHost((__int64)a2, ~(_BYTE)v11 & v24);
            else
              RmpEnforcementOptimizeHost((__int64)a2, v11 & ~v24);
            RtlWakeAllConditionVariable(a2 + 1256);
          }
        }
      }
    }
  }
  HampHostCheckStartPendingActivities((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64));
  *((_DWORD *)a2 + 180) = 0;
  *((_QWORD *)a2 + 91) &= ~0x400000000uLL;
  v12 = *((int *)a2 + 6) < 0;
  v32 = 0;
  v39 = 0;
  if ( !v12 && !(*((_DWORD *)a2 + 294) + *((_DWORD *)a2 + 288)) && !*((_QWORD *)a2 + 83) )
  {
    RmHamHostGetCurrentState(
      (struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64),
      (union _RM_OPTIMIZATION_STATE *)&v32,
      (union _RM_OPTIMIZATION_STATE *)&v39);
    if ( !v39 && (v32 & 0x80u) != 0 && (v32 & 0x100) != 0 && (a2[736] & 2) == 0 )
      LOBYTE(v7) = *((_QWORD *)a2 + 140) == 0LL;
  }
  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v14 = *Value;
    if ( (*Value & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v21 = Value[2]-- == 1;
    if ( v21 )
      *Value = v14 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a2 + 18) = 0;
  RtlReleaseSRWLockExclusive(a2 + 64);
  v15 = *((_QWORD *)a2 + 178);
  *((_DWORD *)a2 + 365) = 0;
  if ( v15 )
  {
    v28 = (char **)*((_QWORD *)a2 + 179);
    if ( v28[1] != a2 + 1432 || (v29 = (void **)*((_QWORD *)a2 + 180), *v29 != a2 + 1432) )
      __fastfail(3u);
    *v29 = v28;
    v28[1] = (char *)v29;
    *((_QWORD *)a2 + 178) = 0LL;
    if ( *(_QWORD *)v15 == v15 )
      SetEvent(*(HANDLE *)(v15 + 16));
    RmpObjectRelease(a2);
  }
  v16 = *(_QWORD *)(v5 + 3536);
  v17 = *(_DWORD *)(v16 + 160);
  if ( (v17 & 3) == 0 )
  {
    *(_DWORD *)(v16 + 160) = v17 | 1;
    TpPostWork(*(_QWORD *)(v16 + 144));
  }
  if ( v7 )
    RmpActivityHostDelete((unsigned __int64)a2);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 8) != 0 && (qword_1800E72C8 & 8) == qword_1800E72C8 )
  {
    v32 = *((_DWORD *)a2 + 317);
    v42 = v6;
    v73 = &v32;
    v74 = 4LL;
    v71 = &v42;
    *(_DWORD *)&v48.Level = 516;
    v67.Ptr = (ULONGLONG)off_1800E72B8;
    v72 = 8LL;
    *(_DWORD *)&v48.Id = 184549376;
    v48.Keyword = 8LL;
    v67.Size = *(unsigned __int16 *)off_1800E72B8;
    v68 = &unk_1800D79D8;
    v67.Reserved = 2;
    v69 = 42;
    v70 = 1;
    v35 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v48, 0LL, 0LL, 4u, &v67);
  }
  dword_1800E9388 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v18 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v19 = *v18;
    if ( (*v18 & 1) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v21 = v18[1]-- == 1;
    if ( v21 )
      *v18 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  RtlWakeAllConditionVariable(a2 + 1256);
  RmpObjectRelease(a2);
  v20 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v20, 0LL);
  }
}
