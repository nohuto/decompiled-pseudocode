/*
 * XREFs of MiResolvePageFileFault @ 0x1402F783C
 * Callers:
 *     MiDispatchFault @ 0x1402142B0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MiIssueFlowThroughFault @ 0x14023B720 (MiIssueFlowThroughFault.c)
 * Callees:
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 *     MiSharedVaToPartition @ 0x140214100 (MiSharedVaToPartition.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140222030 (MiReleaseFreshPageAtDpc.c)
 *     MiSwizzleInvalidPte @ 0x14022A3B0 (MiSwizzleInvalidPte.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiObtainProtoReference @ 0x14023BBE8 (MiObtainProtoReference.c)
 *     MiKernelStackVaToStackNode @ 0x14024468C (MiKernelStackVaToStackNode.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     PsGetIoPriorityThread @ 0x140276920 (PsGetIoPriorityThread.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiSufficientAvailablePages @ 0x1402AA420 (MiSufficientAvailablePages.c)
 *     MiInitializePageChainPacket @ 0x1402D0D10 (MiInitializePageChainPacket.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1402D15D0 (MiGetAvailablePagesBelowPriority.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiIsPteInStore @ 0x1402E5460 (MiIsPteInStore.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiComputeFaultCluster @ 0x1402E5DF8 (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x1402E5FE0 (MiAdvanceFaultList.c)
 *     MiFreeInPageSupportBlock @ 0x1402EEC40 (MiFreeInPageSupportBlock.c)
 *     MiProtectionToCacheAttribute @ 0x1402EF870 (MiProtectionToCacheAttribute.c)
 *     MiInitializeReadInProgressPfn @ 0x1402EF9B8 (MiInitializeReadInProgressPfn.c)
 *     MiObtainFaultCharges @ 0x1402F6A70 (MiObtainFaultCharges.c)
 *     MiComputeFaultNode @ 0x1402FA290 (MiComputeFaultNode.c)
 *     MiIsStoreProcess @ 0x1402FB9C0 (MiIsStoreProcess.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiGetPageChain @ 0x1402FCDC0 (MiGetPageChain.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     MiUpdatePageFileHighInPte @ 0x140368F40 (MiUpdatePageFileHighInPte.c)
 *     PsReferencePartitionSafe @ 0x1403D4B60 (PsReferencePartitionSafe.c)
 *     MiGetCurrentSlabIdentity @ 0x1403FC210 (MiGetCurrentSlabIdentity.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14040E5F0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiLockSetPfnPriority @ 0x1404300D0 (MiLockSetPfnPriority.c)
 *     MiAllocateInPageSupport @ 0x140444CE0 (MiAllocateInPageSupport.c)
 *     MiReduceMdl @ 0x140445270 (MiReduceMdl.c)
 *     MiSetInPagePrefetchPriority @ 0x14046AE90 (MiSetInPagePrefetchPriority.c)
 *     MiReturnFaultCharges @ 0x140481AD4 (MiReturnFaultCharges.c)
 *     MiFlowThroughInsertNode @ 0x1404ABC8C (MiFlowThroughInsertNode.c)
 *     MiReadFromMemoryPagefile @ 0x1404D1F24 (MiReadFromMemoryPagefile.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 MiResolvePageFileFault(__int64 a1, __int64 *a2, ...)
{
  unsigned __int64 v2; // r12
  __int64 v3; // r13
  int v4; // esi
  __int64 v5; // r15
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  ULONG_PTR v13; // rdi
  ULONG *v14; // rcx
  unsigned __int64 v15; // r13
  int v16; // r12d
  int SystemRegionType; // ecx
  _QWORD *v18; // r15
  __int64 v19; // rax
  int v20; // r14d
  ULONG *v21; // rcx
  unsigned __int64 v22; // r15
  _KPROCESS *Process; // r12
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r13
  int v27; // r15d
  unsigned __int64 v28; // r9
  int v29; // eax
  int v30; // eax
  bool v31; // zf
  __int64 v32; // rdx
  int v33; // esi
  ULONG *v34; // r12
  __int64 v35; // r12
  unsigned __int64 v36; // rdx
  __int64 v37; // r8
  unsigned int v38; // edi
  unsigned __int64 v39; // rdi
  _QWORD *v40; // r13
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // r8
  unsigned int v44; // r10d
  unsigned __int64 v45; // r9
  ULONG *v46; // r11
  unsigned __int64 AvailablePagesBelowPriority; // rdi
  ULONG *v48; // r14
  __int64 v49; // r15
  _QWORD *v50; // rbx
  unsigned int v51; // r14d
  unsigned int v52; // edi
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // r8
  __int64 v56; // rcx
  int v57; // r11d
  unsigned __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // rdx
  unsigned __int64 v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rax
  unsigned __int64 v65; // r14
  __int64 v66; // r13
  char v67; // bl
  __int64 v68; // r9
  __int64 v69; // r8
  unsigned int v70; // r15d
  unsigned __int64 v71; // rbx
  __int64 v72; // rax
  unsigned __int64 v73; // rdx
  __int64 v74; // r8
  int v75; // r9d
  ULONG_PTR v76; // rcx
  _QWORD *v77; // rdi
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 *v80; // rdx
  unsigned int v81; // r12d
  unsigned int PagingFileOffset; // eax
  unsigned __int8 v83; // r8
  unsigned int v84; // r13d
  __int64 v85; // r8
  unsigned int v86; // r11d
  unsigned __int64 updated; // rdi
  unsigned __int64 v88; // r12
  __int64 v89; // r15
  unsigned __int64 v90; // r12
  int v91; // r11d
  unsigned int v92; // eax
  unsigned int v93; // r10d
  unsigned int v94; // r13d
  __int64 v95; // r8
  __int64 v96; // r11
  unsigned __int64 v97; // rdi
  __int64 v98; // r15
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // rax
  __int64 v101; // rax
  int v102; // edx
  __int64 v103; // r8
  __int64 v104; // r9
  ULONG_PTR v105; // r8
  int v106; // ebx
  __int64 v107; // r13
  ULONG v108; // eax
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // r8
  unsigned __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v115; // r9
  __int64 v116; // rdx
  volatile _KAFFINITY_EX *ActiveProcessors; // rax
  _QWORD *v118; // r15
  __int64 v119; // rdx
  __int64 v120; // r8
  int v121; // eax
  int v122; // eax
  unsigned __int64 v123; // rdi
  __int64 v124; // rcx
  __int64 v125; // rax
  unsigned __int64 v126; // r9
  char v127; // al
  __int64 v128; // r9
  __int64 v129; // rax
  __int64 v130; // rbx
  _QWORD *v131; // rax
  _QWORD *v132; // rbx
  unsigned int v133; // r15d
  int v134; // eax
  _QWORD *v135; // rax
  unsigned __int64 v136; // r9
  unsigned int v137; // ebx
  unsigned __int64 v138; // rdx
  int v139; // ebx
  unsigned __int64 v140; // rdx
  unsigned __int64 v141; // rbx
  unsigned __int64 v142; // rdx
  unsigned __int64 v143; // rdx
  unsigned int v144; // r9d
  unsigned __int64 v145; // rax
  unsigned __int64 v146; // rcx
  unsigned __int64 v147; // rdx
  unsigned __int64 v148; // rdx
  unsigned __int8 v149; // [rsp+78h] [rbp-90h]
  char v150; // [rsp+78h] [rbp-90h]
  ULONG *v151; // [rsp+80h] [rbp-88h]
  unsigned int v152; // [rsp+88h] [rbp-80h]
  unsigned int v153; // [rsp+88h] [rbp-80h]
  unsigned int v154; // [rsp+88h] [rbp-80h]
  __int64 v155; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v156; // [rsp+98h] [rbp-70h]
  __int64 v157; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD *v158; // [rsp+A8h] [rbp-60h]
  unsigned int v159; // [rsp+B0h] [rbp-58h]
  int v160; // [rsp+B4h] [rbp-54h]
  unsigned __int64 v161; // [rsp+B8h] [rbp-50h]
  __int64 v162; // [rsp+C0h] [rbp-48h]
  __int64 Address; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v164; // [rsp+D0h] [rbp-38h]
  int v165; // [rsp+D8h] [rbp-30h]
  __int128 v166; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v167; // [rsp+F0h] [rbp-18h]
  __int64 v168; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v169; // [rsp+100h] [rbp-8h]
  unsigned __int64 v170; // [rsp+108h] [rbp+0h]
  unsigned int *v171; // [rsp+110h] [rbp+8h]
  __int64 v172; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v173; // [rsp+120h] [rbp+18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+128h] [rbp+20h]
  __int64 v175; // [rsp+130h] [rbp+28h]
  __int64 v176; // [rsp+138h] [rbp+30h]
  _BYTE v177[88]; // [rsp+148h] [rbp+40h] BYREF
  __int128 v178; // [rsp+1A0h] [rbp+98h]
  unsigned __int64 v179; // [rsp+1B0h] [rbp+A8h]
  unsigned int v181; // [rsp+208h] [rbp+100h]
  ULONG_PTR v183; // [rsp+218h] [rbp+110h] BYREF
  va_list va; // [rsp+218h] [rbp+110h]
  __int64 *v185; // [rsp+220h] [rbp+118h]
  va_list va1; // [rsp+228h] [rbp+120h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v183 = va_arg(va1, _QWORD);
  v185 = va_arg(va1, __int64 *);
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v172 = 0LL;
  v175 = 0LL;
  v161 = v2;
  v171 = (unsigned int *)v3;
  v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
  v170 = v8;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    if ( v183 )
    {
      LOBYTE(v7) = 17;
      MiUnlockProtoPoolPage(v183, v7, v9);
    }
    return 3221225633LL;
  }
  v10 = 2048LL;
  v11 = 0xFFFFDE0000000000uLL;
  if ( (v8 & 0x800) != 0 )
  {
    v12 = v8;
    if ( qword_140E2DB80 )
    {
      if ( (v8 & 0x10) != 0 )
        v12 = v8 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = v8 & ~qword_140E2DB80;
    }
    v4 = 16;
    v164 = 48 * ((v12 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v155 = *(_QWORD *)(v164 + 16);
    v13 = v183;
    v14 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v164 + 40) >> 43) & 0x3FFLL));
    goto LABEL_7;
  }
  v164 = 0LL;
  v13 = v183;
  v155 = v8;
  if ( v183 )
  {
    v14 = MiSharedVaToPartition(v3, v2, a2);
LABEL_7:
    v10 = 2048LL;
    goto LABEL_8;
  }
  v14 = (ULONG *)*((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(v3 + 174));
LABEL_8:
  v15 = 0LL;
  v151 = v14;
  v169 = 0LL;
  v158 = 0LL;
  v16 = 2;
  LODWORD(v162) = 2;
  if ( (v5 & 1) != 0 )
  {
    v126 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
    v127 = *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
    switch ( v127 )
    {
      case 5:
        v134 = *(_DWORD *)(v126 + 56);
        if ( (v134 & 4) != 0 && ((v134 & 0x10) != 0 || !MiIsPteInStore((__int64)v14, v155)) )
        {
          if ( v13 )
          {
            LOBYTE(v10) = 17;
            MiUnlockProtoPoolPage(v13, v10, v11);
          }
          return 3221225495LL;
        }
        if ( (*(_DWORD *)(v126 + 56) & 0x20) != 0 )
          v4 |= 0x40u;
        v158 = 0LL;
        break;
      case 2:
        v15 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
        v158 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
        break;
      case 1:
        v158 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
        v15 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (v8 & 0x800) != 0 || !(unsigned int)MiGetPagingFileOffset(v8) )
          return 0LL;
        v129 = *(_QWORD *)(v128 + 112);
        v16 = 0;
        LODWORD(v162) = 0;
        v4 |= 0x20u;
        v169 = v129;
        break;
    }
  }
  SystemRegionType = MiGetSystemRegionType(v161);
  if ( (v5 & 1) != 0 )
  {
    v18 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)v18 == 4 )
    {
      v19 = v18[6];
      v20 = 129;
      v158 = v18;
      v15 = (unsigned __int64)v18;
      LODWORD(v162) = v16 | 8;
      v21 = (ULONG *)*((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(*(_QWORD *)(v19 + 544) + 1198LL));
      v151 = v21;
LABEL_12:
      v22 = v161;
      goto LABEL_13;
    }
  }
  if ( ((v8 >> 5) & 0x1F) != 0x1F )
  {
    v30 = 1;
    v31 = SystemRegionType == 11;
    v21 = v151;
    if ( v31 )
      v30 = 129;
    v20 = v30;
    goto LABEL_12;
  }
  v22 = v161;
  v20 = 129;
  v135 = MiKernelStackVaToStackNode(v161, 1);
  if ( v135 )
  {
    v21 = (ULONG *)*((_QWORD *)qword_140E2FF88 + *((unsigned __int16 *)v135 + 20));
    v151 = v21;
    if ( v21 != &MiSystemPartition && (v4 & 0x20) != 0 && *(_BYTE *)v15 == 1 )
      v4 |= 0x80u;
  }
  else
  {
    v21 = &MiSystemPartition;
    v151 = &MiSystemPartition;
  }
  LODWORD(v162) = v16 | 8;
LABEL_13:
  if ( (v4 & 0x20) != 0 && (*(_DWORD *)(v15 + 80) & 0x200) != 0 && MiIsPteInStore((__int64)v21, v8) )
  {
    if ( v13 )
    {
      LOBYTE(v112) = 17;
      MiUnlockProtoPoolPage(v13, v112, v113);
    }
    return 0LL;
  }
  v165 = 0;
  v152 = 1;
  Process = CurrentThread->ApcState.Process;
  v156 = (unsigned __int64)a2;
  v159 = 2;
  LODWORD(v157) = 16;
  if ( (unsigned __int64)a2 < 0xFFFFF68000000000uLL || (unsigned __int64)a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v149 = 16;
    v109 = MI_READ_PTE_LOCK_FREE(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v109, v110, v111) )
    {
      v149 = 48;
    }
    else if ( !Process[1].IdealProcessorAssignmentBlock )
    {
      goto LABEL_17;
    }
    LODWORD(v157) = 1;
    goto LABEL_17;
  }
  v149 = v165;
LABEL_17:
  v176 = (v8 >> 5) & 0x1F;
  Address = *(_QWORD *)(a1 + 88);
  v24 = MiComputeFaultNode(a1, 0LL, &Address);
  v26 = Address;
  v27 = v24;
  v160 = v24;
  if ( Address )
    goto LABEL_18;
  v116 = 0xFFFFF68000000000uLL;
  if ( (unsigned __int64)a2 > 0xFFFFF6BFFFFFFF78uLL
    || (unsigned __int64)a2 < 0xFFFFF68000000000uLL
    || !(unsigned int)MiIsStoreProcess(Process) )
  {
    v28 = v161;
    if ( (v171[46] & 0xF) != 0
      || v161 >= 0xFFFF800000000000uLL
      || (ActiveProcessors = Process[2].ActiveProcessors, !ActiveProcessors[4].StaticBitmap[13])
      && !ActiveProcessors[4].StaticBitmap[14] )
    {
LABEL_209:
      v13 = v183;
      v26 = Address;
      goto LABEL_30;
    }
    v13 = v183;
  }
  MiLockVadTree(1, v116, v25);
  Address = MiLocateAddress(v161);
  v26 = Address;
  MiUnlockVadTree(1, 0x11u);
  if ( v26 )
  {
LABEL_18:
    v28 = v161;
    if ( (*(unsigned int *)(v26 + 52) | ((unsigned __int64)*(unsigned __int8 *)(Address + 34) << 32)) == 0x7FFFFFFFELL )
    {
      v29 = 7;
      v13 = v183;
      LOBYTE(v25) = v149 | 0x80;
      v26 = Address;
      v149 |= 0x80u;
      v159 = 7;
      goto LABEL_31;
    }
    goto LABEL_209;
  }
  v28 = v161;
LABEL_30:
  v29 = v159;
  LOBYTE(v25) = v149;
LABEL_31:
  if ( (v8 & 0x800) != 0 )
  {
    LODWORD(v157) = 1;
    v159 = v29 | 1;
  }
  v32 = 0LL;
  if ( (v155 & 4) != 0 )
  {
    v13 = v183;
    v26 = Address;
    LOBYTE(v32) = (unsigned __int16)v155 >> 12 == v151[301];
  }
  v33 = v32 | v4;
  if ( (_DWORD)v157 == 1 )
    goto LABEL_36;
  if ( dword_140E37298 )
  {
    LODWORD(v157) = 1;
    --dword_140E37298;
LABEL_36:
    v34 = v151;
    goto LABEL_37;
  }
  if ( !v158 )
  {
    if ( v161 > 0x7FFFFFFEFFFFLL )
    {
      LODWORD(v157) = 1;
      if ( (v25 & 0x10) == 0 && (v161 < 0xFFFFF68000000000uLL || v161 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v33 |= 4u;
        LODWORD(v157) = 16;
      }
    }
    goto LABEL_36;
  }
  if ( !v26 && v28 <= 0x7FFFFFFEFFFFLL )
  {
    MiLockVadTree(1, v32, v25);
    Address = MiLocateAddress(v161);
    v26 = Address;
    MiUnlockVadTree(1, 0x11u);
  }
  v115 = v33 & 1 | 2u;
  if ( (v149 & 0x10) == 0 )
    v115 = v33 & 1;
  v34 = v151;
  LODWORD(v157) = MiComputeFaultCluster((__int64)v151, v158, v26, v115);
LABEL_37:
  if ( (v33 & 1) != 0 )
  {
    v108 = v157;
    if ( (unsigned int)v157 > v34[302] )
      v108 = v34[302];
    LODWORD(v157) = v108;
  }
  v169 = MiAllocateInPageSupport(
           (_DWORD)a2,
           v162,
           (unsigned int)&v157,
           (unsigned __int64)va & -(__int64)(v13 != 0),
           v169);
  v35 = v169;
  if ( !v169 )
  {
    v137 = -1073741670;
LABEL_330:
    if ( v158 )
      *((_BYTE *)v158 + 1) = (v137 == -1073741670) + 1;
    return v137;
  }
  if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) != v8 )
  {
LABEL_306:
    v137 = -1073740748;
    if ( v183 )
    {
      LOBYTE(v36) = 17;
      MiUnlockProtoPoolPage(v183, v36, v37);
    }
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v35);
    goto LABEL_330;
  }
  if ( (v8 & 0x800) != 0 )
  {
    v36 = v164;
    if ( (*(_BYTE *)(v164 + 34) & 0x28) != 0x28
      && (*(_BYTE *)(v164 + 34) & 0x20) != 0
      && v155 == *(_QWORD *)(v164 + 16)
      && (*(_DWORD *)(*(_QWORD *)v164 + 160LL) & 0x80u) == 0 )
    {
      v26 = Address;
      goto LABEL_41;
    }
    goto LABEL_306;
  }
LABEL_41:
  if ( v158 && *(_BYTE *)v158 == 1 )
    MiSetInPagePrefetchPriority(v158, v35);
  v38 = v157;
  if ( (unsigned int)v157 <= 1 || !(unsigned int)MiSufficientAvailablePages((__int64)v151, 0x140uLL) )
  {
    v39 = v156;
LABEL_44:
    v40 = v158;
    goto LABEL_45;
  }
  v80 = a2;
  v81 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
  LODWORD(v162) = ((unsigned int)a2 >> 3) & 0x1FF;
  if ( (v149 & 0x10) != 0 )
  {
    if ( v26 )
    {
      v123 = v161;
    }
    else
    {
      MiLockVadTree(1, (__int64)a2, v79);
      v123 = v161;
      Address = MiLocateAddress(v161);
      v26 = Address;
      MiUnlockVadTree(1, 0x11u);
      if ( !v26 )
        goto LABEL_252;
    }
    if ( (*(_DWORD *)(v26 + 48) & 0x200000) == 0 )
    {
      MiGetProtoPteAddress(v26, v123 >> 12, 12LL, &v172);
      if ( v172 )
      {
        if ( (*(_DWORD *)(v172 + 32) & 0x20000) == 0 )
        {
          v80 = a2;
          v38 = v157;
          v124 = *(_QWORD *)(v172 + 8);
          if ( (unsigned int)((v124 + 8LL * *(unsigned int *)(v172 + 44) - (__int64)a2) >> 3) - 1 < v81 )
            v81 = ((v124 + 8LL * *(unsigned int *)(v172 + 44) - (__int64)a2) >> 3) - 1;
          if ( (unsigned int)(((__int64)a2 - v124) >> 3) < (unsigned int)v162 )
            LODWORD(v162) = ((__int64)a2 - v124) >> 3;
          goto LABEL_104;
        }
      }
    }
LABEL_252:
    v80 = a2;
    v38 = 1;
    LODWORD(v157) = 1;
  }
LABEL_104:
  v40 = v158;
  if ( v158 || (v33 & 4) != 0 )
  {
    LODWORD(v162) = 0;
    if ( !v81 )
      v38 = 1;
    LODWORD(v157) = v38;
  }
  if ( v38 > 1 )
  {
    v155 = v8;
    v154 = v38 - 1;
    v164 = (__int64)(v80 + 1);
    if ( v81 > v38 - 1 )
      v81 = v38 - 1;
    PagingFileOffset = MiGetPagingFileOffset(v8);
    v84 = -3 - PagingFileOffset;
    v157 = PagingFileOffset;
    if ( PagingFileOffset + (unsigned __int64)v81 < 0xFFFFFFFE )
      v84 = v81;
    if ( ((unsigned __int8)v33 & v83) != 0 || v158 )
      v33 |= 8u;
    MiClearPageFileReservation(&v155);
    updated = v155 & 0xFFFFFFFFFC00FF1FuLL;
    if ( v84 )
    {
      v88 = v164;
      v89 = v157;
      while ( 1 )
      {
        updated = MiUpdatePageFileHighInPte(updated, ++v89, v85);
        v168 = MI_READ_PTE_LOCK_FREE(v88);
        if ( (v168 & 0x3E0) != 0 && (MiClearPageFileReservation(&v168), v168 &= 0xFFFFFFFFFC00FF1FuLL, v168 == updated) )
        {
          v156 = v88;
        }
        else if ( (v33 & 8) != 0 )
        {
LABEL_119:
          v8 = v170;
          v27 = v160;
          v86 = v154;
          break;
        }
        v88 += 8LL;
        if ( !--v84 )
          goto LABEL_119;
      }
    }
    v90 = (unsigned __int64)a2;
    v164 = (__int64)a2;
    v91 = v86 - ((__int64)(v156 - (_QWORD)a2) >> 3);
    v156 = (__int64)(v156 - (_QWORD)a2) >> 3;
    LODWORD(v157) = v91;
    v155 = v8;
    v92 = MiGetPagingFileOffset(v8);
    v162 = v92;
    v94 = v92 - 1;
    if ( v93 <= (unsigned __int64)v92 - 1 )
      v94 = v93;
    MiClearPageFileReservation(&v155);
    v97 = v155 & 0xFFFFFFFFFC00FF1FuLL;
    if ( v94 )
    {
      v98 = v162;
      do
      {
        --v98;
        v90 -= 8LL;
        v97 = MiUpdatePageFileHighInPte(v97, v98, v95);
        v168 = MI_READ_PTE_LOCK_FREE(v90);
        if ( (v168 & 0x3E0) != 0 && (MiClearPageFileReservation(&v168), v168 &= 0xFFFFFFFFFC00FF1FuLL, v168 == v97) )
        {
          v164 = v90;
        }
        else if ( (v33 & 8) != 0 )
        {
          break;
        }
        --v94;
      }
      while ( v94 );
      v8 = v170;
      v27 = v160;
      v96 = v164;
    }
    v99 = v8;
    if ( qword_140E2DB80 )
    {
      if ( (v8 & 0x10) != 0 )
        v99 = v8 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v99 = v8 & ~qword_140E2DB80;
    }
    v100 = HIDWORD(v99) - (unsigned int)(((__int64)a2 - v96) >> 3);
    if ( v8 && qword_140E2DB80 )
    {
      if ( (v8 & 0x10) != 0 )
        LODWORD(v8) = v8 & 0xFFFFFFEF;
      else
        LODWORD(v8) = ~(_DWORD)qword_140E2DB80 & v8;
    }
    v101 = MiSwizzleInvalidPte((v100 << 32) | (unsigned int)v8);
    v35 = v169;
    v155 = v101;
    v152 = v102 + v156 + 1;
    v39 = v104 - 8 * v103;
    v156 = v39;
    goto LABEL_44;
  }
  v35 = v169;
  v39 = v156;
LABEL_45:
  v41 = MiObtainFaultCharges(v151, v152, v159);
  v164 = v41;
  if ( v152 > v41 )
  {
    v138 = v155;
    if ( qword_140E2DB80 && (v155 & 0x10) == 0 )
      v138 = v155 & ~qword_140E2DB80;
    v141 = v152 - v41;
    v142 = HIDWORD(v138);
    if ( v39 + 8 * v141 <= (unsigned __int64)a2 )
    {
      v143 = v141 + v142;
      v156 = v39 + 8 * v141;
    }
    else
    {
      v156 = (unsigned __int64)a2;
      v143 = ((__int64)((__int64)a2 - v39) >> 3) + v142;
    }
    v155 = MiUpdatePageFileHighInPte(v155, v143, qword_140E2DB80);
    v44 = v144;
    v152 = v144;
  }
  else
  {
    v44 = v152;
  }
  v45 = 0LL;
  v167 = 0LL;
  v166 = 0LL;
  if ( v40 && *(_BYTE *)v40 == 1 )
  {
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v151, ((*((_DWORD *)v40 + 20) >> 3) & 7u) + 1);
    if ( AvailablePagesBelowPriority > v44 )
      AvailablePagesBelowPriority = v44;
  }
  else
  {
    v46 = v151;
    AvailablePagesBelowPriority = v44;
  }
  if ( !AvailablePagesBelowPriority )
    goto LABEL_50;
  if ( (v33 & 0x80u) != 0 )
  {
    if ( !(unsigned __int8)PsReferencePartitionSafe(*((_QWORD *)v46 + 23)) )
    {
      AvailablePagesBelowPriority = 0LL;
LABEL_50:
      v48 = v151;
      goto LABEL_51;
    }
    *(_DWORD *)(v35 + 192) |= 0x4000000u;
  }
  v105 = v183;
  if ( (v171[46] & 0xF) != 0 || v183 || (unsigned __int8)MiGetCurrentSlabIdentity(CurrentThread) == 0xFF )
  {
    if ( (v33 & 0x40) != 0 && !v105 && (v46[1] & 8) != 0 )
    {
      v106 = 2;
    }
    else
    {
      v106 = 9;
      if ( (v149 & 0x20) != 0 )
        v106 = 6;
    }
  }
  else
  {
    v106 = 8;
  }
  if ( v167 != v45 )
    goto LABEL_52;
  v173 &= v45;
  v170 = AvailablePagesBelowPriority;
  v160 = MiProtectionToCacheAttribute(v176);
  v107 = (__int64)(v156 << 25) >> 16;
  while ( 1 )
  {
    memset_0(v177, 0, 0x70uLL);
    MiInitializePageChainPacket(
      (__int64)v151,
      v171,
      *(_BYTE *)(a1 + 69) & 1,
      v107,
      v27,
      v160,
      v20,
      -1LL,
      *(_QWORD *)(a1 + 96),
      v106,
      &v173,
      AvailablePagesBelowPriority,
      (__int64)v177);
    MiGetPageChain(v177);
    AvailablePagesBelowPriority = v179;
    if ( v179 )
    {
      if ( (_QWORD)v166 )
      {
        v167 += v179;
        **((_QWORD **)&v166 + 1) = v178;
        *((_QWORD *)&v166 + 1) = *((_QWORD *)&v178 + 1);
      }
      else
      {
        v166 = v178;
        v167 = v179;
      }
LABEL_159:
      v48 = v151;
      goto LABEL_160;
    }
    if ( v106 == 9 )
      goto LABEL_159;
    v42 = v173;
    if ( v173 )
      break;
    if ( v106 == 6 )
    {
      _InterlockedAdd((volatile signed __int32 *)v151 + 4345, v173 + 1);
    }
    else if ( v106 == 8 )
    {
      *(_DWORD *)(a1 + 80) |= 0x10u;
    }
    AvailablePagesBelowPriority = v170;
    v106 = 9;
  }
  v48 = v151;
  if ( v151 != *((ULONG **)qword_140E2FF88 + *((unsigned __int16 *)v171 + 87)) )
  {
    *(_QWORD *)(a1 + 136) = v151;
    ExAcquireRundownProtection((PEX_RUNDOWN_REF)v151 + 2297);
    v42 = v173;
  }
  v145 = v170;
  *(_QWORD *)(a1 + 128) = v42;
  *(_QWORD *)(a1 + 144) = v145;
LABEL_160:
  if ( v167 )
  {
    v40 = v158;
    v44 = v152;
    goto LABEL_52;
  }
  if ( (v33 & 0x80u) == 0 )
    goto LABEL_215;
  v139 = *(_DWORD *)(v35 + 192);
  PsDereferencePartition(*((_QWORD *)v48 + 23));
  v45 = v167;
  v40 = v158;
  v44 = v152;
  *(_DWORD *)(v35 + 192) = v139 & 0xFBFFFFFF;
LABEL_51:
  if ( !v45 )
  {
LABEL_215:
    if ( v183 )
    {
      LOBYTE(v42) = 17;
      MiUnlockProtoPoolPage(v183, v42, v43);
    }
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v35);
    if ( v158 )
      *((_BYTE *)v158 + 1) = 2 - (*(_QWORD *)(a1 + 128) != 0LL);
    MiReturnFaultCharges(v48, v164, v159);
    return 3221225495LL;
  }
LABEL_52:
  if ( AvailablePagesBelowPriority != v44 )
  {
    v136 = v156;
    if ( v156 + 8 * AvailablePagesBelowPriority <= (unsigned __int64)a2 )
    {
      v140 = v155;
      if ( qword_140E2DB80 && (v155 & 0x10) == 0 )
        v140 = v155 & ~qword_140E2DB80;
      v146 = v44 - AvailablePagesBelowPriority;
      v147 = HIDWORD(v140);
      if ( v156 + 8 * v146 > (unsigned __int64)a2 )
      {
        v156 = (unsigned __int64)a2;
        v148 = ((__int64)((__int64)a2 - v136) >> 3) + v147;
      }
      else
      {
        v148 = v146 + v147;
        v156 += 8 * v146;
      }
      v155 = MiUpdatePageFileHighInPte(v155, v148, qword_140E2DB80);
    }
    v44 = AvailablePagesBelowPriority;
  }
  v49 = v35 + 272;
  v50 = (_QWORD *)(v35 + 320);
  v51 = (*(_DWORD *)(v35 + 192) >> 11) & 7;
  v52 = 0;
  v181 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v153 = v44;
      v53 = MI_READ_PTE_LOCK_FREE(v156);
      if ( (v33 & 0x10) != 0 )
      {
LABEL_65:
        v59 = v166;
        if ( (_QWORD)v166 )
        {
          *(_QWORD *)&v166 = *(_QWORD *)v166;
          *((_QWORD *)&v166 + 1) &= -(__int64)(--v167 != 0);
        }
        ++v181;
        *v50 = 0xAAAAAAAAAAAAAAABuLL * ((v59 + 0x220000000000LL) >> 4);
        if ( (__int64 *)v156 == a2 )
          v60 = v51;
        else
          v60 = (*(_DWORD *)(v35 + 192) >> 14) & 7;
        MiLockSetPfnPriority(v59, v60);
        goto LABEL_70;
      }
      if ( (v53 & 0xC01) != 0 )
      {
        LOBYTE(v57) = 1;
      }
      else
      {
        v54 = v53;
        if ( qword_140E2DB80 )
        {
          v55 = v155;
          if ( (v53 & 0x10) != 0 )
            v54 = v53 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v54 = v53 & ~qword_140E2DB80;
          if ( (v155 & 0x10) != 0 )
            v56 = v155;
          else
            v56 = v155 & ~qword_140E2DB80;
        }
        else
        {
          v56 = v155;
          v55 = v155;
        }
        LOBYTE(v57) = 1;
        if ( ((v54 ^ v56) & 0xFFFFFFFF00000000uLL) == 0 && (v53 & 4) != 0 )
        {
          v58 = v53 >> 12;
          if ( (((unsigned __int8)v58 ^ (unsigned __int8)(v55 >> 12)) & 0xF) == 0
            && ((v58 & 0xF) == v151[301]) == (v33 & 1) )
          {
            goto LABEL_65;
          }
        }
      }
      if ( (v33 & 8) != 0 )
        break;
      v33 |= 2u;
      *v50 = qword_140E37338;
LABEL_70:
      ++v50;
      if ( v40 )
        MiAdvanceFaultList(v40);
      v61 = v155;
      v156 += 8LL;
      v62 = v155;
      if ( qword_140E2DB80 && (v155 & 0x10) == 0 )
        v61 = v155 & ~qword_140E2DB80;
      v63 = HIDWORD(v61) + 1;
      if ( v155 )
      {
        if ( qword_140E2DB80 )
        {
          if ( (v155 & 0x10) != 0 )
            v62 = v155 & 0xFFFFFFEF;
          else
            v62 = ~(_DWORD)qword_140E2DB80 & v155;
        }
      }
      else
      {
        v62 = 0;
      }
      v64 = MiSwizzleInvalidPte((v63 << 32) | v62);
      v44 = v153;
      v52 += v57;
      v155 = v64;
      if ( v52 >= v153 )
        goto LABEL_85;
    }
    if ( v156 > (unsigned __int64)a2 )
      break;
    v131 = (_QWORD *)(v35 + 320);
    v132 = (_QWORD *)(v35 + 320);
    if ( v52 )
    {
      v133 = v181;
      do
      {
        if ( *v132 != qword_140E37338 )
        {
          MiReleaseFreshPageAtDpc(48LL * *v132 - 0x220000000000LL);
          --v133;
        }
        ++v132;
        --v52;
      }
      while ( v52 );
      v40 = v158;
      v131 = (_QWORD *)(v35 + 320);
      v181 = v133;
      v49 = v35 + 272;
    }
    v50 = v131;
    v33 &= ~2u;
    v156 = (unsigned __int64)a2;
    v155 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
    v44 = 1;
  }
  v44 = v52;
  v153 = v52;
LABEL_85:
  v65 = v156 - 8LL * v44;
  v66 = *(_QWORD *)(v35 + 320 + 8 * ((__int64)((__int64)a2 - v65) >> 3));
  v67 = v57 & (v149 >> 4);
  if ( v67 )
    v68 = 0LL;
  else
    v68 = (__int64)(v65 << 25) >> 16;
  *(_QWORD *)v49 = 0LL;
  v69 = v44 << 12;
  *(_DWORD *)(v49 + 40) = v69;
  *(_WORD *)(v49 + 10) = 66;
  *(_QWORD *)(v49 + 32) = v68 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v49 + 44) = v68 & 0xFFF;
  *(_WORD *)(v49 + 8) = 8 * ((((unsigned __int64)(v68 & 0xFFF) + v69 + 4095) >> 12) + 6);
  if ( (v33 & 2) != 0 )
  {
    v125 = MiReduceMdl(v49);
    if ( v125 )
    {
      v65 += 8 * v125;
      if ( !v67 )
        *(_QWORD *)(v49 + 32) += v125 << 12;
    }
    v70 = *(_DWORD *)(v49 + 40) >> 12;
  }
  else
  {
    *(_WORD *)(v49 + 10) = 16450;
    v70 = v153;
  }
  v71 = MI_READ_PTE_LOCK_FREE(v65);
  if ( v70 == 1 )
    v150 = v149 & 0xF8 | (*(_DWORD *)(v35 + 192) >> 11) & 7 | 8;
  else
    v150 = v149 & 0xDF;
  LOBYTE(v165) = v150;
  MiInitializeReadInProgressPfn(v161, (_QWORD *)(v35 + 320), v70, (unsigned __int64 *)v65, v35, v150);
  if ( (v33 & 0x10) != 0 )
  {
    if ( qword_140E2DB80 )
    {
      if ( (v71 & 0x10) != 0 )
        v71 &= ~0x10uLL;
      else
        v71 &= ~qword_140E2DB80;
    }
    v130 = 48 * ((v71 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    MiFlowThroughInsertNode(v35, v130);
    v71 = *(_QWORD *)(v130 + 16);
  }
  if ( (v150 & 0x10) != 0 )
    MiObtainProtoReference(v183, 0);
  v72 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
  *(_QWORD *)(v35 + 168) = v72;
  *(_QWORD *)(v35 + 232) = a2;
  v155 = v72;
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    v75 |= 0x200u;
  if ( Address && MiVadPageSizes[(*(_DWORD *)(Address + 48) >> 19) & 3] == 16 )
    v75 |= 0x200000u;
  v76 = v183;
  *(_DWORD *)(v35 + 192) = v75;
  if ( v76 )
  {
    LOBYTE(v73) = 17;
    MiUnlockProtoPoolPage(v76, v73, v74);
  }
  v77 = (_QWORD *)v166;
  while ( 1 )
  {
    v78 = (__int64)v77;
    if ( !v77 )
      break;
    v77 = (_QWORD *)*v77;
    *(_QWORD *)&v166 = v77;
    *((_QWORD *)&v166 + 1) &= -(__int64)(--v167 != 0);
    MiReleaseFreshPage(v78, v73, v74);
  }
  v118 = v158;
  if ( v181 != v164 )
    MiReturnFaultCharges(v151, v164 - v181, v159);
  *v185 = v35;
  v119 = (unsigned int)MiGetPagingFileOffset(v71);
  LODWORD(v175) = v119;
  v120 = *(_QWORD *)&v151[2 * ((unsigned __int16)v71 >> 12) + 4632];
  if ( (v150 & 0x10) != 0 )
    *(_QWORD *)(v35 + 160) = v183;
  v121 = *(_DWORD *)(v35 + 192);
  if ( (v33 & 1) != 0 )
  {
    *(_QWORD *)(v35 + 96) = v119;
    v121 |= 0x400u;
  }
  else
  {
    HIDWORD(v175) = 0;
    *(_QWORD *)(v35 + 96) = (unsigned __int64)(unsigned int)v175 << 12;
  }
  v122 = v121 | 0x400000;
  *(_QWORD *)(v35 + 200) = v120;
  if ( *(_QWORD *)(v120 + 184)
    && (!v118 || *(_BYTE *)v118 != 1 || (v118[10] & 0x1000) == 0 || (dword_140FC4200 & 1) != 0) )
  {
    v122 |= 0x800000u;
  }
  *(_DWORD *)(v35 + 192) = v122;
  *(_QWORD *)(v35 + 240) = v65;
  *(_QWORD *)(v35 + 248) = 48 * v66 - 0x220000000000LL;
  if ( _bittest16((const signed __int16 *)(v120 + 172), 0xBu) )
    MiReadFromMemoryPagefile(v120, v35);
  return 3221435187LL;
}
