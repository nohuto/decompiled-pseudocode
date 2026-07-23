/*
 * XREFs of KiComputeNumaCosts @ 0x140C29888
 * Callers:
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     KeGetNodePrimarySubNode @ 0x14026FD94 (KeGetNodePrimarySubNode.c)
 *     KiQuerySubNodeActiveAffinity @ 0x14026FE00 (KiQuerySubNodeActiveAffinity.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     KeIsEmptyGroupMask @ 0x14032FF20 (KeIsEmptyGroupMask.c)
 *     MmAllocateNodePagesForMdlEx @ 0x1403953A0 (MmAllocateNodePagesForMdlEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     HvlQueryNumaDistance @ 0x140580A40 (HvlQueryNumaDistance.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     KiGetHalNumaConversionFactor @ 0x140C2A0B4 (KiGetHalNumaConversionFactor.c)
 */

char KiComputeNumaCosts()
{
  __int64 v0; // rsi
  char *Pool2; // rax
  unsigned __int16 v2; // cx
  int v3; // r12d
  unsigned int v4; // esi
  __int64 v5; // rdi
  unsigned int v6; // edi
  int v7; // ecx
  unsigned int v8; // r14d
  __int16 i; // r15
  __int64 NodePrimarySubNode; // rax
  _GROUP_AFFINITY *p_PreviousAffinity_8; // rdx
  unsigned int v12; // r15d
  struct _MDL *NodePagesForMdl; // rax
  struct _MDL *v14; // r12
  int v15; // edx
  char *v16; // rdi
  unsigned __int8 CurrentIrql; // r13
  char *v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int16 v20; // dx
  int v21; // r8d
  unsigned int v22; // edi
  unsigned __int16 *v23; // rcx
  int v24; // eax
  unsigned int v25; // r15d
  int v26; // r13d
  unsigned __int16 *v27; // rdi
  unsigned __int16 *v28; // rcx
  int v29; // esi
  _QWORD *v30; // r12
  __int64 v31; // rax
  int v32; // r14d
  __int64 v33; // r11
  __int64 v34; // r10
  unsigned int v35; // r14d
  __int64 HalNumaConversionFactor; // rax
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // rcx
  unsigned int v39; // edi
  unsigned int v40; // r9d
  unsigned int v41; // r10d
  int v42; // esi
  _QWORD *v43; // r8
  __int64 *v44; // r11
  unsigned __int16 *v45; // rax
  __int64 v46; // rdx
  size_t v47; // rdx
  unsigned __int16 v48; // dx
  unsigned int v49; // r8d
  int k; // eax
  __int16 v51; // cx
  __int64 v52; // rdx
  int v54; // [rsp+48h] [rbp-C0h]
  unsigned int j; // [rsp+48h] [rbp-C0h]
  __int64 v56; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+58h] [rbp-B0h]
  unsigned __int64 Affinity; // [rsp+60h] [rbp-A8h]
  _GROUP_AFFINITY Affinity_8; // [rsp+68h] [rbp-A0h] BYREF
  _GROUP_AFFINITY PreviousAffinity_8; // [rsp+78h] [rbp-90h] BYREF
  _WORD Base[4]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v62[127]; // [rsp+90h] [rbp-78h] BYREF

  v57 = 0LL;
  PreviousAffinity_8 = 0LL;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
LABEL_78:
    LOBYTE(Pool2) = 1;
    return (char)Pool2;
  }
  v0 = (unsigned __int16)KeNumberNodes * (unsigned int)(unsigned __int16)KeNumberNodes;
  Pool2 = (char *)ExAllocatePool2(0x40uLL, 10 * v0, 0x634E654BuLL);
  KiActualNodeCost = Pool2;
  if ( Pool2 )
  {
    KiNodeGraph = &Pool2[8 * v0];
    if ( (_DWORD)v0 )
      memset_0(Pool2, -1, 8 * v0);
    v57 = -1LL;
    v2 = KeNumberNodes;
    v3 = 0;
    v54 = 0;
    v4 = 0;
    LODWORD(v56) = 0;
    Affinity_8 = 0LL;
    if ( KeNumberNodes )
    {
      while ( 1 )
      {
        v5 = KeNodeBlock[v4];
        if ( (HvlEnlightenments & 0x800) != 0 )
        {
          v6 = 0;
          if ( v2 )
          {
            do
            {
              v56 = 0LL;
              HvlQueryNumaDistance(v4, v6, &v56);
              v7 = v4 * (unsigned __int16)KeNumberNodes;
              if ( v56 == -1 )
                *((_QWORD *)KiActualNodeCost + v6 + v7) = -1LL;
              else
                *((_QWORD *)KiActualNodeCost + v6 + v7) = (unsigned __int64)(v56 << 9) >> 10;
              v2 = KeNumberNodes;
              ++v6;
            }
            while ( v6 < (unsigned __int16)KeNumberNodes );
          }
          goto LABEL_41;
        }
        if ( *(_WORD *)v5 != *(_WORD *)(v5 + 2) )
          goto LABEL_41;
        if ( !(unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)(v5 + 16)) )
          break;
        v8 = 0;
        for ( i = *(_WORD *)v5; v8 < (unsigned __int16)KeNumberNodes; ++v8 )
        {
          v5 = KeNodeBlock[v8];
          if ( *(_WORD *)(v5 + 2) == i && !(unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)(v5 + 16)) )
            break;
        }
        v2 = KeNumberNodes;
        if ( v8 != (unsigned __int16)KeNumberNodes )
          goto LABEL_24;
LABEL_41:
        LODWORD(v56) = ++v4;
        if ( v4 >= v2 )
        {
          if ( v54 == 1 )
            KeRevertToUserGroupAffinityThread(&PreviousAffinity_8);
          goto LABEL_44;
        }
        v3 = v54;
      }
      v8 = v4;
LABEL_24:
      NodePrimarySubNode = KeGetNodePrimarySubNode(v5);
      KiQuerySubNodeActiveAffinity(NodePrimarySubNode, (__int64)&Affinity_8, 0LL);
      Affinity_8.Mask &= Affinity_8.Mask ^ (Affinity_8.Mask - 1);
      if ( v3 )
      {
        p_PreviousAffinity_8 = 0LL;
      }
      else
      {
        v54 = 1;
        p_PreviousAffinity_8 = &PreviousAffinity_8;
      }
      KeSetSystemGroupAffinityThread(&Affinity_8, p_PreviousAffinity_8);
      v2 = KeNumberNodes;
      v12 = 0;
      if ( KeNumberNodes )
      {
        do
        {
          NodePagesForMdl = (struct _MDL *)MmAllocateNodePagesForMdlEx(0, v57, 0LL, 4096LL, 0, v12, 7);
          v14 = NodePagesForMdl;
          if ( NodePagesForMdl )
          {
            v16 = (char *)MmMapLockedPagesSpecifyCache(NodePagesForMdl, 0, MmNonCached, 0LL, 0, 0x40000020u);
            if ( v16 )
            {
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(v15) = 2;
                KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v15);
              }
              v18 = v16 + 4096;
              Affinity = __rdtsc();
              while ( v16 < v18 )
                v16 += 8;
              v19 = __rdtsc();
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
              __writecr8(CurrentIrql);
              *((_QWORD *)KiActualNodeCost + v12 + v8 * (unsigned __int16)KeNumberNodes) = v19 - Affinity;
            }
            MiFreePagesFromMdl((ULONG_PTR)v14, 0, 0, 0);
            ExFreePoolWithTag(v14, 0);
          }
          v2 = KeNumberNodes;
          ++v12;
        }
        while ( v12 < (unsigned __int16)KeNumberNodes );
        v4 = v56;
      }
      goto LABEL_41;
    }
LABEL_44:
    v20 = KeNumberNodes;
    v21 = 0;
    v57 = 0LL;
    v22 = 0;
    LODWORD(v56) = 0;
    for ( j = 0; v22 < v20; j = ++v22 )
    {
      v23 = (unsigned __int16 *)KeNodeBlock[v22];
      v24 = *v23;
      if ( (_WORD)v24 == v23[1] )
      {
        v25 = 0;
        v26 = v20 * v24;
        if ( v20 )
        {
          v27 = (unsigned __int16 *)KeNodeBlock[v22];
          do
          {
            v28 = (unsigned __int16 *)KeNodeBlock[v25];
            v29 = *v28;
            if ( (_WORD)v29 == v28[1] )
            {
              v30 = KiActualNodeCost;
              v31 = (unsigned int)(v29 + v26);
              if ( *((_QWORD *)KiActualNodeCost + v31) == -1LL )
              {
                v32 = *v27;
                v33 = v32 + v29 * (unsigned int)v20;
                v34 = *((_QWORD *)KiActualNodeCost + v33);
                if ( v34 == -1 )
                {
                  v35 = *((_DWORD *)KeNodeDistance + v29 + v32 * v20);
                  if ( v35 != 1 || (v35 = *((_DWORD *)KeNodeDistance + (int)v33), v35 != 1) )
                  {
                    if ( v21 )
                    {
                      v37 = v57;
                    }
                    else
                    {
                      HalNumaConversionFactor = KiGetHalNumaConversionFactor(&v56);
                      v21 = v56;
                      v37 = HalNumaConversionFactor;
                      v57 = HalNumaConversionFactor;
                    }
                    if ( v21 == 2 )
                    {
                      v38 = v37 * v35 / 0x64;
                    }
                    else if ( v21 == 3 )
                    {
                      v38 = 100 * (unsigned __int64)v35 / v37;
                    }
                    else
                    {
                      v38 = -1LL;
                    }
                    v30[v29 + v26] = v38;
                  }
                }
                else
                {
                  *((_QWORD *)KiActualNodeCost + v31) = v34;
                }
              }
            }
            v20 = KeNumberNodes;
            ++v25;
          }
          while ( v25 < (unsigned __int16)KeNumberNodes );
          v22 = j;
        }
      }
    }
    v39 = 0;
    if ( v20 )
    {
      v40 = v20;
      do
      {
        v41 = 0;
        v42 = v40 * *(unsigned __int16 *)(KeNodeBlock[v39] + 2);
        if ( v40 )
        {
          v43 = v62;
          v44 = KeNodeBlock;
          do
          {
            v45 = (unsigned __int16 *)*v44;
            *((_DWORD *)v43 - 2) = v41;
            if ( v45 )
            {
              v46 = *((_QWORD *)KiActualNodeCost + v42 + (unsigned int)*v45);
              *v43 = v46;
              if ( !v46 )
                *v43 = 1LL;
            }
            else
            {
              *v43 = -1LL;
            }
            ++v41;
            ++v44;
            v43 += 2;
          }
          while ( v41 < v40 );
        }
        v47 = (unsigned __int16)KeNumberNodes;
        v62[2 * v39] = 0LL;
        qsort(Base, v47, 0x10uLL, MiNodeCostSort);
        v48 = KeNumberNodes;
        v49 = 0;
        for ( k = (unsigned __int16)KeNumberNodes;
              v49 < (unsigned __int16)KeNumberNodes;
              k = (unsigned __int16)KeNumberNodes )
        {
          v51 = Base[8 * v49];
          v52 = v49 + v39 * k;
          ++v49;
          *((_WORD *)KiNodeGraph + v52) = v51;
          v48 = KeNumberNodes;
        }
        ++v39;
        v40 = v48;
      }
      while ( v39 < v48 );
    }
    goto LABEL_78;
  }
  return (char)Pool2;
}
