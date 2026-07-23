/*
 * XREFs of MiResolvePageFileFault @ 0x14033FD3C
 * Callers:
 *     MiDispatchFault @ 0x140333520 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiIssueFlowThroughFault @ 0x140426F68 (MiIssueFlowThroughFault.c)
 * Callees:
 *     MiKernelStackVaToStackNode @ 0x14020CE1C (MiKernelStackVaToStackNode.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     MiInitializeReadInProgressPfn @ 0x1402558FC (MiInitializeReadInProgressPfn.c)
 *     MiGetCurrentSlabIdentity @ 0x1402619D0 (MiGetCurrentSlabIdentity.c)
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140269F40 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiUpdatePageFileHighInPte @ 0x1402EACE0 (MiUpdatePageFileHighInPte.c)
 *     MiInitializePageChainPacket @ 0x1402F4870 (MiInitializePageChainPacket.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1402F51E0 (MiGetAvailablePagesBelowPriority.c)
 *     MiSwizzleInvalidPte @ 0x1402FD620 (MiSwizzleInvalidPte.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
 *     MiSharedVaToPartition @ 0x140307460 (MiSharedVaToPartition.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiObtainFaultCharges @ 0x14033EB80 (MiObtainFaultCharges.c)
 *     MiAllocateInPageSupport @ 0x140341520 (MiAllocateInPageSupport.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiComputeFaultCluster @ 0x140341F24 (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x140342110 (MiAdvanceFaultList.c)
 *     MiIsStoreProcess @ 0x140343630 (MiIsStoreProcess.c)
 *     MiComputeFaultNode @ 0x140343670 (MiComputeFaultNode.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiObtainProtoReference @ 0x14034594C (MiObtainProtoReference.c)
 *     MiSufficientAvailablePages @ 0x1403526D0 (MiSufficientAvailablePages.c)
 *     MiFlowThroughInsertNode @ 0x1403F01B0 (MiFlowThroughInsertNode.c)
 *     MiLockSetPfnPriority @ 0x140421B80 (MiLockSetPfnPriority.c)
 *     MiIsPteInStore @ 0x140423310 (MiIsPteInStore.c)
 *     MiFreeInPageSupportBlock @ 0x140427430 (MiFreeInPageSupportBlock.c)
 *     MiReduceMdl @ 0x14043D420 (MiReduceMdl.c)
 *     MiSetInPagePrefetchPriority @ 0x14046390C (MiSetInPagePrefetchPriority.c)
 *     MiReturnFaultCharges @ 0x14047CD94 (MiReturnFaultCharges.c)
 *     MiReadFromMemoryPagefile @ 0x1404CAF64 (MiReadFromMemoryPagefile.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  ULONG *v15; // rcx
  unsigned __int64 v16; // r13
  int v17; // r12d
  int SystemRegionType; // ecx
  __int64 v19; // r9
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  int v22; // r14d
  ULONG *v23; // rcx
  unsigned __int64 v24; // r15
  _KPROCESS *Process; // r12
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r13
  int v30; // r15d
  unsigned __int64 v31; // r9
  int v32; // eax
  int v33; // eax
  bool v34; // zf
  __int64 v35; // rdx
  int v36; // esi
  ULONG *v37; // r12
  __int64 v38; // r12
  unsigned __int64 v39; // rdx
  __int64 v40; // r8
  struct _KPRCB *v41; // r9
  unsigned int v42; // edi
  unsigned __int64 v43; // rdi
  _BYTE *v44; // r13
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // r8
  unsigned int v48; // r10d
  __int64 v49; // r9
  ULONG *v50; // r11
  unsigned __int64 AvailablePagesBelowPriority; // rdi
  ULONG *v52; // r14
  __int64 v53; // r15
  _QWORD *v54; // rbx
  unsigned int v55; // r14d
  unsigned int v56; // edi
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int64 v59; // r8
  __int64 v60; // r9
  unsigned __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned __int64 v63; // rcx
  int v64; // r11d
  unsigned __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // rdx
  unsigned __int64 v68; // rdx
  unsigned int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rax
  unsigned __int64 v72; // r14
  __int64 v73; // r13
  char v74; // bl
  __int64 v75; // r9
  __int64 v76; // r8
  unsigned int v77; // r15d
  unsigned __int64 v78; // rbx
  __int64 v79; // rax
  unsigned __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rcx
  _QWORD *v84; // rdi
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 *v87; // rdx
  unsigned int v88; // r12d
  unsigned int PagingFileOffset; // eax
  unsigned __int8 v90; // r8
  unsigned int v91; // r13d
  unsigned int v92; // r11d
  __int64 updated; // rdi
  unsigned __int64 v94; // r12
  __int64 v95; // r15
  unsigned __int64 v96; // r12
  int v97; // r11d
  unsigned int v98; // eax
  unsigned int v99; // r10d
  unsigned int v100; // r13d
  __int64 v101; // r11
  __int64 v102; // rdi
  __int64 v103; // r15
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rax
  __int64 v106; // rax
  int v107; // edx
  __int64 v108; // r8
  __int64 v109; // r8
  int v110; // ebx
  __int64 v111; // r13
  ULONG v112; // eax
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v117; // r9
  __int64 v118; // rdx
  volatile _KAFFINITY_EX *ActiveProcessors; // rax
  _BYTE *v120; // r15
  __int64 v121; // rdx
  __int64 v122; // r8
  int v123; // eax
  int v124; // eax
  unsigned __int64 v125; // rdi
  __int64 v126; // rcx
  __int64 v127; // rax
  unsigned __int64 v128; // r9
  char v129; // al
  __int64 v130; // r9
  __int64 v131; // rax
  __int64 v132; // rbx
  _QWORD *v133; // rax
  _QWORD *v134; // rbx
  unsigned int v135; // r15d
  int v136; // eax
  _QWORD *v137; // rax
  unsigned __int64 v138; // r9
  unsigned int v139; // ebx
  unsigned __int64 v140; // rdx
  int v141; // ebx
  unsigned __int64 v142; // rdx
  unsigned __int64 v143; // rbx
  unsigned __int64 v144; // rdx
  __int64 v145; // rdx
  unsigned int v146; // r9d
  unsigned __int64 v147; // rax
  unsigned __int64 v148; // rcx
  unsigned __int64 v149; // rdx
  __int64 v150; // rdx
  unsigned __int8 v151; // [rsp+78h] [rbp-90h]
  char v152; // [rsp+78h] [rbp-90h]
  ULONG *v153; // [rsp+80h] [rbp-88h]
  unsigned int v154; // [rsp+88h] [rbp-80h]
  unsigned int v155; // [rsp+88h] [rbp-80h]
  unsigned int v156; // [rsp+88h] [rbp-80h]
  unsigned __int64 v157; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v158; // [rsp+98h] [rbp-70h]
  __int64 v159; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE *v160; // [rsp+A8h] [rbp-60h]
  unsigned int v161; // [rsp+B0h] [rbp-58h]
  int v162; // [rsp+B4h] [rbp-54h]
  unsigned __int64 v163; // [rsp+B8h] [rbp-50h]
  __int64 v164; // [rsp+C0h] [rbp-48h]
  __int64 Address; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v166; // [rsp+D0h] [rbp-38h]
  int v167; // [rsp+D8h] [rbp-30h]
  __int128 v168; // [rsp+E0h] [rbp-28h]
  __int64 v169; // [rsp+F0h] [rbp-18h]
  __int64 v170; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v171; // [rsp+100h] [rbp-8h]
  unsigned __int64 v172; // [rsp+108h] [rbp+0h]
  unsigned int *v173; // [rsp+110h] [rbp+8h]
  __int64 v174; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v175; // [rsp+120h] [rbp+18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+128h] [rbp+20h]
  __int64 v177; // [rsp+130h] [rbp+28h]
  __int64 v178; // [rsp+138h] [rbp+30h]
  _QWORD v179[11]; // [rsp+148h] [rbp+40h] BYREF
  __int128 v180; // [rsp+1A0h] [rbp+98h]
  unsigned __int64 v181; // [rsp+1B0h] [rbp+A8h]
  unsigned int v183; // [rsp+208h] [rbp+100h]
  __int64 v185; // [rsp+218h] [rbp+110h] BYREF
  va_list va; // [rsp+218h] [rbp+110h]
  __int64 *v187; // [rsp+220h] [rbp+118h]
  va_list va1; // [rsp+228h] [rbp+120h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v185 = va_arg(va1, _QWORD);
  v187 = va_arg(va1, __int64 *);
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v174 = 0LL;
  v177 = 0LL;
  v163 = v2;
  v173 = (unsigned int *)v3;
  v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
  v172 = v8;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    if ( v185 )
    {
      LOBYTE(v7) = 17;
      MiUnlockProtoPoolPage(v185, v7, v9, v10);
    }
    return 3221225633LL;
  }
  v11 = 2048LL;
  v12 = 0xFFFFDE0000000000uLL;
  if ( (v8 & 0x800) != 0 )
  {
    v13 = v8;
    if ( qword_140E2DCC0 )
    {
      if ( (v8 & 0x10) != 0 )
        v13 = v8 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v13 = v8 & ~qword_140E2DCC0;
    }
    v4 = 16;
    v166 = 48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v157 = *(_QWORD *)(v166 + 16);
    v14 = v185;
    v15 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v166 + 40) >> 43) & 0x3FFLL));
    goto LABEL_7;
  }
  v166 = 0LL;
  v14 = v185;
  v157 = v8;
  if ( v185 )
  {
    v15 = MiSharedVaToPartition(v3, v2, a2, 0xFFFFFFFFFFLL);
LABEL_7:
    v11 = 2048LL;
    goto LABEL_8;
  }
  v15 = (ULONG *)*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(v3 + 174));
LABEL_8:
  v16 = 0LL;
  v153 = v15;
  v171 = 0LL;
  v160 = 0LL;
  v17 = 2;
  LODWORD(v164) = 2;
  if ( (v5 & 1) != 0 )
  {
    v128 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
    v129 = *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
    switch ( v129 )
    {
      case 5:
        v136 = *(_DWORD *)(v128 + 56);
        if ( (v136 & 4) != 0 && ((v136 & 0x10) != 0 || !(unsigned int)MiIsPteInStore(v15, v157)) )
        {
          if ( v14 )
          {
            LOBYTE(v11) = 17;
            MiUnlockProtoPoolPage(v14, v11, v12, v128);
          }
          return 3221225495LL;
        }
        if ( (*(_DWORD *)(v128 + 56) & 0x20) != 0 )
          v4 |= 0x40u;
        v160 = 0LL;
        break;
      case 2:
        v16 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
        v160 = (_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
        break;
      case 1:
        v160 = (_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
        v16 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (v8 & 0x800) != 0 || !(unsigned int)MiGetPagingFileOffset(v8) )
          return 0LL;
        v131 = *(_QWORD *)(v130 + 112);
        v17 = 0;
        LODWORD(v164) = 0;
        v4 |= 0x20u;
        v171 = v131;
        break;
    }
  }
  SystemRegionType = MiGetSystemRegionType(v163);
  if ( (v5 & 1) != 0 )
  {
    v20 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v20 == 4 )
    {
      v21 = *(_QWORD *)(v20 + 48);
      v22 = 129;
      v160 = (_BYTE *)v20;
      v16 = v20;
      LODWORD(v164) = v17 | 8;
      v23 = (ULONG *)*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(*(_QWORD *)(v21 + 544) + 1198LL));
      v153 = v23;
LABEL_12:
      v24 = v163;
      goto LABEL_13;
    }
  }
  if ( ((v8 >> 5) & 0x1F) != 0x1F )
  {
    v33 = 1;
    v34 = SystemRegionType == 11;
    v23 = v153;
    if ( v34 )
      v33 = 129;
    v22 = v33;
    goto LABEL_12;
  }
  v24 = v163;
  v22 = 129;
  v137 = MiKernelStackVaToStackNode(v163, 1);
  if ( v137 )
  {
    v23 = (ULONG *)*((_QWORD *)qword_140E300C8 + *((unsigned __int16 *)v137 + 20));
    v153 = v23;
    if ( v23 != &MiSystemPartition && (v4 & 0x20) != 0 && *(_BYTE *)v16 == 1 )
      v4 |= 0x80u;
  }
  else
  {
    v23 = &MiSystemPartition;
    v153 = &MiSystemPartition;
  }
  LODWORD(v164) = v17 | 8;
LABEL_13:
  if ( (v4 & 0x20) != 0 && (*(_DWORD *)(v16 + 80) & 0x200) != 0 && (unsigned int)MiIsPteInStore(v23, v8) )
  {
    if ( v14 )
    {
      LOBYTE(v114) = 17;
      MiUnlockProtoPoolPage(v14, v114, v115, v19);
    }
    return 0LL;
  }
  v167 = 0;
  v154 = 1;
  Process = CurrentThread->ApcState.Process;
  v158 = (unsigned __int64)a2;
  v161 = 2;
  LODWORD(v159) = 16;
  if ( (unsigned __int64)a2 < 0xFFFFF68000000000uLL || (unsigned __int64)a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v151 = 16;
    v113 = MI_READ_PTE_LOCK_FREE(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( MI_PROTO_FORMAT_COMBINED(v113) )
    {
      v151 = 48;
    }
    else if ( !Process[1].IdealProcessorAssignmentBlock )
    {
      goto LABEL_17;
    }
    LODWORD(v159) = 1;
    goto LABEL_17;
  }
  v151 = v167;
LABEL_17:
  v178 = (v8 >> 5) & 0x1F;
  Address = *(_QWORD *)(a1 + 88);
  v26 = MiComputeFaultNode(a1, 0LL, &Address, v19);
  v29 = Address;
  v30 = v26;
  v162 = v26;
  if ( Address )
    goto LABEL_18;
  v118 = 0xFFFFF68000000000uLL;
  if ( (unsigned __int64)a2 > 0xFFFFF6BFFFFFFF78uLL
    || (unsigned __int64)a2 < 0xFFFFF68000000000uLL
    || !(unsigned int)MiIsStoreProcess(Process, 0xFFFFF68000000000uLL, v27, v28) )
  {
    v31 = v163;
    if ( (v173[46] & 0xF) != 0
      || v163 >= 0xFFFF800000000000uLL
      || (ActiveProcessors = Process[2].ActiveProcessors, !ActiveProcessors[4].StaticBitmap[13])
      && !ActiveProcessors[4].StaticBitmap[14] )
    {
LABEL_209:
      v14 = v185;
      v29 = Address;
      goto LABEL_30;
    }
    v14 = v185;
  }
  MiLockVadTree(1, v118, v27, v31);
  Address = MiLocateAddress(v163);
  v29 = Address;
  MiUnlockVadTree(1, 0x11u);
  if ( v29 )
  {
LABEL_18:
    v31 = v163;
    if ( (*(unsigned int *)(v29 + 52) | ((unsigned __int64)*(unsigned __int8 *)(Address + 34) << 32)) == 0x7FFFFFFFELL )
    {
      v32 = 7;
      v14 = v185;
      LOBYTE(v27) = v151 | 0x80;
      v29 = Address;
      v151 |= 0x80u;
      v161 = 7;
      goto LABEL_31;
    }
    goto LABEL_209;
  }
  v31 = v163;
LABEL_30:
  v32 = v161;
  LOBYTE(v27) = v151;
LABEL_31:
  if ( (v8 & 0x800) != 0 )
  {
    LODWORD(v159) = 1;
    v161 = v32 | 1;
  }
  v35 = 0LL;
  if ( (v157 & 4) != 0 )
  {
    v14 = v185;
    v29 = Address;
    LOBYTE(v35) = (unsigned __int16)v157 >> 12 == v153[301];
  }
  v36 = v35 | v4;
  if ( (_DWORD)v159 == 1 )
    goto LABEL_36;
  if ( dword_140E373D8 )
  {
    LODWORD(v159) = 1;
    --dword_140E373D8;
LABEL_36:
    v37 = v153;
    goto LABEL_37;
  }
  if ( !v160 )
  {
    if ( v163 > 0x7FFFFFFEFFFFLL )
    {
      LODWORD(v159) = 1;
      if ( (v27 & 0x10) == 0 && (v163 < 0xFFFFF68000000000uLL || v163 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v36 |= 4u;
        LODWORD(v159) = 16;
      }
    }
    goto LABEL_36;
  }
  if ( !v29 && v31 <= 0x7FFFFFFEFFFFLL )
  {
    MiLockVadTree(1, v35, v27, v31);
    Address = MiLocateAddress(v163);
    v29 = Address;
    MiUnlockVadTree(1, 0x11u);
  }
  v117 = v36 & 1 | 2u;
  if ( (v151 & 0x10) == 0 )
    v117 = v36 & 1;
  v37 = v153;
  LODWORD(v159) = MiComputeFaultCluster(v153, v160, v29, v117);
LABEL_37:
  if ( (v36 & 1) != 0 )
  {
    v112 = v159;
    if ( (unsigned int)v159 > v37[302] )
      v112 = v37[302];
    LODWORD(v159) = v112;
  }
  v171 = MiAllocateInPageSupport(
           (_DWORD)a2,
           v164,
           (unsigned int)&v159,
           (unsigned __int64)va & -(__int64)(v14 != 0),
           v171);
  v38 = v171;
  if ( !v171 )
  {
    v139 = -1073741670;
LABEL_330:
    if ( v160 )
      v160[1] = (v139 == -1073741670) + 1;
    return v139;
  }
  if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) != v8 )
  {
LABEL_306:
    v139 = -1073740748;
    if ( v185 )
    {
      LOBYTE(v39) = 17;
      MiUnlockProtoPoolPage(v185, v39, v40, (__int64)v41);
    }
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v38);
    goto LABEL_330;
  }
  if ( (v8 & 0x800) != 0 )
  {
    v39 = v166;
    if ( (*(_BYTE *)(v166 + 34) & 0x28) != 0x28
      && (*(_BYTE *)(v166 + 34) & 0x20) != 0
      && v157 == *(_QWORD *)(v166 + 16)
      && (*(_DWORD *)(*(_QWORD *)v166 + 160LL) & 0x80u) == 0 )
    {
      v29 = Address;
      goto LABEL_41;
    }
    goto LABEL_306;
  }
LABEL_41:
  if ( v160 && *v160 == 1 )
    MiSetInPagePrefetchPriority(v160, v38);
  v42 = v159;
  if ( (unsigned int)v159 <= 1 || !(unsigned int)MiSufficientAvailablePages(v153, 320LL) )
  {
    v43 = v158;
LABEL_44:
    v44 = v160;
    goto LABEL_45;
  }
  v87 = a2;
  v88 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
  LODWORD(v164) = ((unsigned int)a2 >> 3) & 0x1FF;
  if ( (v151 & 0x10) != 0 )
  {
    if ( v29 )
    {
      v125 = v163;
    }
    else
    {
      MiLockVadTree(1, (__int64)a2, v86, (__int64)v41);
      v125 = v163;
      Address = MiLocateAddress(v163);
      v29 = Address;
      MiUnlockVadTree(1, 0x11u);
      if ( !v29 )
        goto LABEL_252;
    }
    if ( (*(_DWORD *)(v29 + 48) & 0x200000) == 0 )
    {
      MiGetProtoPteAddress(v29, v125 >> 12, 0xCu, &v174);
      if ( v174 )
      {
        if ( (*(_DWORD *)(v174 + 32) & 0x20000) == 0 )
        {
          v87 = a2;
          v42 = v159;
          v126 = *(_QWORD *)(v174 + 8);
          if ( (unsigned int)((v126 + 8LL * *(unsigned int *)(v174 + 44) - (__int64)a2) >> 3) - 1 < v88 )
            v88 = ((v126 + 8LL * *(unsigned int *)(v174 + 44) - (__int64)a2) >> 3) - 1;
          if ( (unsigned int)(((__int64)a2 - v126) >> 3) < (unsigned int)v164 )
            LODWORD(v164) = ((__int64)a2 - v126) >> 3;
          goto LABEL_104;
        }
      }
    }
LABEL_252:
    v87 = a2;
    v42 = 1;
    LODWORD(v159) = 1;
  }
LABEL_104:
  v44 = v160;
  if ( v160 || (v36 & 4) != 0 )
  {
    LODWORD(v164) = 0;
    if ( !v88 )
      v42 = 1;
    LODWORD(v159) = v42;
  }
  if ( v42 > 1 )
  {
    v157 = v8;
    v156 = v42 - 1;
    v166 = (__int64)(v87 + 1);
    if ( v88 > v42 - 1 )
      v88 = v42 - 1;
    PagingFileOffset = MiGetPagingFileOffset(v8);
    v91 = -3 - PagingFileOffset;
    v159 = PagingFileOffset;
    if ( PagingFileOffset + (unsigned __int64)v88 < 0xFFFFFFFE )
      v91 = v88;
    if ( ((unsigned __int8)v36 & v90) != 0 || v160 )
      v36 |= 8u;
    MiClearPageFileReservation((__int64 *)&v157);
    updated = v157 & 0xFFFFFFFFFC00FF1FuLL;
    if ( v91 )
    {
      v94 = v166;
      v95 = v159;
      while ( 1 )
      {
        updated = MiUpdatePageFileHighInPte(updated, ++v95);
        v170 = MI_READ_PTE_LOCK_FREE(v94);
        if ( (v170 & 0x3E0) != 0 && (MiClearPageFileReservation(&v170), v170 &= 0xFFFFFFFFFC00FF1FuLL, v170 == updated) )
        {
          v158 = v94;
        }
        else if ( (v36 & 8) != 0 )
        {
LABEL_119:
          v8 = v172;
          v30 = v162;
          v92 = v156;
          break;
        }
        v94 += 8LL;
        if ( !--v91 )
          goto LABEL_119;
      }
    }
    v96 = (unsigned __int64)a2;
    v166 = (__int64)a2;
    v97 = v92 - ((__int64)(v158 - (_QWORD)a2) >> 3);
    v158 = (__int64)(v158 - (_QWORD)a2) >> 3;
    LODWORD(v159) = v97;
    v157 = v8;
    v98 = MiGetPagingFileOffset(v8);
    v164 = v98;
    v100 = v98 - 1;
    if ( v99 <= (unsigned __int64)v98 - 1 )
      v100 = v99;
    MiClearPageFileReservation((__int64 *)&v157);
    v102 = v157 & 0xFFFFFFFFFC00FF1FuLL;
    if ( v100 )
    {
      v103 = v164;
      do
      {
        --v103;
        v96 -= 8LL;
        v102 = MiUpdatePageFileHighInPte(v102, v103);
        v170 = MI_READ_PTE_LOCK_FREE(v96);
        if ( (v170 & 0x3E0) != 0 && (MiClearPageFileReservation(&v170), v170 &= 0xFFFFFFFFFC00FF1FuLL, v170 == v102) )
        {
          v166 = v96;
        }
        else if ( (v36 & 8) != 0 )
        {
          break;
        }
        --v100;
      }
      while ( v100 );
      v8 = v172;
      v30 = v162;
      v101 = v166;
    }
    v104 = v8;
    if ( qword_140E2DCC0 )
    {
      if ( (v8 & 0x10) != 0 )
        v104 = v8 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v104 = v8 & ~qword_140E2DCC0;
    }
    v105 = HIDWORD(v104) - (unsigned int)(((__int64)a2 - v101) >> 3);
    if ( v8 && qword_140E2DCC0 )
    {
      if ( (v8 & 0x10) != 0 )
        LODWORD(v8) = v8 & 0xFFFFFFEF;
      else
        LODWORD(v8) = ~(_DWORD)qword_140E2DCC0 & v8;
    }
    v106 = MiSwizzleInvalidPte((v105 << 32) | (unsigned int)v8);
    v38 = v171;
    v157 = v106;
    v154 = v107 + v158 + 1;
    v43 = (unsigned __int64)v41 - 8 * v108;
    v158 = v43;
    goto LABEL_44;
  }
  v38 = v171;
  v43 = v158;
LABEL_45:
  v45 = MiObtainFaultCharges(v153, v154, v161, v41);
  v166 = v45;
  if ( v154 > v45 )
  {
    v140 = v157;
    if ( qword_140E2DCC0 && (v157 & 0x10) == 0 )
      v140 = v157 & ~qword_140E2DCC0;
    v143 = v154 - v45;
    v144 = HIDWORD(v140);
    if ( v43 + 8 * v143 <= (unsigned __int64)a2 )
    {
      v145 = v143 + v144;
      v158 = v43 + 8 * v143;
    }
    else
    {
      v158 = (unsigned __int64)a2;
      v145 = ((__int64)((__int64)a2 - v43) >> 3) + v144;
    }
    v157 = MiUpdatePageFileHighInPte(v157, v145);
    v48 = v146;
    v154 = v146;
  }
  else
  {
    v48 = v154;
  }
  v49 = 0LL;
  v169 = 0LL;
  v168 = 0LL;
  if ( v44 && *v44 == 1 )
  {
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v153, ((*((_DWORD *)v44 + 20) >> 3) & 7u) + 1);
    if ( AvailablePagesBelowPriority > v48 )
      AvailablePagesBelowPriority = v48;
  }
  else
  {
    v50 = v153;
    AvailablePagesBelowPriority = v48;
  }
  if ( !AvailablePagesBelowPriority )
    goto LABEL_50;
  if ( (v36 & 0x80u) != 0 )
  {
    if ( !PsReferencePartitionSafe(*((_QWORD *)v50 + 23)) )
    {
      AvailablePagesBelowPriority = 0LL;
LABEL_50:
      v52 = v153;
      goto LABEL_51;
    }
    *(_DWORD *)(v38 + 192) |= 0x4000000u;
  }
  v109 = v185;
  if ( (v173[46] & 0xF) != 0 || v185 || (unsigned __int8)MiGetCurrentSlabIdentity((__int64)CurrentThread) == 0xFF )
  {
    if ( (v36 & 0x40) != 0 && !v109 && (v50[1] & 8) != 0 )
    {
      v110 = 2;
    }
    else
    {
      v110 = 9;
      if ( (v151 & 0x20) != 0 )
        v110 = 6;
    }
  }
  else
  {
    v110 = 8;
  }
  if ( v169 != v49 )
    goto LABEL_52;
  v175 &= v49;
  v172 = AvailablePagesBelowPriority;
  v162 = MiProtectionToCacheAttribute(v178);
  v111 = (__int64)(v158 << 25) >> 16;
  while ( 1 )
  {
    memset_0(v179, 0, 0x70uLL);
    MiInitializePageChainPacket(
      (__int64)v153,
      v173,
      *(_BYTE *)(a1 + 69) & 1,
      v111,
      v30,
      v162,
      v22,
      -1LL,
      *(_QWORD *)(a1 + 96),
      v110,
      &v175,
      AvailablePagesBelowPriority,
      (__int64)v179);
    MiGetPageChain(v179);
    AvailablePagesBelowPriority = v181;
    if ( v181 )
    {
      if ( (_QWORD)v168 )
      {
        v169 += v181;
        **((_QWORD **)&v168 + 1) = v180;
        *((_QWORD *)&v168 + 1) = *((_QWORD *)&v180 + 1);
      }
      else
      {
        v168 = v180;
        v169 = v181;
      }
LABEL_159:
      v52 = v153;
      goto LABEL_160;
    }
    if ( v110 == 9 )
      goto LABEL_159;
    v46 = v175;
    if ( v175 )
      break;
    if ( v110 == 6 )
    {
      _InterlockedAdd((volatile signed __int32 *)v153 + 4345, v175 + 1);
    }
    else if ( v110 == 8 )
    {
      *(_DWORD *)(a1 + 80) |= 0x10u;
    }
    AvailablePagesBelowPriority = v172;
    v110 = 9;
  }
  v52 = v153;
  if ( v153 != *((ULONG **)qword_140E300C8 + *((unsigned __int16 *)v173 + 87)) )
  {
    *(_QWORD *)(a1 + 136) = v153;
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v153 + 2297);
    v46 = v175;
  }
  v147 = v172;
  *(_QWORD *)(a1 + 128) = v46;
  *(_QWORD *)(a1 + 144) = v147;
LABEL_160:
  if ( v169 )
  {
    v44 = v160;
    v48 = v154;
    goto LABEL_52;
  }
  if ( (v36 & 0x80u) == 0 )
    goto LABEL_215;
  v141 = *(_DWORD *)(v38 + 192);
  PsDereferencePartition(*((_QWORD *)v52 + 23));
  v49 = v169;
  v44 = v160;
  v48 = v154;
  *(_DWORD *)(v38 + 192) = v141 & 0xFBFFFFFF;
LABEL_51:
  if ( !v49 )
  {
LABEL_215:
    if ( v185 )
    {
      LOBYTE(v46) = 17;
      MiUnlockProtoPoolPage(v185, v46, v47, v49);
    }
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v38);
    if ( v160 )
      v160[1] = 2 - (*(_QWORD *)(a1 + 128) != 0LL);
    MiReturnFaultCharges(v52, v166, v161);
    return 3221225495LL;
  }
LABEL_52:
  if ( AvailablePagesBelowPriority != v48 )
  {
    v138 = v158;
    if ( v158 + 8 * AvailablePagesBelowPriority <= (unsigned __int64)a2 )
    {
      v142 = v157;
      if ( qword_140E2DCC0 && (v157 & 0x10) == 0 )
        v142 = v157 & ~qword_140E2DCC0;
      v148 = v48 - AvailablePagesBelowPriority;
      v149 = HIDWORD(v142);
      if ( v158 + 8 * v148 > (unsigned __int64)a2 )
      {
        v158 = (unsigned __int64)a2;
        v150 = ((__int64)((__int64)a2 - v138) >> 3) + v149;
      }
      else
      {
        v150 = v148 + v149;
        v158 += 8 * v148;
      }
      v157 = MiUpdatePageFileHighInPte(v157, v150);
    }
    v48 = AvailablePagesBelowPriority;
  }
  v53 = v38 + 272;
  v54 = (_QWORD *)(v38 + 320);
  v55 = (*(_DWORD *)(v38 + 192) >> 11) & 7;
  v56 = 0;
  v183 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v155 = v48;
      v57 = MI_READ_PTE_LOCK_FREE(v158);
      if ( (v36 & 0x10) != 0 )
      {
LABEL_65:
        v66 = v168;
        if ( (_QWORD)v168 )
        {
          *(_QWORD *)&v168 = *(_QWORD *)v168;
          *((_QWORD *)&v168 + 1) &= -(__int64)(--v169 != 0);
        }
        ++v183;
        *v54 = 0xAAAAAAAAAAAAAAABuLL * ((v66 + 0x220000000000LL) >> 4);
        if ( (__int64 *)v158 == a2 )
          v67 = v55;
        else
          v67 = (*(_DWORD *)(v38 + 192) >> 14) & 7;
        MiLockSetPfnPriority(v66, v67);
        goto LABEL_70;
      }
      if ( (v57 & 0xC01) != 0 )
      {
        LOBYTE(v64) = 1;
      }
      else
      {
        v61 = v57;
        if ( qword_140E2DCC0 )
        {
          v59 = v157;
          if ( (v57 & 0x10) != 0 )
            v61 = v57 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v61 = v57 & ~qword_140E2DCC0;
          if ( (v157 & 0x10) != 0 )
            v62 = v157;
          else
            v62 = v157 & ~qword_140E2DCC0;
        }
        else
        {
          v62 = v157;
          v59 = v157;
        }
        v63 = v61 ^ v62;
        LOBYTE(v64) = 1;
        v58 = 0xFFFFFFFF00000000uLL;
        if ( (v63 & 0xFFFFFFFF00000000uLL) == 0 && (v57 & 4) != 0 )
        {
          v65 = v57 >> 12;
          v59 >>= 12;
          LOBYTE(v59) = v65 ^ v59;
          if ( (v59 & 0xF) == 0 )
          {
            v58 = (v65 & 0xF) == v153[301];
            if ( (_DWORD)v58 == (v36 & 1) )
              goto LABEL_65;
          }
        }
      }
      if ( (v36 & 8) != 0 )
        break;
      v36 |= 2u;
      *v54 = qword_140E37478;
LABEL_70:
      ++v54;
      if ( v44 )
        MiAdvanceFaultList(v44);
      v68 = v157;
      v158 += 8LL;
      v69 = v157;
      if ( qword_140E2DCC0 && (v157 & 0x10) == 0 )
        v68 = v157 & ~qword_140E2DCC0;
      v70 = HIDWORD(v68) + 1;
      if ( v157 )
      {
        if ( qword_140E2DCC0 )
        {
          if ( (v157 & 0x10) != 0 )
            v69 = v157 & 0xFFFFFFEF;
          else
            v69 = ~(_DWORD)qword_140E2DCC0 & v157;
        }
      }
      else
      {
        v69 = 0;
      }
      v71 = MiSwizzleInvalidPte((v70 << 32) | v69);
      v48 = v155;
      v56 += v64;
      v157 = v71;
      if ( v56 >= v155 )
        goto LABEL_85;
    }
    if ( v158 > (unsigned __int64)a2 )
      break;
    v133 = (_QWORD *)(v38 + 320);
    v134 = (_QWORD *)(v38 + 320);
    if ( v56 )
    {
      v135 = v183;
      do
      {
        if ( *v134 != qword_140E37478 )
        {
          MiReleaseFreshPageAtDpc(48LL * *v134 - 0x220000000000LL, v58, v59, v60);
          --v135;
        }
        ++v134;
        --v56;
      }
      while ( v56 );
      v44 = v160;
      v133 = (_QWORD *)(v38 + 320);
      v183 = v135;
      v53 = v38 + 272;
    }
    v54 = v133;
    v36 &= ~2u;
    v158 = (unsigned __int64)a2;
    v157 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
    v48 = 1;
  }
  v48 = v56;
  v155 = v56;
LABEL_85:
  v72 = v158 - 8LL * v48;
  v73 = *(_QWORD *)(v38 + 320 + 8 * ((__int64)((__int64)a2 - v72) >> 3));
  v74 = v64 & (v151 >> 4);
  if ( v74 )
    v75 = 0LL;
  else
    v75 = (__int64)(v72 << 25) >> 16;
  *(_QWORD *)v53 = 0LL;
  v76 = v48 << 12;
  *(_DWORD *)(v53 + 40) = v76;
  *(_WORD *)(v53 + 10) = 66;
  *(_QWORD *)(v53 + 32) = v75 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v53 + 44) = v75 & 0xFFF;
  *(_WORD *)(v53 + 8) = 8 * ((((unsigned __int64)(v75 & 0xFFF) + v76 + 4095) >> 12) + 6);
  if ( (v36 & 2) != 0 )
  {
    v127 = MiReduceMdl(v53);
    if ( v127 )
    {
      v72 += 8 * v127;
      if ( !v74 )
        *(_QWORD *)(v53 + 32) += v127 << 12;
    }
    v77 = *(_DWORD *)(v53 + 40) >> 12;
  }
  else
  {
    *(_WORD *)(v53 + 10) = 16450;
    v77 = v155;
  }
  v78 = MI_READ_PTE_LOCK_FREE(v72);
  if ( v77 == 1 )
    v152 = v151 & 0xF8 | (*(_DWORD *)(v38 + 192) >> 11) & 7 | 8;
  else
    v152 = v151 & 0xDF;
  LOBYTE(v167) = v152;
  MiInitializeReadInProgressPfn(v163, (_QWORD *)(v38 + 320), v77, (unsigned __int64 *)v72, v38, v152);
  if ( (v36 & 0x10) != 0 )
  {
    if ( qword_140E2DCC0 )
    {
      if ( (v78 & 0x10) != 0 )
        v78 &= ~0x10uLL;
      else
        v78 &= ~qword_140E2DCC0;
    }
    v132 = 48 * ((v78 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    MiFlowThroughInsertNode(v38, v132);
    v78 = *(_QWORD *)(v132 + 16);
  }
  if ( (v152 & 0x10) != 0 )
    MiObtainProtoReference(v185, 0LL);
  v79 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
  *(_QWORD *)(v38 + 168) = v79;
  *(_QWORD *)(v38 + 232) = a2;
  v157 = v79;
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    LODWORD(v82) = v82 | 0x200;
  if ( Address && MiVadPageSizes[(*(_DWORD *)(Address + 48) >> 19) & 3] == 16 )
    LODWORD(v82) = v82 | 0x200000;
  v83 = v185;
  *(_DWORD *)(v38 + 192) = v82;
  if ( v83 )
  {
    LOBYTE(v80) = 17;
    MiUnlockProtoPoolPage(v83, v80, v81, v82);
  }
  v84 = (_QWORD *)v168;
  while ( 1 )
  {
    v85 = (__int64)v84;
    if ( !v84 )
      break;
    v84 = (_QWORD *)*v84;
    *(_QWORD *)&v168 = v84;
    *((_QWORD *)&v168 + 1) &= -(__int64)(--v169 != 0);
    MiReleaseFreshPage(v85);
  }
  v120 = v160;
  if ( v183 != v166 )
    MiReturnFaultCharges(v153, v166 - v183, v161);
  *v187 = v38;
  v121 = (unsigned int)MiGetPagingFileOffset(v78);
  LODWORD(v177) = v121;
  v122 = *(_QWORD *)&v153[2 * ((unsigned __int16)v78 >> 12) + 4632];
  if ( (v152 & 0x10) != 0 )
    *(_QWORD *)(v38 + 160) = v185;
  v123 = *(_DWORD *)(v38 + 192);
  if ( (v36 & 1) != 0 )
  {
    *(_QWORD *)(v38 + 96) = v121;
    v123 |= 0x400u;
  }
  else
  {
    HIDWORD(v177) = 0;
    *(_QWORD *)(v38 + 96) = (unsigned __int64)(unsigned int)v177 << 12;
  }
  v124 = v123 | 0x400000;
  *(_QWORD *)(v38 + 200) = v122;
  if ( *(_QWORD *)(v122 + 184)
    && (!v120 || *v120 != 1 || (*((_DWORD *)v120 + 20) & 0x1000) == 0 || (dword_140FC5200 & 1) != 0) )
  {
    v124 |= 0x800000u;
  }
  *(_DWORD *)(v38 + 192) = v124;
  *(_QWORD *)(v38 + 240) = v72;
  *(_QWORD *)(v38 + 248) = 48 * v73 - 0x220000000000LL;
  if ( _bittest16((const signed __int16 *)(v122 + 172), 0xBu) )
    MiReadFromMemoryPagefile(v122, v38);
  return 3221435187LL;
}
