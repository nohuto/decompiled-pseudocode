/*
 * XREFs of ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180020DE0
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x1800123D0 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008EC7C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 * Callees:
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180020FB0 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall RmpPolicyPrepareToCheckMetrics(
        struct _RM_PARTITION *a1,
        struct _RM_POLICY *a2,
        struct _RM_RESOURCE_USAGE_LIMITS *a3,
        struct _RM_SYSTEM_MEMORY_METRICS *a4)
{
  __int64 v8; // rcx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdi
  __int64 PageCount64; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v18; // [rsp+50h] [rbp-B0h]
  __int128 v19; // [rsp+60h] [rbp-A0h]
  __int128 v20; // [rsp+70h] [rbp-90h]
  __int128 v21; // [rsp+80h] [rbp-80h]
  _BYTE v22[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+94h] [rbp-6Ch]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  __int64 v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  _BYTE v29[64]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v30; // [rsp+128h] [rbp+28h]
  __int64 v31; // [rsp+130h] [rbp+30h]
  __int64 v32; // [rsp+138h] [rbp+38h]
  __int64 v33; // [rsp+140h] [rbp+40h]
  __int64 v34; // [rsp+148h] [rbp+48h]
  __int64 v35; // [rsp+150h] [rbp+50h]
  __int64 v36; // [rsp+158h] [rbp+58h]
  __int64 v37; // [rsp+160h] [rbp+60h]
  __int64 v38; // [rsp+168h] [rbp+68h]

  *(_OWORD *)a3 = 0LL;
  *((_OWORD *)a3 + 1) = 0LL;
  *((_OWORD *)a3 + 2) = 0LL;
  *((_OWORD *)a3 + 3) = 0LL;
  *((_OWORD *)a3 + 4) = 0LL;
  *((_OWORD *)a3 + 5) = 0LL;
  *((_OWORD *)a3 + 6) = 0LL;
  *((_OWORD *)a3 + 7) = 0LL;
  memset_0(v22, 0, 0xF0uLL);
  v8 = *((_QWORD *)a1 + 4);
  v23 = -1LL;
  NtManagePartition(v8, 0LL, 0LL, v22, 240);
  v9 = RmpPageSize * v38;
  v10 = RmpPageSize * v26;
  *((_QWORD *)&v17 + 1) = RmpPageSize * v25;
  *((_QWORD *)&v18 + 1) = RmpPageSize * v25 - RmpPageSize * v24;
  *(_QWORD *)&v19 = 0LL;
  *(_QWORD *)&v17 = RmpPageSize * v38;
  *(_QWORD *)&v18 = RmpPageSize * v24;
  *((_QWORD *)&v19 + 1) = RmpPageSize * v26;
  PageCount64 = SwGetPageCount64(v29, 0LL, 5LL);
  *(_QWORD *)&v20 = RmpPageSize * (PageCount64 + v27 + v28);
  *((_QWORD *)&v20 + 1) = v10 - v20;
  v21 = (unsigned __int64)(v30 + v37 + v36 + v35 + v34 + v33 + v32 + v31);
  RmpPolicyComputeUsageLimits(
    a2,
    (struct _RM_POLICY *)((char *)a2 + 56),
    (struct _RM_SYSTEM_MEMORY_METRICS *)&v17,
    v9,
    a3);
  if ( a4 )
  {
    v12 = v18;
    *(_OWORD *)a4 = v17;
    v13 = v19;
    *((_OWORD *)a4 + 1) = v12;
    v14 = v20;
    *((_OWORD *)a4 + 2) = v13;
    v15 = v21;
    *((_OWORD *)a4 + 3) = v14;
    *((_OWORD *)a4 + 4) = v15;
  }
  *((_WORD *)a1 + 102) = 0;
}
