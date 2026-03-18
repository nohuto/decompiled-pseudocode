/*
 * XREFs of MiPfPrepareReadList @ 0x1409C90BC
 * Callers:
 *     MmPrefetchPagesEx @ 0x1409C8D00 (MmPrefetchPagesEx.c)
 * Callees:
 *     MiAddViewsForSection @ 0x140213970 (MiAddViewsForSection.c)
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiLocateSubsectionNode @ 0x140219A20 (MiLocateSubsectionNode.c)
 *     MiInsertPageChainHead @ 0x1402271F0 (MiInsertPageChainHead.c)
 *     MiObtainFaultCharges @ 0x14022B950 (MiObtainFaultCharges.c)
 *     MiGetSlabPage @ 0x14022BC70 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140231A30 (MiUpdatePfnForPrefetchByPte.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     MiOffsetToProtos @ 0x1402BBD30 (MiOffsetToProtos.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402CE090 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiEndingOffsetWithLock @ 0x1402FD558 (MiEndingOffsetWithLock.c)
 *     MiStartingOffsetNeedLock @ 0x140323EDC (MiStartingOffsetNeedLock.c)
 *     MiUseSlabAllocator @ 0x14033BB18 (MiUseSlabAllocator.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14035AC94 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiGetControlAreaPartition @ 0x14043B7F0 (MiGetControlAreaPartition.c)
 *     MiGetNextPageColor @ 0x1404432AC (MiGetNextPageColor.c)
 *     MiPrefetchNormally @ 0x140452B9C (MiPrefetchNormally.c)
 *     MiColorBaseToNode @ 0x14046900C (MiColorBaseToNode.c)
 *     MiRefillPurgedExtents @ 0x14046FCD0 (MiRefillPurgedExtents.c)
 *     MiReturnFaultCharges @ 0x140480970 (MiReturnFaultCharges.c)
 *     MiReleaseReadListResources @ 0x1409C985C (MiReleaseReadListResources.c)
 *     MiAllocateReadList @ 0x1409C9A04 (MiAllocateReadList.c)
 *     MiPfAllocateMdls @ 0x1409CA7D8 (MiPfAllocateMdls.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // r11
  __int64 v32; // rcx
  __int64 Pool; // rax
  __int64 *v34; // rdx
  unsigned __int64 **v35; // rax
  __int64 v36; // r8
  __int64 *v37; // r10
  unsigned __int64 v38; // r9
  __int64 PteAddress; // rax
  __int64 v40; // rdx
  ULONG *v41; // rdi
  unsigned int v42; // r8d
  __int64 v43; // r9
  unsigned int NextPageColor; // edi
  int v45; // eax
  unsigned int v46; // ebx
  unsigned int v47; // edx
  ULONG *v48; // rdi
  __int64 SlabPage; // rax
  __int64 *v50; // r8
  __int64 *v51; // rcx
  __int64 v52; // rcx
  BOOL v53; // r8d
  __int64 v54; // rax
  unsigned int Mdls; // ebx
  unsigned int v56; // r8d
  unsigned int SessionId; // [rsp+30h] [rbp-D8h]
  __int64 v58; // [rsp+38h] [rbp-D0h]
  unsigned int v59; // [rsp+40h] [rbp-C8h]
  unsigned int v60; // [rsp+44h] [rbp-C4h] BYREF
  int v61; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v62; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v63; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v64; // [rsp+60h] [rbp-A8h]
  ULONG *ControlAreaPartition; // [rsp+68h] [rbp-A0h]
  unsigned __int64 *v66; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v67; // [rsp+78h] [rbp-90h]
  __int64 v68; // [rsp+80h] [rbp-88h]
  unsigned __int64 **v69; // [rsp+88h] [rbp-80h]
  unsigned __int64 **v70; // [rsp+90h] [rbp-78h]
  unsigned __int64 *v71; // [rsp+98h] [rbp-70h]
  __int64 v72; // [rsp+A0h] [rbp-68h]
  _OWORD v73[6]; // [rsp+A8h] [rbp-60h] BYREF

  v5 = 0;
  *a2 = 0LL;
  v7 = *((_DWORD *)a1 + 4);
  v66 = 0LL;
  v73[0] = 0LL;
  if ( (v7 & 0x180) != 0 )
    return 3221225711LL;
  v8 = *a1;
  v9 = *((_DWORD *)a1 + 2);
  v10 = *((_DWORD *)a1 + 3) == 0;
  v67 = v9;
  v11 = (__int64 *)(*(_QWORD *)(v8 + 40) + 16LL);
  if ( v10 )
    v11 = *(__int64 **)(v8 + 40);
  v12 = *v11;
  v72 = v12;
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
      goto LABEL_14;
    SubsectionNode = MiOffsetToProtos(v12, v18, (unsigned __int64 *)&v66);
    if ( !SubsectionNode )
      goto LABEL_14;
    SessionId = -1;
  }
  v66 = 0LL;
  v62 = 0LL;
  *(_DWORD *)(v16 + 184) = v7 & 7;
  v59 = v7 & 7;
  v70 = (unsigned __int64 **)(v16 + 240);
  v64 = 0LL;
  v63 = 0LL;
  v71 = 0LL;
  v58 = 0LL;
  *(_DWORD *)(v16 + 188) = (v7 & 0x40) != 0 ? 5 : 0;
  *(_DWORD *)(v16 + 192) = (v7 >> 3) & 7;
  v19 = 0;
  v20 = (*(_DWORD *)(v12 + 56) >> 20) & 0x7F;
  v69 = 0LL;
  v68 = 0LL;
  v60 = 0;
  MiInitializePageColorBase((__int64)&Process[2].ReadyListHead.Blink, 3, v20, (__int64)v73);
  v21 = MiColorBaseToNode((__int64)v73);
  v22 = 1;
  v23 = 0LL;
  while ( 2 )
  {
    v61 = v23;
    if ( (unsigned int)v23 >= v67 )
      goto LABEL_12;
    v24 = a1[v23 + 2] & 0xFFFFFFFFFFFFFF80uLL;
    if ( v24 < v64 && v62 <= v24 )
    {
      v25 = *(_QWORD *)(SubsectionNode + 8);
      v26 = (unsigned __int64 *)(v25 + 8 * ((v24 - v62) >> 12));
      if ( (unsigned __int64)v26 >= v25 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
        goto LABEL_12;
      if ( (*(_DWORD *)(SubsectionNode + 32) & 0x20000) == 0 || (*(_DWORD *)(v12 + 56) & 0x8000000) == 0 )
      {
        v27 = v63;
        goto LABEL_27;
      }
      goto LABEL_31;
    }
    while ( 1 )
    {
      if ( (*(_DWORD *)(v12 + 56) & 0x20) != 0
        && !*(_DWORD *)(SubsectionNode + 36)
        && *(_QWORD *)(SubsectionNode + 8) != *(_QWORD *)(*(_QWORD *)v12 + 64LL) )
      {
LABEL_10:
        SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
        goto LABEL_11;
      }
      v62 = MiStartingOffsetNeedLock((__int64 *)SubsectionNode, SessionId);
      v29 = MiEndingOffsetWithLock((_QWORD *)SubsectionNode);
      v30 = v62;
      v31 = v29;
      v64 = v29;
      if ( v24 < v62 )
        goto LABEL_30;
      if ( v24 < v29 )
        break;
      if ( v24 < v62 )
        goto LABEL_30;
      if ( (*(_DWORD *)(v12 + 56) & 0x20) != 0 )
        goto LABEL_10;
      if ( v24 > 0x40000000000000LL )
        goto LABEL_12;
      SubsectionNode = (__int64)MiLocateSubsectionNode(v12, v24, 0);
LABEL_11:
      if ( !SubsectionNode )
        goto LABEL_12;
    }
    if ( (*(_DWORD *)(v12 + 56) & 0x20) != 0 )
      goto LABEL_71;
    v19 = MiAddViewsForSection((int **)SubsectionNode, *(unsigned int *)(SubsectionNode + 44), 4);
    if ( v19 < 0 )
      goto LABEL_12;
    v32 = *(_QWORD *)(v16 + 32);
    if ( *(_QWORD *)(v16 + 24) != v16 + 24 && *(_DWORD *)(v32 + 16) != 5 )
      goto LABEL_69;
    Pool = MiAllocatePool(0x100uLL, 0x40uLL, 1817406797);
    v32 = Pool;
    if ( !Pool )
    {
      MiRemoveViewsFromSectionWithPfn((__int64 *)SubsectionNode, *(unsigned int *)(SubsectionNode + 44), 4);
      goto LABEL_12;
    }
    *(_DWORD *)(Pool + 16) = 0;
    v34 = *(__int64 **)(v16 + 32);
    if ( *v34 != v16 + 24 )
      __fastfail(3u);
    *(_QWORD *)Pool = v16 + 24;
    *(_QWORD *)(Pool + 8) = v34;
    *v34 = Pool;
    *(_QWORD *)(v16 + 32) = Pool;
LABEL_69:
    v30 = v62;
    v31 = v64;
    *(_QWORD *)(v32 + 8LL * (unsigned int)(*(_DWORD *)(v32 + 16))++ + 24) = SubsectionNode;
    if ( !*(_QWORD *)(v16 + 16) )
      *(_QWORD *)(v16 + 16) = SubsectionNode;
LABEL_71:
    v52 = *(_QWORD *)(SubsectionNode + 8);
    v26 = (unsigned __int64 *)(v52 + 8 * ((v24 - v30) >> 12));
    if ( (unsigned __int64)v26 >= v52 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
      goto LABEL_12;
    v53 = 0;
    if ( (*(_DWORD *)(SubsectionNode + 32) & 0x20000) != 0 )
      v53 = (*(_DWORD *)(v12 + 56) & 0x8000000) != 0;
    if ( (((_WORD)v31 - (_WORD)v30) & 0xFFF) != 0 )
      v27 = *(_QWORD *)(SubsectionNode + 8) + 8 * (((v31 - v30 + 4095) >> 12) - 1);
    else
      v27 = 0LL;
    v63 = v27;
    if ( v53 )
      goto LABEL_30;
    v63 = v27;
    if ( !SubsectionNode )
      goto LABEL_12;
    v22 = 1;
LABEL_27:
    if ( v26 == v71 )
    {
LABEL_31:
      v23 = (unsigned int)(v22 + v61);
      continue;
    }
    break;
  }
  v28 = *v26;
  v71 = v26;
  if ( ((unsigned __int8)v28 & (unsigned __int8)v22) != 0 )
    goto LABEL_29;
  if ( (v28 & 0x400) != 0 )
  {
    if ( (*(_BYTE *)(v12 + 62) & 0xC) != 4 )
      goto LABEL_46;
    v19 = MiRefillPurgedExtents((__int64 *)SubsectionNode, (__int64)v26, SessionId);
    if ( v19 < 0 )
    {
LABEL_66:
      if ( v58 )
        goto LABEL_80;
      v19 = -1073741670;
      goto LABEL_13;
    }
LABEL_30:
    v22 = 1;
    goto LABEL_31;
  }
  if ( (v28 & 0x800) != 0 )
  {
LABEL_29:
    MiUpdatePfnForPrefetchByPte((unsigned __int64)v26, v59, a4);
    goto LABEL_30;
  }
  if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v28) )
    goto LABEL_31;
LABEL_46:
  v35 = v69;
  v36 = (__int64)v26;
  v37 = (__int64 *)v70;
  if ( !v69 )
    v35 = v70;
  v69 = v35;
  *v70 = v26;
  if ( v68 != SubsectionNode
    || (MiGetPteAddress((unsigned __int64)v66), PteAddress = MiGetPteAddress(v38), v40 != PteAddress) )
  {
    v36 |= 2uLL;
    v68 = SubsectionNode;
    *v37 = v36;
  }
  v66 = v26;
  if ( v26 == (unsigned __int64 *)v27 )
    *v37 = v36 | 1;
  v41 = ControlAreaPartition;
  v42 = *(_DWORD *)(v16 + 192) + 1;
  v70 = (unsigned __int64 **)(v37 + 1);
  if ( !MiPrefetchNormally(ControlAreaPartition, 1uLL, v42) )
    goto LABEL_12;
  if ( !a3 )
    goto LABEL_55;
  if ( !*a3 )
  {
LABEL_12:
    if ( v58 )
      goto LABEL_80;
    goto LABEL_13;
  }
  --*a3;
LABEL_55:
  if ( !MiObtainFaultCharges(v41, 1uLL, 1, v43) )
    goto LABEL_66;
  NextPageColor = MiGetNextPageColor((__int64)v73);
  v45 = MiUseSlabAllocator((__int64)ControlAreaPartition, (_DWORD *)SubsectionNode, v28, v21, &v60);
  v46 = v60;
  if ( v45 && v60 <= 4 )
  {
    v56 = NextPageColor;
    v48 = ControlAreaPartition;
    SlabPage = MiGetSlabPage(
                 (__int64)ControlAreaPartition,
                 v60,
                 v56,
                 v20 != 0 ? 4 : 6,
                 (__int64 *)0xFFFFFFFFFFFFFFFFLL,
                 0);
  }
  else
  {
    v47 = NextPageColor;
    v48 = ControlAreaPartition;
    SlabPage = MiGetPage((__int64)ControlAreaPartition, v47, 0);
  }
  if ( SlabPage != -1 )
  {
    if ( (unsigned int)MiGetPfnSlabType(48 * SlabPage - 0x220000000000LL) == 9 )
    {
      v51 = (__int64 *)(v16 + 40);
    }
    else
    {
      if ( v46 > 4 )
        v46 -= 5;
      v51 = (__int64 *)(v16 + 8 * (v46 + 2 * (v46 + 4LL)));
    }
    MiInsertPageChainHead(v51, v50);
    ++v58;
    v12 = v72;
    goto LABEL_30;
  }
  MiReturnFaultCharges((__int64)v48, 1uLL);
  if ( !v58 )
  {
    v19 = -1073741801;
LABEL_13:
    MiReleaseReadListResources(v16);
    v5 = v19;
LABEL_14:
    ExFreePoolWithTag((PVOID)v16, 0);
    return v5;
  }
LABEL_80:
  v54 = ((__int64)v70 - v16 - 240) >> 3;
  *(_QWORD *)(v16 + 200) = v69;
  *(_DWORD *)(v16 + 196) = v54;
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
