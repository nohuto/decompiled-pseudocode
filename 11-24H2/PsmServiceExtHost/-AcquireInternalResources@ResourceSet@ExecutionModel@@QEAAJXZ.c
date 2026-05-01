/*
 * XREFs of ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180010A90
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY_HOST@@PEAXPEAUIResourceSetCallback@2@_KPEAPEAVResourceSet@2@@Z @ 0x18000E1F4 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY.c)
 * Callees:
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18000F448 (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x1800100E0 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180010248 (-RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x1800103E8 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x180011E3C (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180012E00 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180012E28 (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??0?$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V?$allocator@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@@utl@@@utl@@QEAA@XZ @ 0x180012E4C (--0-$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V-$allocator@UExte.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180020F30 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180023830 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18002B864 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18002BC04 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C71C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18005EBFC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18007236C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180073888 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180073894 (--_U@YAPEAX_K@Z.c)
 *     ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18008DEE4 (-RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18008DF38 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x18008E00C (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::AcquireInternalResources(ExecutionModel::ResourceSet *this)
{
  __int64 v2; // r14
  char v3; // r12
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rdi
  char v7; // r15
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  unsigned __int64 v10; // r8
  const struct _TraceLoggingMetadata_t *v11; // rdx
  unsigned int v12; // edi
  unsigned int v13; // eax
  __int64 v14; // rcx
  char *v15; // r14
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r11
  bool v19; // zf
  char v20; // r13
  __int64 v21; // rbx
  ExecutionModel::_ResourceInfo *v22; // rax
  ExecutionModel::_ResourceInfo *v23; // r14
  char v24; // al
  __int64 v25; // xmm0_8
  int v26; // eax
  int v27; // ebx
  int v28; // edx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rbx
  unsigned int v31; // r13d
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 v34; // r14
  int v35; // r13d
  _QWORD *v36; // rbx
  _QWORD *v37; // rcx
  _QWORD *i; // rax
  __int64 v39; // r10
  _QWORD *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r9
  unsigned int v43; // r14d
  char v44; // r13
  _QWORD *v45; // r15
  _QWORD *m; // rbx
  _QWORD *v47; // rax
  _QWORD *v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  _QWORD *v52; // rax
  void *v53; // r14
  _QWORD *v54; // rdx
  char *v55; // rcx
  __int64 v56; // rax
  int v58; // eax
  unsigned __int64 v59; // r8
  struct _RM_PARTITION *v60; // r9
  _BYTE *v61; // r15
  __int64 v62; // r8
  __int64 v63; // r9
  int v64; // eax
  unsigned __int64 v65; // r9
  unsigned __int64 v66; // r9
  int v67; // eax
  int j; // r9d
  unsigned __int64 v69; // r11
  __int64 v70; // rdx
  int k; // r8d
  unsigned __int64 v72; // r10
  __int64 v73; // rax
  int UnbiasedInterruptTimeMs64; // eax
  unsigned int v75; // r8d
  char v76; // [rsp+58h] [rbp-B0h]
  char v77; // [rsp+59h] [rbp-AFh] BYREF
  _BYTE v78[2]; // [rsp+5Ah] [rbp-AEh] BYREF
  unsigned int v79; // [rsp+5Ch] [rbp-ACh]
  char v80; // [rsp+60h] [rbp-A8h] BYREF
  char v81; // [rsp+61h] [rbp-A7h] BYREF
  char v82; // [rsp+62h] [rbp-A6h] BYREF
  unsigned int v83; // [rsp+64h] [rbp-A4h]
  __int64 v84; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v85; // [rsp+70h] [rbp-98h]
  int v86; // [rsp+78h] [rbp-90h] BYREF
  int v87; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v88; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v89; // [rsp+88h] [rbp-80h] BYREF
  void *Block[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v91; // [rsp+A0h] [rbp-68h]
  ExecutionModel::ResourceSet *v92; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v93; // [rsp+B0h] [rbp-58h]
  __int128 v94; // [rsp+C0h] [rbp-48h]
  __int64 v95; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v96; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v97; // [rsp+E0h] [rbp-28h] BYREF
  unsigned __int64 v98; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v99; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v100; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v101; // [rsp+100h] [rbp-8h]
  __int64 v102; // [rsp+108h] [rbp+0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+110h] [rbp+8h] BYREF
  EVENT_DESCRIPTOR v104; // [rsp+120h] [rbp+18h] BYREF
  unsigned __int64 v105[2]; // [rsp+138h] [rbp+30h] BYREF
  __int128 v106; // [rsp+148h] [rbp+40h]
  __int128 v107; // [rsp+158h] [rbp+50h]
  __int128 v108; // [rsp+168h] [rbp+60h]
  __int128 v109; // [rsp+178h] [rbp+70h]
  __int128 v110; // [rsp+188h] [rbp+80h] BYREF
  __int128 v111; // [rsp+198h] [rbp+90h]
  __int128 v112; // [rsp+1A8h] [rbp+A0h]
  __int128 v113; // [rsp+1B8h] [rbp+B0h]
  __int128 v114; // [rsp+1C8h] [rbp+C0h]
  struct _EVENT_DATA_DESCRIPTOR v115; // [rsp+1D8h] [rbp+D0h] BYREF
  void *v116; // [rsp+1E8h] [rbp+E0h]
  int v117; // [rsp+1F0h] [rbp+E8h]
  int v118; // [rsp+1F4h] [rbp+ECh]
  int *v119; // [rsp+1F8h] [rbp+F0h]
  __int64 v120; // [rsp+200h] [rbp+F8h]
  char *v121; // [rsp+208h] [rbp+100h]
  __int64 v122; // [rsp+210h] [rbp+108h]
  char *v123; // [rsp+218h] [rbp+110h]
  __int64 v124; // [rsp+220h] [rbp+118h]
  char *v125; // [rsp+228h] [rbp+120h]
  __int64 v126; // [rsp+230h] [rbp+128h]
  int *v127; // [rsp+238h] [rbp+130h]
  __int64 v128; // [rsp+240h] [rbp+138h]
  int *v129; // [rsp+248h] [rbp+140h]
  __int64 v130; // [rsp+250h] [rbp+148h]
  char *v131; // [rsp+258h] [rbp+150h]
  __int64 v132; // [rsp+260h] [rbp+158h]
  _BYTE *v133; // [rsp+268h] [rbp+160h]
  __int64 v134; // [rsp+270h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+278h] [rbp+170h] BYREF
  void *v136; // [rsp+288h] [rbp+180h]
  int v137; // [rsp+290h] [rbp+188h]
  int v138; // [rsp+294h] [rbp+18Ch]
  __int64 *v139; // [rsp+298h] [rbp+190h]
  __int64 v140; // [rsp+2A0h] [rbp+198h]
  __int64 *v141; // [rsp+2A8h] [rbp+1A0h]
  __int64 v142; // [rsp+2B0h] [rbp+1A8h]
  unsigned __int64 *v143; // [rsp+2B8h] [rbp+1B0h]
  __int64 v144; // [rsp+2C0h] [rbp+1B8h]
  __int64 *v145; // [rsp+2C8h] [rbp+1C0h]
  __int64 v146; // [rsp+2D0h] [rbp+1C8h]
  __int64 *v147; // [rsp+2D8h] [rbp+1D0h]
  __int64 v148; // [rsp+2E0h] [rbp+1D8h]
  __int64 *v149; // [rsp+2E8h] [rbp+1E0h]
  __int64 v150; // [rsp+2F0h] [rbp+1E8h]

  utl::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>(Block);
  v2 = *((_QWORD *)this + 165);
  v3 = 0;
  v4 = *((_QWORD *)this + 8);
  v76 = 0;
  v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 128LL);
  v6 = *(_QWORD *)(v2 + 56);
  v7 = 0;
  v102 = v4;
  v93 = 0LL;
  v94 = 0LL;
  memset_0(&v115, 0, 0x80uLL);
  memset_0(v105, 0, 0x50uLL);
  RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v6, (struct _RM_SYSTEM_MEMORY_METRICS *)v105);
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v5 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v5 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)v105,
    v105[0],
    (struct _RM_RESOURCE_USAGE_LIMITS *)&v115);
  v8 = v106;
  v110 = *(_OWORD *)v105;
  v9 = v107;
  *(_WORD *)(v6 + 204) = 0;
  v112 = v9;
  v111 = v8;
  v114 = v109;
  v113 = v108;
  v89 = 0LL;
  if ( !RmpResourceSetIsCommitSaveEligible((ExecutionModel::ResourceSet *)((char *)this + 1336)) )
  {
    RmpActivityHostQueryCommitDebt((struct _RM_ACTIVITY_HOST *)v2, &v89);
    v10 = v89;
  }
  v11 = &TraceLoggingMetadata;
  v12 = 1;
  if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 9) != 0 && (qword_1800E8290 & 9) == qword_1800E8290 )
  {
    v95 = *(_QWORD *)(v4 + 128);
    v96 = *((_QWORD *)this + 184);
    v97 = *((_QWORD *)&v106 + 1);
    v99 = *((_QWORD *)this + 181);
    v100 = *((_QWORD *)this + 215);
    v149 = &v95;
    v147 = &v96;
    v145 = &v97;
    v143 = &v98;
    v141 = &v99;
    v139 = &v100;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E8280;
    v98 = v10;
    v150 = 8LL;
    v148 = 8LL;
    v146 = 8LL;
    v144 = 8LL;
    v142 = 8LL;
    v140 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800E8280;
    v136 = &unk_1800D9881;
    UserData.Reserved = 2;
    v137 = 118;
    v138 = 1;
    v83 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E8298, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
  v13 = RmpResourceCheckDestroyPartitionForAcquire(*((struct _RM_RESOURCE_SET **)this + 164), (__int64)v11, v10);
  v14 = *((_QWORD *)this + 165);
  v83 = v13;
  v93 = 0LL;
  v92 = this;
  v84 = *(_QWORD *)(v14 + 56);
  v94 = 0LL;
  while ( 1 )
  {
    v15 = (char *)Block[0];
    if ( Block[0] == Block )
      break;
    v40 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v41 = *(_QWORD *)Block[0];
    *v40 = *(_QWORD *)Block[0];
    *(_QWORD *)(v41 + 8) = v40;
    ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(v15 + 16);
    operator delete(v15);
  }
  v16 = v84;
  v17 = v89;
  v18 = 0LL;
  v19 = *((_DWORD *)this + 366) == 2;
  v20 = 0;
  *(_QWORD *)&v93 = Block;
  v91 = 0LL;
  *(_QWORD *)&v94 = v84 + 160;
  *((_QWORD *)&v93 + 1) = v84;
  v85 = v89;
  v77 = 0;
  v78[0] = 0;
  if ( !v19 )
  {
    v27 = 0;
    goto LABEL_19;
  }
  v21 = *((_QWORD *)this + 8);
  v22 = (ExecutionModel::_ResourceInfo *)operator new[](0x18uLL);
  v18 = 0LL;
  v23 = v22;
  if ( v22 )
  {
    ExecutionModel::_ResourceInfo::_ResourceInfo(v22);
    v24 = 1;
    v18 = 0LL;
  }
  else
  {
    v23 = 0LL;
    v24 = 0;
  }
  if ( v24 )
  {
    v25 = *((_QWORD *)this + 185);
    *(_OWORD *)v23 = *(_OWORD *)((char *)this + 1464);
    *((_QWORD *)v23 + 2) = v25;
    v26 = ExecutionModel::BaseResourceSet::RecursiveVisit(
            v21,
            0,
            1,
            (_DWORD)v23,
            0,
            1,
            (__int64)&v77,
            (__int64)v78,
            (__int64)Block,
            0LL);
    v3 = v77;
    v27 = v26;
    v20 = v78[0];
    if ( v26 >= 0 )
      v27 = 0;
  }
  else
  {
    v27 = -2147024882;
    if ( !v23 )
      goto LABEL_18;
  }
  operator delete(v23);
  v18 = 0LL;
  if ( v27 < 0 )
  {
LABEL_18:
    v17 = v85;
    v16 = v84;
LABEL_19:
    v28 = 0;
    goto LABEL_20;
  }
  if ( v20 )
  {
    if ( !v3 )
      goto LABEL_18;
  }
  else
  {
    if ( *((_QWORD *)this + 184) > *(_QWORD *)(*((_QWORD *)this + 3) + 40LL) )
    {
      v3 = 0;
      v77 = 0;
      v27 = -2147220992;
      goto LABEL_18;
    }
    v78[0] = 1;
    v3 = 1;
    v77 = 1;
    utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(Block);
    v18 = 0LL;
  }
  v17 = v85;
  v28 = 2;
  v16 = v84;
LABEL_20:
  v79 = v28;
  DWORD2(v94) = v28;
  if ( v27 >= 0 )
  {
    v29 = *((_QWORD *)this + 181);
    v30 = -1LL;
    if ( v29 != -1LL && v17 != -1LL )
    {
      v30 = v29 + v17;
      if ( v29 + v17 < v29 )
      {
        v27 = -805306219;
        goto LABEL_36;
      }
    }
    v31 = *((_DWORD *)this + 336);
    v85 = *((_QWORD *)this + 165);
    v32 = *(_QWORD *)(v85 + 56);
    v33 = *(_QWORD *)(*((_QWORD *)this + 3) + 128LL);
    v101 = v33;
    if ( !v30 )
      goto LABEL_23;
    if ( v30 + (_QWORD)v106 + 1LL < v30 )
    {
      *(_DWORD *)(v32 + 200) = 0;
    }
    else if ( v105[1] >= v30 || *((char *)this + 1378) < 0 )
    {
      v58 = RmpEmPriorityCompare(v31, *(unsigned int *)(v33 + 516), v106 + v30, v16);
      v61 = v121;
      if ( v58 < 0 )
        v61 = v119;
      if ( v59 >= (unsigned __int64)v121 || v59 >= (unsigned __int64)v61 )
      {
        RmpPolicyEnsureMetricsForAcquire(v60, (struct _RM_SYSTEM_MEMORY_METRICS *)&v110);
        v64 = RmpEmPriorityCompare(v31, *(unsigned int *)(v101 + 516), v62, v63);
        v18 = 0LL;
        if ( v64 < 0 )
        {
          v65 = v30 + v111 - v112;
          if ( v65 >= (unsigned __int64)v61 )
          {
            HIDWORD(v94) = 1;
            v66 = v65 - (_QWORD)v61;
            v67 = 1;
LABEL_81:
            RmpPolicyGenerateReclaimListForCommit(v84, v32 + 160, v85, v66, v31, v67);
            v18 = 0LL;
            v7 = 1;
            goto LABEL_24;
          }
        }
        if ( (unsigned __int64)v111 + v30 >= (unsigned __int64)v121 )
        {
          v67 = 2;
          HIDWORD(v94) = 2;
          v66 = v111 + v30 - (_QWORD)v121 + 1;
          goto LABEL_81;
        }
      }
LABEL_23:
      HIDWORD(v94) = v18;
      v7 = v18;
      *(_DWORD *)(v32 + 200) = v18;
LABEL_24:
      v76 = v7;
      if ( v3 )
      {
        v7 = v18;
        v76 = v18;
        *(_DWORD *)(v32 + 200) = v18;
        HIDWORD(v94) = v18;
      }
      else if ( !v7 )
      {
        v34 = *((_QWORD *)this + 8);
        v35 = *((_DWORD *)this + 336);
        v36 = (_QWORD *)(v34 + 40);
        v37 = *(_QWORD **)(v34 + 40);
        for ( i = v37; i != v36; i = (_QWORD *)*i )
        {
          v39 = i[2];
          if ( *(_DWORD *)(v39 + 1280) == 1 && *(_DWORD *)(v39 + 1288) < v35 )
          {
            for ( j = v18; !j; j = 1 )
            {
              if ( *((_QWORD *)this + 184) )
              {
                v69 = *((unsigned int *)this + 366);
                if ( *(_QWORD *)(v39 + 24LL * (int)v69 + 80) )
                {
                  v70 = *(_QWORD *)(v34 + 1272);
                  if ( !_bittest64(&v70, v69) )
                  {
                    v3 = 1;
                    LODWORD(v18) = 0;
                    goto LABEL_34;
                  }
                }
              }
            }
            v18 = 0LL;
          }
        }
        while ( v37 != v36 )
        {
          v42 = v37[2];
          if ( *(_DWORD *)(v42 + 1280) == 1 && *(_DWORD *)(v42 + 1288) < v35 )
          {
            for ( k = v18; !k; k = 1 )
            {
              if ( *((_QWORD *)this + 181) > v18 )
              {
                v72 = *((unsigned int *)this + 360);
                if ( *(_QWORD *)(v42 + 24LL * (int)v72 + 80) > v18 )
                {
                  v73 = *(_QWORD *)(v34 + 1272);
                  if ( !_bittest64(&v73, v72) )
                  {
                    v7 = 1;
                    v76 = 1;
                    goto LABEL_34;
                  }
                }
              }
            }
          }
          v37 = (_QWORD *)*v37;
        }
      }
LABEL_34:
      v27 = v18;
      goto LABEL_35;
    }
    v7 = 0;
    v76 = 0;
    v27 = -2147220992;
LABEL_35:
    LOBYTE(v28) = v79;
  }
LABEL_36:
  if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 9) != 0 && (qword_1800E8290 & 9) == qword_1800E8290 )
  {
    v43 = v83;
    v78[0] = BYTE12(v94);
    v77 = v28;
    v130 = 4LL;
    v128 = 4LL;
    v86 = *(_DWORD *)(v84 + 200);
    v87 = v91;
    v133 = v78;
    v131 = &v77;
    v129 = &v86;
    v127 = &v87;
    v125 = &v80;
    v123 = &v81;
    v121 = &v82;
    v119 = &v88;
    *(_DWORD *)&v104.Level = 4;
    v115.Ptr = (ULONGLONG)off_1800E8280;
    v120 = 4LL;
    v80 = v83;
    v81 = v7;
    v82 = v3;
    v88 = v27;
    v134 = 1LL;
    v132 = 1LL;
    v126 = 1LL;
    v124 = 1LL;
    v122 = 1LL;
    *(_DWORD *)&v104.Id = 184549376;
    v104.Keyword = 9LL;
    v115.Size = *(unsigned __int16 *)off_1800E8280;
    v116 = &unk_1800D9785;
    v115.Reserved = 2;
    v117 = 185;
    v118 = 1;
    v79 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E8298, &v104, 0LL, 0LL, 0xAu, &v115);
    LOBYTE(v18) = 0;
  }
  else
  {
    v43 = v83;
  }
  if ( v27 >= 0 )
  {
    if ( v3 || v7 || (v44 = v18, v43) )
      v44 = 1;
    v45 = (_QWORD *)(v102 + 40);
    for ( m = *(_QWORD **)(v102 + 40); m != v45 && *(_DWORD *)(m[2] + 1288LL) < *((_DWORD *)this + 322); m = (_QWORD *)*m )
      ;
    v47 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v48 = v47;
    if ( v47 )
    {
      v47[2] = this;
      (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 8LL))(this);
      v52 = (_QWORD *)m[1];
      v48[1] = v52;
      *v48 = m;
      *v52 = v48;
      m[1] = v48;
      ++v45[2];
      if ( v44 )
      {
        UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64(v50, v49, v51);
        v75 = v83 == 0;
        *((_DWORD *)this + 432) = UnbiasedInterruptTimeMs64;
        if ( v3 || v76 )
          v12 = 0;
        ExecutionModel::ResourceSet::CheckUpdatePendStats(this, v12, v75);
        if ( v3 || v76 )
          RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)&v92);
      }
      else
      {
        *((_DWORD *)this + 320) = 1;
        ExecutionModel::ResourceSet::CompleteAcquire(this, 1u);
      }
      v27 = 0;
    }
    else
    {
      v27 = -2147024882;
    }
  }
  while ( 1 )
  {
    v53 = Block[0];
    if ( Block[0] == Block )
      break;
    v54 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v55 = (char *)Block[0] + 16;
    v56 = *(_QWORD *)Block[0];
    *v54 = *(_QWORD *)Block[0];
    *(_QWORD *)(v56 + 8) = v54;
    ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(v55);
    operator delete(v53);
  }
  return (unsigned int)v27;
}
