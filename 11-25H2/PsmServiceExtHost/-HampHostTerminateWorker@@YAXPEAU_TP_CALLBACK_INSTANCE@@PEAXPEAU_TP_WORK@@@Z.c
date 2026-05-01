/*
 * XREFs of ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180008670
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180006EE4 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180007190 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REASON@@@Z @ 0x1800075F0 (-HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REAS.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180007FE0 (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmActivityHostReleaseFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180008C28 (-RmActivityHostReleaseFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800090D0 (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180009594 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001834C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E4E4 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180026E70 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C79C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800536D0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U-$_tlgWrapperByV.c)
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x180056C64 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180060BCC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180084C38 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall HampHostTerminateWorker(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _TP_WORK *a3)
{
  __int64 v4; // rcx
  int v5; // r12d
  __int64 v6; // r14
  DWORD v7; // esi
  _QWORD *Value; // rdi
  __int64 v9; // r15
  unsigned int v10; // esi
  unsigned int v11; // r13d
  __int64 *v12; // rax
  __int64 v13; // rcx
  bool v14; // zf
  unsigned int v15; // eax
  int v16; // edi
  __int64 v17; // r15
  int UnbiasedInterruptTimeMs64; // eax
  unsigned int v19; // edx
  __int64 *v20; // rax
  __int64 v21; // rcx
  void *v22; // rdi
  HANDLE *v23; // rsi
  char v24; // di
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rax
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  char v32; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v33[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v34; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v35; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v36; // [rsp+5Ch] [rbp-A4h]
  __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  void *v39[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v40; // [rsp+88h] [rbp-78h]
  char *v41; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v42[144]; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+30h] BYREF
  void *v44; // [rsp+140h] [rbp+40h]
  int v45; // [rsp+148h] [rbp+48h]
  int v46; // [rsp+14Ch] [rbp+4Ch]

  memset_0(v42, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v42);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E72B8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E72B8;
    v44 = &unk_1800D2A32;
    UserData.Reserved = 2;
    v45 = 24;
    v46 = 1;
    v36 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v4 = 32LL;
  if ( a2 )
    v4 = (__int64)a2 - 32;
  v5 = 0;
  v34 = 0;
  v37 = *(_QWORD *)v4;
  *(_QWORD *)&EventDescriptor.Id = CempQueryUnbiasedInterruptTimeMs64();
  LODWORD(v6) = 0;
  *(_OWORD *)v39 = 0LL;
  v40 = 0LL;
  RmpAcquireGlobalLock();
  v36 = RmHamHostReferenceUnsafe(a2);
  RmpReleaseGlobalLock();
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  CempLockAcquireExclusive(a2);
  v9 = *((_QWORD *)a2 + 83) >> 16;
  v10 = (unsigned __int16)*((_DWORD *)a2 + 166);
  v11 = WORD1(*((_QWORD *)a2 + 83)) & 3;
  HampHostStartProcessPresenceChange(a2);
  if ( v36 && (unsigned int)HampHostShouldTerminate(a2) )
  {
    if ( (v10 & 0xFFFFFF00) == 0x700 )
      HampHostInvalidateActivities(a2, v10, 0LL, 1LL);
    if ( HampLockTrackerId != -1 )
    {
      v12 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v13 = *v12;
      if ( (*v12 & 2) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v14 = v12[2]-- == 1;
      if ( v14 )
        *v12 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *((_DWORD *)a2 + 2) = 0;
    RtlReleaseSRWLockExclusive(a2);
    if ( (*((_QWORD *)a2 + 83) & 0x2000000000000LL) != 0
      && ((int)RmHamHostGetProcessesInfo(
                 (struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 64),
                 4096,
                 1,
                 (struct _HAM_PROCESS_SNAPSHOT *)v39) < 0
       || (v15 = HampHostQueryAndLogTerminatingProcessCount((__int64)v39, v10), (unsigned int)v40 > v15)) )
    {
      v16 = 1;
    }
    else
    {
      v16 = 0;
      if ( (unsigned int)dword_1800E72B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E72B0, 64LL) )
      {
        v32 = *((_BYTE *)a2 + 560);
        v33[0] = v9 & 3;
        v17 = v37;
        v41 = (char *)a2 + 24;
        v35 = v10;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
          v29,
          (unsigned int)&unk_1800D2BD7,
          v30,
          v31,
          (__int64)&v41,
          (__int64)&v37,
          (__int64)&v32,
          (__int64)v33,
          (__int64)&v35);
        goto LABEL_23;
      }
    }
    v17 = v37;
LABEL_23:
    HampHostTerminateWithProcessBoost((HANDLE *)a2, (struct _HAM_PROCESS_SNAPSHOT *)v39);
    UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
    HampHostNotifyZeroProcess(
      a2,
      v16 != 0 ? v11 : 0,
      v16 != 0 ? v10 : 0,
      (unsigned int)(UnbiasedInterruptTimeMs64 - *(_DWORD *)&EventDescriptor.Id),
      &v34);
    v5 = v34;
    LODWORD(v6) = v40;
    goto LABEL_24;
  }
  v17 = v37;
LABEL_24:
  *((_QWORD *)a2 + 83) &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable((char *)a2 + 696);
  v35 = 0;
  v34 = 0;
  v19 = 0;
  if ( (*((_QWORD *)a2 + 83) & 0x10000000000LL) == 0 )
  {
    RmHamHostGetCurrentState(a2, (union _RM_OPTIMIZATION_STATE *)&v35, (union _RM_OPTIMIZATION_STATE *)&v34);
    if ( ((v35 & 0x80u) == 0 || (v34 & 0x80u) != 0) && ((v35 & 0x100) == 0 || (v34 & 0x100) != 0) )
    {
      v28 = *((_QWORD *)a2 + 83);
      if ( (v28 & 0x800000000LL) == 0 && ((v28 & 0x40000000000LL) == 0 || (v28 & 0x30000) == 0) )
        v19 = 1;
    }
  }
  *((_QWORD *)a2 + 83) &= ~0x800000000uLL;
  HampHostCheckUpdateSuspendWaitState(a2, v19);
  if ( HampLockTrackerId != -1 )
  {
    v20 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v21 = *v20;
    if ( (*v20 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v14 = v20[2]-- == 1;
    if ( v14 )
      *v20 = v21 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a2 + 2) = 0;
  RtlReleaseSRWLockExclusive(a2);
  v22 = v39[0];
  if ( (_DWORD)v6 )
  {
    v23 = (HANDLE *)v39[0];
    v6 = (unsigned int)v6;
    do
    {
      NtClose(*v23++);
      --v6;
    }
    while ( v6 );
  }
  if ( v22 )
    HampFreeHeap(v22);
  if ( v39[1] )
    HampFreeHeap(v39[1]);
  if ( v5 )
    RmHamHostDereference(a2);
  v24 = v36;
  if ( v36 )
    RmHamHostDereference(a2);
  RmActivityHostReleaseFromHam(a2);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 8) != 0 && (qword_1800E72C8 & 8) == qword_1800E72C8 )
  {
    v32 = v24;
    *(_QWORD *)&EventDescriptor.Id = v17;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v25,
      (unsigned int)&unk_1800D2B5A,
      v26,
      v27,
      (__int64)&EventDescriptor,
      (__int64)&v32);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
