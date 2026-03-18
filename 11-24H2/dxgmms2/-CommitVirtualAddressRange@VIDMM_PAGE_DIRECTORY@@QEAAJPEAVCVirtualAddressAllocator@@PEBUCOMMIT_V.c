/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F28C0
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400ADD10 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F1CA8 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1400F25E8 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F28C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x140033150 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140035D1C (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x140036420 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400365BC (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400A9D98 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@II_K1PEAUVIDMM_ALLOC@@@Z @ 0x1400A9DC0 (-DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@II_K1PEA.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400AAB2C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1400AB020 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400ABA84 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400ABD50 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@2IIPEAU_DXGK_PTE@@5II2W4_DXGK_PAGETABLEUPDATEMODE@@2U_DXGK_UPDATEPAGETABLEFLAGS@@2@Z @ 0x1400ABE20 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_AL.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400B0FB0 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1400CD6C0 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1400DA9AC (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1400DB930 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F1CA8 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1400F1F58 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F2030 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F28C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x140111560 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x140114090 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x1401145EC (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
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
  struct _DXGK_PTE *v9; // r15
  struct CVirtualAddressAllocator *v11; // r12
  __int64 v13; // rax
  __int64 result; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r9d
  unsigned int v19; // ecx
  __int64 v20; // rax
  _QWORD *v21; // r14
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v22; // rdi
  unsigned __int64 v23; // rbp
  __int64 v24; // r9
  VIDMM_GLOBAL *v25; // r11
  __int64 v26; // r10
  __int64 v27; // r11
  int v28; // ebp
  __int64 v29; // r15
  int v30; // r12d
  __int64 v31; // rdi
  char *VaPagingHistoryEntry; // rax
  __int128 v33; // xmm0
  __int64 v34; // rdi
  _QWORD *v35; // rax
  __int64 v36; // rax
  char v37; // r13
  char v38; // al
  int v39; // ecx
  int v40; // ebx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned int v44; // r10d
  unsigned __int64 v45; // rdx
  unsigned int v46; // r11d
  struct COMMIT_VA_STATE *v47; // r14
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rax
  __int64 v50; // r13
  unsigned int v51; // edi
  unsigned __int64 v52; // rbp
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rax
  struct VIDMM_ALLOC **v57; // r8
  int v58; // ecx
  struct VIDMM_GLOBAL_ALLOC ***v59; // rdx
  int v60; // ecx
  int v61; // ecx
  unsigned __int8 v62; // al
  __int64 v63; // rcx
  char v64; // r11
  unsigned int v65; // ecx
  int v66; // eax
  unsigned int v67; // r12d
  __int64 v68; // rdi
  char v69; // r12
  _DWORD *v70; // rax
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // rdx
  __int64 v73; // r9
  unsigned int v74; // ecx
  __int64 v75; // rax
  __int64 v76; // r10
  unsigned __int64 v77; // r10
  _QWORD *v78; // r8
  bool v79; // zf
  __int64 v80; // r15
  _QWORD *v81; // rdi
  char v82; // bp
  unsigned __int8 v83; // r8
  char v84; // r9
  _DWORD *v85; // rcx
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v87; // rcx
  __int64 v88; // rbp
  __int64 v89; // rcx
  bool v90; // dl
  int v91; // ecx
  char v92; // r8
  unsigned __int64 v93; // rdi
  int v94; // eax
  unsigned int v95; // eax
  __int64 v96; // rcx
  __int64 v97; // rcx
  char v98; // di
  unsigned __int64 v99; // r9
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
  int v114; // eax
  __int64 v115; // rcx
  __int64 v116; // rcx
  int v117; // eax
  _QWORD *v118; // r8
  unsigned __int64 v119; // rdx
  _DWORD *v120; // rax
  __int64 v121; // rcx
  __int64 v122; // r8
  VIDMM_PAGE_TABLE *v123; // rax
  __int64 v124; // rax
  _QWORD *v125; // r8
  _DWORD *v126; // rax
  __int64 v127; // rax
  VIDMM_PAGE_TABLE *v128; // rax
  __int64 v129; // rax
  unsigned __int64 v130; // rbp
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v131; // r13
  unsigned __int64 v132; // rdi
  enum _DXGK_PAGETABLEUPDATEMODE v133; // ecx
  void *v134; // rbx
  __int64 v135; // r8
  unsigned int v136; // edx
  struct VIDMM_ALLOC **v137; // r15
  unsigned int v138; // ebx
  VIDMM_PAGE_TABLE *v139; // rax
  VIDMM_PAGE_TABLE *v140; // rbx
  unsigned __int64 *v141; // rax
  unsigned __int64 *v142; // rbx
  __int64 v143; // rcx
  char v144; // [rsp+38h] [rbp-140h]
  struct VIDMM_ALLOC **v145; // [rsp+40h] [rbp-138h]
  LONG v146; // [rsp+80h] [rbp-F8h]
  char v147; // [rsp+90h] [rbp-E8h]
  unsigned __int8 v148; // [rsp+91h] [rbp-E7h] BYREF
  char v149; // [rsp+92h] [rbp-E6h]
  char v150; // [rsp+93h] [rbp-E5h]
  int v151; // [rsp+94h] [rbp-E4h]
  char v152; // [rsp+98h] [rbp-E0h]
  char v153; // [rsp+99h] [rbp-DFh]
  int v154; // [rsp+9Ch] [rbp-DCh]
  unsigned int v155; // [rsp+A0h] [rbp-D8h]
  unsigned int NumPde; // [rsp+A4h] [rbp-D4h]
  unsigned int v157; // [rsp+A8h] [rbp-D0h]
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v158; // [rsp+B0h] [rbp-C8h]
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
  v9 = 0LL;
  v166 = 0LL;
  v11 = (struct CVirtualAddressAllocator *)a2;
  v168 = 0LL;
  v169 = a4;
  *a9 = 0LL;
  if ( (*(_QWORD *)a3 & 1) == 0 )
  {
    v13 = *((_QWORD *)this + 2);
    if ( !v13 || !*(_QWORD *)(*(_QWORD *)v13 + 64LL) || !*((_DWORD *)this + 1) )
      return 0LL;
  }
  if ( ((a7 | a5) & 0xFFF) != 0 )
  {
    WdLogSingleEntry2(1LL, a5, a7);
    WdLogGlobalForLineNumber = 7127;
    DxgkLogInternalTriageEvent(v143, 0x40000LL);
    return 3221225485LL;
  }
  v15 = a6;
  v16 = a5 >> 12;
  v173 = v16;
  v171 = (a5 >> 12) + a6;
  if ( v16 + a6 <= v16 )
  {
    WdLogSingleEntry2(1LL, v16 + a6, v16);
    WdLogGlobalForLineNumber = 7145;
    DxgkLogInternalTriageEvent(v17, 0x40000LL);
    return 3221225485LL;
  }
  v18 = *(_DWORD *)this;
  v19 = (*(_DWORD *)this >> 7) & 0x1F;
  v20 = *(_QWORD *)(*((_QWORD *)v11 + 11) + 40232LL);
  v21 = (_QWORD *)*((_QWORD *)v11 + 12);
  v165 = (VIDMM_GLOBAL *)*((_QWORD *)v11 + 11);
  v170 = 0LL;
  *(_QWORD *)&v175 = *(_QWORD *)(v20 + 8LL * v19);
  v167 = 0LL;
  v22 = (struct VIDMM_PAGE_TABLE_LEVEL_DESC *)(48LL * (v18 & 7) + v175 + 128);
  v158 = v22;
  v23 = (v16 & *((_QWORD *)v22 + 2)) >> *((_QWORD *)v22 + 3);
  v161 = v23;
  NumPde = CVirtualAddressAllocator::GetNumPde(v11, this);
  if ( (v24 & 0x10) != 0 && VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(v25) )
  {
    if ( v26 )
    {
      v28 = *((_DWORD *)a3 + 14);
      v29 = *((_QWORD *)a3 + 6);
      v30 = *((_DWORD *)a3 + 18);
      if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *(_QWORD *)(v27 + 40992) )
      {
        v31 = v27 + 41008;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v31, 0LL);
        v79 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
        *(_QWORD *)(v31 + 8) = KeGetCurrentThread();
        if ( v79 )
          VaPagingHistoryEntry = (char *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(v165, 1LL, 72LL);
        else
          VaPagingHistoryEntry = (char *)operator new(72, (VIDMM_GLOBAL *)((char *)v165 + 41032), 1u, 0);
        if ( VaPagingHistoryEntry )
        {
          *((_DWORD *)VaPagingHistoryEntry + 17) = v28;
          v33 = *((_OWORD *)a3 + 2);
          *((_QWORD *)VaPagingHistoryEntry + 7) = v29;
          *(_OWORD *)(VaPagingHistoryEntry + 40) = v33;
          *((_QWORD *)VaPagingHistoryEntry + 1) = v21[4];
          *(_QWORD *)VaPagingHistoryEntry = *v21;
          *((_QWORD *)VaPagingHistoryEntry + 4) = a7;
          *((_QWORD *)VaPagingHistoryEntry + 2) = a5;
          *((_DWORD *)VaPagingHistoryEntry + 16) = v30;
          *((_QWORD *)VaPagingHistoryEntry + 3) = v15 << 12;
        }
        v9 = 0LL;
        *(_QWORD *)(v31 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v31, 0LL);
        KeLeaveCriticalRegion();
        v22 = v158;
      }
      else
      {
        v9 = 0LL;
      }
      LODWORD(v23) = v161;
      v11 = (struct CVirtualAddressAllocator *)a2;
    }
    else if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *(_QWORD *)(v27 + 40992) )
    {
      v34 = v27 + 41008;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v34, 0LL);
      v79 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
      *(_QWORD *)(v34 + 8) = KeGetCurrentThread();
      if ( v79 )
        v35 = (_QWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(v165, 2LL, 32LL);
      else
        v35 = operator new(32, (VIDMM_GLOBAL *)((char *)v165 + 41032), 2u, 0);
      if ( v35 )
      {
        *v35 = *v21;
        v35[1] = v21[4];
        v35[2] = a5;
        v35[3] = v15 << 12;
      }
      *(_QWORD *)(v34 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v34, 0LL);
      KeLeaveCriticalRegion();
      v22 = v158;
    }
  }
  v36 = *((_QWORD *)this + 2);
  v37 = 0;
  v157 = 0;
  v159 = 0;
  v147 = 0;
  if ( v36 && *(_QWORD *)(*(_QWORD *)v36 + 64LL) )
  {
    v38 = a8;
  }
  else
  {
    result = VIDMM_PAGE_DIRECTORY::CommitPageDirectory((struct VIDMM_ALLOC **)this, v11, a9);
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
      v44 = NumPde;
      goto LABEL_44;
    }
  }
  else
  {
    v40 = 2;
  }
  if ( (_DWORD)v23 )
  {
    v41 = 0LL;
    v42 = (unsigned int)v23;
    do
    {
      v43 = *((_QWORD *)this + 5);
      v41 += 16LL;
      *(_QWORD *)(v41 + v43 - 16) = 0LL;
      *(_QWORD *)(v41 + v43 - 8) = 0LL;
      --v42;
    }
    while ( v42 );
    v39 = *(_DWORD *)this;
  }
  v44 = NumPde;
  v37 = 1;
  v147 = 1;
  v159 = NumPde;
LABEL_44:
  v45 = v173;
  v46 = 0;
  v47 = v177;
  v48 = v173 & ~*((_QWORD *)v22 + 4);
  v49 = v48 + *((_QWORD *)v22 + 5);
  v172 = v48;
  v174 = v49;
  v163 = v173;
  v164 = v49;
  v152 = 0;
  v153 = 0;
  v160 = 0;
  if ( (v39 & 0x20) != 0 && *((_BYTE *)v177 + 77) )
  {
    if ( *((_BYTE *)v177 + 76) )
      v46 = v44;
    v160 = v46;
  }
  v151 = 0;
  if ( (unsigned int)v23 >= v44 )
  {
    v67 = 0;
    goto LABEL_215;
  }
  while ( 1 )
  {
    LOBYTE(v24) = 0;
    v50 = v46 + (unsigned int)v23;
    v51 = v46 + v23;
    v154 = v24;
    v148 = 0;
    v150 = 0;
    v149 = 0;
    v155 = v46 + v23;
    if ( *((_BYTE *)v47 + 78) )
    {
      if ( (*(_DWORD *)this & 0x20) != 0 )
      {
        v51 = v44 + v50;
        if ( (_DWORD)v50 != (_DWORD)v23 )
          v51 = v23;
        LOBYTE(v24) = 1;
        v155 = v51;
        v149 = 1;
      }
      v49 = v164;
    }
    if ( v49 >= v171 )
    {
      v49 = v171;
      v164 = v171;
      v152 = 1;
    }
    v52 = v49 - v45;
    v53 = *(_QWORD *)v47;
    v162 = v52;
    if ( (v53 & 1) == 0 )
    {
      v54 = *((_QWORD *)this + 5);
      if ( (*(_BYTE *)(v54 + 16LL * (unsigned int)v50) & 1) == 0 && (*(_BYTE *)(v54 + 16LL * v51) & 1) == 0 )
        goto LABEL_207;
    }
    if ( (v53 & 2) != 0 )
    {
      v55 = *((_QWORD *)this + 5);
      if ( (*(_BYTE *)(v55 + 16LL * (unsigned int)v50) & 2) != 0 )
      {
        v56 = (unsigned int)v50;
      }
      else
      {
        if ( !(_BYTE)v24 || (*(_BYTE *)(v55 + 16LL * v51) & 2) == 0 )
          goto LABEL_69;
        v56 = v51;
      }
      if ( (_DWORD)v56 != -1 && ((*(_BYTE *)(v55 + 16 * v56) ^ (unsigned __int8)v53) & 8) == 0 )
        goto LABEL_207;
    }
LABEL_69:
    if ( *((_QWORD *)v158 + 5) <= v52 && (*((_DWORD *)v11 + 36) & 4) == 0 )
    {
      if ( VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
             this,
             v11,
             *(const struct _DXGK_GPUMMUCAPS **)(v175 + 480),
             v47,
             v158,
             v50,
             v51,
             v144,
             a7,
             &v148,
             (unsigned __int8 *)v47 + 81) )
      {
        if ( (*(_DWORD *)(*((_QWORD *)this + 5) + 16LL * (unsigned int)v50) & 0x400LL) == 0 )
          goto LABEL_88;
        v57 = (struct VIDMM_ALLOC **)*((_QWORD *)v47 + 6);
        v58 = *((_DWORD *)v47 + 14);
        v59 = (struct VIDMM_GLOBAL_ALLOC ***)v57;
        v170 = (struct VIDMM_GLOBAL_ALLOC *)v57;
        v167 = (struct VIDMM_ALLOC *)v57;
        if ( v58 == 3 )
        {
LABEL_87:
          v167 = 0LL;
          goto LABEL_88;
        }
        if ( v58 != 1 )
        {
          if ( v58 == 4 )
          {
            v59 = (struct VIDMM_GLOBAL_ALLOC ***)v57[7];
          }
          else
          {
            if ( v58 != 5 )
              goto LABEL_81;
            v59 = (struct VIDMM_GLOBAL_ALLOC ***)v57[3];
          }
        }
        if ( v59 )
        {
          v170 = **v59;
          goto LABEL_82;
        }
LABEL_81:
        v170 = 0LL;
LABEL_82:
        v60 = v58 - 1;
        if ( v60 )
        {
          v61 = v60 - 3;
          if ( !v61 )
          {
            v62 = v148;
            v167 = v57[7];
            v153 = 1;
            goto LABEL_180;
          }
          if ( v61 == 1 )
          {
            v62 = v148;
            v167 = v57[3];
            v153 = 1;
            goto LABEL_180;
          }
          goto LABEL_87;
        }
LABEL_88:
        v62 = v148;
        v153 = 1;
        goto LABEL_180;
      }
      v48 = v172;
      v154 = v148;
    }
    v63 = *((_QWORD *)this + 5);
    if ( (*(_DWORD *)(v63 + 16LL * (unsigned int)v50) & 0x400LL) != 0 )
    {
      v65 = v50;
    }
    else
    {
      v64 = v149;
      if ( !v149 || (*(_DWORD *)(v63 + 16LL * v51) & 0x400LL) == 0 )
        goto LABEL_100;
      v65 = v51;
    }
    v22 = v158;
    if ( *((_QWORD *)v158 + 5) <= v162 )
    {
      v68 = v65;
      ExFreeToPagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)v11 + 11) + 40256LL),
        *(PVOID *)(*((_QWORD *)this + 6) + 8LL * v65));
      *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v68) = 0LL;
      v68 *= 2LL;
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v68) &= ~0x400uLL;
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v68) &= ~1uLL;
      --*((_DWORD *)this + 1);
    }
    else
    {
      v66 = VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(this, v11, v158, *((_BYTE *)v47 + 77), v48 << 12, v65, a9);
      v67 = v66;
      v151 = v66;
      if ( v66 < 0 )
      {
        WdLogSingleEntry1(3LL, v66);
        WdLogGlobalForLineNumber = 7388;
        goto LABEL_214;
      }
      Feature_3694358843__private_IsEnabledDeviceUsageNoInline();
    }
    v64 = v149;
    v150 = 1;
LABEL_100:
    v69 = *((_BYTE *)v47 + 76);
    if ( (*(_DWORD *)this & 0x20) != 0 && !*((_DWORD *)v47 + 18) && v69 )
    {
      if ( (*((_BYTE *)v47 + 77)
         || (v70 = *(_DWORD **)(*((_QWORD *)this + 6) + 8 * v50)) == 0LL
         || !v70[1]
         || (*v70 & 0x40) != 0)
        && (v162 & 0xF) == 0 )
      {
        v71 = *((unsigned int *)v47 + 8);
        v72 = a7 >> 12;
        if ( a7 >> 12 < v71 )
        {
          if ( (*((_DWORD *)v47 + 9) & 1) != 0 )
            goto LABEL_118;
          v73 = *((_QWORD *)v47 + 5);
          v74 = v71 - v72;
          v75 = (unsigned int)v72;
          v76 = (unsigned int)v162;
          if ( v74 <= (unsigned int)v162 )
            v76 = v74;
          v77 = v72 + v76;
          if ( (unsigned int)v72 >= v77 )
          {
LABEL_118:
            v69 = 1;
            goto LABEL_119;
          }
          while ( 1 )
          {
            v78 = (_QWORD *)(v73 + 8 * v75);
            v79 = (v72 & 0xF) != 0
                ? *v78 == *(_QWORD *)(v73 + 8LL * (unsigned int)(v72 - 1)) + 1LL
                : (*(_BYTE *)v78 & 0xF) == 0;
            if ( !v79 )
              break;
            LODWORD(v72) = v72 + 1;
            v75 = (unsigned int)v72;
            if ( (unsigned int)v72 >= v77 )
              goto LABEL_118;
          }
        }
      }
      v69 = 0;
      LODWORD(v50) = v161;
      if ( v64 )
        v155 = NumPde + v161;
    }
LABEL_119:
    if ( (*(_BYTE *)v47 & 1) != 0 || (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * (unsigned int)v50) & 2) != 0 )
    {
      v80 = 8LL * (unsigned int)v50;
      if ( *(_QWORD *)(v80 + *((_QWORD *)this + 6)) )
      {
        v47 = v177;
LABEL_142:
        v9 = 0LL;
        goto LABEL_143;
      }
      v81 = (_QWORD *)((char *)this + 48);
      v82 = 0;
      if ( ((_DWORD)a2[18] & 4) != 0 && a5 < *((_QWORD *)v165 + 5122) )
      {
        v82 = 1;
        v81 = (_QWORD *)((char *)this + 48);
      }
      if ( (*(_DWORD *)this & 0x20) == 0 )
      {
        PageDirectory = CreatePageDirectory(
                          (struct CVirtualAddressAllocator *)a2,
                          (*(_DWORD *)this >> 7) & 0x1F,
                          (*(_DWORD *)this & 7u) - 1);
        v47 = v177;
        *(_QWORD *)(v80 + *((_QWORD *)this + 6)) = PageDirectory;
        if ( !v82 )
          goto LABEL_139;
        v85 = *(_DWORD **)(v80 + *v81);
LABEL_138:
        *v85 |= 0x80000u;
LABEL_139:
        if ( !*(_QWORD *)(*v81 + 8LL * (unsigned int)v50) )
        {
          WdLogSingleEntry0(1LL);
          v9 = 0LL;
          WdLogGlobalForLineNumber = 7504;
          DxgkLogInternalTriageEvent(v87, 0x40000LL);
          v22 = v158;
          v67 = -1073741801;
          goto LABEL_214;
        }
        goto LABEL_142;
      }
      v47 = v177;
      if ( *((_DWORD *)v177 + 18) == -3 || (v81 = (_QWORD *)((char *)this + 48), v69) )
      {
        v83 = 1;
        if ( !*((_BYTE *)v177 + 77) )
        {
          v84 = 1;
          goto LABEL_130;
        }
      }
      else
      {
        v83 = 0;
      }
      v84 = 0;
LABEL_130:
      *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * (unsigned int)v50) = CreatePageTable(
                                                                       (struct CVirtualAddressAllocator *)a2,
                                                                       (*(_DWORD *)this >> 7) & 0x1F,
                                                                       v83,
                                                                       v84);
      if ( !v82 )
        goto LABEL_139;
      v85 = *(_DWORD **)(*((_QWORD *)this + 6) + 8LL * (unsigned int)v50);
      goto LABEL_138;
    }
LABEL_143:
    v24 = *((_QWORD *)this + 5);
    v88 = v155;
    v89 = *(_QWORD *)(v24 + 16LL * (unsigned int)v50);
    v90 = (v89 & 1) == 0;
    v91 = v89 & 2;
    if ( !v91 )
    {
      v92 = v90;
      if ( !v149 || (*(_BYTE *)(v24 + 16LL * v155) & 2) == 0 )
      {
        v93 = v162;
        goto LABEL_153;
      }
    }
    v93 = v162;
    if ( *((_QWORD *)v158 + 5) <= v162 )
    {
      v150 = 1;
      v95 = v155;
      v92 = v90;
      if ( v91 )
        v95 = v50;
      v96 = 2LL * v95;
      *(_QWORD *)(v24 + 8 * v96) &= ~2uLL;
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v96) &= ~1uLL;
      --*((_DWORD *)this + 1);
      goto LABEL_153;
    }
    v94 = VIDMM_PAGE_DIRECTORY::ExpandZeroPte(
            this,
            (struct CVirtualAddressAllocator *)a2,
            v47,
            v50,
            v155,
            v163,
            v164,
            v172,
            v174,
            a9);
    v151 = v94;
    if ( v94 < 0 )
      break;
    v92 = 0;
    v150 = 1;
LABEL_153:
    v97 = 8LL * (unsigned int)v50;
    if ( (*(_DWORD *)this & 0x20) != 0 )
    {
      if ( (*(_BYTE *)v47 & 1) != 0 )
      {
        v98 = *((_BYTE *)v47 + 76);
        v99 = v169;
        v145 = a9;
        v100 = a7;
        *((_BYTE *)v47 + 76) = v69;
        ++*((_DWORD *)this + 1);
        v101 = v163;
        v102 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
                 *(void ***)(v97 + *((_QWORD *)this + 6)),
                 (struct CVirtualAddressAllocator *)a2,
                 v47,
                 v99,
                 v163 << 12,
                 v162,
                 v100,
                 v92,
                 v145);
        *((_BYTE *)v47 + 76) = v98;
        v103 = v102;
        --*((_DWORD *)this + 1);
        v151 = v102;
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
          v151 = v103;
        }
        else
        {
          v103 = v151;
        }
      }
      if ( *((_BYTE *)v47 + 78) )
      {
        if ( v103 < 0 )
          goto LABEL_212;
        if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 16 * v88) & 1) != 0 )
        {
          v151 = VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(
                   *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 6) + 8 * v88),
                   (struct CVirtualAddressAllocator *)a2,
                   v47,
                   v101 << 12,
                   v162);
          v103 = v151;
          if ( v151 < 0 )
            goto LABEL_212;
          v105 = *(_DWORD **)(*((_QWORD *)this + 6) + 8 * v88);
          if ( !v105[1] && (*v105 & 0x80000) == 0 )
          {
            --*((_DWORD *)this + 1);
            v106 = *((_QWORD *)this + 5);
            v107 = v166;
            *(_QWORD *)(v106 + 16 * v88) = 0LL;
            *(_QWORD *)(v106 + 16 * v88 + 8) = 0LL;
            LOBYTE(v106) = 1;
            v154 = v106;
            v148 = 1;
            v108 = v158;
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v88) + 48LL) = v107;
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v88) + 8LL) = v101 & ~*((_QWORD *)v108 + 4);
            v109 = *((_QWORD *)this + 6);
            v166 = *(VIDMM_PAGE_TABLE **)(v109 + 8 * v88);
            *(_QWORD *)(v109 + 8 * v88) = 0LL;
          }
        }
      }
      v110 = (struct CVirtualAddressAllocator *)a2;
      v52 = v162;
    }
    else
    {
      ++*((_DWORD *)this + 1);
      v101 = v163;
      v52 = v162;
      v110 = (struct CVirtualAddressAllocator *)a2;
      v111 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
               *(VIDMM_PAGE_DIRECTORY **)(v97 + *((_QWORD *)this + 6)),
               (struct CVirtualAddressAllocator *)a2,
               v47,
               v169,
               v163 << 12,
               v162,
               a7,
               v92,
               a9);
      --*((_DWORD *)this + 1);
      v103 = v111;
      v151 = v111;
    }
    if ( v103 < 0 )
    {
LABEL_212:
      WdLogSingleEntry0(3LL);
      v22 = v158;
      WdLogGlobalForLineNumber = 7643;
LABEL_213:
      v67 = v151;
      goto LABEL_214;
    }
    if ( (*(_BYTE *)v47 & 1) != 0 )
    {
      v112 = 0;
      if ( (*(_DWORD *)this & 0x20) != 0 && !*((_BYTE *)v47 + 77) )
      {
        LODWORD(v24) = v50;
        if ( ((**(_DWORD **)(*((_QWORD *)this + 6) + 8LL * (unsigned int)v50) >> 6) & 1) != ((*(_DWORD *)(*((_QWORD *)this + 5) + 16LL * (unsigned int)v50) & 0x60000) == 0x20000LL) )
          v112 = 1;
      }
      v113 = (_QWORD *)(*((_QWORD *)this + 5) + 16LL * (unsigned int)v50);
      if ( (*v113 & 1) == 0 )
      {
        *v113 |= 1uLL;
        ++*((_DWORD *)this + 1);
LABEL_186:
        v115 = 2LL * (unsigned int)v50;
        *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v115) &= ~0x400uLL;
        *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v115) &= ~2uLL;
        *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v115) &= ~8uLL;
        if ( v149 )
        {
          v116 = 2LL * v155;
          *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v116) &= ~0x400uLL;
          *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v116) &= ~2uLL;
          *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v116) &= ~8uLL;
        }
        VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, v110, v50);
        v148 = 1;
        goto LABEL_181;
      }
      if ( v112 || v150 )
        goto LABEL_186;
    }
    else
    {
      v117 = (unsigned __int8)v154;
      if ( v150 )
        v117 = 1;
      v118 = (_QWORD *)(*((_QWORD *)this + 5) + 16LL * (unsigned int)v50);
      v154 = v117;
      v148 = v117;
      v119 = v101 & ~*((_QWORD *)v158 + 4);
      if ( (*(_BYTE *)v118 & 1) != 0 )
      {
        v120 = *(_DWORD **)(*((_QWORD *)this + 6) + 8LL * (unsigned int)v50);
        if ( !v120[1] && (*v120 & 0x80000) == 0 )
        {
          --*((_DWORD *)this + 1);
          *v118 = 0LL;
          v118[1] = 0LL;
          v121 = 8LL * (unsigned int)v50;
          v122 = *(_QWORD *)(v121 + *((_QWORD *)this + 6));
          if ( (*(_DWORD *)this & 0x20) != 0 )
          {
            *(_QWORD *)(v122 + 48) = v166;
            v123 = *(VIDMM_PAGE_TABLE **)(v121 + *((_QWORD *)this + 6));
            v166 = v123;
          }
          else
          {
            *(_QWORD *)(v122 + 32) = v168;
            v123 = *(VIDMM_PAGE_TABLE **)(v121 + *((_QWORD *)this + 6));
            v168 = v123;
          }
          *((_QWORD *)v123 + 1) = v119;
          v124 = *((_QWORD *)this + 6);
          *(_QWORD *)(v121 + v124) = 0LL;
          LOBYTE(v124) = 1;
          v154 = v124;
          v148 = 1;
        }
      }
      if ( v155 != (_DWORD)v50 )
      {
        v24 = v155;
        v125 = (_QWORD *)(*((_QWORD *)this + 5) + 16LL * v155);
        if ( (*(_BYTE *)v125 & 1) != 0 )
        {
          v126 = *(_DWORD **)(*((_QWORD *)this + 6) + 8LL * v155);
          if ( !v126[1] && (*v126 & 0x80000) == 0 )
          {
            --*((_DWORD *)this + 1);
            *v125 = 0LL;
            v125[1] = 0LL;
            v127 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v24);
            if ( (*(_DWORD *)this & 0x20) != 0 )
            {
              *(_QWORD *)(v127 + 48) = v166;
              v128 = *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 6) + 8 * v24);
              v166 = v128;
            }
            else
            {
              *(_QWORD *)(v127 + 32) = v168;
              v128 = *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 6) + 8 * v24);
              v168 = v128;
            }
            *((_QWORD *)v128 + 1) = v119;
            v129 = *((_QWORD *)this + 6);
            v148 = 1;
            *(_QWORD *)(v129 + 8 * v24) = 0LL;
            goto LABEL_181;
          }
        }
      }
    }
    v62 = v154;
LABEL_180:
    if ( !v62 )
    {
      v44 = NumPde;
      v46 = v160;
LABEL_207:
      v114 = v161;
      goto LABEL_208;
    }
LABEL_181:
    v114 = v161;
    if ( !v147 )
    {
      v147 = 1;
      v157 = v161;
    }
    v44 = NumPde;
    v46 = v160;
    if ( (unsigned int)v161 >= v159 )
    {
      LODWORD(v24) = v161 + 1;
      v159 = v161 + 1;
    }
LABEL_208:
    v22 = v158;
    v130 = v52 << 12;
    a7 += v130;
    v169 += v130;
    v161 = (unsigned int)(v114 + 1);
    v45 = v164;
    v163 = v164;
    v48 = v164;
    v172 = v164;
    v49 = *((_QWORD *)v158 + 5) + v164;
    v164 = v49;
    v174 = v49;
    if ( v152 )
      goto LABEL_213;
    LODWORD(v23) = v161;
    if ( (unsigned int)v161 >= v44 )
      goto LABEL_213;
    v11 = (struct CVirtualAddressAllocator *)a2;
  }
  v22 = v158;
  v67 = v94;
LABEL_214:
  v37 = v147;
LABEL_215:
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
      WdLogGlobalForLineNumber = 7780;
      v67 = -1073741823;
      goto LABEL_234;
    }
    v131 = v158;
    v132 = *((_QWORD *)v158 + 5) * v157 + ((a5 >> 12) & ~(*((_QWORD *)v22 + 2) | *((_QWORD *)v22 + 4)));
    if ( *((_BYTE *)v165 + 40940) )
      v133 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v133 = (int)(*(_DWORD *)this << 16) >> 29;
    if ( *((_BYTE *)v47 + 77) && (*(_DWORD *)this & 0x20) != 0 )
      v9 = (struct _DXGK_PTE *)(*((_QWORD *)this + 5) + 16LL * (v157 + NumPde));
    v146 = v40;
    v134 = (void *)v171;
    VIDMM_GLOBAL::UpdatePageTable(
      v165,
      this,
      a2[12],
      *((_QWORD *)v47 + 2),
      v167,
      v170,
      v178 + (v132 << 12) - (v173 << 12),
      v157,
      v159 - v157,
      (struct _DXGK_PTE *)(*((_QWORD *)this + 5) + 16LL * v157),
      v9,
      (*(_DWORD *)this >> 7) & 0x1F,
      (UINT)v177,
      v171,
      v133,
      v132,
      v146,
      *((_QWORD *)v47 + 11));
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
      this,
      (struct CVirtualAddressAllocator *)a2,
      v135,
      v134,
      (struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *)&v175);
    v136 = *(_DWORD *)this | 0x10000;
    v79 = v153 == 0;
    *(_DWORD *)this = v136;
    if ( !v79 )
    {
      CVirtualAddressAllocator::FlushGpuVaTlb(
        (CVirtualAddressAllocator *)a2,
        (v136 >> 7) & 0x1F,
        v132 << 12,
        (v132 + *((_QWORD *)v131 + 5)) << 12);
      v137 = a9;
      v138 = v159;
      VIDMM_PAGE_DIRECTORY::DestroyDisconnectedPageTables(
        this,
        (struct CVirtualAddressAllocator *)a2,
        v157,
        v159,
        v132,
        *((_QWORD *)v131 + 5),
        *a9);
      if ( *((_BYTE *)v47 + 77) )
      {
        if ( (*(_DWORD *)this & 0x20) != 0 )
          VIDMM_PAGE_DIRECTORY::DestroyDisconnectedPageTables(
            this,
            (struct CVirtualAddressAllocator *)a2,
            NumPde + v157,
            v138 + NumPde,
            v132,
            *((_QWORD *)v131 + 5),
            *v137);
      }
    }
  }
  else
  {
    v131 = v158;
  }
  if ( !*((_DWORD *)this + 1) && ((_DWORD)a2[18] & 4) == 0 )
    VIDMM_PAGE_DIRECTORY::EvictPageDirectory(this, a2, a5 & ~*((_QWORD *)v131 + 4), 1u, 1);
LABEL_234:
  v139 = v166;
  if ( v166 )
  {
    do
    {
      v140 = (VIDMM_PAGE_TABLE *)*((_QWORD *)v139 + 6);
      VIDMM_PAGE_TABLE::DestroyPageTable(
        (struct VIDMM_GLOBAL_ALLOC **)v139,
        (struct CVirtualAddressAllocator *)a2,
        *((_QWORD *)v139 + 1));
      v139 = v140;
    }
    while ( v140 );
  }
  v141 = (unsigned __int64 *)v168;
  if ( v168 )
  {
    do
    {
      v142 = (unsigned __int64 *)v141[4];
      VIDMM_PAGE_DIRECTORY::DestroyPageDirectory((VIDMM_PAGE_DIRECTORY *)v141, (PRKPROCESS **)a2, v141[1]);
      v141 = v142;
    }
    while ( v142 );
  }
  return v67;
}
