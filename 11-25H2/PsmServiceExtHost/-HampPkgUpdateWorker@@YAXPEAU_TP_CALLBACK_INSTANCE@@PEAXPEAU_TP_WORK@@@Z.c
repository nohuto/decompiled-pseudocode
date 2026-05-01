/*
 * XREFs of ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180015E20
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     ?HampPkgComputeStateSummary@@YA?AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z @ 0x180016464 (-HampPkgComputeStateSummary@@YA-AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800165E0 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@K@Z @ 0x180016A90 (-HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall HampPkgUpdateWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  DWORD v3; // ebx
  DWORD v5; // edi
  _QWORD *Value; // rbx
  _DWORD *v7; // r15
  __int64 *v8; // rax
  __int64 v9; // rcx
  bool v10; // zf
  unsigned int v11; // ebx
  DWORD v12; // r12d
  _QWORD *v13; // rdi
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // r9d
  unsigned int v17; // edx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  unsigned int v25; // r8d
  __int128 v26; // xmm1
  __int64 v27; // rax
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  const wchar_t *v30; // rdi
  __int64 *v31; // rax
  __int64 v32; // rdx
  DWORD v33; // ebx
  __int64 v34; // rax
  int v35; // eax
  unsigned int v36; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v37; // [rsp+34h] [rbp-CCh]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR v39; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD TlsValue[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-20h]
  _DWORD v42[2]; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v43[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int16 v44; // [rsp+178h] [rbp+78h]
  __int128 v45; // [rsp+2C8h] [rbp+1C8h]
  __int128 v46; // [rsp+2D8h] [rbp+1D8h]
  __int128 v47; // [rsp+2E8h] [rbp+1E8h]
  __int128 v48; // [rsp+2F8h] [rbp+1F8h]
  int v49; // [rsp+308h] [rbp+208h]
  int v50; // [rsp+30Ch] [rbp+20Ch]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+310h] [rbp+210h] BYREF
  void *v52; // [rsp+320h] [rbp+220h]
  int v53; // [rsp+328h] [rbp+228h]
  int v54; // [rsp+32Ch] [rbp+22Ch]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+330h] [rbp+230h] BYREF
  void *v56; // [rsp+340h] [rbp+240h]
  int v57; // [rsp+348h] [rbp+248h]
  int v58; // [rsp+34Ch] [rbp+24Ch]
  const wchar_t *v59; // [rsp+350h] [rbp+250h]
  int v60; // [rsp+358h] [rbp+258h]
  int v61; // [rsp+35Ch] [rbp+25Ch]
  unsigned int *v62; // [rsp+360h] [rbp+260h]
  __int64 v63; // [rsp+368h] [rbp+268h]

  v3 = HampLockTrackerId;
  v41 = 0LL;
  memset(TlsValue, 0, sizeof(TlsValue));
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v3, TlsValue);
  }
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E72B8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E72B8;
    v52 = &unk_1800D5BE9;
    UserData.Reserved = 2;
    v53 = 23;
    v54 = 1;
    v36 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockExclusive(a2 + 304);
  *((_DWORD *)a2 + 78) = GetCurrentThreadId();
  v7 = a2 + 340;
  do
  {
    *v7 &= ~0x20u;
    if ( HampLockTrackerId != -1 )
    {
      v8 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v9 = *v8;
      if ( (*v8 & 0x40) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v10 = v8[7]-- == 1;
      if ( v10 )
        *v8 = v9 & 0xFFFFFFFFFFFFFFBFuLL;
    }
    *((_DWORD *)a2 + 78) = 0;
    RtlReleaseSRWLockExclusive(a2 + 304);
    v37 = HampPkgComputeStateSummary(a2);
    v11 = v37;
    HampPkgCommitAppsUsageInfo((struct _HAM_PACKAGE *)a2);
    v12 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v13 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v12) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *v13 |= 0x40uLL;
      ++v13[7];
    }
    RtlAcquireSRWLockExclusive(a2 + 304);
    *((_DWORD *)a2 + 78) = GetCurrentThreadId();
  }
  while ( (*(_BYTE *)v7 & 0x20) != 0 );
  if ( *((_DWORD *)a2 + 86) != v11 )
  {
    memset_0(v43, 0, 0x214uLL);
    v14 = *((_OWORD *)a2 + 6);
    v15 = *((_OWORD *)a2 + 7);
    v16 = *((_DWORD *)a2 + 86);
    v44 = *((_WORD *)a2 + 112);
    v42[0] = 1;
    v43[0] = v14;
    v17 = (((unsigned __int8)v11 ^ (unsigned __int8)v16) & 0xE0) != 0;
    v18 = *((_OWORD *)a2 + 8);
    v43[1] = v15;
    v19 = *((_OWORD *)a2 + 9);
    v43[2] = v18;
    v20 = *((_OWORD *)a2 + 10);
    v43[3] = v19;
    v21 = *((_OWORD *)a2 + 11);
    v43[4] = v20;
    v22 = *((_OWORD *)a2 + 12);
    v43[5] = v21;
    v23 = *((_OWORD *)a2 + 13);
    v43[6] = v22;
    v43[7] = v23;
    if ( (((unsigned __int8)v11 ^ (unsigned __int8)v16) & 7) != 0
      || (((unsigned __int8)v11 ^ (unsigned __int8)v16) & 0x18) != 0
      || (((unsigned __int16)v11 ^ (unsigned __int16)v16) & 0x100) != 0
      || (((unsigned __int16)v11 ^ (unsigned __int16)v16) & 0x200) != 0 )
    {
      v17 |= 2u;
    }
    v24 = *(_OWORD *)(a2 + 228);
    v49 = *((_DWORD *)a2 + 73);
    v25 = v17 | 4;
    v26 = *(_OWORD *)(a2 + 244);
    v50 = *((_DWORD *)a2 + 74);
    v27 = *((_QWORD *)a2 + 4);
    v45 = v24;
    *((_DWORD *)a2 + 86) = v11;
    v28 = *(_OWORD *)(a2 + 260);
    v42[1] = v11;
    v46 = v26;
    v29 = *(_OWORD *)(a2 + 276);
    v47 = v28;
    v48 = v29;
    if ( (((unsigned __int16)v11 ^ (unsigned __int16)v16) & 0x400) == 0 )
      v25 = v17;
    HampManagerIssueStateChangeNotifications(
      (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(*(_QWORD *)((v27 & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                      - 392),
      (struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *)v42,
      v25);
  }
  *v7 &= ~0x10u;
  v30 = (const wchar_t *)(a2 + 96);
  if ( HampLockTrackerId != -1 )
  {
    v31 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v32 = *v31;
    if ( (*v31 & 0x40) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v10 = v31[7]-- == 1;
    if ( v10 )
      *v31 = v32 & 0xFFFFFFFFFFFFFFBFuLL;
  }
  *((_DWORD *)a2 + 78) = 0;
  RtlReleaseSRWLockExclusive(a2 + 304);
  RtlWakeAddressAll(a2 + 340);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
  {
    v36 = v11;
    v62 = &v36;
    v63 = 4LL;
    if ( a2 == (char *)-96LL )
    {
      v30 = &word_1800C10AC;
      v35 = 2;
    }
    else
    {
      v34 = -1LL;
      do
        v10 = v30[++v34] == 0;
      while ( !v10 );
      v35 = 2 * v34 + 2;
    }
    v60 = v35;
    *(_DWORD *)&v39.Level = 516;
    v55.Ptr = (ULONGLONG)off_1800E72B8;
    v59 = v30;
    v61 = 0;
    *(_DWORD *)&v39.Id = 184549376;
    v39.Keyword = 64LL;
    v55.Size = *(unsigned __int16 *)off_1800E72B8;
    v56 = &unk_1800D5C0C;
    v55.Reserved = 2;
    v57 = 49;
    v58 = 1;
    v37 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v39, 0LL, 0LL, 4u, &v55);
  }
  CemRcObjectDereference(a2);
  v33 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v33, 0LL);
  }
}
