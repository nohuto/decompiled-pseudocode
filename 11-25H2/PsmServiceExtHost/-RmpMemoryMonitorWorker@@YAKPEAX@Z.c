/*
 * XREFs of ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001F4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x18001F300 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18001FC60 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800200D0 (-RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONI.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180020450 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180020FB0 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x1800214D0 (-RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAG.c)
 *     CempListEntryRemoveAndClear @ 0x1800276C4 (CempListEntryRemoveAndClear.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?RmpMemoryMonitorCheckEvent@@YAEPEAX@Z @ 0x18005FFD0 (-RmpMemoryMonitorCheckEvent@@YAEPEAX@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008EC7C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall RmpMemoryMonitorWorker(__int64 *Parameter)
{
  DWORD v2; // edi
  __int64 v3; // r13
  DWORD TickCount; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r15
  __int64 v11; // rcx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdi
  __int64 PageCount64; // rax
  unsigned __int8 v15; // r14
  unsigned int v16; // edx
  int v17; // r12d
  int v18; // eax
  int v19; // edi
  int v20; // edi
  DWORD v21; // esi
  __int64 v22; // r15
  DWORD v23; // esi
  _QWORD *Value; // rdi
  int v25; // eax
  __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rcx
  bool v29; // zf
  DWORD v30; // esi
  _QWORD *v31; // rdi
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rbx
  volatile signed __int32 *v42; // rsi
  DWORD v43; // ebx
  int v45; // edi
  DWORD v46; // esi
  int v47; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v48; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v50; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+58h] [rbp-A8h]
  _QWORD v52[6]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v53; // [rsp+90h] [rbp-70h]
  unsigned __int64 v54; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  _BYTE v57[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v58; // [rsp+B4h] [rbp-4Ch]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  __int64 v60; // [rsp+D0h] [rbp-30h]
  __int64 v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+F8h] [rbp-8h]
  _BYTE v64[64]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v65; // [rsp+148h] [rbp+48h]
  __int64 v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  __int64 v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  __int64 v70; // [rsp+170h] [rbp+70h]
  __int64 v71; // [rsp+178h] [rbp+78h]
  __int64 v72; // [rsp+180h] [rbp+80h]
  __int64 v73; // [rsp+188h] [rbp+88h]
  _BYTE v74[128]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE TlsValue[144]; // [rsp+220h] [rbp+120h] BYREF

  v47 = 0;
  memset_0(TlsValue, 0, 0x88uLL);
  v2 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v2, TlsValue);
  }
  v3 = *(_QWORD *)(*Parameter + 24);
  TickCount = GetTickCount();
  *((_DWORD *)Parameter + 20) = TickCount;
  *((_DWORD *)Parameter + 22) = TickCount;
  RmpAcquireGlobalLock();
  v5 = *(_QWORD *)(*Parameter + 24);
  v6 = *(_DWORD *)(v5 + 656);
  if ( (v6 & 1) == 0 )
  {
    v7 = ((v6 & 2) != 0) + 1;
    if ( (*(_BYTE *)(v5 + 3528) & 1) == 0 )
    {
      v8 = Parameter[8];
      v9 = 0xFFFFFFFFLL;
      v49 = -10000000LL;
      if ( v7 != 1 )
        v9 = 1000LL;
      TpSetTimer(v8, &v49, 0LL, v9);
    }
  }
  RmpReleaseGlobalLock();
  v10 = *Parameter;
  memset_0(v74, 0, sizeof(v74));
  memset_0(v57, 0, 0xF0uLL);
  v11 = *(_QWORD *)(v10 + 32);
  v58 = -1LL;
  NtManagePartition(v11, 0LL, 0LL, v57, 240);
  v12 = RmpPageSize * v73;
  v13 = RmpPageSize * v61;
  v52[1] = RmpPageSize * v60;
  v52[3] = RmpPageSize * v60 - RmpPageSize * v59;
  v52[4] = 0LL;
  v56 = 0LL;
  v52[0] = RmpPageSize * v73;
  v52[2] = RmpPageSize * v59;
  v52[5] = RmpPageSize * v61;
  PageCount64 = SwGetPageCount64(v64, 0LL, 5LL);
  v53 = RmpPageSize * (PageCount64 + v62 + v63);
  v54 = v13 - v53;
  v55 = v65 + v72 + v71 + v70 + v69 + v68 + v67 + v66;
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v3 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v3 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)v52,
    v12,
    (struct _RM_RESOURCE_USAGE_LIMITS *)v74);
  v15 = 0;
  *(_WORD *)(v10 + 204) = 0;
  while ( 1 )
  {
    v16 = 39;
    if ( v15 < 4u )
      v16 = 7;
    RmpMemoryMonitorWaitForEvents(
      (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
      v16,
      0xFFFFFFFF,
      (enum _RM_MEMORY_MONITOR_EVENT *)&v47);
    v17 = v47;
    if ( v47 == 2 )
      break;
    v50 = 0LL;
    v51 = 0LL;
    while ( 1 )
    {
      v18 = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(Parameter, v74, &v50);
      if ( (unsigned int)(v18 - 3) <= 1 )
        break;
      v19 = 0;
      if ( v18 == 2 )
        goto LABEL_16;
    }
    v19 = v18;
LABEL_16:
    RmpMemoryMonitorUpdateMemoryUsageMetrics(
      (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
      (struct _RM_RESOURCE_USAGE_STATS *)&v50);
    v15 = v50;
    if ( BYTE1(v50) > (unsigned __int8)v50 )
      v15 = BYTE1(v50);
    if ( v19 == 4 )
      break;
    if ( v17 != 1
      && v19 == 3
      && (unsigned int)dword_1800E7278 > 4
      && (unsigned __int8)tlgKeywordOn(&dword_1800E7278, 1LL) )
    {
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        (__int64)&dword_1800E7278,
        byte_1800D969E);
    }
    if ( *(_DWORD *)(v3 + 496) )
    {
      v45 = *((_DWORD *)Parameter + 20);
      v46 = *((_DWORD *)Parameter + 19);
      if ( GetTickCount() - v45 >= v46 )
      {
        RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
          (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
          (struct _RM_RESOURCE_USAGE_LIMITS *)v74);
        *((_DWORD *)Parameter + 20) = GetTickCount();
      }
    }
    if ( *(_DWORD *)(v3 + 500) )
    {
      v20 = *((_DWORD *)Parameter + 22);
      v21 = *((_DWORD *)Parameter + 21);
      if ( GetTickCount() - v20 >= v21 && !(unsigned int)RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy(Parameter, v74) )
        *((_DWORD *)Parameter + 22) = GetTickCount();
    }
    v22 = *(_QWORD *)(*(_QWORD *)(*Parameter + 24) + 3536LL);
    if ( v22 )
    {
      v23 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v23) )
          NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
        *Value |= 1uLL;
        ++Value[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800E9388 = GetCurrentThreadId();
      v25 = *(_DWORD *)(v22 + 160);
      if ( (v25 & 3) == 0 )
      {
        v26 = *(_QWORD *)(v22 + 144);
        *(_DWORD *)(v22 + 160) = v25 | 1;
        TpPostWork(v26);
      }
      dword_1800E9388 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v27 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v28 = *v27;
        if ( (*v27 & 1) == 0 )
          NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
        v29 = v27[1]-- == 1;
        if ( v29 )
          *v27 = v28 & 0xFFFFFFFFFFFFFFFEuLL;
      }
    }
    if ( v17 == 1 || RmpMemoryMonitorCheckEvent((void *)Parameter[2]) )
    {
      v30 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v31 = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v30) )
          NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
        *v31 |= 1uLL;
        ++v31[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800E9388 = GetCurrentThreadId();
      v32 = *(_QWORD *)(*Parameter + 24);
      v33 = *(_DWORD *)(v32 + 656);
      if ( (v33 & 1) == 0 )
      {
        v48 = 0LL;
        v34 = ((v33 & 2) != 0) + 1;
        if ( (*(_BYTE *)(v32 + 3528) & 1) == 0 )
        {
          v35 = 1000LL;
          if ( v34 == 1 )
            v35 = 0xFFFFFFFFLL;
          v36 = -50000000LL;
          if ( v15 )
            v36 = -10000000LL;
          v37 = Parameter[8];
          v48 = v36;
          TpSetTimer(v37, &v48, 0LL, v35);
        }
      }
      dword_1800E9388 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v38 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v39 = *v38;
        if ( (*v38 & 1) == 0 )
          NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
        v29 = v38[1]-- == 1;
        if ( v29 )
          *v38 = v39 & 0xFFFFFFFFFFFFFFFEuLL;
      }
    }
  }
  TpSetTimer(Parameter[8], 0LL, 0LL, 0LL);
  TpWaitForTimer(Parameter[8], 1LL);
  v40 = *Parameter;
  v41 = *(_QWORD *)(*Parameter + 24) + 312LL;
  RtlAcquireSRWLockExclusive(v41);
  *(_DWORD *)(v41 + 8) = GetCurrentThreadId();
  v42 = (volatile signed __int32 *)(v41 + 84);
  _InterlockedIncrement((volatile signed __int32 *)(v41 + 84));
  NtClose(*(HANDLE *)(v40 + 32));
  *(_DWORD *)(v40 + 240) |= 3u;
  *(_QWORD *)(v40 + 32) = 0LL;
  CempListEntryRemoveAndClear(v40 + 8);
  --*(_DWORD *)(v41 + 76);
  *(_DWORD *)(v41 + 8) = 0;
  RtlReleaseSRWLockExclusive(v41);
  RtlWakeAllConditionVariable(v41 + 32);
  RmpPartitionCleanup((struct _RM_PARTITION *)v40);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v40);
  v43 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v43, 0LL);
  }
  _InterlockedDecrement(v42);
  RtlWakeAddressAll(v42);
  return 0LL;
}
