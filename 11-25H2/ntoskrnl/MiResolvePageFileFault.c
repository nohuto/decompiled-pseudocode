/*
 * XREFs of MiResolvePageFileFault @ 0x14037AA3C
 * Callers:
 *     MiDispatchFault @ 0x14023F750 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140240060 (MiResolveProtoPteFault.c)
 *     MiIssueFlowThroughFault @ 0x14033D9E4 (MiIssueFlowThroughFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiSwizzleInvalidPte @ 0x14021A0C0 (MiSwizzleInvalidPte.c)
 *     MiObtainFaultCharges @ 0x14022B950 (MiObtainFaultCharges.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiIsStoreProcess @ 0x140239E20 (MiIsStoreProcess.c)
 *     MiSharedVaToPartition @ 0x14023B3F0 (MiSharedVaToPartition.c)
 *     MiFreeInPageSupportBlock @ 0x14023B4B0 (MiFreeInPageSupportBlock.c)
 *     MiProtectionToCacheAttribute @ 0x14023B5F0 (MiProtectionToCacheAttribute.c)
 *     MiInitializeReadInProgressPfn @ 0x14023B62C (MiInitializeReadInProgressPfn.c)
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402CF530 (MI_PROTO_FORMAT_COMBINED.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     PsGetIoPriorityThread @ 0x1403031B0 (PsGetIoPriorityThread.c)
 *     MiKernelStackVaToStackNode @ 0x14032346C (MiKernelStackVaToStackNode.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     MiObtainProtoReference @ 0x14033DEAC (MiObtainProtoReference.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140343330 (MiReleaseFreshPageAtDpc.c)
 *     MiInitializePageChainPacket @ 0x1403796D8 (MiInitializePageChainPacket.c)
 *     MiLockSetPfnPriority @ 0x140379880 (MiLockSetPfnPriority.c)
 *     MiSufficientAvailablePages @ 0x14037A4B0 (MiSufficientAvailablePages.c)
 *     MiComputeFaultCluster @ 0x14037A558 (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x14037A740 (MiAdvanceFaultList.c)
 *     MiComputeFaultNode @ 0x14037C200 (MiComputeFaultNode.c)
 *     MiAllocateInPageSupport @ 0x14037C3C0 (MiAllocateInPageSupport.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     MiIsPteInStore @ 0x14037C500 (MiIsPteInStore.c)
 *     MiUpdatePageFileHighInPte @ 0x14037C850 (MiUpdatePageFileHighInPte.c)
 *     MI_CLEAR_PTE_BITS_FOR_READ_CLUSTER @ 0x14037C8A0 (MI_CLEAR_PTE_BITS_FOR_READ_CLUSTER.c)
 *     PsReferencePartitionSafe @ 0x1403BE990 (PsReferencePartitionSafe.c)
 *     MiGetCurrentSlabIdentity @ 0x1403BEAC0 (MiGetCurrentSlabIdentity.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1403C2290 (MiGetAvailablePagesBelowPriority.c)
 *     MiReduceMdl @ 0x140447900 (MiReduceMdl.c)
 *     MiSetInPagePrefetchPriority @ 0x14046C678 (MiSetInPagePrefetchPriority.c)
 *     MiReturnFaultCharges @ 0x140480970 (MiReturnFaultCharges.c)
 *     MiFlowThroughInsertNode @ 0x1404AA7FC (MiFlowThroughInsertNode.c)
 *     MiReadFromMemoryPagefile @ 0x1404D1FD4 (MiReadFromMemoryPagefile.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 MiResolvePageFileFault(__int64 a1, unsigned __int64 a2, ...)
{
  unsigned __int64 v2; // r12
  __int64 v3; // r13
  int v4; // esi
  __int64 v5; // r15
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  ULONG_PTR v12; // rdi
  ULONG *v13; // rcx
  unsigned __int64 v14; // r13
  int v15; // r12d
  int SystemRegionType; // ecx
  _QWORD *v17; // r15
  __int64 v18; // rax
  int v19; // r14d
  ULONG *v20; // rcx
  unsigned __int64 v21; // r15
  __int64 Process; // r12
  int v23; // eax
  __int64 v24; // r13
  int v25; // r15d
  unsigned __int64 v26; // r9
  int v27; // eax
  char v28; // r8
  int v29; // eax
  bool v30; // zf
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // esi
  ULONG *v35; // r12
  __int64 v36; // r12
  __int64 v37; // r8
  unsigned __int64 v38; // r9
  unsigned int v39; // edi
  unsigned __int64 v40; // rdi
  _QWORD *v41; // r13
  unsigned __int64 v42; // rax
  __int64 v43; // r8
  unsigned int v44; // r10d
  unsigned __int64 v45; // r9
  ULONG *v46; // r13
  unsigned __int64 AvailablePagesBelowPriority; // rdi
  int v48; // r11d
  _QWORD *v49; // r13
  __int64 v50; // r15
  int v51; // r14d
  unsigned int v52; // edi
  _QWORD *v53; // rbx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r8
  __int64 v57; // rcx
  int v58; // r11d
  unsigned __int64 v59; // rax
  __int64 v60; // r8
  int v61; // edx
  unsigned __int64 v62; // rdx
  unsigned int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // r14
  __int64 v68; // r13
  char v69; // bl
  __int64 v70; // r9
  __int64 v71; // r8
  unsigned int v72; // r15d
  unsigned __int64 v73; // rbx
  __int64 v74; // rax
  __int64 v75; // r8
  unsigned __int64 v76; // r9
  ULONG_PTR v77; // rcx
  _QWORD *v78; // rdi
  __int64 v79; // rcx
  unsigned __int64 v80; // rdx
  unsigned int v81; // r12d
  unsigned int PagingFileOffset; // eax
  unsigned __int8 v83; // r8
  unsigned int v84; // r13d
  unsigned int v85; // r11d
  __int64 updated; // rdi
  unsigned __int64 v87; // r12
  __int64 v88; // r15
  unsigned __int64 v89; // r12
  int v90; // edi
  unsigned int v91; // r10d
  unsigned int v92; // r13d
  __int64 v93; // r11
  __int64 v94; // rdi
  __int64 v95; // r15
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rax
  __int64 v98; // rax
  int v99; // edx
  __int64 v100; // r8
  ULONG_PTR v101; // r8
  int v102; // ebx
  __int64 v103; // r13
  ULONG v104; // eax
  unsigned int v105; // edx
  unsigned __int64 v106; // rax
  __int64 v107; // r8
  unsigned __int64 v108; // r9
  char v110; // r9
  _QWORD *v111; // r15
  __int64 v112; // rdx
  __int64 v113; // r8
  int v114; // eax
  int v115; // eax
  unsigned __int64 v116; // rdi
  unsigned __int64 v117; // rcx
  __int64 v118; // rax
  unsigned __int64 v119; // r9
  char v120; // al
  __int64 v121; // r9
  __int64 v122; // rax
  _QWORD *v123; // rbx
  unsigned int v124; // r15d
  __int64 v125; // rbx
  int v126; // eax
  _QWORD *v127; // rax
  unsigned __int64 v128; // r9
  __int64 v129; // rdx
  unsigned int v130; // ebx
  unsigned __int64 v131; // rdx
  int v132; // ebx
  unsigned __int64 v133; // rdx
  unsigned __int64 v134; // rbx
  unsigned __int64 v135; // rdx
  unsigned __int64 v136; // rdx
  unsigned int v137; // r9d
  unsigned __int64 v138; // rax
  unsigned __int64 v139; // rcx
  unsigned __int64 v140; // rdx
  unsigned __int64 v141; // rdx
  unsigned __int8 v142; // [rsp+78h] [rbp-90h]
  char v143; // [rsp+78h] [rbp-90h]
  ULONG *v144; // [rsp+80h] [rbp-88h]
  unsigned int v145; // [rsp+88h] [rbp-80h]
  unsigned int v146; // [rsp+88h] [rbp-80h]
  unsigned int v147; // [rsp+88h] [rbp-80h]
  __int64 v148; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v149; // [rsp+98h] [rbp-70h]
  __int64 v150; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD *v151; // [rsp+A8h] [rbp-60h]
  unsigned int v152; // [rsp+B0h] [rbp-58h]
  int v153; // [rsp+B4h] [rbp-54h]
  unsigned __int64 v154; // [rsp+B8h] [rbp-50h]
  __int64 v155; // [rsp+C0h] [rbp-48h]
  struct _LIST_ENTRY *Address; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v157; // [rsp+D0h] [rbp-38h]
  int v158; // [rsp+D8h] [rbp-30h]
  __int128 v159; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v160; // [rsp+F0h] [rbp-18h]
  __int64 v161; // [rsp+F8h] [rbp-10h]
  __int64 v162; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 v163; // [rsp+108h] [rbp+0h]
  unsigned int *v164; // [rsp+110h] [rbp+8h]
  unsigned __int64 *v165; // [rsp+118h] [rbp+10h] BYREF
  __int64 v166; // [rsp+120h] [rbp+18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+128h] [rbp+20h]
  __int64 v168; // [rsp+130h] [rbp+28h]
  __int64 v169; // [rsp+138h] [rbp+30h]
  _QWORD v170[11]; // [rsp+148h] [rbp+40h] BYREF
  __int128 v171; // [rsp+1A0h] [rbp+98h]
  unsigned __int64 v172; // [rsp+1B0h] [rbp+A8h]
  unsigned int v174; // [rsp+208h] [rbp+100h]
  ULONG_PTR v176; // [rsp+218h] [rbp+110h] BYREF
  va_list va; // [rsp+218h] [rbp+110h]
  __int64 *v178; // [rsp+220h] [rbp+118h]
  va_list va1; // [rsp+228h] [rbp+120h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v176 = va_arg(va1, _QWORD);
  v178 = va_arg(va1, __int64 *);
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v165 = 0LL;
  v168 = 0LL;
  v154 = v2;
  v164 = (unsigned int *)v3;
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v163 = v7;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    if ( v176 )
      MiUnlockProtoPoolPage(v176, 0x11u, v8, v9);
    return 3221225633LL;
  }
  v10 = 0xFFFFDE0000000000uLL;
  if ( (v7 & 0x800) != 0 )
  {
    v11 = v7;
    if ( qword_140E2D940 )
    {
      if ( (v7 & 0x10) != 0 )
        v11 = v7 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v11 = v7 & ~qword_140E2D940;
    }
    v4 = 16;
    v157 = 48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v148 = *(_QWORD *)(v157 + 16);
    v12 = v176;
    v13 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v157 + 40) >> 43) & 0x3FFLL));
  }
  else
  {
    v157 = 0LL;
    v12 = v176;
    v148 = v7;
    if ( v176 )
      v13 = MiSharedVaToPartition(v3, v2, a2);
    else
      v13 = (ULONG *)*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(v3 + 174));
  }
  v14 = 0LL;
  v144 = v13;
  v161 = 0LL;
  v151 = 0LL;
  v15 = 2;
  LODWORD(v155) = 2;
  if ( (v5 & 1) != 0 )
  {
    v119 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
    v120 = *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
    switch ( v120 )
    {
      case 5:
        v126 = *(_DWORD *)(v119 + 56);
        if ( (v126 & 4) != 0 && ((v126 & 0x10) != 0 || !(unsigned int)MiIsPteInStore(v13, v148)) )
        {
          if ( v12 )
            MiUnlockProtoPoolPage(v12, 0x11u, v10, v119);
          return 3221225495LL;
        }
        if ( (*(_DWORD *)(v119 + 56) & 0x20) != 0 )
          v4 |= 0x40u;
        v151 = 0LL;
        break;
      case 2:
        v14 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
        v151 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
        break;
      case 1:
        v151 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
        v14 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (v7 & 0x800) != 0 || !(unsigned int)MiGetPagingFileOffset(v7) )
          return 0LL;
        v122 = *(_QWORD *)(v121 + 112);
        v15 = 0;
        LODWORD(v155) = 0;
        v4 |= 0x20u;
        v161 = v122;
        break;
    }
  }
  SystemRegionType = MiGetSystemRegionType(v154);
  if ( (v5 & 1) != 0 )
  {
    v17 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)v17 == 4 )
    {
      v18 = v17[6];
      v19 = 129;
      v151 = v17;
      v14 = (unsigned __int64)v17;
      LODWORD(v155) = v15 | 8;
      v20 = (ULONG *)*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(*(_QWORD *)(v18 + 544) + 1198LL));
      v144 = v20;
LABEL_11:
      v21 = v154;
      goto LABEL_12;
    }
  }
  if ( ((v7 >> 5) & 0x1F) != 0x1F )
  {
    v29 = 1;
    v30 = SystemRegionType == 11;
    v20 = v144;
    if ( v30 )
      v29 = 129;
    v19 = v29;
    goto LABEL_11;
  }
  v21 = v154;
  v19 = 129;
  v127 = MiKernelStackVaToStackNode(v154, 1);
  if ( v127 )
  {
    v20 = (ULONG *)*((_QWORD *)qword_140E2FD48 + *((unsigned __int16 *)v127 + 20));
    v144 = v20;
    if ( v20 != &MiSystemPartition && (v4 & 0x20) != 0 && *(_BYTE *)v14 == 1 )
      v4 |= 0x80u;
  }
  else
  {
    v20 = &MiSystemPartition;
    v144 = &MiSystemPartition;
  }
  LODWORD(v155) = v15 | 8;
LABEL_12:
  if ( (v4 & 0x20) != 0 && (*(_DWORD *)(v14 + 80) & 0x200) != 0 && (unsigned int)MiIsPteInStore(v20, v7) )
  {
    if ( v12 )
      MiUnlockProtoPoolPage(v12, 0x11u, v107, v108);
    return 0LL;
  }
  v158 = 0;
  v145 = 1;
  Process = (__int64)CurrentThread->ApcState.Process;
  v149 = a2;
  v152 = 2;
  LODWORD(v150) = 16;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v142 = v158;
    goto LABEL_16;
  }
  v142 = 16;
  v106 = MI_READ_PTE_LOCK_FREE(((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( MI_PROTO_FORMAT_COMBINED(v106) )
  {
    v142 = 48;
  }
  else if ( !*(_QWORD *)(Process + 640) )
  {
    goto LABEL_16;
  }
  LODWORD(v150) = 1;
LABEL_16:
  v169 = (v7 >> 5) & 0x1F;
  Address = *(struct _LIST_ENTRY **)(a1 + 88);
  v23 = MiComputeFaultNode(a1, 0LL, &Address);
  v24 = (__int64)Address;
  v25 = v23;
  v153 = v23;
  if ( Address )
  {
LABEL_17:
    v26 = v154;
    if ( (*(unsigned int *)(v24 + 52) | ((unsigned __int64)BYTE2(Address[2].Flink) << 32)) == 0x7FFFFFFFELL )
    {
      v27 = 7;
      v12 = v176;
      v28 = v142 | 0x80;
      v24 = (__int64)Address;
      v142 |= 0x80u;
      v152 = 7;
      goto LABEL_37;
    }
    goto LABEL_32;
  }
  v31 = 0xFFFFF68000000000uLL;
  if ( a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL && MiIsStoreProcess(Process) )
  {
LABEL_34:
    MiLockVadTree(1, v31);
    Address = MiLocateAddress(v154);
    v24 = (__int64)Address;
    MiUnlockVadTree(1, 0x11u);
    if ( !v24 )
    {
      v26 = v154;
      goto LABEL_36;
    }
    goto LABEL_17;
  }
  v26 = v154;
  if ( (v164[46] & 0xF) == 0 && v154 < 0xFFFF800000000000uLL )
  {
    v32 = *(_QWORD *)(Process + 1040);
    if ( *(_QWORD *)(v32 + 1168) || *(_QWORD *)(v32 + 1176) )
    {
      v12 = v176;
      goto LABEL_34;
    }
  }
LABEL_32:
  v12 = v176;
  v24 = (__int64)Address;
LABEL_36:
  v27 = v152;
  v28 = v142;
LABEL_37:
  if ( (v7 & 0x800) != 0 )
  {
    LODWORD(v150) = 1;
    v152 = v27 | 1;
  }
  v33 = 0LL;
  if ( (v148 & 4) != 0 )
  {
    v12 = v176;
    v24 = (__int64)Address;
    LOBYTE(v33) = (unsigned __int16)v148 >> 12 == v144[301];
  }
  v34 = v33 | v4;
  if ( (_DWORD)v150 == 1 )
    goto LABEL_42;
  if ( dword_140E37058 )
  {
    LODWORD(v150) = 1;
    --dword_140E37058;
LABEL_42:
    v35 = v144;
    goto LABEL_43;
  }
  if ( !v151 )
  {
    if ( v154 > 0x7FFFFFFEFFFFLL )
    {
      LODWORD(v150) = 1;
      if ( (v28 & 0x10) == 0 && (v154 < 0xFFFFF68000000000uLL || v154 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v34 |= 4u;
        LODWORD(v150) = 16;
      }
    }
    goto LABEL_42;
  }
  if ( !v24 && v26 <= 0x7FFFFFFEFFFFLL )
  {
    MiLockVadTree(1, v33);
    Address = MiLocateAddress(v154);
    v24 = (__int64)Address;
    MiUnlockVadTree(1, 0x11u);
  }
  v110 = v34 & 1 | 2;
  if ( (v142 & 0x10) == 0 )
    v110 = v34 & 1;
  v35 = v144;
  LODWORD(v150) = MiComputeFaultCluster((__int64)v144, v151, v24, v110);
LABEL_43:
  if ( (v34 & 1) != 0 )
  {
    v104 = v150;
    if ( (unsigned int)v150 > v35[302] )
      v104 = v35[302];
    LODWORD(v150) = v104;
  }
  v161 = MiAllocateInPageSupport(a2, v155, (unsigned int)&v150, (unsigned __int64)va & -(__int64)(v12 != 0), v161);
  v36 = v161;
  if ( !v161 )
  {
    v130 = -1073741670;
LABEL_328:
    if ( v151 )
      *((_BYTE *)v151 + 1) = (v130 == -1073741670) + 1;
    return v130;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) != v7 )
  {
LABEL_304:
    v130 = -1073740748;
    if ( v176 )
      MiUnlockProtoPoolPage(v176, 0x11u, v37, v38);
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v36);
    goto LABEL_328;
  }
  if ( (v7 & 0x800) != 0 )
  {
    if ( (*(_BYTE *)(v157 + 34) & 0x28) != 0x28
      && (*(_BYTE *)(v157 + 34) & 0x20) != 0
      && v148 == *(_QWORD *)(v157 + 16)
      && (*(_DWORD *)(*(_QWORD *)v157 + 160LL) & 0x80u) == 0 )
    {
      v24 = (__int64)Address;
      goto LABEL_47;
    }
    goto LABEL_304;
  }
LABEL_47:
  if ( v151 && *(_BYTE *)v151 == 1 )
    MiSetInPagePrefetchPriority(v151, v36);
  v39 = v150;
  if ( (unsigned int)v150 <= 1 || !(unsigned int)MiSufficientAvailablePages((__int64)v144, 0x140uLL) )
  {
    v40 = v149;
LABEL_50:
    v41 = v151;
    goto LABEL_51;
  }
  v80 = a2;
  v81 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
  LODWORD(v155) = ((unsigned int)a2 >> 3) & 0x1FF;
  if ( (v142 & 0x10) != 0 )
  {
    if ( v24 )
    {
      v116 = v154;
    }
    else
    {
      MiLockVadTree(1, a2);
      v116 = v154;
      Address = MiLocateAddress(v154);
      v24 = (__int64)Address;
      MiUnlockVadTree(1, 0x11u);
      if ( !v24 )
        goto LABEL_250;
    }
    if ( (*(_DWORD *)(v24 + 48) & 0x200000) == 0 )
    {
      MiGetProtoPteAddress(v24, v116 >> 12, 12, &v165);
      if ( v165 )
      {
        if ( (v165[4] & 0x20000) == 0 )
        {
          v80 = a2;
          v39 = v150;
          v117 = v165[1];
          if ( (unsigned int)((__int64)(v117 + 8LL * *((unsigned int *)v165 + 11) - a2) >> 3) - 1 < v81 )
            v81 = ((__int64)(v117 + 8LL * *((unsigned int *)v165 + 11) - a2) >> 3) - 1;
          if ( (unsigned int)((__int64)(a2 - v117) >> 3) < (unsigned int)v155 )
            LODWORD(v155) = (__int64)(a2 - v117) >> 3;
          goto LABEL_109;
        }
      }
    }
LABEL_250:
    v80 = a2;
    v39 = 1;
    LODWORD(v150) = 1;
  }
LABEL_109:
  v41 = v151;
  if ( v151 || (v34 & 4) != 0 )
  {
    LODWORD(v155) = 0;
    if ( !v81 )
      v39 = 1;
    LODWORD(v150) = v39;
  }
  if ( v39 > 1 )
  {
    v148 = v7;
    v147 = v39 - 1;
    v157 = v80 + 8;
    if ( v81 > v39 - 1 )
      v81 = v39 - 1;
    PagingFileOffset = MiGetPagingFileOffset(v7);
    v84 = -3 - PagingFileOffset;
    v150 = PagingFileOffset;
    if ( PagingFileOffset + (unsigned __int64)v81 < 0xFFFFFFFE )
      v84 = v81;
    if ( ((unsigned __int8)v34 & v83) != 0 || v151 )
      v34 |= 8u;
    MI_CLEAR_PTE_BITS_FOR_READ_CLUSTER(&v148);
    if ( v84 )
    {
      updated = v148;
      v87 = v157;
      v88 = v150;
      while ( 1 )
      {
        updated = MiUpdatePageFileHighInPte(updated, ++v88);
        v162 = MI_READ_PTE_LOCK_FREE(v87);
        if ( (v162 & 0x3E0) != 0 && (MI_CLEAR_PTE_BITS_FOR_READ_CLUSTER(&v162), v162 == updated) )
        {
          v149 = v87;
        }
        else if ( (v34 & 8) != 0 )
        {
LABEL_124:
          v7 = v163;
          v25 = v153;
          v85 = v147;
          break;
        }
        v87 += 8LL;
        if ( !--v84 )
          goto LABEL_124;
      }
    }
    v89 = a2;
    v148 = v7;
    v149 = (__int64)(v149 - a2) >> 3;
    v90 = v149;
    LODWORD(v150) = v85 - v149;
    v157 = a2;
    v155 = (unsigned int)MiGetPagingFileOffset(v7);
    v92 = v155 - 1;
    if ( v91 <= (unsigned __int64)(v155 - 1) )
      v92 = v91;
    MI_CLEAR_PTE_BITS_FOR_READ_CLUSTER(&v148);
    if ( v92 )
    {
      v94 = v148;
      v95 = v155;
      do
      {
        --v95;
        v89 -= 8LL;
        v94 = MiUpdatePageFileHighInPte(v94, v95);
        v162 = MI_READ_PTE_LOCK_FREE(v89);
        if ( (v162 & 0x3E0) != 0 && (MI_CLEAR_PTE_BITS_FOR_READ_CLUSTER(&v162), v162 == v94) )
        {
          v157 = v89;
        }
        else if ( (v34 & 8) != 0 )
        {
          break;
        }
        --v92;
      }
      while ( v92 );
      v7 = v163;
      v25 = v153;
      v93 = v157;
      v90 = v149;
    }
    v96 = v7;
    if ( qword_140E2D940 )
    {
      if ( (v7 & 0x10) != 0 )
        v96 = v7 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v96 = v7 & ~qword_140E2D940;
    }
    v97 = HIDWORD(v96) - (unsigned int)((__int64)(a2 - v93) >> 3);
    if ( v7 && qword_140E2D940 )
    {
      if ( (v7 & 0x10) != 0 )
        LODWORD(v7) = v7 & 0xFFFFFFEF;
      else
        LODWORD(v7) = ~(_DWORD)qword_140E2D940 & v7;
    }
    v98 = MiSwizzleInvalidPte((v97 << 32) | (unsigned int)v7);
    v36 = v161;
    v148 = v98;
    v145 = v99 + v90 + 1;
    v40 = v38 - 8 * v100;
    v149 = v40;
    goto LABEL_50;
  }
  v36 = v161;
  v40 = v149;
LABEL_51:
  v42 = MiObtainFaultCharges(v144, v145, v152, v38);
  v157 = v42;
  if ( v145 > v42 )
  {
    v131 = v148;
    if ( qword_140E2D940 && (v148 & 0x10) == 0 )
      v131 = v148 & ~qword_140E2D940;
    v134 = v145 - v42;
    v135 = HIDWORD(v131);
    if ( v40 + 8 * v134 <= a2 )
    {
      v136 = v134 + v135;
      v149 = v40 + 8 * v134;
    }
    else
    {
      v149 = a2;
      v136 = ((__int64)(a2 - v40) >> 3) + v135;
    }
    v148 = MiUpdatePageFileHighInPte(v148, v136);
    v44 = v137;
    v145 = v137;
  }
  else
  {
    v44 = v145;
  }
  v45 = 0LL;
  v160 = 0LL;
  v159 = 0LL;
  if ( v41 && *(_BYTE *)v41 == 1 )
  {
    v105 = *((_DWORD *)v41 + 20);
    v46 = v144;
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v144, ((v105 >> 3) & 7) + 1);
    if ( AvailablePagesBelowPriority > v44 )
      AvailablePagesBelowPriority = v44;
  }
  else
  {
    v46 = v144;
    AvailablePagesBelowPriority = v44;
  }
  v48 = 6;
  if ( AvailablePagesBelowPriority )
  {
    if ( (v34 & 0x80u) != 0 )
    {
      if ( !(unsigned __int8)PsReferencePartitionSafe(*((_QWORD *)v46 + 23)) )
      {
        AvailablePagesBelowPriority = 0LL;
        goto LABEL_56;
      }
      *(_DWORD *)(v36 + 192) |= 0x4000000u;
    }
    v101 = v176;
    if ( (v164[46] & 0xF) != 0 || v176 || (unsigned __int8)MiGetCurrentSlabIdentity(CurrentThread) == 0xFF )
    {
      if ( (v34 & 0x40) != 0 && !v101 && (v46[1] & 8) != 0 )
      {
        v102 = 2;
      }
      else
      {
        v102 = 9;
        if ( (v142 & 0x20) != 0 )
          v102 = v48;
      }
    }
    else
    {
      v102 = 8;
    }
    if ( v160 != v45 )
      goto LABEL_57;
    v166 &= v45;
    v163 = AvailablePagesBelowPriority;
    v153 = MiProtectionToCacheAttribute(v169);
    v103 = (__int64)(v149 << 25) >> 16;
    while ( 1 )
    {
      memset_0(v170, 0, 0x70uLL);
      MiInitializePageChainPacket(
        (__int64)v144,
        v164,
        *(_BYTE *)(a1 + 69) & 1,
        v103,
        v25,
        v153,
        v19,
        -1LL,
        *(_QWORD *)(a1 + 96),
        v102,
        &v166,
        AvailablePagesBelowPriority,
        (__int64)v170);
      MiGetPageChain(v170);
      AvailablePagesBelowPriority = v172;
      if ( v172 )
      {
        if ( (_QWORD)v159 )
        {
          v160 += v172;
          **((_QWORD **)&v159 + 1) = v171;
          *((_QWORD *)&v159 + 1) = *((_QWORD *)&v171 + 1);
        }
        else
        {
          v159 = v171;
          v160 = v172;
        }
LABEL_164:
        v46 = v144;
        goto LABEL_165;
      }
      if ( v102 == 9 )
        goto LABEL_164;
      v129 = v166;
      if ( v166 )
        break;
      if ( v102 == 6 )
      {
        _InterlockedAdd((volatile signed __int32 *)v144 + 4345, v166 + 1);
      }
      else if ( v102 == 8 )
      {
        *(_DWORD *)(a1 + 80) |= 0x10u;
      }
      AvailablePagesBelowPriority = v163;
      v102 = 9;
    }
    v46 = v144;
    if ( v144 != *((ULONG **)qword_140E2FD48 + *((unsigned __int16 *)v164 + 87)) )
    {
      *(_QWORD *)(a1 + 136) = v144;
      ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v144 + 2297);
      v129 = v166;
    }
    v138 = v163;
    *(_QWORD *)(a1 + 128) = v129;
    *(_QWORD *)(a1 + 144) = v138;
LABEL_165:
    if ( v160 )
    {
      v44 = v145;
      goto LABEL_57;
    }
    if ( (v34 & 0x80u) == 0 )
      goto LABEL_211;
    v132 = *(_DWORD *)(v36 + 192);
    PsDereferencePartition(*((_QWORD *)v46 + 23));
    v45 = v160;
    v44 = v145;
    *(_DWORD *)(v36 + 192) = v132 & 0xFBFFFFFF;
  }
LABEL_56:
  if ( !v45 )
  {
LABEL_211:
    if ( v176 )
      MiUnlockProtoPoolPage(v176, 0x11u, v43, v45);
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v36);
    if ( v151 )
      *((_BYTE *)v151 + 1) = 2 - (*(_QWORD *)(a1 + 128) != 0LL);
    MiReturnFaultCharges(v46, v157, v152);
    return 3221225495LL;
  }
LABEL_57:
  if ( AvailablePagesBelowPriority != v44 )
  {
    v128 = v149;
    if ( v149 + 8 * AvailablePagesBelowPriority <= a2 )
    {
      v133 = v148;
      if ( qword_140E2D940 && (v148 & 0x10) == 0 )
        v133 = v148 & ~qword_140E2D940;
      v139 = v44 - AvailablePagesBelowPriority;
      v140 = HIDWORD(v133);
      if ( v149 + 8 * v139 > a2 )
      {
        v149 = a2;
        v141 = ((__int64)(a2 - v128) >> 3) + v140;
      }
      else
      {
        v141 = v139 + v140;
        v149 += 8 * v139;
      }
      v148 = MiUpdatePageFileHighInPte(v148, v141);
    }
    v44 = AvailablePagesBelowPriority;
  }
  v49 = (_QWORD *)(v36 + 320);
  v50 = v36 + 272;
  v51 = (*(_DWORD *)(v36 + 192) >> 11) & 7;
  v52 = 0;
  v53 = (_QWORD *)(v36 + 320);
  v174 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v146 = v44;
      v54 = MI_READ_PTE_LOCK_FREE(v149);
      if ( (v34 & 0x10) != 0 )
      {
LABEL_70:
        v60 = v159;
        if ( (_QWORD)v159 )
        {
          *(_QWORD *)&v159 = *(_QWORD *)v159;
          *((_QWORD *)&v159 + 1) &= -(__int64)(--v160 != 0);
        }
        ++v174;
        *v53 = 0xAAAAAAAAAAAAAAABuLL * ((v60 + 0x220000000000LL) >> 4);
        if ( v149 == a2 )
          LOBYTE(v61) = v51;
        else
          v61 = (*(_DWORD *)(v36 + 192) >> 14) & 7;
        MiLockSetPfnPriority(v60, v61);
        goto LABEL_75;
      }
      if ( (v54 & 0xC01) != 0 )
      {
        LOBYTE(v58) = 1;
      }
      else
      {
        v55 = v54;
        if ( qword_140E2D940 )
        {
          v56 = v148;
          if ( (v54 & 0x10) != 0 )
            v55 = v54 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v55 = v54 & ~qword_140E2D940;
          if ( (v148 & 0x10) != 0 )
            v57 = v148;
          else
            v57 = v148 & ~qword_140E2D940;
        }
        else
        {
          v57 = v148;
          v56 = v148;
        }
        LOBYTE(v58) = 1;
        if ( ((v55 ^ v57) & 0xFFFFFFFF00000000uLL) == 0 && (v54 & 4) != 0 )
        {
          v59 = v54 >> 12;
          if ( (((unsigned __int8)v59 ^ (unsigned __int8)(v56 >> 12)) & 0xF) == 0
            && ((v59 & 0xF) == v144[301]) == (v34 & 1) )
          {
            goto LABEL_70;
          }
        }
      }
      if ( (v34 & 8) != 0 )
        break;
      v34 |= 2u;
      *v53 = qword_140E370F8;
LABEL_75:
      ++v53;
      if ( v151 )
        MiAdvanceFaultList(v151);
      v62 = v148;
      v149 += 8LL;
      v63 = v148;
      if ( qword_140E2D940 && (v148 & 0x10) == 0 )
        v62 = v148 & ~qword_140E2D940;
      v64 = HIDWORD(v62) + 1;
      if ( v148 )
      {
        if ( qword_140E2D940 )
        {
          if ( (v148 & 0x10) != 0 )
            v63 = v148 & 0xFFFFFFEF;
          else
            v63 = ~(_DWORD)qword_140E2D940 & v148;
        }
      }
      else
      {
        v63 = 0;
      }
      v65 = MiSwizzleInvalidPte((v64 << 32) | v63);
      v44 = v146;
      v52 += v58;
      v148 = v65;
      if ( v52 >= v146 )
        goto LABEL_90;
    }
    v66 = a2;
    if ( v149 > a2 )
      break;
    v123 = v49;
    if ( v52 )
    {
      v124 = v174;
      do
      {
        if ( *v123 != qword_140E370F8 )
        {
          MiReleaseFreshPageAtDpc(48LL * *v123 - 0x220000000000LL);
          --v124;
        }
        ++v123;
        --v52;
      }
      while ( v52 );
      v36 = v161;
      v66 = a2;
      v174 = v124;
      v50 = v161 + 272;
    }
    v34 &= ~2u;
    v149 = v66;
    v53 = v49;
    v148 = MI_READ_PTE_LOCK_FREE(v66);
    v44 = 1;
  }
  v44 = v52;
  v146 = v52;
LABEL_90:
  v67 = v149 - 8LL * v44;
  v68 = *(_QWORD *)(v36 + 320 + 8 * ((__int64)(a2 - v67) >> 3));
  v69 = v58 & (v142 >> 4);
  if ( v69 )
    v70 = 0LL;
  else
    v70 = (__int64)(v67 << 25) >> 16;
  *(_QWORD *)v50 = 0LL;
  v71 = v44 << 12;
  *(_DWORD *)(v50 + 40) = v71;
  *(_WORD *)(v50 + 10) = 66;
  *(_QWORD *)(v50 + 32) = v70 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v50 + 44) = v70 & 0xFFF;
  *(_WORD *)(v50 + 8) = 8 * ((((unsigned __int64)(v70 & 0xFFF) + v71 + 4095) >> 12) + 6);
  if ( (v34 & 2) != 0 )
  {
    v118 = MiReduceMdl(v50);
    if ( v118 )
    {
      v67 += 8 * v118;
      if ( !v69 )
        *(_QWORD *)(v50 + 32) += v118 << 12;
    }
    v72 = *(_DWORD *)(v50 + 40) >> 12;
  }
  else
  {
    *(_WORD *)(v50 + 10) = 16450;
    v72 = v146;
  }
  v73 = MI_READ_PTE_LOCK_FREE(v67);
  if ( v72 == 1 )
    v143 = v142 & 0xF8 | (*(_DWORD *)(v36 + 192) >> 11) & 7 | 8;
  else
    v143 = v142 & 0xDF;
  LOBYTE(v158) = v143;
  MiInitializeReadInProgressPfn(v154, (_QWORD *)(v36 + 320), v72, (unsigned __int64 *)v67, v36, v143);
  if ( (v34 & 0x10) != 0 )
  {
    if ( qword_140E2D940 )
    {
      if ( (v73 & 0x10) != 0 )
        v73 &= ~0x10uLL;
      else
        v73 &= ~qword_140E2D940;
    }
    v125 = 48 * ((v73 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    MiFlowThroughInsertNode(v36, v125);
    v73 = *(_QWORD *)(v125 + 16);
  }
  if ( (v143 & 0x10) != 0 )
    MiObtainProtoReference(v176, 0);
  v74 = MI_READ_PTE_LOCK_FREE(a2);
  *(_QWORD *)(v36 + 168) = v74;
  *(_QWORD *)(v36 + 232) = a2;
  v148 = v74;
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    LODWORD(v76) = v76 | 0x200;
  if ( Address && MiVadPageSizes[(LODWORD(Address[3].Flink) >> 19) & 3] == 16 )
    LODWORD(v76) = v76 | 0x200000;
  v77 = v176;
  *(_DWORD *)(v36 + 192) = v76;
  if ( v77 )
    MiUnlockProtoPoolPage(v77, 0x11u, v75, v76);
  v78 = (_QWORD *)v159;
  while ( 1 )
  {
    v79 = (__int64)v78;
    if ( !v78 )
      break;
    v78 = (_QWORD *)*v78;
    *(_QWORD *)&v159 = v78;
    *((_QWORD *)&v159 + 1) &= -(__int64)(--v160 != 0);
    MiReleaseFreshPage(v79);
  }
  v111 = v151;
  if ( v174 != v157 )
    MiReturnFaultCharges(v144, v157 - v174, v152);
  *v178 = v36;
  v112 = (unsigned int)MiGetPagingFileOffset(v73);
  LODWORD(v168) = v112;
  v113 = *(_QWORD *)&v144[2 * ((unsigned __int16)v73 >> 12) + 4632];
  if ( (v143 & 0x10) != 0 )
    *(_QWORD *)(v36 + 160) = v176;
  v114 = *(_DWORD *)(v36 + 192);
  if ( (v34 & 1) != 0 )
  {
    *(_QWORD *)(v36 + 96) = v112;
    v114 |= 0x400u;
  }
  else
  {
    HIDWORD(v168) = 0;
    *(_QWORD *)(v36 + 96) = (unsigned __int64)(unsigned int)v168 << 12;
  }
  v115 = v114 | 0x400000;
  *(_QWORD *)(v36 + 200) = v113;
  if ( *(_QWORD *)(v113 + 184)
    && (!v111 || *(_BYTE *)v111 != 1 || (v111[10] & 0x1000) == 0 || (dword_140FC41F0 & 1) != 0) )
  {
    v115 |= 0x800000u;
  }
  *(_DWORD *)(v36 + 192) = v115;
  *(_QWORD *)(v36 + 240) = v67;
  *(_QWORD *)(v36 + 248) = 48 * v68 - 0x220000000000LL;
  if ( _bittest16((const signed __int16 *)(v113 + 172), 0xBu) )
    MiReadFromMemoryPagefile(v113, v36);
  return 3221435187LL;
}
