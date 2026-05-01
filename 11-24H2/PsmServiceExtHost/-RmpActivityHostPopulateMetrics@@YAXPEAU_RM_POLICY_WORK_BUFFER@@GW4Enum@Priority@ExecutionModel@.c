/*
 * XREFs of ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x1800228D0
 * Callers:
 *     ?RmpOfferLazyDecommitQueuePartitionHosts@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000FBB0 (-RmpOfferLazyDecommitQueuePartitionHosts@@YAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180021770 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180021B40 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x18000EA60 (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 *     ?RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z @ 0x18000EE94 (-RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z.c)
 *     ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180022CD0 (-RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180023360 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 */

char __fastcall RmpActivityHostPopulateMetrics(__int64 a1, __int16 a2, int a3)
{
  _UNKNOWN **v3; // rax
  unsigned int v4; // edi
  int v6; // ecx
  unsigned int v7; // esi
  bool v8; // cl
  struct _RM_ACTIVITY_HOST_METRICS *v9; // r15
  unsigned int v10; // r12d
  char *v11; // rbx
  char *v12; // r13
  struct _RM_ACTIVITY_HOST *v13; // rbp
  __int16 v14; // dx
  __int64 v15; // rbp
  __int16 v16; // si
  char *v17; // rbx
  __int16 v18; // ax
  DWORD v19; // ebp
  _QWORD *Value; // rsi
  char *v21; // rdx
  unsigned __int8 v22; // r8
  char *v23; // rdx
  char v24; // al
  unsigned __int8 v25; // cl
  __int64 v26; // rcx
  DWORD v27; // ecx
  __int64 *v28; // rax
  __int64 v29; // rdx
  unsigned __int8 v31; // al
  char v33; // [rsp+20h] [rbp-68h]
  _BYTE v34[6]; // [rsp+22h] [rbp-66h]
  unsigned int v35; // [rsp+28h] [rbp-60h] BYREF
  struct _RM_ACTIVITY_HOST *v36; // [rsp+30h] [rbp-58h]
  __int64 v37; // [rsp+38h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  bool v39; // [rsp+90h] [rbp+8h]
  bool v42; // [rsp+A8h] [rbp+20h]

  v3 = &retaddr;
  v4 = 0;
  v6 = *(_DWORD *)(a1 + 36);
  v35 = 0;
  if ( v6 )
  {
    v7 = 0;
    v8 = (a2 & 2) != 0;
    v9 = *(struct _RM_ACTIVITY_HOST_METRICS **)a1;
    v10 = 0;
    v39 = v8;
    *(_WORD *)&v34[4] = 0;
    v42 = v8;
    v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 48LL);
    *(_DWORD *)v34 = a2 & 1;
    do
    {
      v11 = (char *)v9 + 64 * (unsigned __int64)v10;
      LOWORD(v12) = *((_WORD *)v11 + 31);
      v13 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)v11 + 6);
      v36 = v13;
      v33 = (char)v12;
      if ( ((unsigned __int8)v12 & 2) == 0
        && v8
        && (int)RmpActivityHostQueryCommit(
                  v13,
                  (unsigned __int64 *)v11 + 1,
                  0LL,
                  (unsigned __int64 *)v9 + 8 * (unsigned __int64)v10) >= 0 )
      {
        *((_WORD *)v11 + 31) |= 2u;
      }
      if ( ((unsigned __int8)v12 & 1) == 0 && v39 )
      {
        v12 = (char *)v13 + 64;
        v19 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          Value = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v19) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
          *Value |= 2uLL;
          ++Value[2];
          v7 = *(_DWORD *)&v34[2];
        }
        RtlAcquireSRWLockShared(v12);
        v21 = (char *)*((_QWORD *)v12 + 76);
        v22 = 80;
        if ( v21 != v12 + 608 )
        {
          v23 = v21 - 96;
          if ( v23 )
          {
            do
            {
              v24 = v23[562];
              v25 = v22;
              if ( (v24 == 3 || v24 == 2 && v23[563]) && (v23[552] & 8) == 0 )
              {
                if ( *(_QWORD *)v11 < *((_QWORD *)v12 + 109) )
                {
                  v31 = v22;
                  if ( v22 >= (unsigned __int8)v23[427] )
                    v31 = v23[427];
                  v22 = v31;
                }
                else
                {
                  v22 = v23[428];
                  if ( v25 < v22 )
                    v22 = v25;
                }
              }
              v26 = *((_QWORD *)v23 + 12);
              if ( v26 == *((_QWORD *)v23 + 10) + 608LL )
                break;
              v23 = (char *)(v26 - 96);
            }
            while ( v26 != 96 );
          }
        }
        v27 = HampLockTrackerId;
        *((_DWORD *)v11 + 14) = v22;
        if ( v27 != -1 )
        {
          v28 = (__int64 *)TlsGetValue(v27);
          v29 = *v28;
          if ( (*v28 & 2) == 0 )
            NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
          if ( v28[2]-- == 1 )
            *v28 = v29 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        RtlReleaseSRWLockShared(v12);
        *((_WORD *)v11 + 31) |= 1u;
        v13 = v36;
        LOBYTE(v12) = v33;
      }
      if ( !*(_WORD *)v34 || (LOBYTE(v3) = a3, *((_DWORD *)v11 + 14) > a3) )
      {
        LOBYTE(v3) = (a2 & 0x40) != 0;
        if ( ((((unsigned __int8)v12 & 0x40) == 0) & (unsigned __int8)v3) != 0 )
        {
          LODWORD(v3) = RmpActivityHostQueryOfferedMemory(v13, (unsigned __int64 *)v11 + 5);
          if ( (int)v3 >= 0 )
            *((_WORD *)v11 + 31) |= 0x40u;
        }
        if ( v10 != v7 )
        {
          v3 = (_UNKNOWN **)((unsigned __int64)v7 << 6);
          *(_OWORD *)((char *)v9 + (_QWORD)v3) = *(_OWORD *)v11;
          *(_OWORD *)((char *)v9 + (_QWORD)v3 + 16) = *((_OWORD *)v11 + 1);
          *(_OWORD *)((char *)v9 + (_QWORD)v3 + 32) = *((_OWORD *)v11 + 2);
          *(_OWORD *)((char *)v9 + (_QWORD)v3 + 48) = *((_OWORD *)v11 + 3);
        }
        *(_DWORD *)&v34[2] = ++v7;
      }
      v8 = v42;
      ++v10;
    }
    while ( v10 < *(_DWORD *)(a1 + 36) );
    v14 = a2;
    v15 = v37;
    *(_DWORD *)(a1 + 36) = v7;
    if ( (a2 & 0x2C) != 0 )
    {
      LOBYTE(v3) = RmpSystemQueryMemUtilMetricsForHosts(v9, v7, a2 & 0x2C);
      v14 = a2;
    }
    if ( *(_DWORD *)(a1 + 36) )
    {
      v16 = v14 & 0x10;
      do
      {
        v17 = (char *)v9 + 64 * (unsigned __int64)v4;
        if ( v16 )
        {
          v18 = *((_WORD *)v17 + 31);
          if ( (v18 & 0x10) == 0
            && (v18 & 8) != 0
            && (int)RmpSystemIsActivityHostTooLargeForSwap(
                      (struct _RM_ACTIVITY_HOST_METRICS *)((char *)v9 + 64 * (unsigned __int64)v4),
                      *(unsigned int *)(v15 + 528),
                      &v35) >= 0 )
          {
            *((_WORD *)v17 + 31) |= 0x10u;
            if ( v35 )
              *((_WORD *)v17 + 30) |= 1u;
          }
        }
        ++v4;
      }
      while ( v4 < *(_DWORD *)(a1 + 36) );
      LOBYTE(v3) = a2;
      *(_WORD *)(a1 + 44) |= a2;
    }
    else
    {
      *(_WORD *)(a1 + 44) |= v14;
    }
  }
  else
  {
    *(_WORD *)(a1 + 44) |= a2;
  }
  return (char)v3;
}
