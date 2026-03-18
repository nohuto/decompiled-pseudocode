/*
 * XREFs of MiPfPrepareReadList @ 0x1409557EC
 * Callers:
 *     MmPrefetchPagesEx @ 0x140955430 (MmPrefetchPagesEx.c)
 * Callees:
 *     MiAddViewsForSection @ 0x14020DA70 (MiAddViewsForSection.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140215E80 (MiUpdatePfnForPrefetchByPte.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiEndingOffsetWithLock @ 0x14023A3EC (MiEndingOffsetWithLock.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiLocateSubsectionNode @ 0x1402C31C0 (MiLocateSubsectionNode.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402C6590 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiUseSlabAllocator @ 0x1402E84B8 (MiUseSlabAllocator.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetSlabPage @ 0x1402F3934 (MiGetSlabPage.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x1402F6A70 (MiObtainFaultCharges.c)
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     MiOffsetToProtos @ 0x140319D40 (MiOffsetToProtos.c)
 *     MiRefillPurgedExtents @ 0x14036F3FC (MiRefillPurgedExtents.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140371504 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiInsertPageChainHead @ 0x14039EC34 (MiInsertPageChainHead.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     MiGetControlAreaPartition @ 0x1404378D0 (MiGetControlAreaPartition.c)
 *     MiGetNextPageColor @ 0x14043D550 (MiGetNextPageColor.c)
 *     MiStartingOffsetNeedLock @ 0x14043E114 (MiStartingOffsetNeedLock.c)
 *     MiPrefetchNormally @ 0x140454468 (MiPrefetchNormally.c)
 *     MiColorBaseToNode @ 0x14045C12C (MiColorBaseToNode.c)
 *     MiReturnFaultCharges @ 0x140481AD4 (MiReturnFaultCharges.c)
 *     MiAllocateReadList @ 0x140955F80 (MiAllocateReadList.c)
 *     MiReleaseReadListResources @ 0x140956000 (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x140956EEC (MiPfAllocateMdls.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfPrepareReadList(__int64 *a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // r8d
  bool v10; // zf
  __int64 *v11; // rcx
  __int64 v12; // rdi
  __int64 SubsectionNode; // r13
  __int64 List; // rax
  __int64 v16; // r15
  _KPROCESS *Process; // rbp
  unsigned __int64 v18; // rdx
  int v19; // r12d
  int v20; // esi
  unsigned int v21; // ebp
  int v22; // edx
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  __int64 v25; // rcx
  unsigned __int64 *v26; // r9
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // r11
  __int64 v34; // rcx
  __int64 Pool; // rax
  __int64 *v36; // rdx
  unsigned __int64 **v37; // rax
  __int64 v38; // r8
  __int64 *v39; // r10
  unsigned __int64 v40; // r9
  __int64 PteAddress; // rax
  __int64 v42; // rdx
  ULONG *v43; // rdi
  unsigned int v44; // r8d
  unsigned int NextPageColor; // edi
  int v46; // eax
  unsigned int v47; // ebx
  unsigned int v48; // edx
  ULONG *v49; // rdi
  __int64 SlabPage; // rax
  __int64 *v51; // r8
  __int64 *v52; // rcx
  __int64 v53; // rcx
  BOOL v54; // r8d
  __int64 v55; // rax
  unsigned int Mdls; // ebx
  unsigned int v57; // r8d
  unsigned int SessionId; // [rsp+30h] [rbp-D8h]
  __int64 v59; // [rsp+38h] [rbp-D0h]
  unsigned int v60; // [rsp+40h] [rbp-C8h]
  unsigned int v61; // [rsp+44h] [rbp-C4h] BYREF
  int v62; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v63; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v64; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v65; // [rsp+60h] [rbp-A8h]
  ULONG *ControlAreaPartition; // [rsp+68h] [rbp-A0h]
  unsigned __int64 *v67; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v68; // [rsp+78h] [rbp-90h]
  __int64 v69; // [rsp+80h] [rbp-88h]
  unsigned __int64 **v70; // [rsp+88h] [rbp-80h]
  unsigned __int64 **v71; // [rsp+90h] [rbp-78h]
  unsigned __int64 *v72; // [rsp+98h] [rbp-70h]
  __int64 v73; // [rsp+A0h] [rbp-68h]
  _OWORD v74[6]; // [rsp+A8h] [rbp-60h] BYREF

  v5 = 0;
  *a2 = 0LL;
  v7 = *((_DWORD *)a1 + 4);
  v67 = 0LL;
  v74[0] = 0LL;
  if ( (v7 & 0x180) != 0 )
    return 3221225711LL;
  v8 = *a1;
  v9 = *((_DWORD *)a1 + 2);
  v10 = *((_DWORD *)a1 + 3) == 0;
  v68 = v9;
  v11 = (__int64 *)(*(_QWORD *)(v8 + 40) + 16LL);
  if ( v10 )
    v11 = *(__int64 **)(v8 + 40);
  v12 = *v11;
  v73 = v12;
  if ( (*(_DWORD *)(v12 + 56) & 0x400) != 0 || !*(_QWORD *)(v12 + 64) )
    return 3221225711LL;
  List = MiAllocateReadList(v9);
  v16 = List;
  if ( !List )
    return 3221225626LL;
  *(_QWORD *)(List + 8) = v12;
  SubsectionNode = v12 + 128;
  Process = KeGetCurrentThread()->ApcState.Process;
  ControlAreaPartition = (ULONG *)MiGetControlAreaPartition(v12);
  if ( (*(_DWORD *)(v12 + 56) & 0x20) != 0 )
  {
    SessionId = PsGetSessionIdEx((__int64)Process);
  }
  else
  {
    v18 = a1[2];
    if ( v18 > 0x40000000000000LL )
      goto LABEL_13;
    SubsectionNode = MiOffsetToProtos(v12, v18, (unsigned __int64 *)&v67);
    if ( !SubsectionNode )
      goto LABEL_13;
    SessionId = -1;
  }
  v67 = 0LL;
  v63 = 0LL;
  *(_DWORD *)(v16 + 184) = v7 & 7;
  v60 = v7 & 7;
  v71 = (unsigned __int64 **)(v16 + 240);
  v65 = 0LL;
  v64 = 0LL;
  v72 = 0LL;
  v59 = 0LL;
  *(_DWORD *)(v16 + 188) = (v7 & 0x40) != 0 ? 5 : 0;
  *(_DWORD *)(v16 + 192) = (v7 >> 3) & 7;
  v19 = 0;
  v20 = (*(_DWORD *)(v12 + 56) >> 20) & 0x7F;
  v70 = 0LL;
  v69 = 0LL;
  v61 = 0;
  MiInitializePageColorBase((__int64)&Process[2].ReadyListHead.Blink, 3, v20, (__int64)v74);
  v21 = MiColorBaseToNode((__int64)v74);
  v22 = 1;
  v23 = 0LL;
  while ( 2 )
  {
    v62 = v23;
    if ( (unsigned int)v23 >= v68 )
      goto LABEL_11;
    v24 = a1[v23 + 2] & 0xFFFFFFFFFFFFFF80uLL;
    if ( v63 <= v24 && v24 < v65 )
    {
      v25 = *(_QWORD *)(SubsectionNode + 8);
      v26 = (unsigned __int64 *)(v25 + 8 * ((v24 - v63) >> 12));
      if ( (unsigned __int64)v26 >= v25 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
        goto LABEL_11;
      if ( (*(_DWORD *)(SubsectionNode + 32) & 0x20000) == 0 || (*(_DWORD *)(v12 + 56) & 0x8000000) == 0 )
      {
        v27 = v64;
        goto LABEL_26;
      }
      goto LABEL_30;
    }
    while ( 1 )
    {
      if ( (*(_DWORD *)(v12 + 56) & 0x20) != 0
        && !*(_DWORD *)(SubsectionNode + 36)
        && *(_QWORD *)(SubsectionNode + 8) != *(_QWORD *)(*(_QWORD *)v12 + 64LL) )
      {
LABEL_9:
        SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
        goto LABEL_10;
      }
      v63 = MiStartingOffsetNeedLock((__int64 *)SubsectionNode, SessionId);
      v31 = MiEndingOffsetWithLock((_QWORD *)SubsectionNode, v29, v30);
      v32 = v63;
      v33 = v31;
      v65 = v31;
      if ( v24 < v63 )
        goto LABEL_29;
      if ( v24 < v31 )
        break;
      if ( v24 < v63 )
        goto LABEL_29;
      if ( (*(_DWORD *)(v12 + 56) & 0x20) != 0 )
        goto LABEL_9;
      if ( v24 > 0x40000000000000LL )
        goto LABEL_11;
      SubsectionNode = (__int64)MiLocateSubsectionNode(v12, v24, 0);
LABEL_10:
      if ( !SubsectionNode )
        goto LABEL_11;
    }
    if ( (*(_DWORD *)(v12 + 56) & 0x20) != 0 )
      goto LABEL_73;
    v19 = MiAddViewsForSection((int **)SubsectionNode, *(unsigned int *)(SubsectionNode + 44), 4LL);
    if ( v19 < 0 )
      goto LABEL_11;
    v34 = *(_QWORD *)(v16 + 32);
    if ( *(_QWORD *)(v16 + 24) != v16 + 24 && *(_DWORD *)(v34 + 16) != 5 )
      goto LABEL_71;
    Pool = MiAllocatePool(0x100uLL, 0x40uLL, 1817406797);
    v34 = Pool;
    if ( !Pool )
    {
      MiRemoveViewsFromSectionWithPfn((__int64 *)SubsectionNode, *(unsigned int *)(SubsectionNode + 44), 4);
      goto LABEL_11;
    }
    *(_DWORD *)(Pool + 16) = 0;
    v36 = *(__int64 **)(v16 + 32);
    if ( *v36 != v16 + 24 )
      __fastfail(3u);
    *(_QWORD *)Pool = v16 + 24;
    *(_QWORD *)(Pool + 8) = v36;
    *v36 = Pool;
    *(_QWORD *)(v16 + 32) = Pool;
LABEL_71:
    v32 = v63;
    v33 = v65;
    *(_QWORD *)(v34 + 8LL * (unsigned int)(*(_DWORD *)(v34 + 16))++ + 24) = SubsectionNode;
    if ( !*(_QWORD *)(v16 + 16) )
      *(_QWORD *)(v16 + 16) = SubsectionNode;
LABEL_73:
    v53 = *(_QWORD *)(SubsectionNode + 8);
    v26 = (unsigned __int64 *)(v53 + 8 * ((v24 - v32) >> 12));
    if ( (unsigned __int64)v26 >= v53 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
      goto LABEL_11;
    v54 = 0;
    if ( (*(_DWORD *)(SubsectionNode + 32) & 0x20000) != 0 )
      v54 = (*(_DWORD *)(v12 + 56) & 0x8000000) != 0;
    if ( (((_WORD)v33 - (_WORD)v32) & 0xFFF) != 0 )
      v27 = *(_QWORD *)(SubsectionNode + 8) + 8 * (((v33 - v32 + 4095) >> 12) - 1);
    else
      v27 = 0LL;
    v64 = v27;
    if ( v54 )
      goto LABEL_29;
    v64 = v27;
    if ( !SubsectionNode )
      goto LABEL_11;
    v22 = 1;
LABEL_26:
    if ( v26 == v72 )
    {
LABEL_30:
      v23 = (unsigned int)(v22 + v62);
      continue;
    }
    break;
  }
  v28 = *v26;
  v72 = v26;
  if ( ((unsigned __int8)v28 & (unsigned __int8)v22) != 0 )
    goto LABEL_28;
  if ( (v28 & 0x400) != 0 )
  {
    if ( (*(_BYTE *)(v12 + 62) & 0xC) != 4 )
      goto LABEL_48;
    v19 = MiRefillPurgedExtents((__int64 *)SubsectionNode, (__int64)v26, SessionId);
    if ( v19 < 0 )
      goto LABEL_68;
LABEL_29:
    v22 = 1;
    goto LABEL_30;
  }
  if ( (v28 & 0x800) != 0 )
  {
LABEL_28:
    MiUpdatePfnForPrefetchByPte((unsigned __int64)v26, v60, a4);
    goto LABEL_29;
  }
  if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v28) )
    goto LABEL_30;
LABEL_48:
  v37 = v70;
  v38 = (__int64)v26;
  v39 = (__int64 *)v71;
  if ( !v70 )
    v37 = v71;
  v70 = v37;
  *v71 = v26;
  if ( v69 != SubsectionNode
    || (MiGetPteAddress((unsigned __int64)v67), PteAddress = MiGetPteAddress(v40), v42 != PteAddress) )
  {
    v38 |= 2uLL;
    v69 = SubsectionNode;
    *v39 = v38;
  }
  v67 = v26;
  if ( v26 == (unsigned __int64 *)v27 )
    *v39 = v38 | 1;
  v43 = ControlAreaPartition;
  v44 = *(_DWORD *)(v16 + 192) + 1;
  v71 = (unsigned __int64 **)(v39 + 1);
  if ( !MiPrefetchNormally(ControlAreaPartition, 1uLL, v44) )
    goto LABEL_11;
  if ( !a3 )
    goto LABEL_57;
  if ( !*a3 )
  {
LABEL_11:
    if ( !v59 )
      goto LABEL_12;
    goto LABEL_82;
  }
  --*a3;
LABEL_57:
  if ( !MiObtainFaultCharges(v43, 1uLL, 1) )
  {
LABEL_68:
    if ( !v59 )
    {
      v19 = -1073741670;
      goto LABEL_12;
    }
    goto LABEL_82;
  }
  NextPageColor = MiGetNextPageColor((__int64)v74);
  v46 = MiUseSlabAllocator((__int64)ControlAreaPartition, (_DWORD *)SubsectionNode, v28, v21, &v61);
  v47 = v61;
  if ( v46 && v61 <= 4 )
  {
    v57 = NextPageColor;
    v49 = ControlAreaPartition;
    SlabPage = MiGetSlabPage(
                 (__int64)ControlAreaPartition,
                 v61,
                 v57,
                 v20 != 0 ? 4 : 6,
                 (__int64 *)0xFFFFFFFFFFFFFFFFLL,
                 0);
  }
  else
  {
    v48 = NextPageColor;
    v49 = ControlAreaPartition;
    SlabPage = MiGetPage((__int64)ControlAreaPartition, v48, 0);
  }
  if ( SlabPage != -1 )
  {
    if ( (unsigned int)MiGetPfnSlabType(48 * SlabPage - 0x220000000000LL) == 9 )
    {
      v52 = (__int64 *)(v16 + 40);
    }
    else
    {
      if ( v47 > 4 )
        v47 -= 5;
      v52 = (__int64 *)(v16 + 8 * (v47 + 2 * (v47 + 4LL)));
    }
    MiInsertPageChainHead(v52, v51);
    ++v59;
    v12 = v73;
    goto LABEL_29;
  }
  MiReturnFaultCharges((__int64)v49, 1uLL);
  if ( v59 )
  {
LABEL_82:
    v55 = ((__int64)v71 - v16 - 240) >> 3;
    *(_QWORD *)(v16 + 200) = v70;
    *(_DWORD *)(v16 + 196) = v55;
    Mdls = MiPfAllocateMdls(v16, SessionId, 0LL, a5);
    if ( *(_QWORD *)(v16 + 224) == v16 + 224 )
    {
      MiReleaseReadListResources(v16);
      ExFreePoolWithTag((PVOID)v16, 0);
      v16 = 0LL;
    }
    else
    {
      Mdls = 0;
    }
    *a2 = v16;
    return Mdls;
  }
  v19 = -1073741801;
LABEL_12:
  MiReleaseReadListResources(v16);
  v5 = v19;
LABEL_13:
  ExFreePoolWithTag((PVOID)v16, 0);
  return v5;
}
