/*
 * XREFs of MiPfPrepareSequentialReadList @ 0x140956378
 * Callers:
 *     MmPrefetchForCacheManager @ 0x1409561A4 (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x1409572D4 (MiPrefetchControlArea.c)
 * Callees:
 *     MiAddViewsForSection @ 0x14020DA70 (MiAddViewsForSection.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140215E80 (MiUpdatePfnForPrefetchByPte.c)
 *     MiEndingOffsetWithLock @ 0x14023A3EC (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x140244020 (MiStartingOffset.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402C6590 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiInitializePageChainPacket @ 0x1402D0D10 (MiInitializePageChainPacket.c)
 *     MiUseSlabAllocator @ 0x1402E84B8 (MiUseSlabAllocator.c)
 *     MiProtectionToCacheAttribute @ 0x1402EF870 (MiProtectionToCacheAttribute.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetSlabPage @ 0x1402F3934 (MiGetSlabPage.c)
 *     MiObtainFaultCharges @ 0x1402F6A70 (MiObtainFaultCharges.c)
 *     MiGetPageChain @ 0x1402FCDC0 (MiGetPageChain.c)
 *     MiGetSharedProtos @ 0x1403025FC (MiGetSharedProtos.c)
 *     MiOffsetToProtos @ 0x140319D40 (MiOffsetToProtos.c)
 *     MiGetControlAreaPtes @ 0x140319FD0 (MiGetControlAreaPtes.c)
 *     MiInitializeDemandCoalesceContext @ 0x14036EEE0 (MiInitializeDemandCoalesceContext.c)
 *     MiRefillPurgedExtents @ 0x14036F3FC (MiRefillPurgedExtents.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140371504 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiInsertPageChainHead @ 0x14039EC34 (MiInsertPageChainHead.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     MiGetControlAreaPartition @ 0x1404378D0 (MiGetControlAreaPartition.c)
 *     MiGetNextPageColor @ 0x14043D550 (MiGetNextPageColor.c)
 *     MiInitializePageHeatList @ 0x14043F8A0 (MiInitializePageHeatList.c)
 *     MiIssuePageHeatList @ 0x14043F9FC (MiIssuePageHeatList.c)
 *     MiAppendPageChain @ 0x140450568 (MiAppendPageChain.c)
 *     MiColorBaseToNode @ 0x14045C12C (MiColorBaseToNode.c)
 *     MiGetAvailablePagesExcludeSlists @ 0x140477508 (MiGetAvailablePagesExcludeSlists.c)
 *     MiReturnFaultCharges @ 0x140481AD4 (MiReturnFaultCharges.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiAllocateReadList @ 0x140955F80 (MiAllocateReadList.c)
 *     MiReleaseReadListResources @ 0x140956000 (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x140956EEC (MiPfAllocateMdls.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfPrepareSequentialReadList(
        __int64 a1,
        __int64 a2,
        signed __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        __int64 a8,
        __int64 *a9)
{
  __int64 v9; // rdi
  bool v13; // zf
  int Mdls; // r14d
  __int64 v15; // r12
  int v16; // eax
  unsigned __int64 **v17; // r13
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // r9
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  __int64 v24; // r15
  PVOID v25; // rbx
  unsigned __int64 ControlAreaPtes; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rsi
  _QWORD *List; // rax
  __int64 v31; // r13
  int v32; // eax
  unsigned __int64 *v33; // r12
  __int64 v34; // rdi
  __int64 v35; // rbx
  int v36; // r8d
  unsigned int v37; // eax
  __int64 v38; // r10
  unsigned int v39; // esi
  unsigned int v40; // eax
  _QWORD *v41; // rdx
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rbx
  __int64 v44; // r8
  __int64 *v45; // r9
  unsigned __int64 **v46; // rax
  __int64 PteAddress; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // r12
  _QWORD *v50; // rbx
  __int64 v51; // rcx
  __int64 *v52; // rax
  __int64 v53; // rbx
  unsigned __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // r8
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  __int64 v59; // rdi
  void *Pool; // rax
  __int64 SharedProtos; // rax
  unsigned int NextPageColor; // eax
  __int64 SlabPage; // rax
  unsigned __int64 v64; // [rsp+70h] [rbp-90h]
  __int64 v65; // [rsp+70h] [rbp-90h]
  unsigned __int64 **v66; // [rsp+80h] [rbp-80h]
  __int64 v68; // [rsp+90h] [rbp-70h]
  ULONG *ControlAreaPartition; // [rsp+98h] [rbp-68h]
  unsigned int v70; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v71; // [rsp+A4h] [rbp-5Ch]
  __int64 v72; // [rsp+A8h] [rbp-58h]
  _QWORD *v73; // [rsp+B0h] [rbp-50h]
  unsigned __int64 *v74; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v75; // [rsp+C0h] [rbp-40h]
  PVOID P; // [rsp+C8h] [rbp-38h]
  unsigned int v77; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v78; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v79; // [rsp+E0h] [rbp-20h]
  unsigned __int64 *v80; // [rsp+E8h] [rbp-18h]
  __int64 v81; // [rsp+F0h] [rbp-10h]
  unsigned __int64 **v82; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v83; // [rsp+100h] [rbp+0h]
  unsigned __int64 *v84; // [rsp+108h] [rbp+8h]
  __int64 AvailablePagesExcludeSlists; // [rsp+110h] [rbp+10h]
  unsigned int *p_Blink; // [rsp+118h] [rbp+18h]
  __int64 v87; // [rsp+120h] [rbp+20h]
  __int64 v88; // [rsp+128h] [rbp+28h]
  __int64 *v89; // [rsp+130h] [rbp+30h]
  __int128 v90; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v91[11]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v92; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v93; // [rsp+1B8h] [rbp+B8h]
  _OWORD v94[3]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v95; // [rsp+1F0h] [rbp+F0h]
  int v96; // [rsp+1F8h] [rbp+F8h]

  v9 = a1;
  v87 = a8;
  v81 = a1;
  v88 = a4;
  *a9 = 0LL;
  v13 = (*(_DWORD *)(a2 + 56) & 0x400) == 0;
  v89 = a9;
  v90 = 0LL;
  v95 = 0LL;
  memset(v94, 0, sizeof(v94));
  v96 = 0;
  P = 0LL;
  if ( !v13 || !*(_QWORD *)(a2 + 64) )
    return (unsigned int)-1073741585;
  ControlAreaPtes = MiGetControlAreaPtes(a2);
  if ( a5 )
  {
    v28 = a5 >> 12;
    v83 = a5 >> 12;
    if ( a5 >> 12 > 0xFFFFFFFF || (unsigned int)v28 > ControlAreaPtes )
      return (unsigned int)-1073741583;
  }
  else
  {
    if ( ControlAreaPtes >= 0x100000000LL )
      return (unsigned int)-1073741583;
    LODWORD(v28) = ControlAreaPtes;
    v83 = (unsigned int)ControlAreaPtes;
  }
  v29 = (unsigned int)v28;
  if ( a4 && (unsigned int)v28 + ((a3 >> 12) & 0x3FuLL) > 0x40 )
    return (unsigned int)-1073741583;
  List = MiAllocateReadList();
  v24 = (__int64)List;
  if ( !List )
    return (unsigned int)-1073741670;
  List[1] = a2;
  if ( (HvlEnlightenments & 0x200000) != 0 )
  {
    v59 = 511LL;
    if ( v29 <= 0x1FF )
      v59 = v29;
    Pool = (void *)MiAllocatePool(0x42uLL, 8 * v59 + 16, 1818782029);
    P = Pool;
    if ( !Pool )
    {
      Mdls = -1073741670;
      goto LABEL_19;
    }
    MiInitializePageHeatList((__int64)Pool, 1, 1, v59);
    v9 = v81;
  }
  v31 = a2 + 128;
  v78 = 0LL;
  v32 = (*(_DWORD *)(a2 + 160) >> 1) & 0x1F;
  v68 = 0LL;
  v75 = 0LL;
  v66 = 0LL;
  v84 = 0LL;
  v77 = v32;
  if ( a5 )
    v31 = MiOffsetToProtos(a2, a3, &v78);
  ControlAreaPartition = (ULONG *)MiGetControlAreaPartition(a2);
  AvailablePagesExcludeSlists = MiGetAvailablePagesExcludeSlists((__int64)ControlAreaPartition);
  v33 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v74 = 0LL;
  if ( v9 )
  {
    v73 = *(_QWORD **)(v9 + 32);
    v34 = *(_DWORD *)(v9 + 12) & 0x1FF | 0x200u;
  }
  else
  {
    v73 = 0LL;
    v34 = 0LL;
  }
  v35 = a2;
  v82 = (unsigned __int64 **)(v24 + 240);
  *(_DWORD *)(v24 + 184) = a6;
  *(_DWORD *)(v24 + 188) = 5;
  *(_DWORD *)(v24 + 192) = 7;
  v36 = (*(_DWORD *)(a2 + 56) >> 20) & 0x7F;
  v70 = 0;
  p_Blink = (unsigned int *)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  MiInitializePageColorBase((__int64)p_Blink, 3, v36, (__int64)&v90);
  v37 = MiColorBaseToNode((__int64)&v90);
  v38 = 0LL;
  Mdls = 0;
  v39 = v37;
  v72 = 0LL;
  v40 = 0;
  while ( 1 )
  {
    v71 = v40;
    if ( v40 >= (unsigned int)v83 )
    {
LABEL_97:
      v15 = v68;
      goto LABEL_7;
    }
    if ( (unsigned __int64)v33 < v79 )
    {
      v41 = v73;
      goto LABEL_36;
    }
    if ( v33 )
    {
      v31 = *(_QWORD *)(v31 + 16);
      if ( !v31 )
        goto LABEL_97;
      v78 = 0LL;
    }
    if ( (*(_DWORD *)(v35 + 56) & 0x20) == 0 )
      break;
    v49 = *(_QWORD *)(v31 + 8);
    v64 = v49;
    if ( (*(_DWORD *)(v31 + 32) & 0x20000) == 0 || (*(_DWORD *)(v35 + 56) & 0x8000000) == 0 )
      goto LABEL_89;
    if ( *(_QWORD *)(v31 + 24) )
    {
      SharedProtos = MiGetSharedProtos(v35, a7, v31);
      if ( SharedProtos )
      {
        v49 = *(_QWORD *)(SharedProtos + 72);
        v64 = v49;
        goto LABEL_89;
      }
      v33 = (unsigned __int64 *)(v79 - 8);
    }
    else
    {
      v33 = (unsigned __int64 *)(v79 - 8);
    }
LABEL_54:
    v38 = v72;
    v40 = v71 + 1;
    ++v33;
  }
  Mdls = MiAddViewsForSection((int **)v31, *(unsigned int *)(v31 + 44), 4LL);
  if ( Mdls >= 0 )
  {
    v49 = *(_QWORD *)(v31 + 8);
    v50 = (_QWORD *)(v24 + 24);
    v51 = *(_QWORD *)(v24 + 32);
    v64 = v49;
    if ( (_QWORD *)*v50 == v50 || *(_DWORD *)(v51 + 16) == 5 )
    {
      v51 = MiAllocatePool(0x100uLL, 0x40uLL, 1817406797);
      if ( !v51 )
      {
        MiRemoveViewsFromSectionWithPfn((__int64 *)v31, *(unsigned int *)(v31 + 44), 4);
        Mdls = -1073741670;
        goto LABEL_17;
      }
      v52 = *(__int64 **)(v24 + 32);
      if ( (_QWORD *)*v52 != v50 )
        __fastfail(3u);
      *(_QWORD *)v51 = v50;
      *(_QWORD *)(v51 + 8) = v52;
      *v52 = v51;
      *(_QWORD *)(v24 + 32) = v51;
    }
    if ( !*(_QWORD *)(v24 + 16) )
      *(_QWORD *)(v24 + 16) = v31;
    *(_QWORD *)(v51 + 8LL * (unsigned int)(*(_DWORD *)(v51 + 16))++ + 24) = v31;
LABEL_89:
    v33 = (unsigned __int64 *)(v49 + 8 * v78);
    v79 = v64 + 8LL * *(unsigned int *)(v31 + 44);
    v54 = MiStartingOffset((__int64 *)v31, v64, a7);
    v57 = MiEndingOffsetWithLock((_QWORD *)v31, v55, v56);
    v58 = v64;
    if ( (((_WORD)v57 - (_WORD)v54) & 0xFFF) != 0 )
      v80 = (unsigned __int64 *)(v64 + 8 * (((v57 - v54 + 4095) >> 12) - 1));
    else
      v80 = 0LL;
    v41 = v73;
    v38 = v72;
    if ( v73 )
    {
      HIDWORD(v65) = HIDWORD(v54);
      v42 = v58;
      v74 = (unsigned __int64 *)v58;
      LODWORD(v65) = v54 ^ (*(_DWORD *)(v81 + 12) ^ v54) & 0x1FF | 0x200;
      v34 = v65;
LABEL_37:
      v43 = *v33;
      if ( (*v33 & 1) == 0 )
      {
        if ( (v43 & 0x400) != 0 )
        {
          if ( (*(_BYTE *)(a2 + 62) & 0xC) == 4 )
          {
            Mdls = MiRefillPurgedExtents((__int64 *)v31, (__int64)v33, a7);
            if ( Mdls < 0 )
            {
              v15 = v68;
              v17 = v66;
              if ( !v68 )
                Mdls = -1073741670;
              goto LABEL_8;
            }
          }
          else
          {
            if ( v41 )
            {
              v74 = v33;
              v34 += (__int64)((__int64)v33 - v42) >> 3 << 12;
              *v41 = v34;
              v73 = v41 + 1;
            }
LABEL_42:
            v44 = (__int64)v33;
            v45 = (__int64 *)v82;
            v46 = v82;
            if ( v66 )
              v46 = v66;
            v66 = v46;
            *v82 = v33;
            if ( v38 != v31
              || (MiGetPteAddress((unsigned __int64)v84),
                  PteAddress = MiGetPteAddress((unsigned __int64)v33),
                  v48 != PteAddress) )
            {
              v44 |= 2uLL;
              v72 = v31;
              *v45 = v44;
            }
            v84 = v33;
            if ( v33 == v80 )
              *v45 = v44 | 1;
            v82 = (unsigned __int64 **)(v45 + 1);
            if ( !MiObtainFaultCharges(ControlAreaPartition, 1uLL, 1) )
            {
              v15 = v68;
              v16 = Mdls;
              if ( !v68 )
                v16 = -1073741670;
              Mdls = v16;
LABEL_7:
              v17 = v66;
LABEL_8:
              if ( v81 )
                *(_QWORD *)(v81 + 24) = v73;
              if ( v15 )
              {
                v18 = v75;
                if ( !v75 )
                  goto LABEL_15;
                memset_0(v91, 0, 0x70uLL);
                MiInitializeDemandCoalesceContext(v94, 16LL, 1uLL, 1);
                v19 = MiProtectionToCacheAttribute(v77);
                MiInitializePageChainPacket(
                  (__int64)ControlAreaPartition,
                  p_Blink,
                  2,
                  0LL,
                  v39 + 1,
                  v19,
                  0,
                  -1LL,
                  (__int64)v94,
                  9u,
                  0LL,
                  v18,
                  (__int64)v91);
                MiGetPageChain(v91);
                v20 = v93;
                if ( v93 )
                  MiAppendPageChain(v24 + 40, &v92);
                if ( v20 == v18 || (MiReturnFaultCharges((__int64)ControlAreaPartition, v18 - v20), v20 - v18 + v15) )
                {
LABEL_15:
                  v21 = v87;
                  v22 = v88;
                  *(_DWORD *)(v24 + 196) = ((__int64)v82 - v24 - 240) >> 3;
                  *(_QWORD *)(v24 + 200) = v17;
                  Mdls = MiPfAllocateMdls(v24, a7, v22, v21);
                  if ( *(_QWORD *)(v24 + 224) != v24 + 224 )
                  {
                    *v89 = v24;
                    v24 = 0LL;
                    Mdls = 0;
                  }
                }
                else
                {
                  Mdls = -1073741801;
                }
              }
              goto LABEL_17;
            }
            if ( (unsigned int)MiUseSlabAllocator((__int64)ControlAreaPartition, (_DWORD *)v31, v43, v39, &v70)
              && (v53 = v70, v70 <= 4) )
            {
              NextPageColor = MiGetNextPageColor((__int64)&v90);
              SlabPage = MiGetSlabPage(
                           (__int64)ControlAreaPartition,
                           v53,
                           NextPageColor,
                           4u,
                           (__int64 *)0xFFFFFFFFFFFFFFFFLL,
                           0x20000u);
              if ( SlabPage == -1 )
              {
LABEL_94:
                MiReturnFaultCharges((__int64)ControlAreaPartition, 1uLL);
                v15 = v68;
                v17 = v66;
                if ( !v68 )
                  Mdls = -1073741801;
                goto LABEL_8;
              }
              MiInsertPageChainHead(
                (__int64 *)(v24 + 8 * (v53 + 2 * (v53 + 4))),
                (__int64 *)(48 * SlabPage - 0x220000000000LL));
            }
            else
            {
              if ( v75 > AvailablePagesExcludeSlists + 160 )
                goto LABEL_94;
              ++v75;
            }
            ++v68;
          }
LABEL_53:
          v35 = a2;
          goto LABEL_54;
        }
        if ( (v43 & 0x800) == 0 )
        {
          if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(*v33) )
            goto LABEL_42;
          goto LABEL_53;
        }
      }
      MiUpdatePfnForPrefetchByPte((unsigned __int64)v33, a6, (__int64)P);
      goto LABEL_53;
    }
LABEL_36:
    v42 = (unsigned __int64)v74;
    goto LABEL_37;
  }
  v23 = v75;
  if ( v75 )
    MiReturnFaultCharges((__int64)ControlAreaPartition, v75);
LABEL_17:
  v25 = P;
  if ( P )
  {
    if ( *((_DWORD *)P + 1) )
      MiIssuePageHeatList(P, v23);
    ExFreePoolWithTag(v25, 0);
  }
  if ( v24 )
  {
LABEL_19:
    MiReleaseReadListResources(v24);
    ExFreePoolWithTag((PVOID)v24, 0);
  }
  return (unsigned int)Mdls;
}
