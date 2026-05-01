/*
 * XREFs of ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025E50
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180025420 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1800027CC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009FC8 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18001E7CC (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002B000 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002B0A8 (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18002BFA0 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampUserAcquireLockShared@@YAXPEAU_HAM_USER@@@Z @ 0x180037DE0 (-HampUserAcquireLockShared@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampUserReleaseLockShared@@YAXPEAU_HAM_USER@@@Z @ 0x180037E60 (-HampUserReleaseLockShared@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x180037EB8 (-HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003C684 (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18005B444 (-HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18006A1BC (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     IsUMgrQueryUserContextFromSidPresent @ 0x180072A38 (IsUMgrQueryUserContextFromSidPresent.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x180072CEC (IsPackageRundownNotificationForStoreLicense2Present.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x1800837E8 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HampAppCheckQueueLicenseUpgradeForHost(
        struct _HAM_APPLICATION *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  unsigned int v2; // ebx
  DWORD v3; // r15d
  __int64 v5; // rsi
  unsigned int v7; // r12d
  _QWORD *Value; // rdi
  __int64 *v9; // rax
  __int64 v10; // rcx
  bool v11; // zf
  unsigned int v13; // ecx
  __int64 v14; // r15
  NTSTATUS v15; // edx
  unsigned int i; // eax
  __int64 *v17; // rax
  __int64 v18; // rcx
  const wchar_t *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  unsigned __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int refreshed; // [rsp+50h] [rbp-B0h]
  unsigned int v27; // [rsp+50h] [rbp-B0h]
  char v28; // [rsp+54h] [rbp-ACh] BYREF
  char v29; // [rsp+55h] [rbp-ABh] BYREF
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v31; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  NTSTATUS v33; // [rsp+68h] [rbp-98h] BYREF
  struct _RM_ACTIVITY_HOST *v34; // [rsp+70h] [rbp-90h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h] BYREF
  __int64 v37; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v39; // [rsp+B0h] [rbp-50h]
  int v40; // [rsp+B8h] [rbp-48h]
  int v41; // [rsp+BCh] [rbp-44h]
  NTSTATUS *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  const wchar_t *v44; // [rsp+D0h] [rbp-30h]
  int v45; // [rsp+D8h] [rbp-28h]
  int v46; // [rsp+DCh] [rbp-24h]
  __int64 *v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  char *v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]

  v2 = 0;
  v3 = HampLockTrackerId;
  v5 = *((_QWORD *)a2 + 83) >> 61;
  v32 = 0LL;
  v7 = v5 & 3;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x20uLL;
    ++Value[6];
  }
  RtlAcquireSRWLockShared((char *)a1 + 584);
  if ( ((*((_DWORD *)a1 + 154) >> 21) & 3u) >= v7 )
  {
    if ( HampLockTrackerId != -1 )
    {
      v9 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v10 = *v9;
      if ( (*v9 & 0x20) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v11 = v9[6]-- == 1;
      if ( v11 )
        *v9 = v10 & 0xFFFFFFFFFFFFFFDFuLL;
    }
    RtlReleaseSRWLockShared((char *)a1 + 584);
    return v2;
  }
  HampAppReleaseLockShared(a1);
  v34 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 64);
  RmReleaseEnforcementLocks((struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 64));
  HampAppAcquireLockExclusive(a1);
  while ( 1 )
  {
    v13 = *((_DWORD *)a1 + 154);
    if ( ((v13 >> 21) & 3) >= v7 )
    {
      v34 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 64);
      goto LABEL_24;
    }
    if ( (v13 & 0x100000) == 0 )
      break;
    HampAppTraceWaitForLicenseWorkerForHost(a2);
    HampAppWaitForFlagChange(a1);
  }
  *((_DWORD *)a1 + 154) = v13 | 0x100000;
  HampAppReleaseLockExclusive(a1);
  v14 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 88LL);
  HampUserAcquireLockShared((struct _HAM_USER *)v14);
  if ( (*(_BYTE *)(v14 + 192) & 2) != 0 )
  {
    v32 = *(_QWORD *)(v14 + 184);
    HampUserReleaseLockShared((struct _HAM_USER *)v14);
  }
  else
  {
    HampUserReleaseLockShared((struct _HAM_USER *)v14);
    refreshed = HampUserTryRefreshContextToken((struct _HAM_USER *)v14, &v32);
    v15 = refreshed;
    if ( refreshed < 0 )
      goto LABEL_17;
  }
  refreshed = 0;
  v15 = 0;
LABEL_17:
  for ( i = (v15 >> 31) & 2; ; i = v30 + 1 )
  {
    v30 = i;
    if ( i >= 2 )
      break;
    switch ( v7 )
    {
      case 1u:
        v27 = 4;
        break;
      case 2u:
        v27 = 2;
        break;
      case 3u:
        v27 = 1;
        break;
      default:
        v15 = -1073741584;
        refreshed = -1073741584;
        goto LABEL_50;
    }
    if ( !(unsigned __int8)IsPackageRundownNotificationForStoreLicense2Present() )
      goto LABEL_44;
    if ( (unsigned __int8)IsUMgrQueryUserContextFromSidPresent() )
    {
      if ( IsWellKnownSid((PSID)(*((_QWORD *)a1 + 11) + 228LL), WinLocalAccountAndAdministratorSid|WinCreatorGroupSid) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 88LL) + 160LL) + 88LL) )
        {
          v15 = -1073741637;
          refreshed = -1073741637;
          goto LABEL_50;
        }
        v22 = 0LL;
      }
      else
      {
        v22 = v32;
      }
      refreshed = BeginAcquireStoreLicenseForPackageActivation2((char *)a1 + 96, v27, v22);
      v15 = refreshed;
      if ( refreshed >= 0 )
      {
LABEL_44:
        v15 = 0;
        refreshed = 0;
        if ( v30 )
        {
          if ( (unsigned int)dword_1800E72B0 <= 4 )
            goto LABEL_21;
          if ( (unsigned __int8)tlgKeywordOn(&dword_1800E72B0, 8LL) )
          {
            v36 = *((_QWORD *)a2 - 4);
            *(_QWORD *)&EventDescriptor.Id = (char *)a2 + 24;
            v30 = v24;
            v28 = v5 & 3;
            v31 = 0;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
              v23,
              (__int64)&unk_1800D5E0F,
              v24,
              v25,
              (__int64)&v31,
              (const wchar_t **)&EventDescriptor,
              (__int64)&v36,
              (__int64)&v28,
              (__int64)&v30);
          }
          v15 = 0;
        }
        break;
      }
    }
    else
    {
      v15 = -1073741822;
      refreshed = -1073741822;
    }
LABEL_50:
    if ( !v30 )
    {
      refreshed = HampUserTryRefreshContextToken((struct _HAM_USER *)v14, &v32);
      v15 = refreshed;
      if ( refreshed >= 0 )
        continue;
    }
    break;
  }
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 8) != 0 && (qword_1800E72C8 & 8) == qword_1800E72C8 )
  {
    v19 = (const wchar_t *)((char *)a2 + 24);
    v37 = *((_QWORD *)a2 - 4);
    v49 = &v29;
    v47 = &v37;
    v29 = v5 & 3;
    v33 = v15;
    v50 = 1LL;
    v48 = 8LL;
    if ( a2 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
    {
      v19 = &word_1800C10AC;
      v21 = 2;
    }
    else
    {
      v20 = -1LL;
      do
        v11 = v19[++v20] == 0;
      while ( !v11 );
      v21 = 2 * v20 + 2;
    }
    v45 = v21;
    v44 = v19;
    v42 = &v33;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E72B8;
    v46 = 0;
    v43 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800E72B8;
    v39 = &unk_1800D5DD0;
    UserData.Reserved = 2;
    v40 = 62;
    v41 = 1;
    v31 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    v15 = refreshed;
  }
LABEL_21:
  if ( v15 < 0 )
  {
    HampAppRequestLicensingActivityStops(a1, v15);
    HampAppAcquireLockExclusive(a1);
  }
  else
  {
    HampAppAcquireLockExclusive(a1);
    *((_DWORD *)a1 + 154) ^= (*((_DWORD *)a1 + 154) ^ ((_DWORD)v5 << 21)) & 0x600000;
  }
  HampAppExitLicenseWorker(a1);
LABEL_24:
  if ( HampLockTrackerId != -1 )
  {
    v17 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v18 = *v17;
    if ( (*v17 & 0x20) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v11 = v17[6]-- == 1;
    if ( v11 )
      *v17 = v18 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  *((_DWORD *)a1 + 148) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 584);
  v2 = 1;
  RmAcquireEnforcementLocks(v34);
  return v2;
}
