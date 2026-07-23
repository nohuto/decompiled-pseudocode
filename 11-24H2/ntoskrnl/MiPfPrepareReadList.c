/*
 * XREFs of MiPfPrepareReadList @ 0x14093919C
 * Callers:
 *     MmPrefetchPagesEx @ 0x140938DE0 (MmPrefetchPagesEx.c)
 * Callees:
 *     MiInsertPageChainHead @ 0x14021CD10 (MiInsertPageChainHead.c)
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1402598C4 (MiRemoveViewsFromSectionWithPfn.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140269980 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiEndingOffsetWithLock @ 0x1402724D4 (MiEndingOffsetWithLock.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiOffsetToProtos @ 0x1402C28D0 (MiOffsetToProtos.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140334220 (MiUpdatePfnForPrefetchByPte.c)
 *     MiAddViewsForSection @ 0x140336DD0 (MiAddViewsForSection.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x14033EB80 (MiObtainFaultCharges.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiUseSlabAllocator @ 0x140349AF8 (MiUseSlabAllocator.c)
 *     MiLocateSubsectionNode @ 0x14040FCF0 (MiLocateSubsectionNode.c)
 *     MiRefillPurgedExtents @ 0x1404276E4 (MiRefillPurgedExtents.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiGetControlAreaPartition @ 0x14042A350 (MiGetControlAreaPartition.c)
 *     MiGetNextPageColor @ 0x1404317F0 (MiGetNextPageColor.c)
 *     MiStartingOffsetNeedLock @ 0x140432804 (MiStartingOffsetNeedLock.c)
 *     MiPrefetchNormally @ 0x140449308 (MiPrefetchNormally.c)
 *     MiColorBaseToNode @ 0x1404514C4 (MiColorBaseToNode.c)
 *     MiReturnFaultCharges @ 0x14047CD94 (MiReturnFaultCharges.c)
 *     MiAllocateReadList @ 0x140939930 (MiAllocateReadList.c)
 *     MiReleaseReadListResources @ 0x1409399B0 (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x14093A89C (MiPfAllocateMdls.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v31; // r9
  unsigned __int64 v32; // rax
  __int64 v33; // r9
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // r11
  __int64 v36; // rcx
  __int64 Pool; // rax
  __int64 *v38; // rdx
  unsigned __int64 **v39; // rax
  __int64 v40; // r8
  __int64 *v41; // r10
  unsigned __int64 v42; // r9
  __int64 PteAddress; // rax
  __int64 v44; // rdx
  ULONG *v45; // rdi
  unsigned int v46; // r8d
  struct _KPRCB *v47; // r9
  unsigned int NextPageColor; // edi
  int v49; // eax
  unsigned int v50; // ebx
  unsigned int v51; // edx
  ULONG *v52; // rdi
  __int64 SlabPage; // rax
  __int64 *v54; // r8
  __int64 *v55; // rcx
  __int64 v56; // rcx
  BOOL v57; // r8d
  __int64 v58; // rax
  unsigned int Mdls; // ebx
  unsigned int v60; // r8d
  unsigned int SessionId; // [rsp+30h] [rbp-D8h]
  __int64 v62; // [rsp+38h] [rbp-D0h]
  unsigned int v63; // [rsp+40h] [rbp-C8h]
  unsigned int v64; // [rsp+44h] [rbp-C4h] BYREF
  int v65; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v66; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v67; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v68; // [rsp+60h] [rbp-A8h]
  ULONG *ControlAreaPartition; // [rsp+68h] [rbp-A0h]
  unsigned __int64 *v70; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v71; // [rsp+78h] [rbp-90h]
  __int64 v72; // [rsp+80h] [rbp-88h]
  unsigned __int64 **v73; // [rsp+88h] [rbp-80h]
  unsigned __int64 **v74; // [rsp+90h] [rbp-78h]
  unsigned __int64 *v75; // [rsp+98h] [rbp-70h]
  __int64 v76; // [rsp+A0h] [rbp-68h]
  _OWORD v77[6]; // [rsp+A8h] [rbp-60h] BYREF

  v5 = 0;
  *a2 = 0LL;
  v7 = *((_DWORD *)a1 + 4);
  v70 = 0LL;
  v77[0] = 0LL;
  if ( (v7 & 0x180) != 0 )
    return 3221225711LL;
  v8 = *a1;
  v9 = *((_DWORD *)a1 + 2);
  v10 = *((_DWORD *)a1 + 3) == 0;
  v71 = v9;
  v11 = (__int64 *)(*(_QWORD *)(v8 + 40) + 16LL);
  if ( v10 )
    v11 = *(__int64 **)(v8 + 40);
  v12 = *v11;
  v76 = v12;
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
    SubsectionNode = MiOffsetToProtos(v12, v18, (unsigned __int64 *)&v70);
    if ( !SubsectionNode )
      goto LABEL_13;
    SessionId = -1;
  }
  v70 = 0LL;
  v66 = 0LL;
  *(_DWORD *)(v16 + 184) = v7 & 7;
  v63 = v7 & 7;
  v74 = (unsigned __int64 **)(v16 + 240);
  v68 = 0LL;
  v67 = 0LL;
  v75 = 0LL;
  v62 = 0LL;
  *(_DWORD *)(v16 + 188) = (v7 & 0x40) != 0 ? 5 : 0;
  *(_DWORD *)(v16 + 192) = (v7 >> 3) & 7;
  v19 = 0;
  v20 = (*(_DWORD *)(v12 + 56) >> 20) & 0x7F;
  v73 = 0LL;
  v72 = 0LL;
  v64 = 0;
  MiInitializePageColorBase((__int64)&Process[2].ReadyListHead.Blink, 3, v20, (__int64)v77);
  v21 = MiColorBaseToNode((__int64)v77);
  v22 = 1;
  v23 = 0LL;
  while ( 2 )
  {
    v65 = v23;
    if ( (unsigned int)v23 >= v71 )
      goto LABEL_11;
    v24 = a1[v23 + 2] & 0xFFFFFFFFFFFFFF80uLL;
    if ( v66 <= v24 && v24 < v68 )
    {
      v25 = *(_QWORD *)(SubsectionNode + 8);
      v26 = (unsigned __int64 *)(v25 + 8 * ((v24 - v66) >> 12));
      if ( (unsigned __int64)v26 >= v25 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
        goto LABEL_11;
      if ( (*(_DWORD *)(SubsectionNode + 32) & 0x20000) == 0 || (*(_DWORD *)(v12 + 56) & 0x8000000) == 0 )
      {
        v27 = v67;
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
      v66 = MiStartingOffsetNeedLock((__int64 *)SubsectionNode, SessionId);
      v32 = MiEndingOffsetWithLock((_QWORD *)SubsectionNode, v29, v30, v31);
      v34 = v66;
      v35 = v32;
      v68 = v32;
      if ( v24 < v66 )
        goto LABEL_29;
      if ( v24 < v32 )
        break;
      if ( v24 < v66 )
        goto LABEL_29;
      if ( (*(_DWORD *)(v12 + 56) & 0x20) != 0 )
        goto LABEL_9;
      if ( v24 > 0x40000000000000LL )
        goto LABEL_11;
      SubsectionNode = (__int64)MiLocateSubsectionNode(v12, v24, 0LL, v33);
LABEL_10:
      if ( !SubsectionNode )
        goto LABEL_11;
    }
    if ( (*(_DWORD *)(v12 + 56) & 0x20) != 0 )
      goto LABEL_73;
    v19 = MiAddViewsForSection((int **)SubsectionNode, *(unsigned int *)(SubsectionNode + 44), 4);
    if ( v19 < 0 )
      goto LABEL_11;
    v36 = *(_QWORD *)(v16 + 32);
    if ( *(_QWORD *)(v16 + 24) != v16 + 24 && *(_DWORD *)(v36 + 16) != 5 )
      goto LABEL_71;
    Pool = MiAllocatePool(0x100uLL, 0x40uLL, 1817406797);
    v36 = Pool;
    if ( !Pool )
    {
      MiRemoveViewsFromSectionWithPfn((__int64 *)SubsectionNode, *(unsigned int *)(SubsectionNode + 44), 4);
      goto LABEL_11;
    }
    *(_DWORD *)(Pool + 16) = 0;
    v38 = *(__int64 **)(v16 + 32);
    if ( *v38 != v16 + 24 )
      __fastfail(3u);
    *(_QWORD *)Pool = v16 + 24;
    *(_QWORD *)(Pool + 8) = v38;
    *v38 = Pool;
    *(_QWORD *)(v16 + 32) = Pool;
LABEL_71:
    v34 = v66;
    v35 = v68;
    *(_QWORD *)(v36 + 8LL * (unsigned int)(*(_DWORD *)(v36 + 16))++ + 24) = SubsectionNode;
    if ( !*(_QWORD *)(v16 + 16) )
      *(_QWORD *)(v16 + 16) = SubsectionNode;
LABEL_73:
    v56 = *(_QWORD *)(SubsectionNode + 8);
    v26 = (unsigned __int64 *)(v56 + 8 * ((v24 - v34) >> 12));
    if ( (unsigned __int64)v26 >= v56 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
      goto LABEL_11;
    v57 = 0;
    if ( (*(_DWORD *)(SubsectionNode + 32) & 0x20000) != 0 )
      v57 = (*(_DWORD *)(v12 + 56) & 0x8000000) != 0;
    if ( (((_WORD)v35 - (_WORD)v34) & 0xFFF) != 0 )
      v27 = *(_QWORD *)(SubsectionNode + 8) + 8 * (((v35 - v34 + 4095) >> 12) - 1);
    else
      v27 = 0LL;
    v67 = v27;
    if ( v57 )
      goto LABEL_29;
    v67 = v27;
    if ( !SubsectionNode )
      goto LABEL_11;
    v22 = 1;
LABEL_26:
    if ( v26 == v75 )
    {
LABEL_30:
      v23 = (unsigned int)(v22 + v65);
      continue;
    }
    break;
  }
  v28 = *v26;
  v75 = v26;
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
    MiUpdatePfnForPrefetchByPte((unsigned __int64)v26, v63, a4);
    goto LABEL_29;
  }
  if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v28) )
    goto LABEL_30;
LABEL_48:
  v39 = v73;
  v40 = (__int64)v26;
  v41 = (__int64 *)v74;
  if ( !v73 )
    v39 = v74;
  v73 = v39;
  *v74 = v26;
  if ( v72 != SubsectionNode
    || (MiGetPteAddress((unsigned __int64)v70), PteAddress = MiGetPteAddress(v42), v44 != PteAddress) )
  {
    v40 |= 2uLL;
    v72 = SubsectionNode;
    *v41 = v40;
  }
  v70 = v26;
  if ( v26 == (unsigned __int64 *)v27 )
    *v41 = v40 | 1;
  v45 = ControlAreaPartition;
  v46 = *(_DWORD *)(v16 + 192) + 1;
  v74 = (unsigned __int64 **)(v41 + 1);
  if ( !MiPrefetchNormally(ControlAreaPartition, 1uLL, v46) )
    goto LABEL_11;
  if ( !a3 )
    goto LABEL_57;
  if ( !*a3 )
  {
LABEL_11:
    if ( !v62 )
      goto LABEL_12;
    goto LABEL_82;
  }
  --*a3;
LABEL_57:
  if ( !MiObtainFaultCharges(v45, 1uLL, 1, v47) )
  {
LABEL_68:
    if ( !v62 )
    {
      v19 = -1073741670;
      goto LABEL_12;
    }
    goto LABEL_82;
  }
  NextPageColor = MiGetNextPageColor((__int64)v77);
  v49 = MiUseSlabAllocator((__int64)ControlAreaPartition, (_DWORD *)SubsectionNode, v28, v21, &v64);
  v50 = v64;
  if ( v49 && v64 <= 4 )
  {
    v60 = NextPageColor;
    v52 = ControlAreaPartition;
    SlabPage = MiGetSlabPage(
                 (__int64)ControlAreaPartition,
                 v64,
                 v60,
                 v20 != 0 ? 4 : 6,
                 (__int64 *)0xFFFFFFFFFFFFFFFFLL,
                 0);
  }
  else
  {
    v51 = NextPageColor;
    v52 = ControlAreaPartition;
    SlabPage = MiGetPage((__int64)ControlAreaPartition, v51, 0);
  }
  if ( SlabPage != -1 )
  {
    if ( (unsigned int)MiGetPfnSlabType(48 * SlabPage - 0x220000000000LL) == 9 )
    {
      v55 = (__int64 *)(v16 + 40);
    }
    else
    {
      if ( v50 > 4 )
        v50 -= 5;
      v55 = (__int64 *)(v16 + 8 * (v50 + 2 * (v50 + 4LL)));
    }
    MiInsertPageChainHead(v55, v54);
    ++v62;
    v12 = v76;
    goto LABEL_29;
  }
  MiReturnFaultCharges((__int64)v52, 1uLL);
  if ( v62 )
  {
LABEL_82:
    v58 = ((__int64)v74 - v16 - 240) >> 3;
    *(_QWORD *)(v16 + 200) = v73;
    *(_DWORD *)(v16 + 196) = v58;
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
