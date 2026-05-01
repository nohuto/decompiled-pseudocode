/*
 * XREFs of ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x1800203D0
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001F430 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x18000F808 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 *     ?RmpMemoryMonitorLogCurrentMetrics@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001F2FC (-RmpMemoryMonitorLogCurrentMetrics@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180020F30 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180021B40 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180044FAC (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x180055D30 (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18006A9CC (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  void *v5; // rcx
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  __int64 PageCount64; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // r14
  __int128 v14; // xmm0
  __m128i v15; // xmm3
  __m128i v16; // xmm2
  int v17; // esi
  __int128 v18; // xmm1
  unsigned __int64 v19; // rbx
  unsigned __int8 v20; // r15
  unsigned int v21; // eax
  unsigned __int64 v22; // r11
  unsigned __int8 v23; // r9
  unsigned int v24; // r8d
  unsigned int v25; // edi
  int v26; // edx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rcx
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rsi
  int v37; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v41; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  __m128i v43; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v44; // [rsp+70h] [rbp-90h]
  __m128i v45; // [rsp+80h] [rbp-80h]
  __int128 v46; // [rsp+90h] [rbp-70h]
  __int128 v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+B8h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR v50; // [rsp+C8h] [rbp-38h] BYREF
  __m128i v51; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v52; // [rsp+F0h] [rbp-10h]
  __m128i v53; // [rsp+100h] [rbp+0h]
  __int128 v54; // [rsp+110h] [rbp+10h]
  __int128 v55; // [rsp+120h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+130h] [rbp+30h] BYREF
  __int128 v57; // [rsp+140h] [rbp+40h]
  __int128 v58; // [rsp+150h] [rbp+50h]
  __int128 v59; // [rsp+160h] [rbp+60h]
  __int128 v60; // [rsp+170h] [rbp+70h]
  _BYTE v61[4]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v62; // [rsp+184h] [rbp+84h]
  __int64 v63; // [rsp+198h] [rbp+98h]
  __int64 v64; // [rsp+1A0h] [rbp+A0h]
  __int64 v65; // [rsp+1B0h] [rbp+B0h]
  __int64 v66; // [rsp+1C0h] [rbp+C0h]
  __int64 v67; // [rsp+1C8h] [rbp+C8h]
  char v68[64]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v69; // [rsp+218h] [rbp+118h]
  __int64 v70; // [rsp+220h] [rbp+120h]
  __int64 v71; // [rsp+228h] [rbp+128h]
  __int64 v72; // [rsp+230h] [rbp+130h]
  __int64 v73; // [rsp+238h] [rbp+138h]
  __int64 v74; // [rsp+240h] [rbp+140h]
  __int64 v75; // [rsp+248h] [rbp+148h]
  __int64 v76; // [rsp+250h] [rbp+150h]
  __int64 v77; // [rsp+258h] [rbp+158h]
  _BYTE v78[4]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v79; // [rsp+274h] [rbp+174h]
  __int64 v80; // [rsp+288h] [rbp+188h]
  __int64 v81; // [rsp+290h] [rbp+190h]
  __int64 v82; // [rsp+2A0h] [rbp+1A0h]
  __int64 v83; // [rsp+2B0h] [rbp+1B0h]
  __int64 v84; // [rsp+2B8h] [rbp+1B8h]
  char v85[64]; // [rsp+2C8h] [rbp+1C8h] BYREF
  __int64 v86; // [rsp+308h] [rbp+208h]
  __int64 v87; // [rsp+310h] [rbp+210h]
  __int64 v88; // [rsp+318h] [rbp+218h]
  __int64 v89; // [rsp+320h] [rbp+220h]
  __int64 v90; // [rsp+328h] [rbp+228h]
  __int64 v91; // [rsp+330h] [rbp+230h]
  __int64 v92; // [rsp+338h] [rbp+238h]
  __int64 v93; // [rsp+340h] [rbp+240h]
  __int64 v94; // [rsp+348h] [rbp+248h]
  struct _EVENT_DATA_DESCRIPTOR v95; // [rsp+360h] [rbp+260h] BYREF
  __int128 v96; // [rsp+370h] [rbp+270h]
  __int128 v97; // [rsp+380h] [rbp+280h]
  __int128 v98; // [rsp+390h] [rbp+290h]
  __int128 v99; // [rsp+3A0h] [rbp+2A0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+3B0h] [rbp+2B0h] BYREF
  void *v101; // [rsp+3C0h] [rbp+2C0h]
  int v102; // [rsp+3C8h] [rbp+2C8h]
  int v103; // [rsp+3CCh] [rbp+2CCh]
  unsigned __int64 *v104; // [rsp+3D0h] [rbp+2D0h]
  __int64 v105; // [rsp+3D8h] [rbp+2D8h]
  int *v106; // [rsp+3E0h] [rbp+2E0h]
  __int64 v107; // [rsp+3E8h] [rbp+2E8h]
  unsigned __int64 *v108; // [rsp+3F0h] [rbp+2F0h]
  __int64 v109; // [rsp+3F8h] [rbp+2F8h]
  unsigned __int64 *v110; // [rsp+400h] [rbp+300h]
  __int64 v111; // [rsp+408h] [rbp+308h]
  __int64 *v112; // [rsp+410h] [rbp+310h]
  __int64 v113; // [rsp+418h] [rbp+318h]
  unsigned __int64 *v114; // [rsp+420h] [rbp+320h]
  __int64 v115; // [rsp+428h] [rbp+328h]

  v38 = a3;
  v5 = (void *)a1[5];
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  ResetEvent(v5);
  ResetEvent((HANDLE)a1[6]);
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 24);
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_OWORD *)(a2 + 48) = 0LL;
  *(_OWORD *)(a2 + 64) = 0LL;
  *(_OWORD *)(a2 + 80) = 0LL;
  *(_OWORD *)(a2 + 96) = 0LL;
  *(_OWORD *)(a2 + 112) = 0LL;
  memset_0(v61, 0, 0xF0uLL);
  v8 = *(_QWORD *)(v6 + 32);
  v62 = -1LL;
  NtManagePartition(v8, 0LL, 0LL, v61, 240);
  v9 = RmpPageSize * v77;
  v51.m128i_i64[1] = RmpPageSize * v64;
  v53.m128i_i64[0] = 0LL;
  *((_QWORD *)&v55 + 1) = 0LL;
  v10 = RmpPageSize * v65;
  *((_QWORD *)&v52 + 1) = RmpPageSize * v64 - RmpPageSize * v63;
  v51.m128i_i64[0] = RmpPageSize * v77;
  *(_QWORD *)&v52 = RmpPageSize * v63;
  v53.m128i_i64[1] = RmpPageSize * v65;
  PageCount64 = SwGetPageCount64(v68, 0LL, 5LL);
  *(_QWORD *)&v54 = RmpPageSize * (v67 + v66 + PageCount64);
  *(_QWORD *)&v55 = v69 + v70 + v71 + v72 + v73 + v74 + v75 + v76;
  v12 = v7 + 456;
  v39 = v7 + 456;
  *((_QWORD *)&v54 + 1) = v10 - v54;
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v7 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v7 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)&v51,
    v9,
    (struct _RM_RESOURCE_USAGE_LIMITS *)a2);
  v13 = v38;
  v14 = v52;
  v15 = v51;
  v16 = v53;
  v17 = 0;
  v18 = v55;
  v19 = v52;
  *(_WORD *)(v6 + 204) = 0;
  v20 = 0;
  v44 = v14;
  v46 = v54;
  v43 = v15;
  v45 = v16;
  *(_OWORD *)v13 = 0LL;
  *(_QWORD *)(v13 + 16) = 0LL;
  v21 = 4;
  v47 = v18;
  v95.Ptr = 0LL;
  v96 = 0uLL;
  *(_QWORD *)&v97 = 0LL;
  v98 = 0uLL;
  v99 = 0LL;
  v38 = _mm_srli_si128(v15, 8).m128i_u64[0];
  *(_QWORD *)&v95.Size = v38;
  v40 = _mm_srli_si128(v16, 8).m128i_u64[0];
  *((_QWORD *)&v97 + 1) = v40;
  do
  {
    if ( v19 >= *(_QWORD *)(a2 + 8LL * v21 + 16) )
    {
      if ( v20 <= v21 )
        v20 = v21;
      if ( *(_DWORD *)(v12 + 4LL * v21) )
        break;
    }
    --v21;
  }
  while ( v21 );
  v22 = *((_QWORD *)&v54 + 1);
  v23 = 0;
  v24 = 4;
  do
  {
    if ( *((_QWORD *)&v54 + 1) >= *(_QWORD *)(a2 + 8LL * v24 + 56) )
    {
      if ( v23 <= v24 )
        v23 = v24;
      if ( *(_DWORD *)(v12 + 4LL * v24) )
        break;
    }
    --v24;
  }
  while ( v24 );
  v25 = 3;
  if ( v21 || v24 )
  {
    if ( v21 >= v24 )
    {
      v26 = 1;
      v17 = *(_DWORD *)(v39 + 4LL * v21);
      *(_QWORD *)&v96 = *(_QWORD *)(a2 + 8LL * v21 + 16);
      *((_QWORD *)&v96 + 1) = v38 - v96;
    }
    else
    {
      v26 = 3;
      v17 = *(_DWORD *)(v39 + 4LL * v24 + 20);
      *((_QWORD *)&v98 + 1) = *(_QWORD *)(a2 + 8LL * v24 + 56);
      *(_QWORD *)&v98 = v40 - *((_QWORD *)&v98 + 1);
    }
    v56 = v95;
    v57 = v96;
    v58 = v97;
    v59 = v98;
    v60 = 0LL;
  }
  else
  {
    v26 = 0;
  }
  *(_BYTE *)(v13 + 1) = v20;
  *(_BYTE *)v13 = v23;
  if ( v20 )
  {
    v29 = *(_QWORD *)(a2 + 8LL * v20 + 16);
    if ( v19 < v29 )
      *(_QWORD *)(v13 + 8) = -1LL;
    else
      *(_QWORD *)(v13 + 8) = v19 - v29;
  }
  if ( v23 )
  {
    v28 = *(_QWORD *)(a2 + 8LL * v23 + 56);
    if ( v22 < v28 )
      *(_QWORD *)(v13 + 16) = -1LL;
    else
      *(_QWORD *)(v13 + 16) = v22 - v28;
  }
  if ( !v17 )
  {
    *((_DWORD *)a1 + 23) &= ~2u;
    RmpMemoryMonitorLogCurrentMetrics((struct _RM_SYSTEM_MEMORY_METRICS *)&v43);
    return v25;
  }
  if ( v17 != 4
    && (unsigned int)dword_1800E8278 > 4
    && (byte_1800E8288 & 9) != 0
    && (qword_1800E8290 & 9) == qword_1800E8290 )
  {
    v40 = *((_QWORD *)&v59 + 1);
    v48 = v57;
    v114 = &v40;
    v112 = &v48;
    v110 = &v41;
    v108 = &v42;
    v106 = &v37;
    v104 = &v38;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E8280;
    v37 = v26;
    v41 = v22;
    v42 = v19;
    LODWORD(v38) = v17;
    v115 = 8LL;
    v113 = 8LL;
    v111 = 8LL;
    v109 = 8LL;
    v107 = 4LL;
    v105 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800E8280;
    v101 = &unk_1800DA496;
    UserData.Reserved = 2;
    v102 = 140;
    v103 = 1;
    LODWORD(v39) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E8298, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
  ResetEvent((HANDLE)a1[4]);
  switch ( v17 )
  {
    case 2:
      v25 = RmpMemoryMonitorEmptyWorkingSets(a1, &v43, &v56, 0LL);
      break;
    case 3:
      v25 = RmpMemoryMonitorEmptyWorkingSets(a1, &v43, &v56, 1LL);
      if ( v25 == 2 )
      {
        *((_QWORD *)&v59 + 1) = *(_QWORD *)(a2 + 112);
        v25 = RmpMemoryMonitorEmptySystemStore(a1, &v43, &v56);
      }
      break;
    case 4:
      RmpMemoryMonitorCheckQueueDecommitRepurposedMemory((struct _RM_MEMORY_MONITOR_DATA *)a1);
      break;
    case 5:
      RmpMemoryMonitorCheckQueueDecommitRepurposedMemory((struct _RM_MEMORY_MONITOR_DATA *)a1);
      if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 24) + 508LL) & 2) == 0
        || (v25 = RmpMemoryMonitorEmptyWorkingSets(a1, &v43, &v56, 31LL), v25 == 2) )
      {
        v25 = RmpMemoryMonitorRevokeExtraActivities(a1, v57);
      }
      break;
    case 7:
      v25 = RmpMemoryMonitorRevokeAnyHost(a1, &v43, &v56, a2);
      if ( v25 == 2 )
        goto LABEL_33;
      break;
    default:
      v25 = 2;
      break;
  }
  *((_DWORD *)a1 + 23) &= ~2u;
LABEL_33:
  if ( dword_1800E8278 )
  {
    if ( v17 != 4 )
    {
      v30 = *a1;
      memset_0(v78, 0, 0xF0uLL);
      v31 = *(_QWORD *)(v30 + 32);
      v79 = -1LL;
      NtManagePartition(v31, 0LL, 0LL, v78, 240);
      v32 = RmpPageSize * v80;
      v33 = RmpPageSize * v82;
      v43.m128i_i64[0] = RmpPageSize * v94;
      v45.m128i_i64[0] = 0LL;
      v43.m128i_i64[1] = RmpPageSize * v81;
      *((_QWORD *)&v44 + 1) = RmpPageSize * v81 - RmpPageSize * v80;
      *((_QWORD *)&v47 + 1) = 0LL;
      *(_QWORD *)&v44 = RmpPageSize * v80;
      v45.m128i_i64[1] = RmpPageSize * v82;
      v34 = SwGetPageCount64(v85, 0LL, 5LL);
      v35 = RmpPageSize * (v84 + v83 + v34);
      v36 = v33 - v35;
      *(_QWORD *)&v46 = v35;
      *((_QWORD *)&v46 + 1) = v36;
      *(_QWORD *)&v47 = v87 + v88 + v89 + v90 + v91 + v92 + v93 + v86;
      if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 9) != 0 && (qword_1800E8290 & 9) == qword_1800E8290 )
      {
        v42 = v36;
        *(_QWORD *)&v99 = &v42;
        v41 = v32;
        *(_QWORD *)&v98 = &v41;
        LODWORD(v39) = v25;
        *(_QWORD *)&v97 = &v39;
        *(_DWORD *)&v50.Level = 516;
        v95.Ptr = (ULONGLONG)off_1800E8280;
        *((_QWORD *)&v99 + 1) = 8LL;
        *((_QWORD *)&v98 + 1) = 8LL;
        *((_QWORD *)&v97 + 1) = 4LL;
        *(_DWORD *)&v50.Id = 184549376;
        v50.Keyword = 9LL;
        v95.Size = *(unsigned __int16 *)off_1800E8280;
        *(_QWORD *)&v96 = &unk_1800DA1D8;
        v95.Reserved = 2;
        *((_QWORD *)&v96 + 1) = 0x10000004ALL;
        LODWORD(v38) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(qword_1800E8298, &v50, 0LL, 0LL, 5u, &v95);
      }
    }
  }
  return v25;
}
