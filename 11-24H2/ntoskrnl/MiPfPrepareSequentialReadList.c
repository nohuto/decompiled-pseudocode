/*
 * XREFs of MiPfPrepareSequentialReadList @ 0x140939D28
 * Callers:
 *     MmPrefetchForCacheManager @ 0x140939B54 (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x14093AC84 (MiPrefetchControlArea.c)
 * Callees:
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiInsertPageChainHead @ 0x14021CD10 (MiInsertPageChainHead.c)
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1402598C4 (MiRemoveViewsFromSectionWithPfn.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140269980 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiInitializeDemandCoalesceContext @ 0x14026AE60 (MiInitializeDemandCoalesceContext.c)
 *     MiEndingOffsetWithLock @ 0x1402724D4 (MiEndingOffsetWithLock.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiOffsetToProtos @ 0x1402C28D0 (MiOffsetToProtos.c)
 *     MiGetControlAreaPtes @ 0x1402C2B60 (MiGetControlAreaPtes.c)
 *     MiInitializePageChainPacket @ 0x1402F4870 (MiInitializePageChainPacket.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     MiGetSharedProtos @ 0x14030CC0C (MiGetSharedProtos.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140334220 (MiUpdatePfnForPrefetchByPte.c)
 *     MiAddViewsForSection @ 0x140336DD0 (MiAddViewsForSection.c)
 *     MiObtainFaultCharges @ 0x14033EB80 (MiObtainFaultCharges.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiUseSlabAllocator @ 0x140349AF8 (MiUseSlabAllocator.c)
 *     MiRefillPurgedExtents @ 0x1404276E4 (MiRefillPurgedExtents.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiGetControlAreaPartition @ 0x14042A350 (MiGetControlAreaPartition.c)
 *     MiGetNextPageColor @ 0x1404317F0 (MiGetNextPageColor.c)
 *     MiInitializePageHeatList @ 0x140435B60 (MiInitializePageHeatList.c)
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 *     MiAppendPageChain @ 0x1404457D8 (MiAppendPageChain.c)
 *     MiColorBaseToNode @ 0x1404514C4 (MiColorBaseToNode.c)
 *     MiGetAvailablePagesExcludeSlists @ 0x140473AA8 (MiGetAvailablePagesExcludeSlists.c)
 *     MiReturnFaultCharges @ 0x14047CD94 (MiReturnFaultCharges.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiAllocateReadList @ 0x140939930 (MiAllocateReadList.c)
 *     MiReleaseReadListResources @ 0x1409399B0 (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x14093A89C (MiPfAllocateMdls.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfPrepareSequentialReadList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
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
  __int64 v23; // r15
  PVOID v24; // rbx
  unsigned __int64 ControlAreaPtes; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  _QWORD *List; // rax
  __int64 v30; // r13
  int v31; // eax
  unsigned __int64 *v32; // r12
  __int64 v33; // rdi
  __int64 v34; // rbx
  int v35; // r8d
  unsigned int v36; // eax
  __int64 v37; // r10
  unsigned int v38; // esi
  unsigned int v39; // eax
  _QWORD *v40; // rdx
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // rbx
  unsigned __int64 v43; // r8
  unsigned __int64 **v44; // r9
  unsigned __int64 **v45; // rax
  __int64 PteAddress; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // r12
  _QWORD *v49; // rbx
  __int64 v50; // rcx
  __int64 *v51; // rax
  __int64 v52; // rbx
  unsigned __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
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
  ControlAreaPtes = MiGetControlAreaPtes(a2, a2, a3, a4);
  if ( a5 )
  {
    v27 = a5 >> 12;
    v83 = a5 >> 12;
    if ( a5 >> 12 > 0xFFFFFFFF || (unsigned int)v27 > ControlAreaPtes )
      return (unsigned int)-1073741583;
  }
  else
  {
    if ( ControlAreaPtes >= 0x100000000LL )
      return (unsigned int)-1073741583;
    LODWORD(v27) = ControlAreaPtes;
    v83 = (unsigned int)ControlAreaPtes;
  }
  v28 = (unsigned int)v27;
  if ( a4 && (unsigned int)v27 + ((a3 >> 12) & 0x3FuLL) > 0x40 )
    return (unsigned int)-1073741583;
  List = MiAllocateReadList();
  v23 = (__int64)List;
  if ( !List )
    return (unsigned int)-1073741670;
  List[1] = a2;
  if ( (HvlEnlightenments & 0x200000) != 0 )
  {
    v59 = 511LL;
    if ( v28 <= 0x1FF )
      v59 = v28;
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
  v30 = a2 + 128;
  v78 = 0LL;
  v31 = (*(_DWORD *)(a2 + 160) >> 1) & 0x1F;
  v68 = 0LL;
  v75 = 0LL;
  v66 = 0LL;
  v84 = 0LL;
  v77 = v31;
  if ( a5 )
    v30 = MiOffsetToProtos(a2, a3, &v78);
  ControlAreaPartition = (ULONG *)MiGetControlAreaPartition(a2);
  AvailablePagesExcludeSlists = MiGetAvailablePagesExcludeSlists((__int64)ControlAreaPartition);
  v32 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v74 = 0LL;
  if ( v9 )
  {
    v73 = *(_QWORD **)(v9 + 32);
    v33 = *(_DWORD *)(v9 + 12) & 0x1FF | 0x200u;
  }
  else
  {
    v73 = 0LL;
    v33 = 0LL;
  }
  v34 = a2;
  v82 = (unsigned __int64 **)(v23 + 240);
  *(_DWORD *)(v23 + 184) = a6;
  *(_DWORD *)(v23 + 188) = 5;
  *(_DWORD *)(v23 + 192) = 7;
  v35 = (*(_DWORD *)(a2 + 56) >> 20) & 0x7F;
  v70 = 0;
  p_Blink = (unsigned int *)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  MiInitializePageColorBase((__int64)p_Blink, 3, v35, (__int64)&v90);
  v36 = MiColorBaseToNode((__int64)&v90);
  v37 = 0LL;
  Mdls = 0;
  v38 = v36;
  v72 = 0LL;
  v39 = 0;
  while ( 1 )
  {
    v71 = v39;
    if ( v39 >= (unsigned int)v83 )
    {
LABEL_97:
      v15 = v68;
      goto LABEL_7;
    }
    if ( (unsigned __int64)v32 < v79 )
    {
      v40 = v73;
      goto LABEL_36;
    }
    if ( v32 )
    {
      v30 = *(_QWORD *)(v30 + 16);
      if ( !v30 )
        goto LABEL_97;
      v78 = 0LL;
    }
    if ( (*(_DWORD *)(v34 + 56) & 0x20) == 0 )
      break;
    v48 = *(_QWORD *)(v30 + 8);
    v64 = v48;
    if ( (*(_DWORD *)(v30 + 32) & 0x20000) == 0 || (*(_DWORD *)(v34 + 56) & 0x8000000) == 0 )
      goto LABEL_89;
    if ( *(_QWORD *)(v30 + 24) )
    {
      SharedProtos = MiGetSharedProtos(v34, a7, v30);
      if ( SharedProtos )
      {
        v48 = *(_QWORD *)(SharedProtos + 72);
        v64 = v48;
        goto LABEL_89;
      }
      v32 = (unsigned __int64 *)(v79 - 8);
    }
    else
    {
      v32 = (unsigned __int64 *)(v79 - 8);
    }
LABEL_54:
    v37 = v72;
    v39 = v71 + 1;
    ++v32;
  }
  Mdls = MiAddViewsForSection((int **)v30, *(unsigned int *)(v30 + 44), 4);
  if ( Mdls >= 0 )
  {
    v48 = *(_QWORD *)(v30 + 8);
    v49 = (_QWORD *)(v23 + 24);
    v50 = *(_QWORD *)(v23 + 32);
    v64 = v48;
    if ( (_QWORD *)*v49 == v49 || *(_DWORD *)(v50 + 16) == 5 )
    {
      v50 = MiAllocatePool(0x100uLL, 0x40uLL, 1817406797);
      if ( !v50 )
      {
        MiRemoveViewsFromSectionWithPfn((__int64 *)v30, *(unsigned int *)(v30 + 44), 4);
        Mdls = -1073741670;
        goto LABEL_17;
      }
      v51 = *(__int64 **)(v23 + 32);
      if ( (_QWORD *)*v51 != v49 )
        __fastfail(3u);
      *(_QWORD *)v50 = v49;
      *(_QWORD *)(v50 + 8) = v51;
      *v51 = v50;
      *(_QWORD *)(v23 + 32) = v50;
    }
    if ( !*(_QWORD *)(v23 + 16) )
      *(_QWORD *)(v23 + 16) = v30;
    *(_QWORD *)(v50 + 8LL * (unsigned int)(*(_DWORD *)(v50 + 16))++ + 24) = v30;
LABEL_89:
    v32 = (unsigned __int64 *)(v48 + 8 * v78);
    v79 = v64 + 8LL * *(unsigned int *)(v30 + 44);
    v53 = MiStartingOffset((__int64 *)v30, v64, a7);
    v57 = MiEndingOffsetWithLock((_QWORD *)v30, v54, v55, v56);
    v58 = v64;
    if ( (((_WORD)v57 - (_WORD)v53) & 0xFFF) != 0 )
      v80 = (unsigned __int64 *)(v64 + 8 * (((v57 - v53 + 4095) >> 12) - 1));
    else
      v80 = 0LL;
    v40 = v73;
    v37 = v72;
    if ( v73 )
    {
      HIDWORD(v65) = HIDWORD(v53);
      v41 = v58;
      v74 = (unsigned __int64 *)v58;
      LODWORD(v65) = v53 ^ (*(_DWORD *)(v81 + 12) ^ v53) & 0x1FF | 0x200;
      v33 = v65;
LABEL_37:
      v42 = *v32;
      if ( (*v32 & 1) == 0 )
      {
        if ( (v42 & 0x400) != 0 )
        {
          if ( (*(_BYTE *)(a2 + 62) & 0xC) == 4 )
          {
            Mdls = MiRefillPurgedExtents((__int64 *)v30, (__int64)v32, a7);
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
            if ( v40 )
            {
              v74 = v32;
              v33 += (__int64)((__int64)v32 - v41) >> 3 << 12;
              *v40 = v33;
              v73 = v40 + 1;
            }
LABEL_42:
            v43 = (unsigned __int64)v32;
            v44 = v82;
            v45 = v82;
            if ( v66 )
              v45 = v66;
            v66 = v45;
            *v82 = v32;
            if ( v37 != v30
              || (MiGetPteAddress((unsigned __int64)v84),
                  PteAddress = MiGetPteAddress((unsigned __int64)v32),
                  v47 != PteAddress) )
            {
              v43 |= 2uLL;
              v72 = v30;
              *v44 = (unsigned __int64 *)v43;
            }
            v84 = v32;
            if ( v32 == v80 )
              *v44 = (unsigned __int64 *)(v43 | 1);
            v82 = v44 + 1;
            if ( !MiObtainFaultCharges(ControlAreaPartition, 1uLL, 1, (struct _KPRCB *)(v44 + 1)) )
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
                  v38 + 1,
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
                  MiAppendPageChain(v23 + 40, &v92);
                if ( v20 == v18 || (MiReturnFaultCharges((__int64)ControlAreaPartition, v18 - v20), v20 - v18 + v15) )
                {
LABEL_15:
                  v21 = v87;
                  v22 = v88;
                  *(_DWORD *)(v23 + 196) = ((__int64)v82 - v23 - 240) >> 3;
                  *(_QWORD *)(v23 + 200) = v17;
                  Mdls = MiPfAllocateMdls(v23, a7, v22, v21);
                  if ( *(_QWORD *)(v23 + 224) != v23 + 224 )
                  {
                    *v89 = v23;
                    v23 = 0LL;
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
            if ( (unsigned int)MiUseSlabAllocator((__int64)ControlAreaPartition, (_DWORD *)v30, v42, v38, &v70)
              && (v52 = v70, v70 <= 4) )
            {
              NextPageColor = MiGetNextPageColor((__int64)&v90);
              SlabPage = MiGetSlabPage(
                           (__int64)ControlAreaPartition,
                           v52,
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
                (__int64 *)(v23 + 8 * (v52 + 2 * (v52 + 4))),
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
          v34 = a2;
          goto LABEL_54;
        }
        if ( (v42 & 0x800) == 0 )
        {
          if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(*v32) )
            goto LABEL_42;
          goto LABEL_53;
        }
      }
      MiUpdatePfnForPrefetchByPte((unsigned __int64)v32, a6, (__int64)P);
      goto LABEL_53;
    }
LABEL_36:
    v41 = (unsigned __int64)v74;
    goto LABEL_37;
  }
  if ( v75 )
    MiReturnFaultCharges((__int64)ControlAreaPartition, v75);
LABEL_17:
  v24 = P;
  if ( P )
  {
    if ( *((_DWORD *)P + 1) )
      MiIssuePageHeatList((__int64)P);
    ExFreePoolWithTag(v24, 0);
  }
  if ( v23 )
  {
LABEL_19:
    MiReleaseReadListResources(v23);
    ExFreePoolWithTag((PVOID)v23, 0);
  }
  return (unsigned int)Mdls;
}
