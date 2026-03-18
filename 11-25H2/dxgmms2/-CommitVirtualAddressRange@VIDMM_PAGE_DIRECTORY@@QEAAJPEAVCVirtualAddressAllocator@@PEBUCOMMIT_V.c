/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D03C0
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400BE2C0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CF2F8 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1400D00E0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D03C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x140034800 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140037174 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400B84A0 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@II_K1PEAUVIDMM_ALLOC@@@Z @ 0x1400B84C8 (-DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@II_K1PEA.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400B9124 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1400B9620 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400BA084 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400BA350 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@2IIPEAU_DXGK_PTE@@5II2W4_DXGK_PAGETABLEUPDATEMODE@@2U_DXGK_UPDATEPAGETABLEFLAGS@@2@Z @ 0x1400BA420 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_AL.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CF084 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CF2F8 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1400CF5A8 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CF680 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D03C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1400D1A80 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E2754 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1400E68BC (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1400E7850 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x140112778 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x1401142DC (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
        VIDMM_PAGE_DIRECTORY *this,
        struct VIDMM_PROCESS **a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        char a8,
        struct VIDMM_ALLOC **a9)
{
  struct VIDMM_ALLOC **v9; // r11
  struct _DXGK_PTE *v10; // r15
  struct CVirtualAddressAllocator *v11; // r12
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 result; // rax
  unsigned __int64 v16; // rbp
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  struct VIDMM_PROCESS *v19; // r14
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rbx
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v23; // rdi
  unsigned int v24; // ebx
  unsigned int v25; // r13d
  int v26; // r15d
  __int64 v27; // r12
  int v28; // r13d
  _QWORD *v29; // rdi
  char *VaPagingHistoryEntry; // rax
  __int128 v31; // xmm0
  int IsEnabledDeviceUsageNoInline; // eax
  _QWORD *v33; // rdi
  _QWORD *v34; // rax
  int v35; // eax
  __int64 v36; // rax
  char v37; // bp
  char v38; // al
  int v39; // ecx
  int v40; // ebx
  unsigned __int64 v41; // r10
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned int v46; // r11d
  struct COMMIT_VA_STATE *v47; // r14
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rax
  __int64 v50; // r13
  char v51; // di
  __int64 v52; // rbp
  unsigned __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rax
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v58; // rdx
  struct VIDMM_ALLOC **v59; // r8
  int v60; // ecx
  struct VIDMM_GLOBAL_ALLOC ***v61; // rdx
  int v62; // ecx
  int v63; // ecx
  unsigned __int8 v64; // al
  __int64 v65; // rcx
  unsigned int v66; // ecx
  int v67; // eax
  unsigned int v68; // r12d
  __int64 v69; // rdi
  char v70; // r12
  _DWORD *v71; // rax
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rdx
  __int64 v74; // r9
  unsigned int v75; // ecx
  __int64 v76; // rax
  __int64 v77; // r10
  unsigned __int64 v78; // r10
  _QWORD *v79; // r8
  bool v80; // zf
  __int64 v81; // r15
  _QWORD *v82; // rdi
  char v83; // bp
  unsigned __int8 v84; // r8
  unsigned __int8 v85; // r9
  _DWORD *v86; // rcx
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v88; // r9
  __int64 v89; // rcx
  bool v90; // dl
  int v91; // ecx
  bool v92; // r8
  unsigned __int64 v93; // rdi
  int v94; // eax
  unsigned int v95; // eax
  __int64 v96; // rcx
  __int64 v97; // rcx
  char v98; // di
  UINT64 v99; // r9
  unsigned __int64 v100; // rdx
  unsigned __int64 v101; // r12
  int v102; // eax
  int v103; // r11d
  VIDMM_PAGE_TABLE *v104; // rcx
  _DWORD *v105; // rax
  __int64 v106; // rax
  VIDMM_PAGE_TABLE *v107; // r10
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v108; // rax
  __int64 v109; // rax
  struct CVirtualAddressAllocator *v110; // rdi
  int v111; // eax
  bool v112; // dl
  _QWORD *v113; // r8
  __int64 v114; // rcx
  __int64 v115; // rcx
  int v116; // eax
  _QWORD *v117; // r8
  unsigned __int64 v118; // rdx
  _DWORD *v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r8
  VIDMM_PAGE_TABLE *v122; // rax
  __int64 v123; // rax
  __int64 v124; // r9
  _QWORD *v125; // r8
  _DWORD *v126; // rax
  __int64 v127; // rax
  VIDMM_PAGE_TABLE *v128; // rax
  __int64 v129; // rax
  __int64 v130; // rcx
  unsigned __int64 v131; // rdi
  enum _DXGK_PAGETABLEUPDATEMODE v132; // ecx
  void *v133; // rbx
  __int64 v134; // r8
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v135; // rbx
  unsigned int v136; // edx
  unsigned int v137; // r15d
  VIDMM_PAGE_TABLE *v138; // rax
  VIDMM_PAGE_TABLE *v139; // rbx
  unsigned __int64 *v140; // rax
  unsigned __int64 *v141; // rbx
  __int64 v142; // rcx
  struct VIDMM_GLOBAL_ALLOC *v143; // [rsp+28h] [rbp-150h]
  char v144; // [rsp+38h] [rbp-140h]
  struct VIDMM_ALLOC **v145; // [rsp+40h] [rbp-138h]
  LONG v146; // [rsp+80h] [rbp-F8h]
  char v147; // [rsp+90h] [rbp-E8h]
  unsigned __int8 v148[3]; // [rsp+91h] [rbp-E7h] BYREF
  unsigned int v149; // [rsp+94h] [rbp-E4h]
  char v150; // [rsp+98h] [rbp-E0h]
  char v151; // [rsp+99h] [rbp-DFh]
  int v152; // [rsp+9Ch] [rbp-DCh]
  char v153; // [rsp+A0h] [rbp-D8h]
  char v154; // [rsp+A1h] [rbp-D7h]
  int v155; // [rsp+A4h] [rbp-D4h]
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v156; // [rsp+A8h] [rbp-D0h]
  unsigned int v157; // [rsp+B0h] [rbp-C8h]
  unsigned int v158; // [rsp+B4h] [rbp-C4h]
  unsigned int v159; // [rsp+B8h] [rbp-C0h]
  unsigned int v160; // [rsp+BCh] [rbp-BCh]
  unsigned __int64 v161; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 v162; // [rsp+C8h] [rbp-B0h]
  unsigned __int64 v163; // [rsp+D0h] [rbp-A8h]
  unsigned __int64 v164; // [rsp+D8h] [rbp-A0h]
  VIDMM_GLOBAL *v165; // [rsp+E0h] [rbp-98h]
  VIDMM_PAGE_TABLE *v166; // [rsp+E8h] [rbp-90h]
  struct VIDMM_ALLOC *v167; // [rsp+F0h] [rbp-88h]
  VIDMM_PAGE_DIRECTORY *v168; // [rsp+F8h] [rbp-80h]
  unsigned __int64 v169; // [rsp+100h] [rbp-78h]
  struct VIDMM_GLOBAL_ALLOC *v170; // [rsp+108h] [rbp-70h]
  unsigned __int64 v171; // [rsp+110h] [rbp-68h] BYREF
  unsigned __int64 v172; // [rsp+118h] [rbp-60h]
  unsigned __int64 v173; // [rsp+120h] [rbp-58h]
  unsigned __int64 v174; // [rsp+128h] [rbp-50h]
  __int128 v175; // [rsp+130h] [rbp-48h] BYREF
  struct COMMIT_VA_STATE *v177; // [rsp+190h] [rbp+18h] BYREF
  unsigned __int64 v178; // [rsp+198h] [rbp+20h]

  v178 = a4;
  v177 = a3;
  v9 = a9;
  v10 = 0LL;
  v11 = (struct CVirtualAddressAllocator *)a2;
  v166 = 0LL;
  v168 = 0LL;
  v169 = a4;
  *a9 = 0LL;
  v13 = *(_QWORD *)a3 & 1LL;
  if ( (*(_QWORD *)a3 & 1) == 0 )
  {
    v14 = *((_QWORD *)this + 2);
    if ( !v14 || !*(_QWORD *)(*(_QWORD *)v14 + 64LL) || !*((_DWORD *)this + 1) )
      return 0LL;
  }
  if ( ((a7 | a5) & 0xFFF) != 0 )
  {
    WdLogSingleEntry2(1LL, a5, a7);
    WdLogGlobalForLineNumber = 6597;
    DxgkLogInternalTriageEvent(v142, 0x40000LL);
    return 3221225485LL;
  }
  v16 = a6;
  v174 = a5 >> 12;
  v171 = (a5 >> 12) + a6;
  if ( v171 <= a5 >> 12 )
  {
    WdLogSingleEntry2(1LL, (a5 >> 12) + a6, a5 >> 12);
    WdLogGlobalForLineNumber = 6615;
    DxgkLogInternalTriageEvent(v17, 0x40000LL);
    return 3221225485LL;
  }
  v18 = (unsigned __int64)a2[11];
  v19 = a2[12];
  v20 = *(_DWORD *)this;
  v21 = *(_QWORD *)(v18 + 40232);
  v22 = (*(_DWORD *)this >> 7) & 0x1F;
  v165 = (VIDMM_GLOBAL *)v18;
  v170 = 0LL;
  v167 = 0LL;
  *(_QWORD *)&v175 = *(_QWORD *)(v21 + 8 * v22);
  v23 = (struct VIDMM_PAGE_TABLE_LEVEL_DESC *)(48LL * (v20 & 7) + v175 + 128);
  v156 = v23;
  v162 = ((a5 >> 12) & *((_QWORD *)v23 + 2)) >> *((_QWORD *)v23 + 3);
  if ( (v20 & 0x10) == 0 )
  {
    v25 = *(_DWORD *)v23;
    v149 = *(_DWORD *)v23;
    goto LABEL_39;
  }
  v24 = *(_DWORD *)(32 * v22 + *((_QWORD *)v11 + 15) + 16);
  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
  {
    v25 = v24;
    v149 = v24;
    if ( !*(_QWORD *)(v18 + 41032) )
      goto LABEL_39;
  }
  else if ( !*(_QWORD *)(v18 + 40992) )
  {
    v25 = v24;
    v149 = v24;
    goto LABEL_39;
  }
  if ( v13 )
  {
    v26 = *((_DWORD *)a3 + 14);
    v27 = *((_QWORD *)a3 + 6);
    v28 = *((_DWORD *)a3 + 18);
    if ( !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled && (v80 = *(_QWORD *)(v18 + 40992) == 0LL, v149 = v24, v80) )
    {
      v10 = 0LL;
      v25 = v24;
    }
    else
    {
      v29 = (_QWORD *)(v18 + 41008);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v29, 0LL);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      v149 = v24;
      v80 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
      v29[1] = KeGetCurrentThread();
      if ( v80 )
        VaPagingHistoryEntry = (char *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(v165, 1LL, 72LL);
      else
        VaPagingHistoryEntry = (char *)operator new(72, (VIDMM_GLOBAL *)((char *)v165 + 41032), 1u, 0);
      if ( VaPagingHistoryEntry )
      {
        *((_DWORD *)VaPagingHistoryEntry + 17) = v26;
        v31 = *((_OWORD *)v177 + 2);
        *((_QWORD *)VaPagingHistoryEntry + 7) = v27;
        *(_OWORD *)(VaPagingHistoryEntry + 40) = v31;
        *((_QWORD *)VaPagingHistoryEntry + 1) = *((_QWORD *)v19 + 4);
        *(_QWORD *)VaPagingHistoryEntry = *(_QWORD *)v19;
        *((_QWORD *)VaPagingHistoryEntry + 4) = a7;
        *((_QWORD *)VaPagingHistoryEntry + 2) = a5;
        *((_DWORD *)VaPagingHistoryEntry + 16) = v28;
        *((_QWORD *)VaPagingHistoryEntry + 3) = v16 << 12;
      }
      IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      v25 = v149;
      v10 = 0LL;
      v29[1] = 0LL;
      if ( IsEnabledDeviceUsageNoInline )
        v149 = v25;
      ExReleasePushLockExclusiveEx(v29, 0LL);
      KeLeaveCriticalRegion();
      v9 = a9;
      v23 = v156;
    }
    v11 = (struct CVirtualAddressAllocator *)a2;
  }
  else if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || (v25 = v24, v149 = v24, *(_QWORD *)(v18 + 40992)) )
  {
    v33 = (_QWORD *)(v18 + 41008);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v33, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v149 = v24;
    v25 = v24;
    v80 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
    v33[1] = KeGetCurrentThread();
    if ( v80 )
      v34 = (_QWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(v165, 2LL, 32LL);
    else
      v34 = operator new(32, (VIDMM_GLOBAL *)((char *)v165 + 41032), 2u, 0);
    if ( v34 )
    {
      *v34 = *(_QWORD *)v19;
      v34[1] = *((_QWORD *)v19 + 4);
      v34[2] = a5;
      v34[3] = v16 << 12;
    }
    v35 = Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v33[1] = 0LL;
    if ( v35 )
      v149 = v24;
    ExReleasePushLockExclusiveEx(v33, 0LL);
    KeLeaveCriticalRegion();
    v9 = a9;
    v23 = v156;
  }
LABEL_39:
  v36 = *((_QWORD *)this + 2);
  v37 = 0;
  v158 = 0;
  v159 = 0;
  v147 = 0;
  if ( v36 && *(_QWORD *)(*(_QWORD *)v36 + 64LL) )
  {
    v38 = a8;
  }
  else
  {
    result = VIDMM_PAGE_DIRECTORY::CommitPageDirectory(this, v11, v9);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)this &= ~0x10000u;
    v38 = 1;
  }
  v39 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 0x10000) != 0 )
  {
    v40 = 0;
    if ( !v38 )
    {
      LODWORD(v41) = v162;
      goto LABEL_53;
    }
  }
  else
  {
    v40 = 2;
  }
  LODWORD(v41) = v162;
  if ( (_DWORD)v162 )
  {
    v42 = 0LL;
    v43 = (unsigned int)v162;
    do
    {
      v44 = *((_QWORD *)this + 5);
      v42 += 16LL;
      *(_QWORD *)(v42 + v44 - 16) = 0LL;
      *(_QWORD *)(v42 + v44 - 8) = 0LL;
      --v43;
    }
    while ( v43 );
    v39 = *(_DWORD *)this;
  }
  v37 = 1;
  v159 = v25;
  v147 = 1;
LABEL_53:
  v45 = v174;
  v46 = 0;
  v47 = v177;
  v48 = v174 & ~*((_QWORD *)v23 + 4);
  v49 = v48 + *((_QWORD *)v23 + 5);
  v172 = v48;
  v173 = v49;
  v163 = v174;
  v164 = v49;
  v153 = 0;
  v154 = 0;
  v160 = 0;
  if ( (v39 & 0x20) != 0 && *((_BYTE *)v177 + 77) )
  {
    if ( *((_BYTE *)v177 + 76) )
      v46 = v25;
    v160 = v46;
  }
  v152 = 0;
  if ( (unsigned int)v41 >= v25 )
  {
    v68 = 0;
    goto LABEL_225;
  }
  while ( 1 )
  {
    LOBYTE(v18) = 0;
    v50 = v46 + (unsigned int)v41;
    v51 = 0;
    v52 = v50;
    v157 = v46 + v41;
    v155 = v18;
    v148[0] = 0;
    v151 = 0;
    v150 = 0;
    if ( *((_BYTE *)v47 + 78) )
    {
      if ( (*(_DWORD *)this & 0x20) != 0 )
      {
        if ( (_DWORD)v50 == (_DWORD)v41 )
          v52 = (unsigned int)v50 + v149;
        else
          v52 = (unsigned int)v41;
        v51 = 1;
        v157 = v52;
        v150 = 1;
      }
      v49 = v164;
    }
    if ( v49 >= v171 )
    {
      v49 = v171;
      v164 = v171;
      v153 = 1;
    }
    v53 = v49 - v45;
    v54 = *(_QWORD *)v47;
    v161 = v53;
    if ( (v54 & 1) == 0 )
    {
      v55 = *((_QWORD *)this + 5);
      if ( (*(_BYTE *)(v55 + 16LL * (unsigned int)v50) & 1) == 0
        && (*(_BYTE *)(v55 + 16LL * (unsigned int)v52) & 1) == 0 )
      {
        goto LABEL_218;
      }
    }
    if ( (v54 & 2) == 0 )
      goto LABEL_79;
    v56 = *((_QWORD *)this + 5);
    if ( (*(_BYTE *)(v56 + 16LL * (unsigned int)v50) & 2) == 0 )
      break;
    v57 = (unsigned int)v50;
LABEL_77:
    if ( (_DWORD)v57 == -1 || ((*(_BYTE *)(v56 + 16 * v57) ^ (unsigned __int8)v54) & 8) != 0 )
      goto LABEL_79;
LABEL_218:
    v41 = (unsigned int)(v41 + 1);
    v23 = v156;
    v45 = v164;
    v25 = v149;
    v48 = v164;
    v18 = v53 << 12;
    a7 += v18;
    v169 += v18;
    v163 = v164;
    v172 = v164;
    v49 = *((_QWORD *)v156 + 5) + v164;
    v162 = v41;
    v164 = v49;
    v173 = v49;
    if ( v153 || (unsigned int)v41 >= v149 )
      goto LABEL_223;
    v11 = (struct CVirtualAddressAllocator *)a2;
  }
  if ( v51 && (*(_BYTE *)(v56 + 16LL * (unsigned int)v52) & 2) != 0 )
  {
    v57 = (unsigned int)v52;
    goto LABEL_77;
  }
LABEL_79:
  v58 = v156;
  if ( *((_QWORD *)v156 + 5) <= v53 && (*((_DWORD *)v11 + 36) & 4) == 0 )
  {
    if ( VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
           this,
           v11,
           *(const struct _DXGK_GPUMMUCAPS **)(v175 + 480),
           v47,
           v156,
           v46 + v41,
           v52,
           v144,
           a7,
           v148,
           (unsigned __int8 *)v47 + 81) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)this + 5) + 16LL * (unsigned int)v50) & 0x400LL) == 0 )
        goto LABEL_98;
      v59 = (struct VIDMM_ALLOC **)*((_QWORD *)v47 + 6);
      v60 = *((_DWORD *)v47 + 14);
      v61 = (struct VIDMM_GLOBAL_ALLOC ***)v59;
      v170 = (struct VIDMM_GLOBAL_ALLOC *)v59;
      v167 = (struct VIDMM_ALLOC *)v59;
      if ( v60 == 3 )
        goto LABEL_97;
      if ( v60 == 1 )
        goto LABEL_89;
      if ( v60 != 4 )
      {
        if ( v60 == 5 )
        {
          v61 = (struct VIDMM_GLOBAL_ALLOC ***)v59[3];
          goto LABEL_89;
        }
        goto LABEL_91;
      }
      v61 = (struct VIDMM_GLOBAL_ALLOC ***)v59[7];
LABEL_89:
      if ( v61 )
        v170 = **v61;
      else
LABEL_91:
        v170 = 0LL;
      v62 = v60 - 1;
      if ( v62 )
      {
        v63 = v62 - 3;
        if ( v63 )
        {
          if ( v63 == 1 )
          {
            v64 = v148[0];
            v167 = v59[3];
            v154 = 1;
            goto LABEL_190;
          }
LABEL_97:
          v167 = 0LL;
          goto LABEL_98;
        }
        v64 = v148[0];
        v167 = v59[7];
        v154 = 1;
      }
      else
      {
LABEL_98:
        v64 = v148[0];
        v154 = 1;
      }
LABEL_190:
      if ( v64 )
      {
LABEL_191:
        LODWORD(v41) = v162;
        if ( !v147 )
        {
          v147 = 1;
          v158 = v162;
        }
        v53 = v161;
        if ( (unsigned int)v162 >= v159 )
          v159 = v162 + 1;
      }
      else
      {
        v53 = v161;
        LODWORD(v41) = v162;
      }
      v46 = v160;
      goto LABEL_218;
    }
    v48 = v172;
    v53 = v161;
    v58 = v156;
    v155 = v148[0];
  }
  v65 = *((_QWORD *)this + 5);
  if ( (*(_DWORD *)(v65 + 16LL * (unsigned int)v50) & 0x400LL) != 0 )
  {
    v66 = v50;
LABEL_105:
    if ( *((_QWORD *)v58 + 5) <= v53 )
    {
      v69 = v66;
      ExFreeToPagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)v11 + 11) + 40256LL),
        *(PVOID *)(*((_QWORD *)this + 6) + 8LL * v66));
      *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v69) = 0LL;
      v69 *= 2LL;
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v69) &= ~0x400uLL;
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v69) &= ~1uLL;
      --*((_DWORD *)this + 1);
    }
    else
    {
      v67 = VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(this, v11, v58, *((_BYTE *)v47 + 77), v48 << 12, v66, a9);
      v68 = v67;
      v152 = v67;
      if ( v67 < 0 )
      {
        WdLogSingleEntry1(3LL, v67);
        v25 = v149;
        v23 = v156;
        WdLogGlobalForLineNumber = 6858;
        goto LABEL_224;
      }
    }
    v51 = v150;
    v151 = 1;
  }
  else if ( v51 && (*(_DWORD *)(v65 + 16LL * (unsigned int)v52) & 0x400LL) != 0 )
  {
    v66 = v52;
    goto LABEL_105;
  }
  v70 = *((_BYTE *)v47 + 76);
  if ( (*(_DWORD *)this & 0x20) != 0 && !*((_DWORD *)v47 + 18) && v70 )
  {
    if ( !*((_BYTE *)v47 + 77) )
    {
      v71 = *(_DWORD **)(*((_QWORD *)this + 6) + 8 * v50);
      if ( v71 )
      {
        if ( v71[1] && (*v71 & 0x40) == 0 )
          goto LABEL_142;
      }
    }
    if ( (v161 & 0xF) != 0 )
      goto LABEL_142;
    v72 = *((unsigned int *)v47 + 8);
    v73 = a7 >> 12;
    if ( a7 >> 12 >= v72 )
      goto LABEL_142;
    if ( (*((_DWORD *)v47 + 9) & 1) != 0 )
      goto LABEL_128;
    v74 = *((_QWORD *)v47 + 5);
    v75 = v72 - v73;
    v76 = (unsigned int)v73;
    v77 = (unsigned int)v161;
    if ( v75 <= (unsigned int)v161 )
      v77 = v75;
    v78 = v73 + v77;
    if ( (unsigned int)v73 >= v78 )
    {
LABEL_128:
      v70 = 1;
    }
    else
    {
      while ( 1 )
      {
        v79 = (_QWORD *)(v74 + 8 * v76);
        v80 = (v73 & 0xF) != 0
            ? *v79 == *(_QWORD *)(v74 + 8LL * (unsigned int)(v73 - 1)) + 1LL
            : (*(_BYTE *)v79 & 0xF) == 0;
        if ( !v80 )
          break;
        LODWORD(v73) = v73 + 1;
        v76 = (unsigned int)v73;
        if ( (unsigned int)v73 >= v78 )
          goto LABEL_128;
      }
LABEL_142:
      v70 = 0;
      LODWORD(v50) = v162;
      if ( v51 )
      {
        v52 = (unsigned int)v162 + v149;
        v157 = v162 + v149;
      }
    }
  }
  if ( (*(_BYTE *)v47 & 1) != 0 || (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * (unsigned int)v50) & 2) != 0 )
  {
    v81 = 8LL * (unsigned int)v50;
    if ( *(_QWORD *)(v81 + *((_QWORD *)this + 6)) )
    {
      v47 = v177;
    }
    else
    {
      v82 = (_QWORD *)((char *)this + 48);
      v83 = 0;
      if ( ((_DWORD)a2[18] & 4) != 0 && a5 < *((_QWORD *)v165 + 5122) )
      {
        v83 = 1;
        v82 = (_QWORD *)((char *)this + 48);
      }
      if ( (*(_DWORD *)this & 0x20) != 0 )
      {
        v47 = v177;
        if ( *((_DWORD *)v177 + 18) != -3 )
        {
          v82 = (_QWORD *)((char *)this + 48);
          if ( !v70 )
          {
            v84 = 0;
            goto LABEL_139;
          }
        }
        v84 = 1;
        if ( *((_BYTE *)v177 + 77) )
LABEL_139:
          v85 = 0;
        else
          v85 = 1;
        *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * (unsigned int)v50) = CreatePageTable(
                                                                         (struct CVirtualAddressAllocator *)a2,
                                                                         (*(_DWORD *)this >> 7) & 0x1F,
                                                                         v84,
                                                                         v85);
        if ( v83 )
        {
          v86 = *(_DWORD **)(*((_QWORD *)this + 6) + 8LL * (unsigned int)v50);
          goto LABEL_148;
        }
      }
      else
      {
        PageDirectory = CreatePageDirectory(
                          (struct CVirtualAddressAllocator *)a2,
                          (*(_DWORD *)this >> 7) & 0x1F,
                          (*(_DWORD *)this & 7u) - 1);
        v47 = v177;
        *(_QWORD *)(v81 + *((_QWORD *)this + 6)) = PageDirectory;
        if ( v83 )
        {
          v86 = *(_DWORD **)(v81 + *v82);
LABEL_148:
          *v86 |= 0x80000u;
        }
      }
      if ( !*(_QWORD *)(*v82 + 8LL * (unsigned int)v50) )
      {
        WdLogSingleEntry0(1LL);
        v10 = 0LL;
        WdLogGlobalForLineNumber = 6971;
        DxgkLogInternalTriageEvent(v130, 0x40000LL);
        v25 = v149;
        v68 = -1073741801;
        v23 = v156;
        goto LABEL_224;
      }
      v52 = v157;
    }
    v10 = 0LL;
  }
  v88 = *((_QWORD *)this + 5);
  v89 = *(_QWORD *)(v88 + 16LL * (unsigned int)v50);
  v90 = (v89 & 1) == 0;
  v91 = v89 & 2;
  if ( !v91 )
  {
    v92 = v90;
    if ( !v150 || (*(_BYTE *)(v88 + 16LL * (unsigned int)v52) & 2) == 0 )
    {
      v93 = v161;
      goto LABEL_163;
    }
  }
  v93 = v161;
  if ( *((_QWORD *)v156 + 5) <= v161 )
  {
    v151 = 1;
    v95 = v52;
    v92 = v90;
    if ( v91 )
      v95 = v50;
    v96 = 2LL * v95;
    *(_QWORD *)(v88 + 8 * v96) &= ~2uLL;
    *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v96) &= ~1uLL;
    --*((_DWORD *)this + 1);
LABEL_163:
    v97 = 8LL * (unsigned int)v50;
    if ( (*(_DWORD *)this & 0x20) != 0 )
    {
      if ( (*(_BYTE *)v47 & 1) != 0 )
      {
        v98 = *((_BYTE *)v47 + 76);
        v99 = v169;
        v145 = a9;
        v100 = a7;
        *((_BYTE *)v47 + 76) = v70;
        ++*((_DWORD *)this + 1);
        v101 = v163;
        v102 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
                 *(VIDMM_PAGE_TABLE **)(v97 + *((_QWORD *)this + 6)),
                 (struct CVirtualAddressAllocator *)a2,
                 v47,
                 v99,
                 v163 << 12,
                 v161,
                 v100,
                 v92,
                 v145);
        *((_BYTE *)v47 + 76) = v98;
        v103 = v102;
        --*((_DWORD *)this + 1);
        v152 = v102;
      }
      else
      {
        v101 = v163;
        v104 = *(VIDMM_PAGE_TABLE **)(v97 + *((_QWORD *)this + 6));
        if ( v104 && *((_DWORD *)v104 + 1) )
        {
          v103 = VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(
                   v104,
                   (struct CVirtualAddressAllocator *)a2,
                   v47,
                   v163 << 12,
                   v93);
          v152 = v103;
        }
        else
        {
          v103 = v152;
        }
      }
      if ( *((_BYTE *)v47 + 78) )
      {
        if ( v103 < 0 )
          goto LABEL_222;
        if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 16 * v52) & 1) != 0 )
        {
          v152 = VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(
                   *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 6) + 8 * v52),
                   (struct CVirtualAddressAllocator *)a2,
                   v47,
                   v101 << 12,
                   v161);
          v103 = v152;
          if ( v152 < 0 )
            goto LABEL_222;
          v105 = *(_DWORD **)(*((_QWORD *)this + 6) + 8 * v52);
          if ( !v105[1] && (*v105 & 0x80000) == 0 )
          {
            --*((_DWORD *)this + 1);
            v106 = *((_QWORD *)this + 5);
            v107 = v166;
            *(_QWORD *)(v106 + 16 * v52) = 0LL;
            *(_QWORD *)(v106 + 16 * v52 + 8) = 0LL;
            LOBYTE(v106) = 1;
            v155 = v106;
            v148[0] = 1;
            v108 = v156;
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v52) + 48LL) = v107;
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v52) + 8LL) = v101 & ~*((_QWORD *)v108 + 4);
            v109 = *((_QWORD *)this + 6);
            v166 = *(VIDMM_PAGE_TABLE **)(v109 + 8 * v52);
            *(_QWORD *)(v109 + 8 * v52) = 0LL;
          }
        }
      }
      v110 = (struct CVirtualAddressAllocator *)a2;
    }
    else
    {
      ++*((_DWORD *)this + 1);
      v101 = v163;
      v143 = (struct VIDMM_GLOBAL_ALLOC *)v93;
      v110 = (struct CVirtualAddressAllocator *)a2;
      v111 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
               *(VIDMM_PAGE_DIRECTORY **)(v97 + *((_QWORD *)this + 6)),
               (struct CVirtualAddressAllocator *)a2,
               v47,
               v169,
               v163 << 12,
               (unsigned __int64)v143,
               a7,
               v92,
               a9);
      --*((_DWORD *)this + 1);
      v103 = v111;
      v152 = v111;
    }
    if ( v103 < 0 )
    {
LABEL_222:
      WdLogSingleEntry0(3LL);
      v25 = v149;
      v23 = v156;
      WdLogGlobalForLineNumber = 7110;
LABEL_223:
      v68 = v152;
      goto LABEL_224;
    }
    if ( (*(_BYTE *)v47 & 1) != 0 )
    {
      v112 = (*(_DWORD *)this & 0x20) != 0
          && !*((_BYTE *)v47 + 77)
          && ((**(_DWORD **)(*((_QWORD *)this + 6) + 8LL * (unsigned int)v50) >> 6) & 1) != ((*(_DWORD *)(*((_QWORD *)this + 5) + 16LL * (unsigned int)v50) & 0x60000) == 0x20000LL);
      v113 = (_QWORD *)(*((_QWORD *)this + 5) + 16LL * (unsigned int)v50);
      if ( (*v113 & 1) != 0 )
      {
        if ( !v112 && !v151 )
          goto LABEL_189;
      }
      else
      {
        *v113 |= 1uLL;
        ++*((_DWORD *)this + 1);
      }
      v114 = 2LL * (unsigned int)v50;
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v114) &= ~0x400uLL;
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v114) &= ~2uLL;
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v114) &= ~8uLL;
      if ( v150 )
      {
        v115 = 2LL * v157;
        *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v115) &= ~0x400uLL;
        *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v115) &= ~2uLL;
        *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v115) &= ~8uLL;
      }
      VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, v110, v50);
      v148[0] = 1;
      goto LABEL_191;
    }
    v116 = (unsigned __int8)v155;
    if ( v151 )
      v116 = 1;
    v117 = (_QWORD *)(*((_QWORD *)this + 5) + 16LL * (unsigned int)v50);
    v155 = v116;
    v148[0] = v116;
    v118 = v101 & ~*((_QWORD *)v156 + 4);
    if ( (*(_BYTE *)v117 & 1) != 0 )
    {
      v119 = *(_DWORD **)(*((_QWORD *)this + 6) + 8LL * (unsigned int)v50);
      if ( !v119[1] && (*v119 & 0x80000) == 0 )
      {
        --*((_DWORD *)this + 1);
        *v117 = 0LL;
        v117[1] = 0LL;
        v120 = 8LL * (unsigned int)v50;
        v121 = *(_QWORD *)(v120 + *((_QWORD *)this + 6));
        if ( (*(_DWORD *)this & 0x20) != 0 )
        {
          *(_QWORD *)(v121 + 48) = v166;
          v122 = *(VIDMM_PAGE_TABLE **)(v120 + *((_QWORD *)this + 6));
          v166 = v122;
        }
        else
        {
          *(_QWORD *)(v121 + 32) = v168;
          v122 = *(VIDMM_PAGE_TABLE **)(v120 + *((_QWORD *)this + 6));
          v168 = v122;
        }
        *((_QWORD *)v122 + 1) = v118;
        v123 = *((_QWORD *)this + 6);
        *(_QWORD *)(v120 + v123) = 0LL;
        LOBYTE(v123) = 1;
        v155 = v123;
        v148[0] = 1;
      }
    }
    if ( v157 != (_DWORD)v50 )
    {
      v124 = v157;
      v125 = (_QWORD *)(*((_QWORD *)this + 5) + 16LL * v157);
      if ( (*(_BYTE *)v125 & 1) != 0 )
      {
        v126 = *(_DWORD **)(*((_QWORD *)this + 6) + 8LL * v157);
        if ( !v126[1] && (*v126 & 0x80000) == 0 )
        {
          --*((_DWORD *)this + 1);
          *v125 = 0LL;
          v125[1] = 0LL;
          v127 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v124);
          if ( (*(_DWORD *)this & 0x20) != 0 )
          {
            *(_QWORD *)(v127 + 48) = v166;
            v128 = *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 6) + 8 * v124);
            v166 = v128;
          }
          else
          {
            *(_QWORD *)(v127 + 32) = v168;
            v128 = *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 6) + 8 * v124);
            v168 = v128;
          }
          *((_QWORD *)v128 + 1) = v118;
          v129 = *((_QWORD *)this + 6);
          v148[0] = 1;
          *(_QWORD *)(v129 + 8 * v124) = 0LL;
          goto LABEL_191;
        }
      }
    }
LABEL_189:
    v64 = v155;
    goto LABEL_190;
  }
  v94 = VIDMM_PAGE_DIRECTORY::ExpandZeroPte(
          this,
          (struct CVirtualAddressAllocator *)a2,
          v47,
          v50,
          v52,
          v163,
          v164,
          v172,
          v173,
          a9);
  v152 = v94;
  if ( v94 >= 0 )
  {
    v92 = 0;
    v151 = 1;
    goto LABEL_163;
  }
  v25 = v149;
  v68 = v94;
  v23 = v156;
LABEL_224:
  v37 = v147;
LABEL_225:
  if ( v37 )
  {
    LODWORD(v177) = 0;
    v171 = 0LL;
    v175 = 0LL;
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                this,
                (struct CVirtualAddressAllocator *)a2,
                (unsigned int *)&v177,
                &v171,
                (struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *)&v175) < 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 7247;
      v68 = -1073741823;
      goto LABEL_244;
    }
    v131 = *((_QWORD *)v156 + 5) * v158 + ((a5 >> 12) & ~(*((_QWORD *)v23 + 2) | *((_QWORD *)v23 + 4)));
    if ( *((_BYTE *)v165 + 40940) )
      v132 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v132 = (int)(*(_DWORD *)this << 16) >> 29;
    if ( *((_BYTE *)v47 + 77) && (*(_DWORD *)this & 0x20) != 0 )
      v10 = (struct _DXGK_PTE *)(*((_QWORD *)this + 5) + 16LL * (v158 + v25));
    v146 = v40;
    v133 = (void *)v171;
    VIDMM_GLOBAL::UpdatePageTable(
      v165,
      this,
      a2[12],
      *((_QWORD *)v47 + 2),
      v167,
      v170,
      v178 + (v131 << 12) - (v174 << 12),
      v158,
      v159 - v158,
      (struct _DXGK_PTE *)(*((_QWORD *)this + 5) + 16LL * v158),
      v10,
      (*(_DWORD *)this >> 7) & 0x1F,
      (UINT)v177,
      v171,
      v132,
      v131,
      v146,
      *((_QWORD *)v47 + 11));
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
      this,
      (struct CVirtualAddressAllocator *)a2,
      v134,
      v133,
      (struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *)&v175);
    v135 = v156;
    v136 = *(_DWORD *)this | 0x10000;
    v80 = v154 == 0;
    *(_DWORD *)this = v136;
    if ( !v80 )
    {
      CVirtualAddressAllocator::FlushGpuVaTlb(
        (CVirtualAddressAllocator *)a2,
        (v136 >> 7) & 0x1F,
        v131 << 12,
        (v131 + *((_QWORD *)v135 + 5)) << 12);
      v137 = v159;
      VIDMM_PAGE_DIRECTORY::DestroyDisconnectedPageTables(
        this,
        (struct CVirtualAddressAllocator *)a2,
        v158,
        v159,
        v131,
        *((_QWORD *)v135 + 5),
        *a9);
      if ( *((_BYTE *)v47 + 77) )
      {
        if ( (*(_DWORD *)this & 0x20) != 0 )
          VIDMM_PAGE_DIRECTORY::DestroyDisconnectedPageTables(
            this,
            (struct CVirtualAddressAllocator *)a2,
            v25 + v158,
            v137 + v25,
            v131,
            *((_QWORD *)v135 + 5),
            *a9);
      }
    }
  }
  else
  {
    v135 = v156;
  }
  if ( !*((_DWORD *)this + 1) && ((_DWORD)a2[18] & 4) == 0 )
    VIDMM_PAGE_DIRECTORY::EvictPageDirectory(this, a2, a5 & ~*((_QWORD *)v135 + 4), 1u, 1);
LABEL_244:
  v138 = v166;
  if ( v166 )
  {
    do
    {
      v139 = (VIDMM_PAGE_TABLE *)*((_QWORD *)v138 + 6);
      VIDMM_PAGE_TABLE::DestroyPageTable(
        (struct VIDMM_GLOBAL_ALLOC **)v138,
        (struct CVirtualAddressAllocator *)a2,
        *((_QWORD *)v138 + 1));
      v138 = v139;
    }
    while ( v139 );
  }
  v140 = (unsigned __int64 *)v168;
  if ( v168 )
  {
    do
    {
      v141 = (unsigned __int64 *)v140[4];
      VIDMM_PAGE_DIRECTORY::DestroyPageDirectory((VIDMM_PAGE_DIRECTORY *)v140, (PRKPROCESS **)a2, v140[1]);
      v140 = v141;
    }
    while ( v141 );
  }
  return v68;
}
