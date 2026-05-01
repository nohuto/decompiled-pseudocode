/*
 * XREFs of ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180020FB0
 * Callers:
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x18000F888 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180010B10 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001F090 (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001F4B0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800200D0 (-RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONI.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180020450 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180020DE0 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x180057660 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall RmpPolicyComputeUsageLimits(
        struct _RM_USAGE_LIMIT_SETTINGS *a1,
        struct _RM_REMEDIATION_ACTIONS *a2,
        struct _RM_SYSTEM_MEMORY_METRICS *a3,
        unsigned __int64 a4,
        struct _RM_RESOURCE_USAGE_LIMITS *a5)
{
  unsigned int *v8; // r11
  unsigned __int64 v9; // r10
  __m128i v10; // xmm2
  unsigned __int128 v11; // rax
  unsigned __int64 v12; // krC0_8
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int128 v17; // rax
  unsigned __int64 v18; // kr00_8
  unsigned __int64 v19; // rcx
  unsigned __int128 v20; // rax
  unsigned __int64 v21; // kr10_8
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // kr30_8
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned __int128 v28; // rax
  unsigned __int64 v29; // kr40_8
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r9
  unsigned __int128 v32; // rax
  unsigned __int64 v33; // kr50_8
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // kr60_8
  unsigned __int64 v36; // r9
  unsigned __int128 v37; // rax
  unsigned __int64 v38; // kr70_8
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // kr80_8
  unsigned __int64 v43; // kr90_8
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // krA0_8
  unsigned __int64 v46; // krB0_8
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  unsigned __int64 v53; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v54; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v56; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  __int128 *v59; // [rsp+68h] [rbp-98h]
  __int16 v60; // [rsp+70h] [rbp-90h] BYREF
  char *v61; // [rsp+78h] [rbp-88h]
  __int16 v62; // [rsp+80h] [rbp-80h] BYREF
  __int64 v63; // [rsp+88h] [rbp-78h]
  __int64 v64; // [rsp+90h] [rbp-70h]
  __int64 v65; // [rsp+98h] [rbp-68h]
  __int128 v66; // [rsp+A0h] [rbp-60h]
  __int128 v67; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v68; // [rsp+C0h] [rbp-40h]
  __int128 v69; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v70; // [rsp+E0h] [rbp-20h]
  __int128 v71; // [rsp+F0h] [rbp-10h]
  __m128i v72; // [rsp+100h] [rbp+0h]
  __int128 v73; // [rsp+110h] [rbp+10h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+120h] [rbp+20h] BYREF
  void *v75; // [rsp+130h] [rbp+30h]
  int v76; // [rsp+138h] [rbp+38h]
  int v77; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v78; // [rsp+140h] [rbp+40h]
  __int64 v79; // [rsp+148h] [rbp+48h]
  __int64 *v80; // [rsp+150h] [rbp+50h]
  __int64 v81; // [rsp+158h] [rbp+58h]
  __int16 *v82; // [rsp+160h] [rbp+60h]
  __int64 v83; // [rsp+168h] [rbp+68h]
  __int128 *v84; // [rsp+170h] [rbp+70h]
  __int64 v85; // [rsp+178h] [rbp+78h]
  __int16 *v86; // [rsp+180h] [rbp+80h]
  __int64 v87; // [rsp+188h] [rbp+88h]
  char *v88; // [rsp+190h] [rbp+90h]
  __int64 v89; // [rsp+198h] [rbp+98h]
  __int64 *v90; // [rsp+1A0h] [rbp+A0h]
  __int64 v91; // [rsp+1A8h] [rbp+A8h]
  __int64 *v92; // [rsp+1B0h] [rbp+B0h]
  __int64 v93; // [rsp+1B8h] [rbp+B8h]

  v53 = 0LL;
  v8 = (unsigned int *)a1;
  if ( *(_OWORD *)a5 != __PAIR128__(*((_QWORD *)a3 + 5), a4) )
  {
    *(_QWORD *)&v67 = 0LL;
    v9 = -1LL;
    *((_QWORD *)&v69 + 1) = 0LL;
    *((_QWORD *)&v70 + 1) = 0LL;
    v10 = 0LL;
    *(_QWORD *)&v73 = 0LL;
    v12 = *((unsigned int *)a1 + 5);
    v11 = a4 * (unsigned __int128)*((unsigned int *)a1 + 5);
    v72 = 0LL;
    v13 = *((_QWORD *)a3 + 5);
    v14 = -1LL;
    v63 = *((_QWORD *)&v11 + 1);
    if ( is_mul_ok(a4, v12) )
      v14 = v11;
    *(_QWORD *)&v66 = a4;
    *((_QWORD *)&v66 + 1) = v13;
    v15 = v14 / 0x64;
    if ( v15 >= a4 - *(_QWORD *)a1 )
      v15 = a4 - *(_QWORD *)a1;
    v16 = -1LL;
    v18 = *((unsigned int *)a1 + 11);
    v17 = a4 * (unsigned __int128)*((unsigned int *)a1 + 11);
    v19 = -1LL;
    *(_QWORD *)&v69 = v15;
    v64 = *((_QWORD *)&v17 + 1);
    *((_QWORD *)&v68 + 1) = v15;
    if ( is_mul_ok(a4, v18) )
      v19 = v17;
    v21 = v8[3];
    v20 = a4 * (unsigned __int128)v8[3];
    *((_QWORD *)&v73 + 1) = v19 / 0x64;
    v65 = *((_QWORD *)&v20 + 1);
    v22 = -1LL;
    if ( is_mul_ok(a4, v21) )
      v16 = v20;
    v23 = v8[4];
    v24 = v16 / 0x64;
    v59 = (__int128 *)((v13 * (unsigned __int128)v8[4]) >> 64);
    if ( is_mul_ok(v13, v23) )
      v22 = v13 * v23;
    v25 = v22 / 0x64;
    if ( v24 >= v25 )
      v24 = v25;
    if ( v15 < v24 )
      v24 = v15;
    v26 = *((_QWORD *)a3 + 5);
    v27 = -1LL;
    v29 = v8[2];
    v28 = a4 * (unsigned __int128)v8[2];
    *(_QWORD *)&v68 = v24;
    v61 = (char *)*((_QWORD *)&v28 + 1);
    if ( is_mul_ok(a4, v29) )
      v27 = v28;
    v30 = v27 / 0x64;
    if ( v24 < v30 )
      v30 = v24;
    v31 = -1LL;
    v33 = v8[6];
    v32 = v26 * (unsigned __int128)v8[6];
    *((_QWORD *)&v67 + 1) = v30;
    v34 = -1LL;
    *(_QWORD *)&EventDescriptor.Id = *((_QWORD *)&v32 + 1);
    if ( is_mul_ok(v26, v33) )
      v31 = v32;
    v35 = v8[7];
    v36 = v31 / 0x64;
    v54 = (v26 * (unsigned __int128)v8[7]) >> 64;
    *((_QWORD *)&v70 + 1) = v36;
    if ( is_mul_ok(v26, v35) )
      v34 = v26 * v35;
    *(_QWORD *)&v70 = v36;
    v38 = v8[8];
    v37 = v26 * (unsigned __int128)v8[8];
    *(_QWORD *)&v71 = v34 / 0x64;
    v39 = -1LL;
    v55 = *((_QWORD *)&v37 + 1);
    if ( is_mul_ok(v26, v38) )
      v39 = v37;
    *((_QWORD *)&v71 + 1) = v39 / 0x64;
    if ( *((_DWORD *)a2 + 10) )
    {
      RtlULongLongMult(a4, v8[9], &v53);
      v40 = v53 / 0x64;
      v72.m128i_i64[0] = v53 / 0x64;
      v10 = v72;
    }
    else
    {
      v40 = 0LL;
    }
    if ( *((_DWORD *)a2 + 11) )
    {
      v41 = v9;
      v42 = *((_QWORD *)a3 + 5);
      v43 = v8[10];
      v56 = (v42 * (unsigned __int128)v8[10]) >> 64;
      if ( is_mul_ok(v42, v43) )
        v41 = v42 * v43;
      v44 = v41 / 0x64;
      v72.m128i_i64[1] = v44;
      v10 = v72;
    }
    else
    {
      v44 = _mm_srli_si128(v10, 8).m128i_u64[0];
    }
    if ( v8[12] )
    {
      v45 = *((_QWORD *)a3 + 5);
      v46 = v8[12];
      v57 = (v45 * (unsigned __int128)v8[12]) >> 64;
      if ( is_mul_ok(v45, v46) )
        v9 = v45 * v46;
      *(_QWORD *)&v73 = v9 / 0x64;
    }
    if ( (unsigned int)dword_1800E7278 > 4 && (byte_1800E7288 & 1) != 0 && (qword_1800E7290 & 1) == qword_1800E7290 )
    {
      v57 = v44;
      v61 = (char *)&v69 + 8;
      v56 = v40;
      v59 = &v67;
      v55 = *((_QWORD *)a3 + 5);
      v62 = 5;
      v92 = &v57;
      v90 = &v56;
      v86 = &v62;
      v88 = (char *)&v69 + 8;
      v82 = &v60;
      v84 = &v67;
      v80 = &v55;
      v78 = &v54;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800E7280;
      v60 = 5;
      v54 = a4;
      v93 = 8LL;
      v91 = 8LL;
      v87 = 2LL;
      v89 = 40LL;
      v83 = 2LL;
      v85 = 40LL;
      v81 = 8LL;
      v79 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800E7280;
      v75 = &unk_1800D86D5;
      UserData.Reserved = 2;
      v76 = 164;
      v77 = 1;
      LODWORD(v53) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800E7298, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
      v10 = v72;
    }
    v47 = v67;
    *(_OWORD *)a5 = v66;
    v48 = v68;
    *((_OWORD *)a5 + 1) = v47;
    v49 = v69;
    *((_OWORD *)a5 + 2) = v48;
    v50 = v70;
    *((_OWORD *)a5 + 3) = v49;
    v51 = v71;
    *((_OWORD *)a5 + 4) = v50;
    v52 = v73;
    *((_OWORD *)a5 + 5) = v51;
    *((__m128i *)a5 + 6) = v10;
    *((_OWORD *)a5 + 7) = v52;
  }
}
