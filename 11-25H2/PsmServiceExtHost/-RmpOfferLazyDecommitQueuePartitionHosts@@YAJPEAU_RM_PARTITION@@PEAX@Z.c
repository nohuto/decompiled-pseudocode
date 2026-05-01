/*
 * XREFs of ?RmpOfferLazyDecommitQueuePartitionHosts@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000FC30
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z3@Z @ 0x18000FD70 (-RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEA.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180010160 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180022950 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

__int64 __fastcall RmpOfferLazyDecommitQueuePartitionHosts(struct _RM_PARTITION *a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  _BYTE v12[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+28h] [rbp-50h]
  __int64 v14; // [rsp+60h] [rbp-18h]

  memset_0(v12, 0, 0x50uLL);
  v4 = 0;
  *((_WORD *)a1 + 102) = 0;
  RmpPolicyGenerateHostListForPopulate(a1, (struct _RM_PARTITION *)((char *)a1 + 160), 0LL, 0LL);
  if ( *((_DWORD *)a1 + 49) )
    RmpActivityHostPopulateMetrics((char *)a1 + 160, 64LL, 0LL);
  RmpSystemMemoryMetricsQuery(a1, (struct _RM_SYSTEM_MEMORY_METRICS *)v12);
  v5 = v13 * (unsigned __int64)*((unsigned int *)a2 + 12) / 0x64 / RmpPageSize;
  if ( *((_DWORD *)a1 + 49) )
  {
    do
    {
      v6 = *((_QWORD *)a1 + 20) + ((unsigned __int64)v4 << 6);
      if ( *(_QWORD *)(v6 + 40) >= (unsigned __int64)*((unsigned int *)a2 + 11) )
      {
        v8 = *(_QWORD *)(v6 + 48);
        if ( v14 - *(_QWORD *)(v8 + 1248) >= v5 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 16)) <= 1 )
            __fastfail(0xEu);
          v9 = a2 + 1;
          v10 = (_QWORD *)(v8 + 1296);
          v11 = a2[1];
          if ( *(_QWORD **)(v11 + 8) != a2 + 1 )
            __fastfail(3u);
          *v10 = v11;
          v10[1] = v9;
          *(_QWORD *)(v11 + 8) = v10;
          *v9 = v10;
        }
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)a1 + 49) );
  }
  return 0LL;
}
