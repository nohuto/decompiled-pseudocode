/*
 * XREFs of MiAddPhysicalMemoryChunks @ 0x1407E8F14
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14068A054 (MiActOnPartitionNodePages.c)
 *     MmAddPhysicalMemory @ 0x1407EAAA0 (MmAddPhysicalMemory.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140C538F4 (MiHotAddBootDeferredDescriptorsDiscardable.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiGetClosestImplicitNode @ 0x140391F4C (MiGetClosestImplicitNode.c)
 *     MiRestrictRangeToNode @ 0x1403FC38C (MiRestrictRangeToNode.c)
 *     MiGetAvailablePagesExcludeSlists @ 0x140473AA8 (MiGetAvailablePagesExcludeSlists.c)
 *     MiNodeAvailablePages @ 0x14047E7E0 (MiNodeAvailablePages.c)
 *     MiGetLargestPageIndex @ 0x14048F5E0 (MiGetLargestPageIndex.c)
 *     IoUpdateDumpPhysicalRanges @ 0x14058F55C (IoUpdateDumpPhysicalRanges.c)
 *     MiNodeLargeFreeZeroPages2 @ 0x140685534 (MiNodeLargeFreeZeroPages2.c)
 *     MiAddPhysicalMemory @ 0x1407E8C3C (MiAddPhysicalMemory.c)
 */

__int64 __fastcall MiAddPhysicalMemoryChunks(
        ULONG *a1,
        __int64 *a2,
        unsigned __int64 *a3,
        ULONG_PTR a4,
        int a5,
        int a6)
{
  int v6; // r14d
  unsigned __int16 *v7; // r10
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  __int64 result; // rax
  int v14; // esi
  int v15; // r12d
  int v16; // r13d
  int v17; // r15d
  ULONG_PTR v18; // rsi
  int v19; // eax
  int ClosestImplicitNode; // eax
  __int64 v21; // r11
  __int64 v22; // r10
  int v23; // r8d
  unsigned __int64 v24; // rcx
  ULONG_PTR v25; // rcx
  ULONG_PTR v26; // r9
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r8
  __int64 v29; // r12
  __int64 i; // r13
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  ULONG_PTR v33; // r8
  __int64 AvailablePagesExcludeSlists; // rax
  unsigned __int64 v35; // rax
  ULONG_PTR v36; // rax
  __int64 v37; // r8
  unsigned __int64 v38; // rdx
  int v39; // ecx
  __int16 v40; // ax
  int v41; // ecx
  unsigned int v42; // eax
  int v43; // eax
  unsigned __int64 BugCheckParameter2; // [rsp+38h] [rbp-59h]
  unsigned __int64 v45; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v46; // [rsp+48h] [rbp-49h]
  unsigned __int64 v47; // [rsp+50h] [rbp-41h]
  __int64 v48[2]; // [rsp+58h] [rbp-39h] BYREF
  unsigned __int64 v49; // [rsp+68h] [rbp-29h]
  ULONG_PTR v50; // [rsp+78h] [rbp-19h]
  __int64 v51; // [rsp+80h] [rbp-11h]
  int v53; // [rsp+F0h] [rbp+5Fh]

  v6 = a5;
  v7 = (unsigned __int16 *)a1;
  v53 = 12288;
  v47 = 512LL;
  v46 = 1;
  if ( a4 )
  {
    v9 = 0x40000LL;
    v6 = a5 | 0x200000;
    if ( a4 != 0x40000 )
      v9 = 512LL;
    v46 = a4 != 0x40000;
    v47 = v9;
  }
  v10 = 0LL;
  v11 = *a3;
  v48[0] = *a2;
  v45 = v11;
  if ( (v6 & 0x10000) != 0 )
  {
    v6 |= 0x206000u;
    v12 = v11 & 0xFFFFFFFFFFFFF000uLL;
    while ( 1 )
    {
      v45 = v12;
      result = MiAddPhysicalMemory(v7, v48, &v45, v6, 0LL);
      v14 = result;
      if ( (int)result >= 0 )
        break;
      if ( (v6 & 0x4000) == 0 )
      {
        *a3 = 0LL;
        return result;
      }
      v7 = (unsigned __int16 *)a1;
      v6 &= ~0x4000u;
    }
    *a3 = v45;
    goto LABEL_115;
  }
  v49 = 0LL;
  v15 = &MiSystemPartition != a1 ? 2 : 0;
  v16 = 0;
  v17 = v15;
  while ( 1 )
  {
    BugCheckParameter2 = (unsigned __int64)v48[0] >> 12;
    v18 = MiRestrictRangeToNode((unsigned __int64)v48[0] >> 12, v45 >> 12);
    if ( v18 < a4 )
      break;
    if ( BugCheckParameter2 < 0x100000 && v18 + BugCheckParameter2 > 0x100000 )
      v18 = 0x100000 - BugCheckParameter2;
    v19 = MiPageToNode(BugCheckParameter2);
    ClosestImplicitNode = MiGetClosestImplicitNode(v19 + 1);
    v22 = qword_140E38D50 + 57216LL * (unsigned int)(ClosestImplicitNode - v21);
    v51 = v22;
    if ( v16 >= 0 )
    {
      v17 = 0;
      v23 = v21;
      if ( a1 != &MiSystemPartition )
        v17 = v15;
      while ( 1 )
      {
        v24 = MiPageSizes[v23];
        if ( BugCheckParameter2 % v24 )
          break;
        if ( v18 < v24 )
          goto LABEL_26;
        v18 &= ~(v24 - 1);
        if ( !v23 )
          goto LABEL_26;
        --v23;
      }
      v25 = v24 - BugCheckParameter2 % v24;
      if ( v18 > v25 )
        v18 = v25;
LABEL_26:
      v26 = v47;
      goto LABEL_46;
    }
    v27 = v49;
    v26 = v47;
    v18 = v49;
    if ( v49 > v47 )
    {
      if ( a1 == &MiSystemPartition )
      {
        v18 = v47;
      }
      else
      {
        v18 = (v49 >> 1) & ~(v47 - 1);
        v27 = v49;
        if ( v18 < v47 )
          v18 = v47;
      }
    }
    if ( !v15 )
    {
      v28 = BugCheckParameter2;
      if ( v27 <= v47 )
        v17 = v21 + (BugCheckParameter2 < 0x100000);
      else
        v17 = 0;
      goto LABEL_47;
    }
    if ( v15 == (_DWORD)v21 )
    {
      v17 = 2 - (v47 < v27);
    }
    else
    {
      switch ( v15 )
      {
        case 2:
          v28 = BugCheckParameter2;
          if ( a1 == &MiSystemPartition )
            v17 = 3;
          else
            v17 = v47 < v27 ? 2 : 4;
          goto LABEL_47;
        case 3:
          goto LABEL_45;
        case 4:
          if ( v27 <= v47 )
            goto LABEL_112;
LABEL_45:
          v17 = 4;
          break;
      }
    }
LABEL_46:
    v28 = BugCheckParameter2;
LABEL_47:
    v29 = v21;
    for ( i = 0LL; (unsigned int)i <= (unsigned int)v21; i = (unsigned int)(v21 + i) )
    {
      v31 = MiPageSizes[i];
      if ( !(v28 % v31) && !(v18 % v31) )
      {
        v29 = MiPageSizes[i];
        break;
      }
    }
    v6 &= 0xFFFF4FFF;
    if ( v18 >= v26 )
    {
      v32 = 0LL;
      if ( v17 || (v32 = MiNodeLargeFreeZeroPages2(v22, 0)) != 0 )
      {
        v33 = v18;
        if ( v17 && v17 != 3 )
        {
          v50 = v18;
          if ( v17 == 1 )
            goto LABEL_63;
          v33 = v18;
          if ( a1 != &MiSystemPartition )
          {
            if ( v17 == 2 )
            {
              v32 = MiNodeAvailablePages(v51);
              if ( v32 >= 6 )
                goto LABEL_74;
              v35 = 0LL;
              v16 = 0;
              v15 = 4;
              goto LABEL_101;
            }
            AvailablePagesExcludeSlists = MiGetAvailablePagesExcludeSlists((__int64)&MiSystemPartition);
            v33 = v18;
            goto LABEL_69;
          }
        }
      }
      else
      {
        if ( v18 + BugCheckParameter2 > 0x100000 && v18 > v47 )
        {
          LODWORD(i) = v46;
          v18 = v47;
          v29 = v47;
        }
        v17 = 1;
        v50 = v18;
LABEL_63:
        AvailablePagesExcludeSlists = MiNodeLargeFreeZeroPages2(v51, 1);
        v33 = v50;
LABEL_69:
        v32 = AvailablePagesExcludeSlists;
      }
      if ( v32 )
      {
LABEL_74:
        while ( v32 < (unsigned __int64)(48 * v29) >> 12 )
        {
          if ( (unsigned int)i >= v46 )
          {
            v37 = 1LL;
            goto LABEL_81;
          }
          i = (unsigned int)(i + 1);
          v29 = MiPageSizes[i];
        }
        v37 = v29;
        if ( v29 != 1 && a1 == &MiSystemPartition )
          v6 |= 0x8000u;
LABEL_81:
        v38 = ~(v37 - 1) & ((v32 << 12) / 0x30);
        if ( a4 )
        {
          v38 &= ~(a4 - 1);
          if ( v38 < a4 )
            v38 = a4;
        }
        if ( v18 > v38 )
          v18 = v38;
      }
      else
      {
        v36 = v47;
        if ( v18 == v47 )
          v36 = v33;
        v18 = v36;
      }
    }
    if ( (v6 & 0x80u) != 0 || (BugCheckParameter2 & 0x1FF) != 0 || (v18 & 0x1FF) != 0 )
      goto LABEL_97;
    if ( MiGetLargestPageIndex() || (*(_QWORD *)&v39 & 0x3FFFFLL) != 0 )
    {
      v40 = v53;
    }
    else
    {
      v40 = v53;
      if ( (v18 & 0x3FFFF) == 0 )
      {
        v41 = 0x2000;
        if ( (v53 & 0x2000) != 0 )
        {
LABEL_96:
          v6 |= v41;
          goto LABEL_97;
        }
      }
    }
    v41 = 4096;
    if ( (v40 & 0x1000) != 0 )
      goto LABEL_96;
LABEL_97:
    v49 = v18;
    v42 = v6 & 0xFFFFBFFF;
    v6 |= 0x4000u;
    if ( v17 > 2 )
      v6 = v42;
    v45 = v18 << 12;
    v43 = MiAddPhysicalMemory((unsigned __int16 *)a1, v48, &v45, v6, 0LL);
    v16 = v43;
    if ( v43 < 0 )
    {
      if ( v43 != -1073741670 && v43 != -1073741523 )
      {
        if ( v43 != -1073741637 )
          goto LABEL_112;
        if ( (v6 & 0x2000) != 0 )
        {
          v53 &= ~0x2000u;
        }
        else
        {
          if ( (v6 & 0x1000) == 0 )
            goto LABEL_112;
          v53 &= ~0x1000u;
        }
      }
      v15 = v17;
    }
    else
    {
      v35 = v45;
      v15 = v17;
LABEL_101:
      v48[0] += v35;
      v10 += v35;
      v45 = v11 - v10;
      if ( v11 == v10 )
        goto LABEL_112;
    }
  }
  v16 = -1073741800;
LABEL_112:
  v14 = 0;
  if ( !v10 )
    v14 = v16;
  *a3 = v10;
LABEL_115:
  if ( !a6 && v14 >= 0 && (v6 & 2) == 0 )
    IoUpdateDumpPhysicalRanges();
  return (unsigned int)v14;
}
