/*
 * XREFs of ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180021BC0
 * Callers:
 *     ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800200D0 (-RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONI.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180020450 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180012EE4 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18001FC60 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180022300 (-RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x1800225AC (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180022950 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027700 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18002A07C (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180060ED4 (-HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x180063A3C (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

__int64 __fastcall RmpMemoryMonitorEmptyWorkingSets(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  DWORD v8; // edi
  _QWORD *Value; // rbx
  int v10; // r9d
  int v11; // edx
  __int64 v12; // r15
  int v13; // r8d
  __int64 v14; // rdi
  __int16 v15; // ax
  unsigned int v16; // esi
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // ax
  bool v19; // zf
  __int64 v20; // r8
  struct _RM_ACTIVITY_HOST_METRICS *v21; // rcx
  __int64 v22; // r14
  __int64 *v23; // rdx
  __int64 *v24; // rbx
  __int64 v25; // rbx
  __int64 *i; // rdx
  __int64 v27; // rdx
  signed __int64 v28; // rax
  bool v29; // cc
  signed __int64 v30; // rax
  __int64 *v31; // rbx
  __int64 *j; // rdx
  struct _RM_ACTIVITY_HOST_METRICS *v33; // rax
  unsigned __int64 v34; // rcx
  signed __int64 v35; // rax
  signed __int64 v36; // rax
  int v37; // ecx
  int v38; // ecx
  void *v39; // rcx
  size_t v40; // rbx
  unsigned int v41; // ebx
  _QWORD *v42; // rax
  __int64 *v43; // rax
  __int64 v44; // rcx
  int v46; // ecx
  _QWORD *v47; // rdi
  _QWORD *v48; // rcx
  _QWORD *v49; // rdx
  struct _RM_ACTIVITY_HOST_METRICS *v50; // r14
  __int64 v51; // rsi
  char v52; // al
  _WORD *v53; // rdi
  int (__cdecl *v54)(const void *, const void *); // r9
  DWORD *v55; // rbx
  HANDLE *v56; // rcx
  unsigned __int8 v57[4]; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v58; // [rsp+44h] [rbp-45h]
  int v59; // [rsp+48h] [rbp-41h]
  int v60; // [rsp+4Ch] [rbp-3Dh] BYREF
  unsigned __int16 v61; // [rsp+50h] [rbp-39h]
  unsigned int v62; // [rsp+54h] [rbp-35h]
  int v63; // [rsp+58h] [rbp-31h]
  int v64; // [rsp+5Ch] [rbp-2Dh]
  __int64 v65; // [rsp+60h] [rbp-29h]
  __int64 v66; // [rsp+68h] [rbp-21h]
  __int64 *v67; // [rsp+70h] [rbp-19h]
  __int64 *v68; // [rsp+78h] [rbp-11h]
  _QWORD v69[12]; // [rsp+80h] [rbp-9h] BYREF
  unsigned __int8 v70; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v71; // [rsp+F8h] [rbp+6Fh]
  __int64 v72; // [rsp+100h] [rbp+77h]
  unsigned int v73; // [rsp+108h] [rbp+7Fh]

  v73 = a4;
  v72 = a3;
  v71 = a2;
  v4 = a1[4];
  v60 = 0;
  v70 = 0;
  v69[1] = v69;
  v69[0] = v69;
  v6 = a4;
  v57[0] = 0;
  v69[2] = v4;
  if ( (a4 & 0x20) != 0 )
  {
    v62 = 0;
  }
  else
  {
    if ( (a4 & 8) != 0 )
    {
      v7 = 1;
      v62 = 1;
      goto LABEL_5;
    }
    v62 = 1;
  }
  v7 = 0;
LABEL_5:
  v8 = HampLockTrackerId;
  v58 = v7;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v8) )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800E9388 = GetCurrentThreadId();
  v10 = v6 | 0x20;
  v11 = v6 & 1;
  v12 = *a1 + 160;
  v64 = v6 | 0x20;
  v59 = v11;
  v13 = v6 & 0x10;
  v63 = v13;
  while ( 1 )
  {
    *(_WORD *)(v12 + 44) = 0;
    v14 = *a1;
    v15 = 40;
    *(_DWORD *)(v12 + 36) = 0;
    if ( v7 != 1 )
      v15 = 8;
    v16 = v10;
    v17 = v15 | 0x13;
    if ( !v11 )
      v17 = v15;
    v18 = v17 | 2;
    v19 = v13 == 0;
    v20 = *(unsigned int *)(v12 + 32);
    if ( v19 )
      v18 = v17;
    v21 = *(struct _RM_ACTIVITY_HOST_METRICS **)v12;
    v61 = v18;
    if ( v7 == 1 )
      v16 = v6;
    memset_0(v21, 0, v20 << 6);
    v22 = *(_QWORD *)(v14 + 24) + 16LL;
    RtlAcquireSRWLockShared(*(_QWORD *)(v14 + 24) + 32LL);
    v23 = *(__int64 **)(v22 + 8);
    v65 = v22;
    v24 = v23;
    v68 = v23;
    v66 = 0LL;
    v67 = v23;
    if ( !v23 )
      goto LABEL_21;
    if ( (*v23 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v23 = v68;
    v25 = *v24;
    if ( (v25 & 1) != 0 )
    {
LABEL_21:
      for ( i = v23 + 1; ; ++i )
      {
        if ( (unsigned __int64)i >= *(_QWORD *)(v22 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v22 + 4) >> 5) )
          goto LABEL_50;
        v25 = *i;
        if ( (*i & 1) == 0 )
          break;
      }
      v68 = i;
    }
    v67 = (__int64 *)v25;
    if ( v25 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v25 + 16)) <= 1 )
        __fastfail(0xEu);
      while ( 1 )
      {
        if ( *(_QWORD *)(v25 + 56) != v14 )
        {
          RmpObjectRelease((PVOID)v25);
          goto LABEL_30;
        }
        if ( RmpMemoryMonitorEmptyPolicyFilterCallback((struct _RM_ACTIVITY_HOST *)v25, (void *)v16) )
        {
          v33 = *(struct _RM_ACTIVITY_HOST_METRICS **)v12;
          v34 = (unsigned __int64)*(unsigned int *)(v12 + 36) << 6;
          *(_QWORD *)((char *)v33 + v34) = 0LL;
          *(_QWORD *)((char *)v33 + v34 + 8) = 0LL;
          *(_QWORD *)((char *)v33 + v34 + 16) = 0LL;
          *(_QWORD *)((char *)v33 + v34 + 24) = 0LL;
          *(_QWORD *)((char *)v33 + v34 + 32) = 0LL;
          *(_QWORD *)((char *)v33 + v34 + 40) = 0LL;
          *(_QWORD *)((char *)v33 + v34 + 56) = 0LL;
          *(_QWORD *)((char *)v33 + v34 + 48) = v25;
          ++*(_DWORD *)(v12 + 36);
          v35 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 16), 0xFFFFFFFFFFFFFFFFuLL);
          v29 = v35 <= 1;
          v36 = v35 - 1;
          if ( v29 )
          {
            if ( v36 )
              goto LABEL_64;
            v37 = *(_DWORD *)(v25 + 40);
            if ( v37 == 3 )
              goto LABEL_70;
            if ( v37 )
            {
              v38 = v37 - 1;
              if ( !v38 )
              {
                v39 = *(void **)(v25 + 56);
                if ( v39 )
                  goto LABEL_48;
                goto LABEL_70;
              }
LABEL_108:
              if ( v38 == 1 && !*(_DWORD *)(v25 + 96) && !*(_DWORD *)(v25 + 100) )
                NtDeleteWnfStateName(v25 + 96, v27);
              goto LABEL_70;
            }
LABEL_89:
            RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)(v25 + 1320));
            v56 = *(HANDLE **)(v25 + 56);
            if ( v56 )
              RmpPartitionRelease(v56);
            HampHostCleanup((struct _RM_HAM_ACTIVITY_HOST *)(v25 + 64));
            goto LABEL_70;
          }
        }
        else
        {
          v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 16), 0xFFFFFFFFFFFFFFFFuLL);
          v29 = v28 <= 1;
          v30 = v28 - 1;
          if ( v29 )
          {
            if ( v30 )
LABEL_64:
              __fastfail(0xEu);
            v46 = *(_DWORD *)(v25 + 40);
            if ( v46 == 3 )
              goto LABEL_70;
            if ( v46 )
            {
              v38 = v46 - 1;
              if ( !v38 )
              {
                v39 = *(void **)(v25 + 56);
                if ( v39 )
LABEL_48:
                  NtClose(v39);
LABEL_70:
                HampFreeHeap((void *)v25);
                goto LABEL_30;
              }
              goto LABEL_108;
            }
            goto LABEL_89;
          }
        }
LABEL_30:
        v31 = v67;
        if ( !v67 )
          goto LABEL_34;
        if ( (*v67 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          v31 = v67;
        v25 = *v31;
        if ( (v25 & 1) != 0 )
        {
LABEL_34:
          for ( j = v68 + 1; ; ++j )
          {
            if ( (unsigned __int64)j >= *(_QWORD *)(v22 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v22 + 4) >> 5) )
              goto LABEL_49;
            v25 = *j;
            if ( (*j & 1) == 0 )
              break;
          }
          v68 = j;
        }
        v67 = (__int64 *)v25;
        if ( !v25 )
        {
LABEL_49:
          v6 = v73;
          break;
        }
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v25 + 16)) <= 1 )
          __fastfail(0xEu);
      }
    }
LABEL_50:
    RtlReleaseSRWLockShared(v65 + 16);
    if ( *(_DWORD *)(v12 + 36) )
      RmpActivityHostPopulateMetrics(v12, v61, 0LL);
    v40 = *(unsigned int *)(v12 + 36);
    if ( !(_DWORD)v40 )
    {
      v70 = 0;
      goto LABEL_54;
    }
    v50 = *(struct _RM_ACTIVITY_HOST_METRICS **)v12;
    v51 = *(unsigned int *)(v12 + 36);
    v52 = v59;
    v53 = (_WORD *)(*(_QWORD *)v12 + 60LL);
    do
    {
      if ( v52 )
      {
        v19 = RmpMemoryMonitorIsLargeAppTerminationTarget(
                *(struct _RM_ACTIVITY_HOST **)(v53 - 6),
                (struct _RM_ACTIVITY_HOST_METRICS *)(v53 - 30)) == 0;
        v52 = v59;
        if ( !v19 )
          *v53 |= 0x8000u;
      }
      v53 += 32;
      --v51;
    }
    while ( v51 );
    v6 = v73;
    v54 = (int (__cdecl *)(const void *, const void *))RmpMemoryMonitorCompareActivityHostsForCommitSave;
    if ( !v63 )
      v54 = RmpMemoryMonitorCompareActivityHostsForEmpty;
    qsort(v50, v40, 0x40uLL, v54);
    RmpMemoryMonitorEmptyPolicyActOnHosts(
      (struct _RM_MEMORY_MONITOR_DATA *)a1,
      *(struct _RM_ACTIVITY_HOST_METRICS **)v12,
      *(_DWORD *)(v12 + 36),
      *(_QWORD *)(v71 + 56) - *(_QWORD *)(v72 + 56),
      v6,
      (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v69,
      &v70,
      v57);
    if ( v70 )
      break;
LABEL_54:
    v7 = v58 + 1;
    v58 = v7;
    if ( v7 > v62 )
    {
      v41 = 2;
      goto LABEL_56;
    }
    v11 = v59;
    v13 = v63;
    v10 = v64;
  }
  RmpReleaseGlobalLock();
  v55 = (DWORD *)(a1 + 9);
  if ( (unsigned int)RmpMemoryMonitorWaitForEvents(
                       (struct _RM_MEMORY_MONITOR_DATA *)a1,
                       13,
                       *((_DWORD *)a1 + 18),
                       (enum _RM_MEMORY_MONITOR_EVENT *)&v60) )
  {
    if ( (unsigned int)dword_1800E7278 > 4 && (byte_1800E7288 & 1) != 0 && (qword_1800E7290 & 1) == qword_1800E7290 )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        (__int64)&dword_1800E7278,
        byte_1800D9282);
    goto LABEL_87;
  }
  if ( v60 != 3 || !v57[0] )
    goto LABEL_87;
  if ( (unsigned int)dword_1800E7278 > 4 && (byte_1800E7288 & 1) != 0 )
  {
    if ( (qword_1800E7290 & 1) == qword_1800E7290 )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        (__int64)&dword_1800E7278,
        byte_1800D8EF6);
    v55 = (DWORD *)(a1 + 9);
  }
  if ( !(unsigned int)RmpMemoryMonitorWaitForEvents(
                        (struct _RM_MEMORY_MONITOR_DATA *)a1,
                        5,
                        *v55,
                        (enum _RM_MEMORY_MONITOR_EVENT *)&v60)
    && v60 == 2 )
  {
    v41 = 4;
  }
  else
  {
LABEL_87:
    v41 = 0;
  }
  RmpAcquireGlobalLock();
LABEL_56:
  v42 = (_QWORD *)v69[0];
  if ( (_QWORD *)v69[0] != v69 )
  {
    do
    {
      v47 = (_QWORD *)*v42;
      v48 = v42 - 179;
      if ( *(_QWORD **)(*v42 + 8LL) != v42 || (v49 = (_QWORD *)v42[1], (_QWORD *)*v49 != v42) )
        __fastfail(3u);
      *v49 = v47;
      v47[1] = v49;
      v48[178] = 0LL;
      RmpObjectRelease(v48);
      v42 = v47;
    }
    while ( v47 != v69 );
  }
  dword_1800E9388 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v43 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v44 = *v43;
    if ( (*v43 & 1) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v19 = v43[1]-- == 1;
    if ( v19 )
      *v43 = v44 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  return v41;
}
