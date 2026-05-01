/*
 * XREFs of ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180008680
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180006EF4 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x1800071A0 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180007600 (-HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REAS.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180007FF0 (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmActivityHostReleaseFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180008BA8 (-RmActivityHostReleaseFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009050 (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180009514 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E464 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180026DF0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C71C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180053650 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U-$_tlgWrapperByV.c)
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x180056BE4 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180060B4C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x1800850F8 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
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
  int v18; // eax
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
  char v32; // [rsp+58h] [rbp-B0h] BYREF
  char v33; // [rsp+59h] [rbp-AFh] BYREF
  int v34; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v35; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+70h] [rbp-98h]
  __int64 UnbiasedInterruptTimeMs64; // [rsp+78h] [rbp-90h] BYREF
  void *v39[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v40; // [rsp+90h] [rbp-78h]
  char *v41; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v42[144]; // [rsp+A8h] [rbp-60h] BYREF

  memset_0(v42, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v42);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E82B0,
      byte_1800D3826);
  v4 = 32LL;
  if ( a2 )
    v4 = (__int64)a2 - 32;
  v5 = 0;
  v34 = 0;
  v36 = *(_QWORD *)v4;
  UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
  LODWORD(v6) = 0;
  *(_OWORD *)v39 = 0LL;
  v40 = 0LL;
  RmpAcquireGlobalLock();
  LODWORD(v37) = RmHamHostReferenceUnsafe(a2);
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
  if ( (_DWORD)v37 && (unsigned int)HampHostShouldTerminate(a2) )
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
      if ( (unsigned int)dword_1800E82B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E82B0, 64LL) )
      {
        v32 = *((_BYTE *)a2 + 560);
        v33 = v9 & 3;
        v17 = v36;
        v41 = (char *)a2 + 24;
        LODWORD(v35) = v10;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
          v29,
          (unsigned int)&unk_1800D39D6,
          v30,
          v31,
          (__int64)&v41,
          (__int64)&v36,
          (__int64)&v32,
          (__int64)&v33,
          (__int64)&v35);
        goto LABEL_23;
      }
    }
    v17 = v36;
LABEL_23:
    HampHostTerminateWithProcessBoost((HANDLE *)a2, (struct _HAM_PROCESS_SNAPSHOT *)v39);
    v18 = CempQueryUnbiasedInterruptTimeMs64();
    HampHostNotifyZeroProcess(
      a2,
      v16 != 0 ? v11 : 0,
      v16 != 0 ? v10 : 0,
      (unsigned int)(v18 - UnbiasedInterruptTimeMs64),
      &v34);
    v5 = v34;
    LODWORD(v6) = v40;
    goto LABEL_24;
  }
  v17 = v36;
LABEL_24:
  *((_QWORD *)a2 + 83) &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable((char *)a2 + 696);
  LODWORD(v35) = 0;
  v34 = 0;
  v19 = 0;
  if ( (*((_QWORD *)a2 + 83) & 0x10000000000LL) == 0 )
  {
    RmHamHostGetCurrentState(a2, (union _RM_OPTIMIZATION_STATE *)&v35, (union _RM_OPTIMIZATION_STATE *)&v34);
    if ( ((v35 & 0x80u) == 0LL || (v34 & 0x80u) != 0) && ((v35 & 0x100) == 0 || (v34 & 0x100) != 0) )
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
  v24 = v37;
  if ( (_DWORD)v37 )
    RmHamHostDereference(a2);
  RmActivityHostReleaseFromHam(a2);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v32 = v24;
    UnbiasedInterruptTimeMs64 = v17;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v25,
      (unsigned int)&unk_1800D3959,
      v26,
      v27,
      (__int64)&UnbiasedInterruptTimeMs64,
      (__int64)&v32);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
