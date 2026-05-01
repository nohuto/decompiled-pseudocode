/*
 * XREFs of ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180010160
 * Callers:
 *     ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180003C40 (-RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x18000F888 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 *     ?RmpOfferLazyDecommitQueuePartitionHosts@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000FC30 (-RmpOfferLazyDecommitQueuePartitionHosts@@YAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180010760 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180010B10 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18006C720 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008EC7C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 * Callees:
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall RmpSystemMemoryMetricsQuery(struct _RM_PARTITION *a1, struct _RM_SYSTEM_MEMORY_METRICS *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 PageCount64; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  _BYTE v13[4]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v14; // [rsp+34h] [rbp-104h]
  __int64 v15; // [rsp+48h] [rbp-F0h]
  __int64 v16; // [rsp+50h] [rbp-E8h]
  __int64 v17; // [rsp+60h] [rbp-D8h]
  __int64 v18; // [rsp+70h] [rbp-C8h]
  __int64 v19; // [rsp+78h] [rbp-C0h]
  char v20[64]; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+C8h] [rbp-70h]
  __int64 v22; // [rsp+D0h] [rbp-68h]
  __int64 v23; // [rsp+D8h] [rbp-60h]
  __int64 v24; // [rsp+E0h] [rbp-58h]
  __int64 v25; // [rsp+E8h] [rbp-50h]
  __int64 v26; // [rsp+F0h] [rbp-48h]
  __int64 v27; // [rsp+F8h] [rbp-40h]
  __int64 v28; // [rsp+100h] [rbp-38h]
  __int64 v29; // [rsp+108h] [rbp-30h]

  memset_0(v13, 0, 0xF0uLL);
  v4 = *((_QWORD *)a1 + 4);
  v14 = -1LL;
  NtManagePartition(v4, 0LL, 0LL, v13, 240);
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_QWORD *)a2 + 7) = 0LL;
  *((_QWORD *)a2 + 8) = 0LL;
  *((_QWORD *)a2 + 9) = 0LL;
  v5 = RmpPageSize;
  v6 = RmpPageSize * v16;
  *(_QWORD *)a2 = RmpPageSize * v29;
  v7 = v5 * v15;
  *((_QWORD *)a2 + 1) = v6;
  v8 = v6 - v7;
  *((_QWORD *)a2 + 2) = v7;
  v9 = v5 * v17;
  *((_QWORD *)a2 + 3) = v8;
  *((_QWORD *)a2 + 5) = v9;
  PageCount64 = SwGetPageCount64(v20, 0LL, 5LL);
  v11 = RmpPageSize * (PageCount64 + v18 + v19);
  v12 = *((_QWORD *)a2 + 5) - v11;
  *((_QWORD *)a2 + 8) += v21 + v22 + v23 + v24 + v25 + v26 + v27 + v28;
  *((_QWORD *)a2 + 7) = v12;
  *((_QWORD *)a2 + 6) = v11;
}
