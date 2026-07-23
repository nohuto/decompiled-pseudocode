/*
 * XREFs of MiAllocatePartitionPhysicalPages @ 0x1407FBE14
 * Callers:
 *     MiReleasePartitionHugeIoSpace @ 0x1406729CC (MiReleasePartitionHugeIoSpace.c)
 *     MmManagePartitionMoveMemory @ 0x1407FD634 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     MiFreeMdlPageRun @ 0x1402189BC (MiFreeMdlPageRun.c)
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     MiInitializeDemandCoalesceContext @ 0x14026AE60 (MiInitializeDemandCoalesceContext.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiZeroLargePage @ 0x140312ABC (MiZeroLargePage.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiAllocatePagesForMdl @ 0x14039469C (MiAllocatePagesForMdl.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x14039895C (MiReleaseNonPagedResourcesNotExposed.c)
 *     MiGetNextPageColor @ 0x1404317F0 (MiGetNextPageColor.c)
 *     MiFindLargeNodePage @ 0x1404CB09C (MiFindLargeNodePage.c)
 *     MiInitializeFoundLargeNodePage @ 0x1404F5F7C (MiInitializeFoundLargeNodePage.c)
 *     MiGetHugeBadRangeFromNode @ 0x140671158 (MiGetHugeBadRangeFromNode.c)
 *     MiGetHugeRange @ 0x140671294 (MiGetHugeRange.c)
 *     MiHugeRangeIsZeroed @ 0x140671D3C (MiHugeRangeIsZeroed.c)
 *     MiHugePageOperation @ 0x140686CF0 (MiHugePageOperation.c)
 *     MiAddMdlToPartitionTree @ 0x14068A980 (MiAddMdlToPartitionTree.c)
 *     MiAddRangeToPartitionTree @ 0x14068AA6C (MiAddRangeToPartitionTree.c)
 *     MiFreePartitionTree @ 0x14068B6B0 (MiFreePartitionTree.c)
 *     MiInsertHugeRangeInPartition @ 0x14068B788 (MiInsertHugeRangeInPartition.c)
 *     MiInsertPartitionPages @ 0x14068BA00 (MiInsertPartitionPages.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1407FCF90 (MiUpdatePartitionLargePfnBitMap.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocatePartitionPhysicalPages(ULONG *a1, __int64 a2, unsigned __int64 a3, int a4, __int16 a5)
{
  __int16 v5; // bx
  ULONG *v6; // r13
  unsigned __int64 v8; // r10
  int v9; // ecx
  int v10; // eax
  int v11; // r15d
  int v13; // r14d
  unsigned int v14; // edi
  unsigned int *v15; // r12
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  int v18; // r9d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  BOOL v22; // ecx
  int v23; // eax
  int HugeBadRangeFromNode; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  unsigned int NextPageColor; // eax
  unsigned __int64 v28; // r15
  unsigned __int8 IsZeroed; // cl
  unsigned int v30; // r8d
  __int64 j; // rax
  __int64 v32; // rbx
  unsigned int PfnPageSizeIndex; // eax
  __int64 v34; // rbx
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // r15
  int v37; // edi
  __int64 v38; // rdx
  int updated; // ebx
  unsigned __int64 v40; // rax
  unsigned int v41; // edi
  __int64 v42; // rbx
  __int64 v43; // r10
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned int *PagesForMdl; // rax
  unsigned int *v47; // r15
  int v48; // eax
  unsigned __int16 *v49; // rdi
  char v50; // [rsp+50h] [rbp-B0h]
  int i; // [rsp+50h] [rbp-B0h]
  unsigned int v52; // [rsp+50h] [rbp-B0h]
  unsigned int v53; // [rsp+58h] [rbp-A8h]
  unsigned int v54; // [rsp+58h] [rbp-A8h]
  int v55; // [rsp+5Ch] [rbp-A4h]
  unsigned __int64 v56; // [rsp+60h] [rbp-A0h]
  __int64 v58; // [rsp+70h] [rbp-90h]
  __int64 v59; // [rsp+78h] [rbp-88h]
  int v60; // [rsp+78h] [rbp-88h]
  __int64 v61; // [rsp+88h] [rbp-78h]
  unsigned __int64 v62; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v63; // [rsp+98h] [rbp-68h]
  int v64; // [rsp+A0h] [rbp-60h]
  int v65; // [rsp+A4h] [rbp-5Ch]
  int v66; // [rsp+A8h] [rbp-58h]
  __int64 v67; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v68; // [rsp+B8h] [rbp-48h]
  _OWORD v69[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v70[2]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v71[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v72; // [rsp+120h] [rbp+20h]
  int v73; // [rsp+128h] [rbp+28h]

  v5 = a5;
  v6 = &MiSystemPartition;
  v68 = (unsigned __int16 *)a2;
  v62 = 0LL;
  v8 = a3;
  v72 = 0LL;
  v73 = 0;
  if ( a1 )
    v6 = a1;
  v58 = 0LL;
  v9 = 0x100000;
  v66 = a5 & 0x400;
  memset(v69, 0, sizeof(v69));
  memset(v71, 0, sizeof(v71));
  if ( (a5 & 0x400) != 0 )
  {
    v10 = 1048577;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 4) & 0x20) == 0 )
      v9 = 1048577;
    v10 = v9;
  }
  v11 = v10 | 0x8000;
  if ( (a5 & 4) == 0 )
    v11 = v10;
  v56 = 0LL;
  v55 = v11;
  if ( (a5 & 0x200) == 0 )
  {
    if ( (int)MiAcquireNonPagedResources(v6, a3, 0LL, 8LL) < 0 )
      return 3221225626LL;
    v8 = a3;
  }
  v13 = 1;
  v14 = a4;
  v65 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
    v15 = (unsigned int *)(qword_140E2DC10 + 4LL * a4 * (unsigned int)(unsigned __int16)KeNumberNodes);
    v67 = (__int64)&v15[(unsigned __int16)KeNumberNodes];
  }
  else
  {
    v15 = 0LL;
    v67 = 4LL;
  }
  v61 = 0x40000LL;
  if ( v8 < 0x40000 )
    v16 = -(__int64)(v8 < 0x200) & 0xFFFFFFFFFFFFFE10uLL;
  else
    v16 = (a5 & 0x180) != 0 ? 0x3FE00 : 0;
  v17 = v16 + 512;
  v18 = 0;
  v19 = v8 / v17;
  if ( v8 / v17 <= 1 )
    v19 = 1LL;
  v64 = a5 & 0xA2;
  LOBYTE(v18) = v64 != 0;
  MiInitializeDemandCoalesceContext(v71, v17, v19, v18);
  v20 = a3;
  while ( 1 )
  {
    v21 = v20 - v56;
    v63 = v20 - v56;
    if ( v20 - v56 < 0x200 )
    {
LABEL_53:
      v37 = a5 & 0x200;
      goto LABEL_54;
    }
    LOBYTE(v22) = 1;
    v50 = 1;
    if ( (v5 & 0x60) == 0 )
    {
      v22 = v21 < 0x40000;
      v50 = v22;
    }
    if ( (a5 & 0x200) != 0 )
    {
      v23 = v5 & 0x800;
      for ( i = v23; ; v23 = i )
      {
        if ( v23 )
        {
          HugeBadRangeFromNode = MiGetHugeBadRangeFromNode((unsigned __int16 *)v6, v14);
        }
        else
        {
          v70[1] = 0LL;
          v26 = *((_QWORD *)v6 + 2) + 57216LL * v14;
          MiInitializePageColorBase(0LL, 0, v14 + 1, (__int64)v70);
          v70[0] = v26 + 15216;
          NextPageColor = MiGetNextPageColor((__int64)v70);
          HugeBadRangeFromNode = MiGetHugeRange((__int64)v6, NextPageColor, (v11 & 1) != 0 ? 4096 : 4144);
        }
        if ( (HugeBadRangeFromNode & 0x3FFFFF) != 0 )
          break;
        if ( ++v15 == (unsigned int *)v67 )
          goto LABEL_52;
        v14 = *v15;
        LOBYTE(v11) = v55;
      }
      v28 = (unsigned __int64)(HugeBadRangeFromNode & 0x3FFFFF) << 18;
      IsZeroed = MiHugeRangeIsZeroed(v25, HugeBadRangeFromNode);
      v53 = IsZeroed;
    }
    else
    {
      v54 = (v5 & 0x580) == 0;
      for ( j = MiFindLargeNodePage((unsigned __int64)v6, v14, v22, v54, v11, 1, (__int64)v71);
            ;
            j = MiFindLargeNodePage((unsigned __int64)v6, *v15, v50, v54, v11, 1, (__int64)v71) )
      {
        v59 = j;
        v32 = j;
        if ( j )
          break;
        if ( ++v15 == (unsigned int *)v67 )
        {
LABEL_52:
          v21 = v63;
          goto LABEL_53;
        }
        v14 = *v15;
      }
      v28 = 0xAAAAAAAAAAAAAAABuLL * ((j + 0x220000000000LL) >> 4);
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(j);
      v34 = *(_QWORD *)(v32 + 16) & 0x3E0LL;
      v52 = PfnPageSizeIndex;
      MiInitializeFoundLargeNodePage(v59, v55, 1);
      IsZeroed = (unsigned int)v34 == 0LL;
      v53 = IsZeroed;
      if ( (_DWORD)v34 )
      {
        IsZeroed = 0;
        v53 = 0;
        if ( (v55 & 1) == 0 )
        {
          if ( v52 )
            MiZeroLargePage(0LL, v59, v52, 1, 0);
          else
            MiHugePageOperation((__int64)v6, v28);
          IsZeroed = 1;
          v53 = 1;
        }
      }
      v30 = v52;
    }
    v35 = MiPageSizes[v30];
    if ( !(unsigned int)MiAddRangeToPartitionTree(&v62, v28, v35, IsZeroed) )
      break;
    v20 = a3;
    v36 = v35 + v56;
    v56 = v36;
    if ( v36 == a3 )
      goto LABEL_62;
    v5 = a5;
    LOWORD(v11) = v55;
  }
  v37 = a5 & 0x200;
  if ( (a5 & 0x200) == 0 )
  {
    v38 = MiFreeMdlPageRun(v28, v35, v53, 1, 0LL);
    v58 = v38;
    v21 = v63;
    goto LABEL_55;
  }
  MiInsertHugeRangeInPartition(v28, v53);
  v21 = v63;
LABEL_54:
  v38 = 0LL;
LABEL_55:
  v36 = v56;
  v20 = a3;
  if ( v56 != a3 )
  {
    if ( v37 )
    {
      updated = -1073741801;
LABEL_83:
      MiFreePartitionTree((unsigned __int16 *)v6, &v62, 0x801u, 1);
      return (unsigned int)updated;
    }
    v40 = v21 - v38;
    if ( v40 )
    {
      MiReleaseNonPagedResourcesNotExposed((__int64)v6, v40);
      v20 = a3;
      v38 = v58;
    }
    if ( v64 || v38 )
    {
LABEL_80:
      updated = -1073741670;
      goto LABEL_83;
    }
  }
LABEL_62:
  v41 = v55 & 1 | (2 * (v65 ^ 1) + 0x400000) | 0x10;
  v42 = 0LL;
  v43 = -(__int64)((a5 & 4) != 0) & 0x100000000LL;
  v60 = v43;
  if ( (a5 & 0x10) != 0 )
  {
    v41 = v55 & 1 | (2 * (v65 ^ 1) + 0x400000) | 0x50;
    v42 = 0x200000LL;
    v44 = 0x40000LL;
  }
  else
  {
    if ( (a5 & 0x40) != 0 )
    {
      v41 = v55 & 1 | (2 * (v65 ^ 1) + 0x400000) | 0x50;
      v44 = 512LL;
      v42 = 0x200000LL;
    }
    else if ( (a5 & 0x100) != 0 )
    {
      v41 = v55 & 1 | (2 * (v65 ^ 1) + 0x400000) | 0x50;
      v44 = 0x40000LL;
      v42 = 0x40000000LL;
    }
    else
    {
      v44 = 0xFFFFFLL;
    }
    v61 = v44;
  }
  while ( v36 != v20 )
  {
    v45 = v20 - v36;
    if ( v20 - v36 > v44 )
      v45 = v44;
    PagesForMdl = (unsigned int *)MiAllocatePagesForMdl(
                                    (int)v6,
                                    v43,
                                    -1,
                                    v42,
                                    v45 << 12,
                                    1,
                                    a4,
                                    v41,
                                    (__int64)KeGetCurrentThread()->ApcState.Process,
                                    0LL);
    v47 = PagesForMdl;
    if ( PagesForMdl )
    {
      if ( !(unsigned int)MiAddMdlToPartitionTree((__int64)&v62, (__int64)PagesForMdl, v41) )
      {
        MiFreePagesFromMdl((ULONG_PTR)v47, 0, 3, 0);
        ExFreePoolWithTag(v47, 0);
        goto LABEL_80;
      }
      v56 += (unsigned __int64)v47[10] >> 12;
      ExFreePoolWithTag(v47, 0);
    }
    else
    {
      if ( (v41 & 0x40) == 0 )
        goto LABEL_80;
      v41 = v41 & 0xFFFFFF9F | 0x20;
    }
    v36 = v56;
    v20 = a3;
    v44 = v61;
    LODWORD(v43) = v60;
  }
  v48 = a5 & 0x200;
  v49 = v68;
  if ( (a5 & 0x200) == 0 )
  {
    updated = MiUpdatePartitionLargePfnBitMap(v68, &v62);
    if ( updated < 0 )
      goto LABEL_83;
    v48 = 0;
  }
  *(_QWORD *)&v69[0] = &v62;
  if ( v66 )
    v13 = 33;
  DWORD2(v69[1]) = v13;
  *(_OWORD *)((char *)v69 + 8) = 0LL;
  if ( v6 != (ULONG *)v49 )
  {
    v13 |= 2u;
    DWORD2(v69[1]) = v13;
  }
  if ( (a5 & 8) != 0 )
  {
    v13 |= 4u;
    DWORD2(v69[1]) = v13;
  }
  if ( v48 )
    DWORD2(v69[1]) = v13 | 0x10;
  if ( (v6[1] & 0x80u) != 0 )
    DWORD2(v69[1]) |= 0x200u;
  return MiInsertPartitionPages((unsigned __int16 *)v6, v49, (__int64)v69, v36);
}
