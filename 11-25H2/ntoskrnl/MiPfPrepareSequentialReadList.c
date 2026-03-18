/*
 * XREFs of MiPfPrepareSequentialReadList @ 0x1409C9C58
 * Callers:
 *     MmPrefetchForCacheManager @ 0x1409C9A84 (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x1409CABB4 (MiPrefetchControlArea.c)
 * Callees:
 *     MiAddViewsForSection @ 0x140213970 (MiAddViewsForSection.c)
 *     MiInsertPageChainHead @ 0x1402271F0 (MiInsertPageChainHead.c)
 *     MiObtainFaultCharges @ 0x14022B950 (MiObtainFaultCharges.c)
 *     MiGetSlabPage @ 0x14022BC70 (MiGetSlabPage.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140231A30 (MiUpdatePfnForPrefetchByPte.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiProtectionToCacheAttribute @ 0x14023B5F0 (MiProtectionToCacheAttribute.c)
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 *     MiOffsetToProtos @ 0x1402BBD30 (MiOffsetToProtos.c)
 *     MiGetControlAreaPtes @ 0x1402BBFC0 (MiGetControlAreaPtes.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402CE090 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiEndingOffsetWithLock @ 0x1402FD558 (MiEndingOffsetWithLock.c)
 *     MiGetSharedProtos @ 0x140322970 (MiGetSharedProtos.c)
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 *     MiUseSlabAllocator @ 0x14033BB18 (MiUseSlabAllocator.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14035AC94 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiInitializeDemandCoalesceContext @ 0x140378AD0 (MiInitializeDemandCoalesceContext.c)
 *     MiInitializePageChainPacket @ 0x1403796D8 (MiInitializePageChainPacket.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiGetControlAreaPartition @ 0x14043B7F0 (MiGetControlAreaPartition.c)
 *     MiInitializePageHeatList @ 0x140440440 (MiInitializePageHeatList.c)
 *     MiIssuePageHeatList @ 0x14044059C (MiIssuePageHeatList.c)
 *     MiGetNextPageColor @ 0x1404432AC (MiGetNextPageColor.c)
 *     MiAppendPageChain @ 0x14045A4F0 (MiAppendPageChain.c)
 *     MiColorBaseToNode @ 0x14046900C (MiColorBaseToNode.c)
 *     MiRefillPurgedExtents @ 0x14046FCD0 (MiRefillPurgedExtents.c)
 *     MiGetAvailablePagesExcludeSlists @ 0x1404772F4 (MiGetAvailablePagesExcludeSlists.c)
 *     MiReturnFaultCharges @ 0x140480970 (MiReturnFaultCharges.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiReleaseReadListResources @ 0x1409C985C (MiReleaseReadListResources.c)
 *     MiAllocateReadList @ 0x1409C9A04 (MiAllocateReadList.c)
 *     MiPfAllocateMdls @ 0x1409CA7D8 (MiPfAllocateMdls.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 v43; // r8
  __int64 *v44; // r9
  unsigned __int64 **v45; // rax
  __int64 PteAddress; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // r12
  _QWORD *v49; // rbx
  __int64 v50; // rcx
  __int64 *v51; // rax
  unsigned __int64 v52; // rbx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // rdi
  void *Pool; // rax
  __int64 SharedProtos; // rax
  unsigned int NextPageColor; // eax
  __int64 SlabPage; // rax
  unsigned __int64 v61; // [rsp+70h] [rbp-90h]
  __int64 v62; // [rsp+70h] [rbp-90h]
  unsigned __int64 **v63; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+90h] [rbp-70h]
  ULONG *ControlAreaPartition; // [rsp+98h] [rbp-68h]
  unsigned int v67; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v68; // [rsp+A4h] [rbp-5Ch]
  __int64 v69; // [rsp+A8h] [rbp-58h]
  _QWORD *v70; // [rsp+B0h] [rbp-50h]
  unsigned __int64 *v71; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v72; // [rsp+C0h] [rbp-40h]
  PVOID P; // [rsp+C8h] [rbp-38h]
  unsigned int v74; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v75; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v76; // [rsp+E0h] [rbp-20h]
  unsigned __int64 *v77; // [rsp+E8h] [rbp-18h]
  __int64 v78; // [rsp+F0h] [rbp-10h]
  unsigned __int64 **v79; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v80; // [rsp+100h] [rbp+0h]
  unsigned __int64 *v81; // [rsp+108h] [rbp+8h]
  __int64 AvailablePagesExcludeSlists; // [rsp+110h] [rbp+10h]
  unsigned int *p_Blink; // [rsp+118h] [rbp+18h]
  __int64 v84; // [rsp+120h] [rbp+20h]
  __int64 v85; // [rsp+128h] [rbp+28h]
  __int64 *v86; // [rsp+130h] [rbp+30h]
  __int128 v87; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v88[11]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v89; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v90; // [rsp+1B8h] [rbp+B8h]
  _OWORD v91[3]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v92; // [rsp+1F0h] [rbp+F0h]
  int v93; // [rsp+1F8h] [rbp+F8h]

  v9 = a1;
  v84 = a8;
  v78 = a1;
  v85 = a4;
  *a9 = 0LL;
  v13 = (*(_DWORD *)(a2 + 56) & 0x400) == 0;
  v86 = a9;
  v87 = 0LL;
  v92 = 0LL;
  memset(v91, 0, sizeof(v91));
  v93 = 0;
  P = 0LL;
  if ( !v13 || !*(_QWORD *)(a2 + 64) )
    return (unsigned int)-1073741585;
  ControlAreaPtes = MiGetControlAreaPtes(a2);
  if ( a5 )
  {
    v27 = a5 >> 12;
    v80 = a5 >> 12;
    if ( a5 >> 12 > 0xFFFFFFFF || (unsigned int)v27 > ControlAreaPtes )
      return (unsigned int)-1073741583;
  }
  else
  {
    if ( ControlAreaPtes >= 0x100000000LL )
      return (unsigned int)-1073741583;
    LODWORD(v27) = ControlAreaPtes;
    v80 = (unsigned int)ControlAreaPtes;
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
    v56 = 511LL;
    if ( v28 <= 0x1FF )
      v56 = v28;
    Pool = (void *)MiAllocatePool(0x42uLL, 8 * v56 + 16, 1818782029);
    P = Pool;
    if ( !Pool )
    {
      Mdls = -1073741670;
      goto LABEL_100;
    }
    MiInitializePageHeatList((__int64)Pool, 1, 1, v56);
    v9 = v78;
  }
  v30 = a2 + 128;
  v75 = 0LL;
  v31 = (*(_DWORD *)(a2 + 160) >> 1) & 0x1F;
  v65 = 0LL;
  v72 = 0LL;
  v63 = 0LL;
  v81 = 0LL;
  v74 = v31;
  if ( a5 )
    v30 = MiOffsetToProtos(a2, a3, &v75);
  ControlAreaPartition = (ULONG *)MiGetControlAreaPartition(a2);
  AvailablePagesExcludeSlists = MiGetAvailablePagesExcludeSlists((__int64)ControlAreaPartition);
  v32 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v71 = 0LL;
  if ( v9 )
  {
    v70 = *(_QWORD **)(v9 + 32);
    v33 = *(_DWORD *)(v9 + 12) & 0x1FF | 0x200u;
  }
  else
  {
    v70 = 0LL;
    v33 = 0LL;
  }
  v34 = a2;
  v79 = (unsigned __int64 **)(v23 + 240);
  *(_DWORD *)(v23 + 184) = a6;
  *(_DWORD *)(v23 + 188) = 5;
  *(_DWORD *)(v23 + 192) = 7;
  v35 = (*(_DWORD *)(a2 + 56) >> 20) & 0x7F;
  v67 = 0;
  p_Blink = (unsigned int *)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  MiInitializePageColorBase((__int64)p_Blink, 3, v35, (__int64)&v87);
  v36 = MiColorBaseToNode((__int64)&v87);
  v37 = 0LL;
  Mdls = 0;
  v38 = v36;
  v69 = 0LL;
  v39 = 0;
  while ( 1 )
  {
    v68 = v39;
    if ( v39 >= (unsigned int)v80 )
    {
LABEL_105:
      v15 = v65;
      goto LABEL_7;
    }
    if ( (unsigned __int64)v32 < v76 )
    {
      v40 = v70;
      goto LABEL_35;
    }
    if ( v32 )
    {
      v30 = *(_QWORD *)(v30 + 16);
      if ( !v30 )
        goto LABEL_105;
      v75 = 0LL;
    }
    if ( (*(_DWORD *)(v34 + 56) & 0x20) == 0 )
      break;
    v48 = *(_QWORD *)(v30 + 8);
    v61 = v48;
    if ( (*(_DWORD *)(v30 + 32) & 0x20000) == 0 || (*(_DWORD *)(v34 + 56) & 0x8000000) == 0 )
      goto LABEL_74;
    if ( *(_QWORD *)(v30 + 24) )
    {
      SharedProtos = MiGetSharedProtos(v34, a7, v30);
      if ( SharedProtos )
      {
        v48 = *(_QWORD *)(SharedProtos + 72);
        v61 = v48;
        goto LABEL_74;
      }
      v32 = (unsigned __int64 *)(v76 - 8);
    }
    else
    {
      v32 = (unsigned __int64 *)(v76 - 8);
    }
LABEL_53:
    v37 = v69;
    v39 = v68 + 1;
    ++v32;
  }
  Mdls = MiAddViewsForSection((int **)v30, *(unsigned int *)(v30 + 44), 4);
  if ( Mdls >= 0 )
  {
    v48 = *(_QWORD *)(v30 + 8);
    v49 = (_QWORD *)(v23 + 24);
    v50 = *(_QWORD *)(v23 + 32);
    v61 = v48;
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
LABEL_74:
    v32 = (unsigned __int64 *)(v48 + 8 * v75);
    v76 = v61 + 8LL * *(unsigned int *)(v30 + 44);
    v52 = MiStartingOffset(v30, v61, a7);
    v53 = MiEndingOffsetWithLock((_QWORD *)v30);
    v54 = v61;
    if ( (((_WORD)v53 - (_WORD)v52) & 0xFFF) != 0 )
      v77 = (unsigned __int64 *)(v61 + 8 * (((v53 - v52 + 4095) >> 12) - 1));
    else
      v77 = 0LL;
    v40 = v70;
    v37 = v69;
    if ( v70 )
    {
      HIDWORD(v62) = HIDWORD(v52);
      v41 = v54;
      v71 = (unsigned __int64 *)v54;
      LODWORD(v62) = v52 ^ (*(_DWORD *)(v78 + 12) ^ v52) & 0x1FF | 0x200;
      v33 = v62;
LABEL_36:
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
              v15 = v65;
              v17 = v63;
              if ( !v65 )
                Mdls = -1073741670;
              goto LABEL_8;
            }
          }
          else
          {
            if ( v40 )
            {
              v71 = v32;
              v33 += (__int64)((__int64)v32 - v41) >> 3 << 12;
              *v40 = v33;
              v70 = v40 + 1;
            }
LABEL_41:
            v43 = (__int64)v32;
            v44 = (__int64 *)v79;
            v45 = v79;
            if ( v63 )
              v45 = v63;
            v63 = v45;
            *v79 = v32;
            if ( v37 != v30
              || (MiGetPteAddress((unsigned __int64)v81),
                  PteAddress = MiGetPteAddress((unsigned __int64)v32),
                  v47 != PteAddress) )
            {
              v43 |= 2uLL;
              v69 = v30;
              *v44 = v43;
            }
            v81 = v32;
            if ( v32 == v77 )
              *v44 = v43 | 1;
            v79 = (unsigned __int64 **)(v44 + 1);
            if ( !MiObtainFaultCharges(ControlAreaPartition, 1uLL, 1, (__int64)(v44 + 1)) )
            {
              v15 = v65;
              v16 = Mdls;
              if ( !v65 )
                v16 = -1073741670;
              Mdls = v16;
LABEL_7:
              v17 = v63;
LABEL_8:
              if ( v78 )
                *(_QWORD *)(v78 + 24) = v70;
              if ( v15 )
              {
                v18 = v72;
                if ( !v72 )
                  goto LABEL_15;
                memset_0(v88, 0, 0x70uLL);
                MiInitializeDemandCoalesceContext(v91, 16LL, 1uLL, 1);
                v19 = MiProtectionToCacheAttribute(v74);
                MiInitializePageChainPacket(
                  (__int64)ControlAreaPartition,
                  p_Blink,
                  2,
                  0LL,
                  v38 + 1,
                  v19,
                  0,
                  -1LL,
                  (__int64)v91,
                  9u,
                  0LL,
                  v18,
                  (__int64)v88);
                MiGetPageChain(v88);
                v20 = v90;
                if ( v90 )
                  MiAppendPageChain(v23 + 40, &v89);
                if ( v20 == v18 || (MiReturnFaultCharges((__int64)ControlAreaPartition, v18 - v20), v20 - v18 + v15) )
                {
LABEL_15:
                  v21 = v84;
                  v22 = v85;
                  *(_DWORD *)(v23 + 196) = ((__int64)v79 - v23 - 240) >> 3;
                  *(_QWORD *)(v23 + 200) = v17;
                  Mdls = MiPfAllocateMdls(v23, a7, v22, v21);
                  if ( *(_QWORD *)(v23 + 224) != v23 + 224 )
                  {
                    *v86 = v23;
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
            if ( (unsigned int)MiUseSlabAllocator((__int64)ControlAreaPartition, (_DWORD *)v30, v42, v38, &v67)
              && (v55 = v67, v67 <= 4) )
            {
              NextPageColor = MiGetNextPageColor((__int64)&v87);
              SlabPage = MiGetSlabPage(
                           (__int64)ControlAreaPartition,
                           v55,
                           NextPageColor,
                           4u,
                           (__int64 *)0xFFFFFFFFFFFFFFFFLL,
                           0x20000u);
              if ( SlabPage == -1 )
              {
LABEL_93:
                MiReturnFaultCharges((__int64)ControlAreaPartition, 1uLL);
                v15 = v65;
                v17 = v63;
                if ( !v65 )
                  Mdls = -1073741801;
                goto LABEL_8;
              }
              MiInsertPageChainHead(
                (__int64 *)(v23 + 8 * (v55 + 2 * (v55 + 4))),
                (__int64 *)(48 * SlabPage - 0x220000000000LL));
            }
            else
            {
              if ( v72 > AvailablePagesExcludeSlists + 160 )
                goto LABEL_93;
              ++v72;
            }
            ++v65;
          }
LABEL_52:
          v34 = a2;
          goto LABEL_53;
        }
        if ( (v42 & 0x800) == 0 )
        {
          if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(*v32) )
            goto LABEL_41;
          goto LABEL_52;
        }
      }
      MiUpdatePfnForPrefetchByPte((unsigned __int64)v32, a6, (__int64)P);
      goto LABEL_52;
    }
LABEL_35:
    v41 = (unsigned __int64)v71;
    goto LABEL_36;
  }
  if ( v72 )
    MiReturnFaultCharges((__int64)ControlAreaPartition, v72);
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
LABEL_100:
    MiReleaseReadListResources(v23);
    ExFreePoolWithTag((PVOID)v23, 0);
  }
  return (unsigned int)Mdls;
}
