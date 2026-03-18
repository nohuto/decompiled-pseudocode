/*
 * XREFs of MiExtendSection @ 0x1409463BC
 * Callers:
 *     MmExtendSection @ 0x140946018 (MmExtendSection.c)
 * Callees:
 *     MiUpdateSystemProtoPtesTree @ 0x14026047C (MiUpdateSystemProtoPtesTree.c)
 *     MiIncrementSubsectionViewCount @ 0x1402624F0 (MiIncrementSubsectionViewCount.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiGetSubsectionCharges @ 0x14036DF10 (MiGetSubsectionCharges.c)
 *     MiDeleteSubsection @ 0x14036F8BC (MiDeleteSubsection.c)
 *     MiDeleteSubsectionPages @ 0x140370928 (MiDeleteSubsectionPages.c)
 *     MiDecrementSubsectionViewCount @ 0x140371EA0 (MiDecrementSubsectionViewCount.c)
 *     MiGetControlAreaPartition @ 0x1404378D0 (MiGetControlAreaPartition.c)
 *     Mi4KStartForSubsection @ 0x140463BDC (Mi4KStartForSubsection.c)
 *     MiAppendSubsectionChain @ 0x140474DD4 (MiAppendSubsectionChain.c)
 *     MiSetSubsectionBase @ 0x140491CC8 (MiSetSubsectionBase.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F9F3C (MiUpdateSubsectionCrossPartitionRefs.c)
 *     MiSubsectionNeedsExtents @ 0x140678F48 (MiSubsectionNeedsExtents.c)
 *     MiInitializePrototypePtes @ 0x140946874 (MiInitializePrototypePtes.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiExtendSection(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // r11
  __int128 *v6; // r14
  unsigned int v8; // r12d
  unsigned __int64 v9; // rdx
  __int128 v10; // xmm1
  char v11; // al
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  __int128 v17; // xmm0
  unsigned __int64 v18; // rsi
  int v19; // r13d
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  unsigned __int64 v23; // rdi
  unsigned int v24; // ebx
  __int64 Pool; // rax
  __int64 v26; // r9
  int v27; // r10d
  __int64 v28; // r11
  ULONG_PTR v29; // rbx
  int appended; // eax
  __int16 v31; // r8
  unsigned __int64 v32; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r14
  __int64 *v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // rbp
  unsigned __int64 v40; // r14
  int SubsectionCharges; // edi
  __int64 ControlAreaPartition; // rax
  ULONG_PTR v43; // rbp
  unsigned __int64 v44; // [rsp+20h] [rbp-108h]
  unsigned __int64 v45; // [rsp+28h] [rbp-100h]
  __int64 v46; // [rsp+30h] [rbp-F8h]
  __int128 v47; // [rsp+40h] [rbp-E8h] BYREF
  __int128 BugCheckParameter2; // [rsp+50h] [rbp-D8h]
  __int128 v49; // [rsp+60h] [rbp-C8h]
  __int128 v50; // [rsp+70h] [rbp-B8h]
  __int128 v51; // [rsp+80h] [rbp-A8h]
  __int128 v52; // [rsp+90h] [rbp-98h]
  __int128 v53; // [rsp+A0h] [rbp-88h]
  __int128 v54; // [rsp+B0h] [rbp-78h]
  __int128 v55; // [rsp+C0h] [rbp-68h]
  __int64 v56; // [rsp+D0h] [rbp-58h]
  __int64 v57; // [rsp+130h] [rbp+8h]
  __int64 v61; // [rsp+150h] [rbp+28h]

  v6 = &v47;
  v57 = *(_QWORD *)a1;
  v5 = *(_QWORD *)a1;
  v8 = a3;
  *a5 = 0LL;
  v9 = (8 * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v46 = *(_QWORD *)v5;
  v10 = *(_OWORD *)(a1 + 16);
  v11 = *(_BYTE *)(v5 + 62);
  v47 = *(_OWORD *)a1;
  v44 = v9;
  v12 = *(_OWORD *)(a1 + 32);
  BugCheckParameter2 = v10;
  v13 = *(_OWORD *)(a1 + 48);
  v14 = 0LL;
  v49 = v12;
  v15 = (-(__int64)((v11 & 0xC) != 0) & 0x100000) + 0x100000;
  v16 = *(_QWORD *)(a1 + 144);
  v17 = *(_OWORD *)(a1 + 64);
  v18 = 0LL;
  v19 = 0;
  v45 = v15;
  v50 = v13;
  v20 = *(_OWORD *)(a1 + 80);
  v51 = v17;
  v21 = *(_OWORD *)(a1 + 96);
  v52 = v20;
  v22 = *(_OWORD *)(a1 + 128);
  v53 = v21;
  v54 = *(_OWORD *)(a1 + 112);
  v55 = v22;
  v56 = v16;
  if ( v8 )
    DWORD1(v50) ^= (DWORD1(v50) ^ (DWORD1(v50) - v8)) & 0x3FFFFFFF;
  v23 = 0LL;
  while ( 1 )
  {
    if ( v9 - v14 > v15 )
      v24 = v15;
    else
      v24 = v9 - v14;
    Pool = MiAllocatePool(0x40uLL, 0x98uLL, 1683189069);
    if ( !Pool )
    {
      v29 = BugCheckParameter2;
LABEL_44:
      SubsectionCharges = -1073741670;
      goto LABEL_45;
    }
    *(_QWORD *)(Pool + 96) = Pool + 88;
    *(_QWORD *)(Pool + 88) = Pool + 88;
    *((_QWORD *)v6 + 2) = Pool;
    *(_QWORD *)Pool = v57;
    *(_DWORD *)(Pool + 44) = v24 >> 3;
    v14 += v24;
    if ( v14 > 8 * a4 )
      *(_DWORD *)(Pool + 52) ^= (*(_DWORD *)(Pool + 52) ^ ((v14 >> 3) - a4)) & 0x3FFFFFFF;
    *(_DWORD *)(Pool + 32) = 2 * (*(_BYTE *)(v46 + 14) & 0x1F);
    if ( v6 == &v47 )
    {
      *((_DWORD *)v6 + 10) = *((_DWORD *)v6 + 11);
      *((_DWORD *)v6 + 8) &= 0xFFFFFu;
      v23 = *((unsigned int *)v6 + 9) | ((unsigned __int64)(v6[2] & 0xFFC0) << 26);
    }
    v23 += *((unsigned int *)v6 + 10);
    Mi4KStartForSubsection(Pool, v23);
    v9 = v44;
    if ( v14 >= v44 )
      break;
    v15 = v45;
    v6 = (__int128 *)v26;
    *(_DWORD *)(v26 + 40) = v27;
  }
  *(_DWORD *)(v26 + 40) = (*a2 >> 12) - v23;
  *(_DWORD *)(v26 + 32) = *(_DWORD *)(v26 + 32) & 0xFFFFF | (*(unsigned __int16 *)a2 << 20);
  if ( v8 && (*(_BYTE *)(v28 + 62) & 0xC) != 0 && *(_QWORD *)(a1 + 8) )
  {
    MiSubsectionNeedsExtents((_DWORD *)a1);
    *a5 = a1;
  }
  v29 = BugCheckParameter2;
LABEL_14:
  appended = MiAppendSubsectionChain(a1, (__int64)&v47, v19);
  if ( !appended )
  {
    v31 = *(_WORD *)(v46 + 12);
    v32 = (*(unsigned int *)(v46 + 8) | ((unsigned __int64)(v31 & 0x3FF) << 32)) + a4 + v8;
    *(_DWORD *)(v46 + 8) += a4 + v8;
    *(_WORD *)(v46 + 12) = v31 ^ (v31 ^ WORD2(v32)) & 0x3FF;
    return 0LL;
  }
  if ( (appended & 1) != 0 )
  {
    v34 = v44;
    v19 |= 1u;
    v35 = 0LL;
    v36 = (__int64 *)v29;
    while ( 1 )
    {
      v37 = v34 - v35;
      if ( v37 > v45 )
        LODWORD(v37) = v45;
      v35 += (unsigned int)v37;
      v38 = MiAllocatePool(0x112uLL, (unsigned int)v37, 1951624525);
      if ( !v38 )
        goto LABEL_44;
      MiInitializePrototypePtes(v38);
      if ( (*(_BYTE *)(v57 + 62) & 0xC) != 0 )
      {
        if ( !*a5 )
          *a5 = v36;
      }
      else if ( (v19 & 2) != 0 )
      {
        MiDecrementSubsectionViewCount(v36, 0);
      }
      MiSetSubsectionBase(v36, v38, 3u, 0LL);
      MiUpdateSystemProtoPtesTree((__int64)(v36 + 15), 1);
      v34 = v44;
      v36 = (__int64 *)v36[2];
      if ( v35 >= v44 )
      {
        v8 = a3;
        goto LABEL_14;
      }
    }
  }
  v19 |= 2u;
  v39 = v29;
  while ( 1 )
  {
    v40 = *(_DWORD *)(v39 + 44) - (*(_DWORD *)(v39 + 52) & 0x3FFFFFFFu);
    SubsectionCharges = MiGetSubsectionCharges(v39, v40);
    if ( SubsectionCharges < 0 )
      break;
    if ( (int)MiIncrementSubsectionViewCount((__int64 *)v39, 56) <= 1 )
    {
      v18 += v40;
      break;
    }
    if ( (*(_DWORD *)(a1 + 48) & 0x3FFFFFFF) != 0 )
      MiUpdateSubsectionCrossPartitionRefs((_DWORD *)v39, *(_DWORD *)(a1 + 48) & 0x3FFFFFFF);
    v39 = *(_QWORD *)(v39 + 16);
    if ( !v39 )
    {
      if ( !v8 )
        goto LABEL_14;
      SubsectionCharges = MiGetSubsectionCharges(a1, v8);
      if ( SubsectionCharges >= 0 )
      {
        v18 += v8;
        goto LABEL_14;
      }
      break;
    }
  }
LABEL_45:
  ControlAreaPartition = MiGetControlAreaPartition(v57);
  v61 = ControlAreaPartition;
  if ( v18 )
  {
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, 1, v18);
    v18 = 0LL;
  }
  if ( v29 )
  {
    do
    {
      v43 = *(_QWORD *)(v29 + 16);
      if ( (*(_BYTE *)(v57 + 62) & 0xC) != 0 )
      {
        if ( *(_QWORD *)(v29 + 8) )
          MiDeleteSubsectionPages(v29);
      }
      else
      {
        if ( (v19 & 2) != 0 && (*(_DWORD *)(v29 + 48) & 0x3FFFFFFF) != 0 )
          v18 += MiDecrementSubsectionViewCount((__int64 *)v29, 24);
        if ( *(_QWORD *)(v29 + 8) )
        {
          MiUpdateSystemProtoPtesTree(v29 + 120, 0);
          ExFreePoolWithTag(*(PVOID *)(v29 + 8), 0);
        }
      }
      MiDeleteSubsection((void *)v29);
      v29 = v43;
    }
    while ( v43 );
    if ( v18 )
      MiReturnCrossPartitionSectionCharges(v61, 1, v18);
  }
  return (unsigned int)SubsectionCharges;
}
