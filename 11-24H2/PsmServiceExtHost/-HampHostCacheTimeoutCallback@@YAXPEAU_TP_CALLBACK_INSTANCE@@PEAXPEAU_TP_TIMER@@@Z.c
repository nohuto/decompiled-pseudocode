/*
 * XREFs of ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180006B40
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180007744 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001D8F8 (-HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800363B8 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall HampHostCacheTimeoutCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _TP_TIMER *a3)
{
  DWORD v4; // esi
  _QWORD *Value; // rdi
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v15; // [rsp+100h] [rbp+0h]
  int v16; // [rsp+108h] [rbp+8h]
  int v17; // [rsp+10Ch] [rbp+Ch]
  __int64 *v18; // [rsp+110h] [rbp+10h]
  int v19; // [rsp+118h] [rbp+18h]
  int v20; // [rsp+11Ch] [rbp+1Ch]

  memset_0(v13, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      &dword_1800E82B0,
      &unk_1800D34E5);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  CempLockAcquireExclusive(a2);
  if ( HampHostIsCached(a2) )
    HampHostQueueTerminateEx(v6, 1LL, 2560LL);
  if ( HampLockTrackerId != -1 )
  {
    v7 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v8 = *v7;
    if ( (*v7 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v7[2]-- == 1 )
      *v7 = v8 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a2 + 2) = 0;
  RtlReleaseSRWLockExclusive(a2);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v10 = *((_QWORD *)a2 - 4);
    v20 = 0;
    v11 = v10;
    v19 = 8;
    v18 = &v11;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E82B8;
    EventDescriptor.Keyword = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E82B8;
    v15 = &unk_1800D3DDE;
    UserData.Reserved = 2;
    v16 = 27;
    v17 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
