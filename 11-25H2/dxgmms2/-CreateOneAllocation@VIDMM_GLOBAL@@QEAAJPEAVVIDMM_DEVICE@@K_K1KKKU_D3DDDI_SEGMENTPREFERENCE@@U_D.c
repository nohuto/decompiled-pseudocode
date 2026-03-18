/*
 * XREFs of ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E8A9C
 * Callers:
 *     AddDmaBufferToPool @ 0x1400B05D8 (AddDmaBufferToPool.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400E736C (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1400E86FC (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@KPEBVDXGADAPTERALLOCATION@@PEAXPEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1400E89BC (-CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXG.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14002720C (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC.c)
 *     ?AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400272A0 (-AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAUVIDMM_GLOBAL_A.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140032DD0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140038248 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x140039570 (--0VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1400395E8 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     ??_GVIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x140039A08 (--_GVIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x14003C274 (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x14003CC8C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     Feature_Wddm30CpuVisible__private_IsEnabledPreCheck @ 0x14003E358 (Feature_Wddm30CpuVisible__private_IsEnabledPreCheck.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004CD44 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z @ 0x140091AE0 (-FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z.c)
 *     ?AllocatePhysical@VIDMM_GLOBAL@@CAPEAX_KKPEAPEAX@Z @ 0x140092B9C (-AllocatePhysical@VIDMM_GLOBAL@@CAPEAX_KKPEAPEAX@Z.c)
 *     VidSchDestroySyncObject @ 0x1400B2F30 (VidSchDestroySyncObject.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400C0750 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C4B28 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@QEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1400F06C4 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@QEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1400F0C40 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@QEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1400F496C (-VerifyBudgetGroups@VIDMM_GLOBAL@@QEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1400F5BA8 (-VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?VerifySegmentSetAny@VIDMM_GLOBAL@@QEAAEKKK@Z @ 0x1400F5F80 (-VerifySegmentSetAny@VIDMM_GLOBAL@@QEAAEKKK@Z.c)
 *     ?CreatePhysicalAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K11IKKU_D3DDDI_SEGMENTPREFERENCE@@@Z @ 0x1400F6424 (-CreatePhysicalAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_GLOBAL.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEBAKXZ @ 0x1400F671C (-AdapterId@VIDMM_GLOBAL@@QEBAKXZ.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@QEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1400F68A0 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@QEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?VidMmGetAllocationHint@@YAPEBU_DXGK_ALLOCATIONUSAGEHINT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400F77C0 (-VidMmGetAllocationHint@@YAPEBU_DXGK_ALLOCATIONUSAGEHINT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DestroyPhysicalAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400F78A0 (-DestroyPhysicalAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL@@QEAAEKK@Z @ 0x1400F7B04 (-CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL@@QEAAEKK@Z.c)
 *     ?AddAllocation@VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT@@QEAAX_K@Z @ 0x1400F8DE8 (-AddAllocation@VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT@@QEAAX_K@Z.c)
 *     VidSchCreateSyncObject @ 0x1400F9A30 (VidSchCreateSyncObject.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@QEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1400FACC0 (-GetMostPreferredSegment@VIDMM_GLOBAL@@QEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?GetVmwpProcess@VIDMM_PROCESS@@QEAAPEAV1@XZ @ 0x14010C870 (-GetVmwpProcess@VIDMM_PROCESS@@QEAAPEAV1@XZ.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x14010C8AC (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::CreateOneAllocation(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        _D3DDDI_SEGMENTPREFERENCE a9,
        struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        int a15,
        unsigned __int8 a16,
        __int64 a17,
        __int64 a18,
        struct VIDMM_CROSSADAPTER_ALLOC **a19,
        VIDMM_GLOBAL_ALLOC **a20)
{
  char v20; // r14
  unsigned int v22; // ebx
  VIDMM_GLOBAL *v25; // r15
  struct DXGPROCESS *Current; // rax
  __int64 v27; // rdx
  __int64 v28; // r9
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  int v34; // r13d
  __int64 v35; // rcx
  int v36; // eax
  __int64 CurrentProcess; // rax
  int v39; // edi
  int v40; // r11d
  unsigned int v41; // ebx
  unsigned int Value; // ebx
  char v43; // di
  unsigned int v44; // edx
  unsigned int v45; // r9d
  int v46; // r9d
  unsigned int v47; // r11d
  int v48; // r12d
  int v49; // r9d
  int v50; // r9d
  unsigned int v51; // r9d
  int v52; // eax
  int v53; // ecx
  int v54; // edx
  int v55; // r9d
  D3DDDIFORMAT v56; // r12d
  int v57; // r9d
  int v58; // eax
  unsigned int v59; // eax
  int v60; // edx
  __int64 v61; // rcx
  VIDMM_GLOBAL_ALLOC *v62; // r12
  VIDMM_GLOBAL_ALLOC *v63; // rax
  VIDMM_GLOBAL_ALLOC *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rdx
  struct VIDMM_CROSSADAPTER_ALLOC **v69; // rcx
  int SyncObject; // r15d
  VIDMM_GLOBAL *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // r10
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rax
  volatile signed __int32 *v77; // rcx
  struct VIDMM_CROSSADAPTER_ALLOC *v78; // rax
  unsigned int v79; // r10d
  __int64 v80; // rcx
  unsigned __int64 v81; // r15
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 i; // rbx
  struct _VIDSCH_SYNC_OBJECT *v85; // rcx
  int *v86; // rcx
  KSPIN_LOCK *v87; // rdx
  struct _VIDMM_POOL_BLOCK *v88; // rcx
  unsigned __int64 v89; // r11
  unsigned __int8 v90; // dl
  int v91; // eax
  int v92; // ecx
  unsigned int v93; // eax
  unsigned __int8 v94; // r15
  unsigned int v95; // ecx
  int v96; // r9d
  int v97; // eax
  unsigned int v98; // r9d
  unsigned __int8 v99; // al
  unsigned __int8 v100; // al
  unsigned int v101; // ecx
  VIDMM_PHYSICAL_ADAPTER *v102; // rcx
  unsigned int v103; // eax
  unsigned __int64 v104; // r9
  VIDMM_PHYSICAL_ADAPTER *PhysicalAllocation; // rax
  VIDMM_PHYSICAL_ADAPTER *v106; // r10
  __int64 v107; // rcx
  __int64 v108; // rdx
  _DWORD *v109; // r8
  __int64 v110; // rax
  bool v111; // zf
  unsigned __int64 v112; // rcx
  int v113; // ecx
  unsigned int v115; // ecx
  unsigned int v116; // r15d
  int v117; // ecx
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  int v119; // r11d
  unsigned int v120; // eax
  __int64 v121; // r8
  struct VIDMM_CROSSADAPTER_ALLOC *v122; // r15
  _QWORD *v123; // rbx
  char *Physical; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned __int64 v126; // rbx
  __int64 v127; // rcx
  unsigned int v128; // eax
  __int64 v129; // rcx
  int v130; // edx
  int v131; // ecx
  const struct _DXGK_ALLOCATIONUSAGEHINT *AllocationHint; // rdx
  __int16 v133; // ax
  __int64 v134; // rbx
  UINT SlicePitch; // edi
  UINT Depth; // r15d
  UINT Pitch; // r12d
  UINT Height; // r13d
  HANDLE CurrentProcessId; // rax
  __int64 v140; // r8
  __int64 v141; // rcx
  __int64 v142; // rcx
  int *v143; // r9
  __int64 v144; // rcx
  int v145; // [rsp+48h] [rbp-138h]
  int v146; // [rsp+60h] [rbp-120h]
  int v147; // [rsp+88h] [rbp-F8h]
  char v148; // [rsp+C8h] [rbp-B8h]
  char v149; // [rsp+E8h] [rbp-98h]
  bool v150; // [rsp+100h] [rbp-80h] BYREF
  unsigned __int8 v151; // [rsp+101h] [rbp-7Fh]
  unsigned __int8 v152; // [rsp+102h] [rbp-7Eh]
  _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 v153; // [rsp+104h] [rbp-7Ch] BYREF
  UINT v154; // [rsp+108h] [rbp-78h]
  unsigned int v155; // [rsp+10Ch] [rbp-74h]
  unsigned int v156[2]; // [rsp+110h] [rbp-70h]
  VIDMM_PHYSICAL_ADAPTER **v157; // [rsp+118h] [rbp-68h]
  unsigned __int64 v158; // [rsp+120h] [rbp-60h]
  D3DDDIFORMAT Format; // [rsp+128h] [rbp-58h]
  int v160; // [rsp+12Ch] [rbp-54h] BYREF
  unsigned int SwizzledFormat; // [rsp+130h] [rbp-50h]
  unsigned __int64 v162; // [rsp+138h] [rbp-48h]
  unsigned int v163; // [rsp+140h] [rbp-40h] BYREF
  int v164; // [rsp+144h] [rbp-3Ch] BYREF
  unsigned int ByteOffset; // [rsp+148h] [rbp-38h]
  __int64 v166; // [rsp+150h] [rbp-30h]
  VIDMM_PHYSICAL_ADAPTER *v167; // [rsp+158h] [rbp-28h]
  struct VIDMM_CROSSADAPTER_ALLOC *v168; // [rsp+160h] [rbp-20h]
  unsigned __int64 v169; // [rsp+168h] [rbp-18h]
  _QWORD v170[10]; // [rsp+170h] [rbp-10h] BYREF
  unsigned __int8 v173; // [rsp+220h] [rbp+A0h]
  UINT Width; // [rsp+220h] [rbp+A0h]
  int v176; // [rsp+258h] [rbp+D8h]
  unsigned __int8 v177; // [rsp+258h] [rbp+D8h]
  unsigned __int8 v178; // [rsp+258h] [rbp+D8h]
  char v179; // [rsp+258h] [rbp+D8h]
  unsigned int v180; // [rsp+260h] [rbp+E0h]

  v20 = (char)a10;
  v22 = (unsigned int)a10;
  v153.0 = a10;
  v25 = a1;
  Current = DXGPROCESS::GetCurrent();
  v158 = (unsigned __int64)Current;
  if ( Current && (v27 = *((unsigned int *)Current + 102), (*((_DWORD *)Current + 102) & 0x100) != 0) )
  {
    v27 = (unsigned int)v27 >> 10;
    v150 = 1;
    if ( (v27 & 1) == 0 && !a17 && (*(_BYTE *)&a10 & 1) != 0 )
    {
      v22 = *(_DWORD *)&a10 & 0xFFFF7FFF;
      v153.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(*(_DWORD *)&a10 & 0xFFFF7FFF);
    }
  }
  else
  {
    v150 = 0;
  }
  v166 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 296LL);
  v29 = 0;
  if ( *((_DWORD *)v25 + 1736) != 1 )
    v29 = a3;
  v30 = v29;
  v31 = *((_QWORD *)v25 + 5029);
  *(_QWORD *)v156 = v30;
  v167 = *(VIDMM_PHYSICAL_ADAPTER **)(v31 + 8 * v30);
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v30) + 24) = a2;
    WdLogGlobalForLineNumber = 2433;
    v32 = (_QWORD *)WdLogNewEntry5_WdTrace(a2);
    v32[4] = a6;
    v32[6] = a7;
    v32[7] = a8;
    v32[3] = a4;
    v32[5] = 0LL;
    WdLogGlobalForLineNumber = 2440;
    v33 = (_QWORD *)WdLogNewEntry5_WdTrace(a8);
    v33[4] = v22;
    v30 = a12;
    v33[5] = a12;
    v33[3] = a9.Value;
    WdLogGlobalForLineNumber = 2445;
  }
  v34 = 0x40000;
  *a20 = 0LL;
  if ( *((_DWORD *)v25 + 8) < 0x5023u && (v22 & 0x40000) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v36 = 2460;
LABEL_15:
    WdLogGlobalForLineNumber = v36;
LABEL_16:
    DxgkLogInternalTriageEvent(v35, 0x40000LL);
    return 3221225485LL;
  }
  SwizzledFormat = 0x80000;
  if ( (v22 & 0x20000) != 0 )
  {
    if ( (v22 & 2) != 0
      || (v22 & 4) != 0 && (v30 = *(unsigned int *)(*((_QWORD *)v25 + 3) + 444LL), (v30 & 8) == 0)
      || (v22 & 0x100000) != 0
      || (v22 & 0x80000) != 0
      || (v22 & 8) != 0
      || (v22 & 0x10) != 0
      || (v22 & 0x20) != 0 )
    {
      WdLogSingleEntry0(1LL);
      v36 = 2479;
      goto LABEL_15;
    }
    v22 &= 0xFFFBFFFE;
    v153.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v22;
  }
  if ( (v22 & 1) == 0 || (LOBYTE(v154) = 1, (v22 & 0x40000) != 0) )
    LOBYTE(v154) = 0;
  if ( *((_BYTE *)v25 + 40104)
    || (CurrentProcess = PsGetCurrentProcess(v30, v27, 1LL, v28), !PsGetProcessWow64Process(CurrentProcess)) )
  {
    if ( (v22 & 0x20000000) == 0
      && (v22 & 0x40000000) == 0
      && (v22 & 0x80000000) == 0
      && (v22 & 0x10000000) == 0
      && (v22 & 8) == 0
      && (v22 & 0x400000) == 0
      && (v22 & 0x20000) == 0
      && !a17 )
    {
      v22 &= ~0x40000u;
      LOBYTE(v154) = 1;
      v153.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v22;
    }
  }
  v39 = (v22 >> 13) & 1;
  if ( v39 && (*((_BYTE *)v25 + 40937) & 8) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v35 = 0LL;
    v36 = 2534;
    goto LABEL_15;
  }
  if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset((VIDMM_GLOBAL *)1, a9, a7) )
  {
    WdLogSingleEntry0(1LL);
    v35 = 0LL;
    v36 = 2544;
    goto LABEL_15;
  }
  if ( !dword_1400815C0 || (v22 & 1) != 0 )
  {
    v41 = v156[0];
  }
  else
  {
    v41 = v156[0];
    if ( (*(_BYTE *)&a9.0 & 0x1F) != 0 )
    {
      v40 = 1 << ((*(_BYTE *)&a9.0 & 0x1F) - 1);
      goto LABEL_53;
    }
    v163 = 0;
    if ( !VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(v25, v156[0], v40, 0x1001u, &v163) )
    {
      v40 = v163;
LABEL_53:
      a7 = v40;
      goto LABEL_57;
    }
    v40 = a7;
  }
LABEL_57:
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    v35 = 0LL;
    v36 = 2584;
    goto LABEL_15;
  }
  if ( v39 && *(int *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 3004LL) < 2900 )
  {
    WdLogSingleEntry0(1LL);
    v35 = 0LL;
    v36 = 2594;
    goto LABEL_15;
  }
  v164 = 0;
  v160 = 0;
  if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
          v25,
          v41,
          v40,
          &v153,
          a4,
          a5,
          a17 != 0,
          (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v160) )
  {
    WdLogSingleEntry0(1LL);
    v36 = 2606;
    goto LABEL_15;
  }
  Value = v153.Value;
  if ( (v153.Value & 0x40000) != 0 )
  {
    if ( (*(_BYTE *)&v153.0 & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v36 = 2621;
      goto LABEL_15;
    }
    if ( (*(_BYTE *)&v153.0 & 2) != 0 || (*(_BYTE *)&v153.0 & 0x20) != 0 || (*(_BYTE *)&v153.0 & 0x10) != 0 )
    {
      WdLogSingleEntry0(1LL);
      v36 = 2633;
      goto LABEL_15;
    }
  }
  v43 = v160;
  v44 = a8;
  v162 = a5 & -(__int64)((v160 & 4) != 0);
  if ( a8 )
  {
    if ( !VIDMM_GLOBAL::VerifySegmentSet(v25, v156[0], a8, 1u, 0LL) )
    {
      WdLogSingleEntry0(v45);
      v36 = 2665;
      goto LABEL_15;
    }
    if ( VIDMM_GLOBAL::VerifySegmentSetAny(v25, v156[0], a8, 0x20u) )
    {
      WdLogSingleEntry0((unsigned int)(v46 - 31));
      v36 = 2680;
      goto LABEL_15;
    }
    v44 = a8;
  }
  else
  {
    v47 = v156[0];
  }
  v48 = (Value >> 1) & 1;
  if ( v48 )
  {
    if ( (Value & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v35 = 0LL;
      v36 = 2698;
      goto LABEL_15;
    }
    if ( (Value & 0x20000000) != 0 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0 )
    {
      WdLogSingleEntry0(1LL);
      v35 = 0LL;
      v36 = 2711;
      goto LABEL_15;
    }
  }
  v49 = (Value >> 2) & 1;
  v176 = v49;
  if ( v49 && (Value & 0x800000) == 0 )
  {
    if ( *((_BYTE *)v25 + 7017) )
    {
      if ( !VIDMM_GLOBAL::VerifySegmentSet(v25, v47, v44, 0x10u, 0LL) )
      {
        WdLogSingleEntry0((unsigned int)(v50 - 15));
        v35 = 0LL;
        v36 = 2744;
        goto LABEL_15;
      }
      goto LABEL_93;
    }
    if ( (*(_DWORD *)(*((_QWORD *)v25 + 3) + 444LL) & 8) == 0 )
    {
      if ( !VIDMM_GLOBAL::VerifySegmentSet(v25, v47, v44, 1u, 0LL) )
      {
        WdLogSingleEntry0(v51);
        v35 = 0LL;
        v36 = 2751;
        goto LABEL_15;
      }
LABEL_93:
      v49 = v176;
    }
  }
  v52 = (Value >> 29) & 1;
  if ( v52 && (v48 || (Value & 8) != 0 || (Value & 0x20) != 0 || (Value & 0x40000000) != 0) )
  {
    WdLogSingleEntry0(1LL);
    v35 = 0LL;
    v36 = 2771;
    goto LABEL_15;
  }
  if ( (a11 & 1) != 0 && ((v43 & 1) == 0 || !v52) )
  {
    WdLogSingleEntry0(1LL);
    v35 = 0LL;
    v36 = 2780;
    goto LABEL_15;
  }
  if ( (Value & 0x100000) != 0 && (!v52 || !a19 || (v43 & 1) == 0) )
  {
    WdLogSingleEntry0(1LL);
    v35 = 0LL;
    v36 = 2792;
    goto LABEL_15;
  }
  if ( a17 && (v48 || (Value & 0x100) != 0 || (Value & 0x200) != 0 || (Value & 0x40000000) != 0) )
  {
    WdLogSingleEntry0(1LL);
    v35 = 0LL;
    v36 = 2812;
    goto LABEL_15;
  }
  if ( ((Value >> 26) & 1) != 0 )
  {
    if ( (Value & 8) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v35 = 0LL;
      v36 = 2828;
      goto LABEL_15;
    }
  }
  else if ( (Value & 8) == 0 )
  {
    goto LABEL_129;
  }
  if ( (Value & 1) != 0 && ((Value >> 26) & 1) == 0 && !a17
    || v48
    || v52
    || (Value & 0x10) != 0
    || (Value & 0x20) != 0
    || (Value & 0x80000000) != 0
    || (Value & 0x40000000) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v35 = 0LL;
    v36 = 2861;
    goto LABEL_15;
  }
LABEL_129:
  v53 = (Value >> 4) & 1;
  if ( v53 && (v48 || (Value & 0x20) != 0 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0) )
  {
    WdLogSingleEntry0(1LL);
    v35 = 0LL;
    v36 = 2883;
    goto LABEL_15;
  }
  v54 = (Value >> 5) & 1;
  if ( v54 && (v48 || v52 || v53 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0) )
  {
    WdLogSingleEntry0(1LL);
    v35 = 0LL;
    v36 = 2907;
    goto LABEL_15;
  }
  if ( (Value & 0x80000000) != 0 )
  {
    if ( v48
      || v49 && (v55 = *(_DWORD *)(*((_QWORD *)v25 + 3) + 444LL), (v55 & 0x10) == 0) && (v55 & 8) == 0
      || v53
      || v54
      || (Value & 0x40000000) != 0 )
    {
      WdLogSingleEntry0(1LL);
      v35 = 0LL;
      v36 = 2931;
      goto LABEL_15;
    }
    goto LABEL_164;
  }
  if ( (Value & 0x40000000) == 0 )
  {
LABEL_164:
    LOBYTE(v56) = 0;
    goto LABEL_165;
  }
  if ( v48
    || (LOBYTE(v56) = 0, v49) && (v57 = *(_DWORD *)(*((_QWORD *)v25 + 3) + 444LL), (v57 & 0x10) == 0) && (v57 & 8) == 0
    || v53
    || v54 )
  {
    WdLogSingleEntry0(1LL);
    v36 = 2955;
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v25 + 3) + 2468LL) & 0x200) == 0 )
    Value |= 1u;
  v58 = (unsigned __int8)v154;
  if ( (Value & 1) != 0 )
    v58 = 1;
  Value |= 0x20000000u;
  v153.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
  v154 = v58;
LABEL_165:
  if ( (Value & 0x10000000) != 0 )
  {
    v59 = Value & 0xEFFF7FBF;
    v60 = *(_DWORD *)(*((_QWORD *)v25 + 3) + 444LL);
    if ( (v60 & 8) != 0 || (v60 & 0x10) != 0 )
      v59 = Value & 0xEFFF7FBB;
    if ( v59 )
    {
      WdLogSingleEntry0(1LL);
      v36 = 2997;
      goto LABEL_15;
    }
    if ( !VIDMM_GLOBAL::VerifySegmentSet(v25, v156[0], a8, 1u, 0LL) )
    {
      WdLogSingleEntry0(1LL);
      v36 = 3007;
      goto LABEL_15;
    }
  }
  if ( (Value & 0x400000) != 0 )
  {
    if ( (Value & 0x20000000) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v36 = 3023;
      goto LABEL_15;
    }
    if ( !a13 )
    {
      WdLogSingleEntry0(1LL);
      v36 = 3033;
      goto LABEL_15;
    }
  }
  if ( (Value & 0x4000) != 0 )
  {
    if ( (Value & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v36 = 3045;
      goto LABEL_15;
    }
    if ( (Value & 2) != 0
      || (Value & 8) != 0
      || (Value & 0x10) != 0
      || (Value & 0x20) != 0
      || (Value & 0x40) != 0
      || (Value & 0x100) != 0
      || (Value & 0x200) != 0
      || (Value & 0x40000) != 0 )
    {
      WdLogSingleEntry1(1LL, Value);
      WdLogGlobalForLineNumber = 3061;
      goto LABEL_16;
    }
  }
  if ( a19 )
    v168 = *a19;
  else
    v168 = 0LL;
  if ( (Value & 0x1000) != 0 && (Value & 0x100000) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v36 = 3072;
    goto LABEL_15;
  }
  if ( (VIDMM_GLOBAL::_Config & 2) != 0
    && DXGPROCESS::GetCurrent()
    && (*((_DWORD *)DXGPROCESS::GetCurrent() + 102) & 4) != 0
    && (Value & 0x10000000) == 0
    && (Value & 0x40000000) == 0 )
  {
    Value |= 0x8000000u;
    v153.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
  }
  v151 = 0;
  v152 = 0;
  v173 = 0;
  v177 = 0;
  Format = D3DDDIFMT_UNKNOWN;
  if ( v150 && !a17 )
  {
    v152 = 1;
    if ( (Value & 0x10) != 0 )
    {
      v173 = 1;
    }
    else if ( (Value & 1) != 0 )
    {
      if ( (Value & 0x8000) != 0 && (*(_DWORD *)(v158 + 408) & 0x400) == 0 )
      {
        WdLogSingleEntry0(1LL);
        v35 = 0LL;
        v36 = 3115;
        goto LABEL_15;
      }
      v56 = *(_DWORD *)(v158 + 408) >> 10;
      LOBYTE(v56) = (*(_DWORD *)(v158 + 408) & 0x400) != 0;
      Format = v56;
      v177 = v56 ^ 1;
      v151 = v56 ^ 1;
      if ( (Value & 0x20000000) != 0 )
      {
        v151 = 1;
        v177 = v56 ^ 1;
        Format = v56;
      }
    }
  }
  Feature_Wddm30CpuVisible__private_IsEnabledPreCheck();
  if ( *(int *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 3004LL) >= 3000
    && (Value & 1) != 0
    && (v43 & 2) == 0
    && !a18
    && (Value & 0x40000000) == 0 )
  {
    WdLogSingleEntry1(1LL, Value);
    v35 = 0LL;
    WdLogGlobalForLineNumber = 3164;
    goto LABEL_16;
  }
  if ( v152 )
  {
    if ( v173 | (unsigned __int8)(v177 | v56) )
      v61 = 440LL;
    else
      v61 = 392LL;
    v63 = (VIDMM_GLOBAL_ALLOC *)operator new(v61, 0x61306956u, 256LL);
    v157 = (VIDMM_PHYSICAL_ADAPTER **)v63;
    v62 = v63;
    if ( v63 )
    {
      VIDMM_GLOBAL_ALLOC::VIDMM_GLOBAL_ALLOC(v63);
      goto LABEL_228;
    }
    v62 = 0LL;
  }
  else
  {
    v64 = (VIDMM_GLOBAL_ALLOC *)operator new(384LL, 0x31306956u, 256LL);
    if ( !v64 )
      goto LABEL_367;
    v62 = VIDMM_GLOBAL_ALLOC::VIDMM_GLOBAL_ALLOC(v64);
  }
  v157 = (VIDMM_PHYSICAL_ADAPTER **)v62;
  if ( !v62 )
    goto LABEL_367;
LABEL_228:
  *((_DWORD *)v62 + 6) ^= ((unsigned __int8)*((_DWORD *)v62 + 6) ^ LOBYTE(v156[0])) & 0x3F;
  v65 = operator new(56LL, 0x32346956u, 64LL);
  *((_QWORD *)v62 + 47) = v65;
  if ( !v65 )
  {
    _InterlockedAdd(&dword_1400817AC, 1u);
    WdLogSingleEntry0(6LL);
    v67 = 3210;
LABEL_230:
    WdLogGlobalForLineNumber = v67;
    DxgkLogInternalTriageEvent(v66, 262145LL);
    SyncObject = -1073741801;
LABEL_231:
    v71 = a1;
LABEL_259:
    if ( (*((_DWORD *)v62 + 8) & 0x20) != 0 )
      VIDMM_GLOBAL::UncommitGlobalBackingStore(v71, v62, 1);
    v83 = *((_QWORD *)v62 + 47);
    if ( v83 )
    {
      if ( *(_QWORD *)(v83 + 32) )
      {
        for ( i = 0LL; i < 16; i += 8LL )
        {
          v85 = *(struct _VIDSCH_SYNC_OBJECT **)(i + *(_QWORD *)(*((_QWORD *)v62 + 47) + 32LL));
          if ( v85 )
            VidSchDestroySyncObject(v85, v68);
        }
        operator delete(*(void **)(*((_QWORD *)v62 + 47) + 32LL));
      }
      v86 = *(int **)(*((_QWORD *)v62 + 47) + 24LL);
      if ( v86 )
        VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v86);
      operator delete(*((void **)v62 + 47));
    }
    v87 = (KSPIN_LOCK *)*((_QWORD *)v62 + 43);
    if ( !v87 )
      goto LABEL_276;
    VIDMM_GLOBAL::FreeCrossAdapterDataDpc((VIDMM_GLOBAL *)v69, v87, v62);
    v69 = (struct VIDMM_CROSSADAPTER_ALLOC **)(unsigned int)_InterlockedDecrement(*((volatile signed __int32 **)v62 + 43));
    if ( !(_DWORD)v69 )
    {
      v88 = *(struct _VIDMM_POOL_BLOCK **)(*((_QWORD *)v62 + 43) + 48LL);
      if ( v88 )
        VIDMM_GLOBAL::FreePhysical(v88);
      VIDMM_GLOBAL::DestroyCrossAdapterAllocation(v88, *((struct VIDMM_CROSSADAPTER_ALLOC **)v62 + 43));
      v69 = a19;
      *a19 = 0LL;
      goto LABEL_276;
    }
    if ( (int)v69 >= 0 )
    {
LABEL_276:
      if ( *(_QWORD *)v62 )
      {
        VIDMM_PHYSICAL_ADAPTER::DestroyPhysicalAllocation(
          (VIDMM_PHYSICAL_ADAPTER *)v69,
          *(struct VIDMM_PHYSICAL_ALLOC **)v62);
        *(_QWORD *)v62 = 0LL;
      }
      VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(v62);
      return (unsigned int)SyncObject;
    }
    v143 = (int *)*((_QWORD *)v62 + 43);
    v144 = *v143;
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 66LL, v143, v144, 0LL);
    WdLogGlobalForLineNumber = 195;
LABEL_367:
    _InterlockedAdd(&dword_140081694, 1u);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 3196;
    DxgkLogInternalTriageEvent(0LL, 262145LL);
    return 3221225495LL;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 744LL) + 57LL) || (Value & 0x80000) != 0 )
  {
    *(_QWORD *)(*((_QWORD *)v62 + 47) + 24LL) = operator new[](12LL, 0x33306956u, 64LL);
    v77 = *(volatile signed __int32 **)(*((_QWORD *)v62 + 47) + 24LL);
    if ( !v77 )
    {
      _InterlockedAdd(&dword_14008168C, 1u);
      WdLogSingleEntry0(6LL);
      v67 = 3278;
      goto LABEL_230;
    }
    _InterlockedAdd(v77, 1u);
    Value = v153.Value;
    v43 = v160;
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v62 + 47) + 24LL) + 4LL) = -((v153.Value & 0x100000) == 0);
  }
  else if ( (Value & 0x40000000) != 0 || (Value & 0x80000000) != 0 )
  {
    *(_QWORD *)(*((_QWORD *)v62 + 47) + 32LL) = operator new(168LL, 0x33306956u, 64LL);
    if ( !*(_QWORD *)(*((_QWORD *)v62 + 47) + 32LL) )
    {
      _InterlockedAdd(&dword_14008168C, 1u);
      WdLogSingleEntry0(6LL);
      v67 = 3226;
      goto LABEL_230;
    }
    v155 = 0;
    v158 = 16LL;
    ByteOffset = 1000 * (v156[0] + 1);
    while ( 1 )
    {
      memset(v170, 0, sizeof(v170));
      v72 = *((_QWORD *)v62 + 47);
      v73 = (int)v155;
      HIDWORD(v170[0]) |= 0x80u;
      v74 = *(_QWORD *)(v72 + 32);
      LODWORD(v170[0]) = 5;
      v75 = v155 * ByteOffset + 100LL;
      *(_QWORD *)(v158 + v74) = v75;
      v76 = *((_QWORD *)v62 + 47);
      v170[1] = v75;
      SyncObject = VidSchCreateSyncObject(
                     *(_QWORD *)(*((_QWORD *)v25 + 2) + 744LL),
                     0,
                     (unsigned int)v170,
                     (unsigned int)((_DWORD)v73 != 1) + 7,
                     0LL,
                     0LL,
                     *(_QWORD *)(v76 + 32) + 8 * v73,
                     0LL,
                     0LL,
                     0LL);
      if ( SyncObject < 0 )
        break;
      v158 += 8LL;
      v25 = a1;
      if ( (int)++v155 >= 2 )
        goto LABEL_245;
    }
LABEL_258:
    v71 = a1;
    goto LABEL_259;
  }
LABEL_245:
  if ( a12 )
  {
    if ( (*(_DWORD *)(a12 + 4) & 0x8000) != 0 )
      *((_DWORD *)v62 + 6) |= 0x800u;
    if ( (*(_DWORD *)(a12 + 4) & 0x10000) != 0 )
    {
      *((_DWORD *)v62 + 7) |= 0x800u;
      *((_DWORD *)v62 + 6) |= 0x800000u;
    }
    if ( (*(_DWORD *)(a12 + 4) & 0x8000000) != 0 )
      *((_DWORD *)v62 + 6) |= 0x1000u;
  }
  v78 = v168;
  *((_QWORD *)v62 + 43) = v168;
  if ( v78 )
  {
    _InterlockedAdd((volatile signed __int32 *)v78, 1u);
    SyncObject = VIDMM_GLOBAL::AllocateCrossAdapterDataDpc(v25, v78, v62);
    if ( SyncObject < 0 )
      goto LABEL_258;
    Value = v153.Value;
    v43 = v160;
  }
  v79 = (*(_DWORD *)(v166 + 72) & 1) != 0 ? 0x10000 : 4096;
  v155 = v79;
  v80 = v79 - 1;
  v81 = ~v80 & (v80 + a4);
  v158 = v81;
  if ( a4 > v81 )
  {
    WdLogSingleEntry1(1LL, a4);
    WdLogGlobalForLineNumber = 3350;
LABEL_257:
    DxgkLogInternalTriageEvent(v82, 0x40000LL);
    SyncObject = -1073741811;
    goto LABEL_258;
  }
  v89 = ~v80 & (v80 + v162);
  v169 = v89;
  if ( v162 > v89 )
  {
    WdLogSingleEntry1(1LL, v162);
    WdLogGlobalForLineNumber = 3364;
    goto LABEL_257;
  }
  if ( v81 > 0xFFFF0000 && (*((_DWORD *)v62 + 7) & 0x800) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3372;
    goto LABEL_257;
  }
  if ( a6 )
  {
    v79 = -v79 & (v79 + a6 - 1);
    v155 = v79;
    if ( a6 > v79 )
    {
      WdLogSingleEntry1(1LL, a6);
      WdLogGlobalForLineNumber = 3390;
      goto LABEL_257;
    }
  }
  v162 = v79;
  if ( v79 + v81 < v81 || v79 + v89 < v89 )
  {
    WdLogSingleEntry4(1LL, v81, v89);
    WdLogGlobalForLineNumber = 3410;
    DxgkLogInternalTriageEvent(v142, 0x40000LL);
    SyncObject = -1073741811;
    goto LABEL_231;
  }
  v90 = Format;
  if ( v173 | (unsigned __int8)(v177 | Format) )
    *((_QWORD *)v62 + 50) = v81;
  if ( (Value & 0x10000000) != 0 )
  {
    Value |= 8u;
    v153.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
  }
  if ( (Value & 0x1000) != 0 )
    *((_DWORD *)v62 + 7) |= 0x200000u;
  *((_QWORD *)v62 + 26) = a13;
  if ( (Value & 0x20000000) == 0 || (Value & 0x10) != 0 || (*((_DWORD *)v62 + 7) & 0x200000) != 0 )
    SwizzledFormat = 0;
  v91 = *((_DWORD *)v62 + 7);
  *((_DWORD *)v62 + 19) = 0;
  *((_DWORD *)v62 + 7) = SwizzledFormat | v91 & 0xFFF7FFFF;
  **((_DWORD **)v62 + 47) = Value;
  *(_DWORD *)(*((_QWORD *)v62 + 47) + 4LL) = a11;
  v92 = *((_DWORD *)v62 + 6);
  *((_DWORD *)v62 + 18) = 0;
  *((_DWORD *)v62 + 32) = 0;
  *((_DWORD *)v62 + 6) = ((v43 & 1) << 7) | v92 & 0xFFFFFF3F | (32 * (v43 & 2));
  v93 = *((_DWORD *)v62 + 7) & 0xFFFFFF7F;
  *((_QWORD *)v62 + 1) = a12;
  v94 = v152;
  v95 = (v93 | ((unsigned __int8)v154 << 7)) & 0xFFFC1FFF | (v151 << 17) | (v152 << 13) & 0xFFFE3FFF | (v173 << 16) | (v177 << 14) & 0xFFFF7FFF;
  v96 = (v95 | (v90 << 15)) ^ ((v95 | (v90 << 15)) ^ (a11 << 23)) & 0x800000;
  *((_DWORD *)v62 + 7) = v96;
  if ( a12 && (*(_DWORD *)(a12 + 4) & 0x10000000) != 0 )
    v97 = 0x1000000;
  else
    v97 = 0;
  v98 = v97 | v96 & 0xFEFFFFFF;
  v180 = v98;
  *((_DWORD *)v62 + 7) = v98;
  if ( v94 )
    *((_QWORD *)v62 + 48) = VIDMM_PROCESS::GetVmwpProcess(*(VIDMM_PROCESS **)(a2 + 8));
  v99 = 0;
  v178 = 0;
  if ( (Value & 1) != 0 )
  {
    if ( ((*(_DWORD *)(*((_QWORD *)a1 + 3) + 444LL) & 8) != 0
       || (v100 = VIDMM_GLOBAL::CheckForCpuVisibleMemorySegment(a1, v156[0], a7), v98 = v180, v100))
      && (v101 = v98, !a18)
      || (v101 = v98, (v98 & 0x200000) != 0) )
    {
      v99 = 1;
      v98 = v101;
    }
    else
    {
      v99 = 0;
    }
    v178 = v99;
  }
  v102 = v167;
  v103 = v98 & 0xFFEFFFFF | (v99 << 20);
  v104 = v158;
  *((_DWORD *)v62 + 7) = v103;
  PhysicalAllocation = VIDMM_PHYSICAL_ADAPTER::CreatePhysicalAllocation(v102, v62, a4, v104, v89, v79, a7, a8, a9);
  v167 = PhysicalAllocation;
  v106 = PhysicalAllocation;
  if ( !PhysicalAllocation )
  {
    SyncObject = -1073741801;
    goto LABEL_258;
  }
  v107 = v156[0];
  *(_QWORD *)v62 = PhysicalAllocation;
  v108 = *(_QWORD *)(*((_QWORD *)a1 + 5029) + 8 * v107);
  v109 = *(_DWORD **)(v108 + 480);
  if ( (*(_DWORD *)(v166 + 72) & 1) != 0 )
  {
    *((_DWORD *)v62 + 7) |= 0x100u;
  }
  else
  {
    if ( !dword_1400815C4 && (*(_BYTE *)(v108 + 36) & 1) == 0 )
      goto LABEL_328;
    v110 = *((_QWORD *)a1 + 3);
    v157 = (VIDMM_PHYSICAL_ADAPTER **)v62;
    if ( (**(_DWORD **)(v110 + 3008) & 0x4000) != 0 )
      goto LABEL_328;
    v157 = (VIDMM_PHYSICAL_ADAPTER **)v62;
    if ( (v43 & 2) == 0 )
      goto LABEL_328;
    v157 = (VIDMM_PHYSICAL_ADAPTER **)v62;
    if ( !v109 )
      goto LABEL_328;
    v111 = (*v109 & 0x200) == 0;
    v157 = (VIDMM_PHYSICAL_ADAPTER **)v62;
    if ( v111 )
    {
      v157 = (VIDMM_PHYSICAL_ADAPTER **)v62;
      if ( dword_1400815C4 != 2 )
        goto LABEL_328;
    }
    if ( ((v112 = *((_QWORD *)v106 + 2), !(_WORD)v112) || v112 > (unsigned int)dword_1400815C8) && !v178 )
      v113 = 256;
    else
LABEL_328:
      v113 = 0;
    *((_DWORD *)v62 + 7) = v113 | *((_DWORD *)v62 + 7) & 0xFFFFFEFF;
  }
  if ( a12 )
    a14 = *(_QWORD *)(a12 + 16);
  v71 = a1;
  *(_QWORD *)(*((_QWORD *)v62 + 47) + 48LL) = a14;
  SyncObject = VIDMM_GLOBAL::CommitGlobalBackingStore(a1, v62);
  if ( SyncObject < 0 )
    goto LABEL_259;
  if ( (Value & 0x4000) != 0 )
    *((_DWORD *)v62 + 7) |= 0x20u;
  v115 = *((_DWORD *)v62 + 6) & 0xEFFFFFFF;
  v116 = v156[0];
  *((_QWORD *)v62 + 8) = a17;
  v117 = (a17 != 0 ? 0x10000000 : 0) | v115;
  *((_DWORD *)v62 + 6) = v117 ^ (v117 ^ (a16 << 29)) & 0x20000000;
  *((_DWORD *)v167 + 12) = a15;
  *((_QWORD *)v62 + 15) = (char *)v62 + 112;
  *((_QWORD *)v62 + 14) = (char *)v62 + 112;
  v150 = (*((_DWORD *)v62 + 6) & 0x80) != 0;
  MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(a1, v116, a9, &v150);
  *((_DWORD *)v62 + 6) = v119 ^ ((unsigned __int16)v119 ^ (v150 << 10)) & 0x400;
  if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
          a1,
          v116,
          a7,
          MostPreferredSegment,
          (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v164) )
    return 3221225485LL;
  v120 = *((_DWORD *)v62 + 6) & 0xFFE01FFF | ((v164 & 0xF0) << 13) & 0xFFFE1FFF | ((v164 & 0xF) << 13);
  *((_DWORD *)v62 + 6) = v120;
  if ( (Value & 0x10) != 0 || (Value & 0x20) != 0 )
    *((_BYTE *)v62 + 42) = 1;
  v121 = a18;
  *((_QWORD *)v62 + 8) = a18;
  *((_DWORD *)v62 + 6) = v120 & 0xFFFFFEFF | (a18 != 0 ? 0x100 : 0);
  if ( (Value & 0x1000) != 0 )
  {
    v122 = v168;
    v123 = (_QWORD *)((char *)v168 + 48);
    if ( !*((_QWORD *)v168 + 6) )
    {
      Physical = VIDMM_GLOBAL::AllocatePhysical(v158, v155, (void **)v168 + 6);
      v111 = *v123 == 0LL;
      *((_QWORD *)v122 + 7) = Physical;
      if ( v111 )
      {
        SyncObject = -1073741801;
        goto LABEL_259;
      }
    }
    PhysicalAddress = MmGetPhysicalAddress(*((PVOID *)v122 + 7));
    v121 = a18;
    *((PHYSICAL_ADDRESS *)v122 + 8) = PhysicalAddress;
  }
  v126 = v158;
  if ( !v121 )
  {
    SyncObject = SysMmAllocateLogicalMemory(
                   *(struct SYSMM_ADAPTER **)(*((_QWORD *)a1 + 3) + 224LL),
                   v158,
                   v62,
                   (void **)v62 + 44);
    if ( SyncObject < 0 )
    {
      WdLogSingleEntry1(1LL, v62);
      WdLogGlobalForLineNumber = 3619;
      DxgkLogInternalTriageEvent(v127, 0x40000LL);
      goto LABEL_259;
    }
  }
  v128 = VIDMM_GLOBAL::AdapterId(a1);
  v129 = v166;
  *((_QWORD *)v62 + 42) = *(_QWORD *)(v166 + 40) + 384LL * v128;
  _InterlockedAdd((volatile signed __int32 *)(v129 + 36), 1u);
  if ( *(_DWORD *)(v129 + 32)
    || (v130 = **((_DWORD **)v62 + 47), (v130 & 0x2003A) != 0)
    || (v131 = *((_DWORD *)v62 + 7), (v131 & 0x4000) != 0)
    || (*((_DWORD *)v62 + 6) & 0x100) != 0
    || (v131 & 0x800) != 0
    || (v130 & 0x40000000) != 0 )
  {
    v34 = 0;
  }
  *((_DWORD *)v62 + 7) = v34 | *((_DWORD *)v62 + 7) & 0xFFFBFFFF;
  AllocationHint = VidMmGetAllocationHint(v62);
  if ( (byte_140081241 & 0x10) != 0 )
  {
    v133 = *((_WORD *)v62 + 12) & 0x3F;
    v134 = *((_QWORD *)v62 + 26);
    SlicePitch = AllocationHint->v1.SlicePitch;
    Depth = AllocationHint->v1.Depth;
    Pitch = AllocationHint->v1.Pitch;
    Height = AllocationHint->v1.Height;
    v179 = v133;
    Width = AllocationHint->v1.Width;
    ByteOffset = AllocationHint->v1.ByteOffset;
    SwizzledFormat = AllocationHint->v1.SwizzledFormat;
    Format = AllocationHint->v1.Format;
    v154 = AllocationHint->v1.Flags.Value;
    v156[0] = AllocationHint->Version;
    v167 = v157[1];
    v162 = *((_QWORD *)a1 + 3);
    v166 = *(_QWORD *)(a2 + 24);
    CurrentProcessId = PsGetCurrentProcessId();
    v149 = v134;
    v126 = v158;
    v148 = Pitch;
    v62 = (VIDMM_GLOBAL_ALLOC *)v157;
    McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
      SwizzledFormat,
      &EventCreateAdapterAllocation,
      v140,
      (__int64)CurrentProcessId,
      v166,
      v162,
      v20,
      v158,
      v155,
      v145,
      a7,
      *(_BYTE *)&a9.0,
      v146,
      a8,
      a15,
      (char)v157,
      (char)v167,
      v147,
      v156[0],
      v154,
      Format,
      SwizzledFormat,
      ByteOffset,
      Width,
      Height,
      v148,
      Depth,
      SlicePitch,
      0,
      v149,
      v179,
      a18 != 0);
    v71 = a1;
  }
  if ( (unsigned int)Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline() )
  {
    _InterlockedAdd((volatile signed __int32 *)v71 + 1894, 1u);
    _InterlockedAdd64((volatile signed __int64 *)v71 + 948, v126);
    _InterlockedAdd64((volatile signed __int64 *)v71 + 5025, v126);
  }
  else
  {
    ++*((_DWORD *)v71 + 1894);
    *((_QWORD *)v71 + 948) += v126;
    *((_QWORD *)v71 + 5025) += v126;
  }
  v141 = *(_QWORD *)(a2 + 16);
  if ( v141 )
    VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT::AddAllocation(
      (VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT *)(v141 + 208),
      v126);
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v141) + 24) = v62;
    WdLogGlobalForLineNumber = 3704;
  }
  *a20 = v62;
  return 0LL;
}
