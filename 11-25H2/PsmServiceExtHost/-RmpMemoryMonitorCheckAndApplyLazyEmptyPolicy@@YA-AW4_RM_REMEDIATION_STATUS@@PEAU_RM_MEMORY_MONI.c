/*
 * XREFs of ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800200D0
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001F4B0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180020FB0 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180021BC0 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy(__int64 *a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v5; // r14
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 PageCount64; // rax
  unsigned __int64 v10; // xmm1_8
  unsigned __int64 v11; // rax
  unsigned int v12; // ebx
  _DWORD v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v18; // [rsp+60h] [rbp-A0h]
  __int128 v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+80h] [rbp-80h]
  unsigned __int64 v21; // [rsp+88h] [rbp-78h]
  __int128 v22; // [rsp+90h] [rbp-70h]
  _OWORD v23[5]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v24[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v25; // [rsp+F4h] [rbp-Ch]
  __int64 v26; // [rsp+108h] [rbp+8h]
  __int64 v27; // [rsp+110h] [rbp+10h]
  __int64 v28; // [rsp+120h] [rbp+20h]
  __int64 v29; // [rsp+130h] [rbp+30h]
  __int64 v30; // [rsp+138h] [rbp+38h]
  char v31[64]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v32; // [rsp+188h] [rbp+88h]
  __int64 v33; // [rsp+190h] [rbp+90h]
  __int64 v34; // [rsp+198h] [rbp+98h]
  __int64 v35; // [rsp+1A0h] [rbp+A0h]
  __int64 v36; // [rsp+1A8h] [rbp+A8h]
  __int64 v37; // [rsp+1B0h] [rbp+B0h]
  __int64 v38; // [rsp+1B8h] [rbp+B8h]
  __int64 v39; // [rsp+1C0h] [rbp+C0h]
  __int64 v40; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v42; // [rsp+1F0h] [rbp+F0h]
  __int128 v43; // [rsp+200h] [rbp+100h]
  __m128i v44; // [rsp+210h] [rbp+110h]
  __int128 v45; // [rsp+220h] [rbp+120h]

  v2 = *a1;
  v5 = *(_QWORD *)(*a1 + 24);
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_OWORD *)(a2 + 48) = 0LL;
  *(_OWORD *)(a2 + 64) = 0LL;
  *(_OWORD *)(a2 + 80) = 0LL;
  *(_OWORD *)(a2 + 96) = 0LL;
  *(_OWORD *)(a2 + 112) = 0LL;
  memset_0(v24, 0, 0xF0uLL);
  v6 = *(_QWORD *)(v2 + 32);
  v25 = -1LL;
  NtManagePartition(v6, 0LL, 0LL, v24, 240);
  v7 = RmpPageSize * v40;
  v8 = RmpPageSize * v28;
  *(_QWORD *)&v43 = 0LL;
  *((_QWORD *)&v45 + 1) = 0LL;
  *(_QWORD *)&UserData.Size = RmpPageSize * v27;
  UserData.Ptr = RmpPageSize * v40;
  *((_QWORD *)&v42 + 1) = RmpPageSize * v27 - RmpPageSize * v26;
  *(_QWORD *)&v42 = RmpPageSize * v26;
  *((_QWORD *)&v43 + 1) = RmpPageSize * v28;
  PageCount64 = SwGetPageCount64(v31, 0LL, 5LL);
  v44.m128i_i64[0] = RmpPageSize * (v30 + v29 + PageCount64);
  *(_QWORD *)&v45 = v32 + v33 + v34 + v35 + v36 + v37 + v38 + v39;
  v44.m128i_i64[1] = v8 - v44.m128i_i64[0];
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v5 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v5 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)&UserData,
    v7,
    (struct _RM_RESOURCE_USAGE_LIMITS *)a2);
  v23[0] = UserData;
  v23[2] = v43;
  v23[1] = v42;
  v23[4] = v45;
  v23[3] = v44;
  v10 = _mm_srli_si128(v44, 8).m128i_u64[0];
  *(_WORD *)(v2 + 204) = 0;
  v11 = *(_QWORD *)(a2 + 104);
  if ( v10 <= v11 )
    return 3LL;
  v17[0] = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v22 = 0LL;
  v17[1] = 0LL;
  v20 = 0LL;
  v21 = v11;
  v12 = RmpMemoryMonitorEmptyWorkingSets(a1, v23, v17, 6LL);
  if ( (unsigned int)dword_1800E7278 > 4 && (byte_1800E7288 & 1) != 0 && (qword_1800E7290 & 1) == qword_1800E7290 )
  {
    v15 = v10;
    v44.m128i_i64[0] = (__int64)&v15;
    v14[0] = v12;
    *(_QWORD *)&v43 = v14;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E7280;
    v44.m128i_i64[1] = 8LL;
    *((_QWORD *)&v43 + 1) = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800E7280;
    *(_QWORD *)&v42 = &unk_1800D952E;
    UserData.Reserved = 2;
    *((_QWORD *)&v42 + 1) = 0x100000041LL;
    v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E7298, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return v12;
}
