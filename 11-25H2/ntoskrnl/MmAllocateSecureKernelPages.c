/*
 * XREFs of MmAllocateSecureKernelPages @ 0x14067D234
 * Callers:
 *     PspIumAllocatePhysicalPages @ 0x1405DA234 (PspIumAllocatePhysicalPages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x140227668 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiGetSlabPage @ 0x14022BC70 (MiGetSlabPage.c)
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiReplenishSlabAllocator @ 0x1403769E8 (MiReplenishSlabAllocator.c)
 *     MiUpdatePageFileHighInPte @ 0x14037C850 (MiUpdatePageFileHighInPte.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140415540 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiPartitionObjectToPartition @ 0x1404156EC (MiPartitionObjectToPartition.c)
 *     MiInitializeMdlPfn @ 0x140416AE0 (MiInitializeMdlPfn.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

ULONG *__fastcall MmAllocateSecureKernelPages(
        ULONG **BugCheckParameter2,
        unsigned __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v7; // r12
  unsigned __int32 v8; // eax
  unsigned int v9; // edi
  ULONG *result; // rax
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 Pool; // rax
  __int64 *PartitionNodePagesForMdl; // r15
  unsigned int v15; // ecx
  __int64 *v16; // rax
  __int64 *v17; // r14
  __int64 v18; // rax
  __int64 SlabPage; // rax
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // r12
  int IsPfnFromChargedSlabAllocation; // esi
  bool v25; // zf
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // r14
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rax
  char v31[4]; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v32; // [rsp+4Ch] [rbp-3Dh]
  __int64 i; // [rsp+50h] [rbp-39h]
  int v34; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v35; // [rsp+5Ch] [rbp-2Dh]
  __int64 v36; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-21h]
  __int64 CurrentIrql; // [rsp+70h] [rbp-19h]
  unsigned __int64 v39; // [rsp+78h] [rbp-11h]
  unsigned __int64 v40; // [rsp+80h] [rbp-9h]
  __int128 v41; // [rsp+88h] [rbp-1h] BYREF
  unsigned __int8 v45; // [rsp+100h] [rbp+77h]

  v31[0] = 0;
  v5 = a2;
  v36 = 0LL;
  *a5 = 0;
  v41 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v37 = 0LL;
  v7 = 0LL;
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v41);
  v8 = _InterlockedExchangeAdd((volatile signed __int32 *)v41, 1u);
  v9 = DWORD2(v41) ^ (unsigned __int8)(BYTE8(v41) ^ (v8 % dword_140E2D980[(*((_QWORD *)&v41 + 1) >> 16) & 3LL]));
  result = MiPartitionObjectToPartition(BugCheckParameter2, 0, v31);
  v11 = (__int64)result;
  if ( !result )
    return result;
  if ( (result[1] & 8) == 0 || (int)MiAcquireNonPagedResources(result, v5, 0LL, 2LL) < 0 )
    goto LABEL_37;
  v12 = 8 * v5;
  v39 = v5;
  i = 8 * v5;
  v7 = v5;
  Pool = MiAllocatePool(0x40uLL, 8 * v5 + 48, 1768189261);
  PartitionNodePagesForMdl = (__int64 *)Pool;
  if ( !Pool )
  {
LABEL_33:
    if ( v7 )
    {
      MiReleaseNonPagedResources(v11, v7);
      v7 = 0LL;
    }
    if ( PartitionNodePagesForMdl )
      ExFreePoolWithTag(PartitionNodePagesForMdl, 0);
LABEL_37:
    PartitionNodePagesForMdl = (__int64 *)MmAllocatePartitionNodePagesForMdlEx(
                                            0,
                                            -1,
                                            0LL,
                                            v5 << 12,
                                            1u,
                                            (v9 >> 9) & 0x3F,
                                            513,
                                            (ULONG_PTR)BugCheckParameter2);
    goto LABEL_38;
  }
  v15 = 22;
  v32 = 64;
  if ( (_BYTE)CurrentIrql != 2 )
    v15 = 6;
  v16 = (__int64 *)(Pool + 48);
  v35 = v15;
  v17 = v16;
  v40 = (unsigned __int64)v16 + v12;
  if ( v16 < (__int64 *)((char *)v16 + v12) )
  {
    v18 = a3;
    do
    {
      SlabPage = MiGetSlabPage(v11, MmSlabTypeToMiSlabType[v18], v9, v15, &v36, 0);
      *v17 = SlabPage;
      if ( SlabPage == -1 )
      {
        if ( !v36 )
          break;
        v21 = v12 >> 3;
        for ( i = v12 >> 3; !(unsigned int)MiReplenishSlabAllocator(v36, v21, v32, v20); v21 = i )
        {
          v16 = PartitionNodePagesForMdl + 6;
          if ( v17 != PartitionNodePagesForMdl + 6 )
            goto LABEL_30;
          if ( (v32 & 0x40) == 0 )
            break;
          v32 &= ~0x40u;
        }
        --v17;
        v22 = v12 + 8;
      }
      else
      {
        v23 = 48 * SlabPage - 0x220000000000LL;
        if ( (_BYTE)CurrentIrql == 2 )
        {
          v45 = 17;
          v34 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v34);
            while ( *(__int64 *)(v23 + 24) < 0 );
          }
        }
        else
        {
          v45 = MiLockPageInline(v23);
        }
        *(_QWORD *)v23 = 0LL;
        *(_QWORD *)(v23 + 16) = CLFS_LSN_NULL_EXT;
        MiInitializeMdlPfn(v23, 512);
        IsPfnFromChargedSlabAllocation = MiIsPfnFromChargedSlabAllocation(v23);
        *(_QWORD *)(v23 + 16) = MiUpdatePageFileHighInPte(
                                  *(_QWORD *)(v23 + 16),
                                  IsPfnFromChargedSlabAllocation != 0 ? 7LL : 3LL);
        MiUnlockPage(v23, v45);
        v25 = IsPfnFromChargedSlabAllocation == 0;
        v22 = i;
        v26 = v39 - 1;
        if ( !v25 )
          v26 = v39;
        v7 = v26;
        v39 = v26;
        v27 = v37 + 1;
        if ( !v25 )
          v27 = v37;
        v37 = v27;
      }
      v15 = v35;
      v12 = v22 - 8;
      v18 = a3;
      ++v17;
      i = v12;
    }
    while ( (unsigned __int64)v17 < v40 );
    v16 = PartitionNodePagesForMdl + 6;
  }
LABEL_30:
  v28 = v17 - v16;
  if ( !v28 )
  {
    v5 = a2;
    goto LABEL_33;
  }
  v29 = v28 << 12;
  *PartitionNodePagesForMdl = 0LL;
  PartitionNodePagesForMdl[4] = 0LL;
  *((_WORD *)PartitionNodePagesForMdl + 4) = 8 * ((v29 >> 12) + 6);
  v30 = v37;
  PartitionNodePagesForMdl[5] = (unsigned int)v29;
  *((_WORD *)PartitionNodePagesForMdl + 5) = 2;
  _InterlockedAdd64((volatile signed __int64 *)(v11 + 19688), v30);
  *a5 = 1;
LABEL_38:
  if ( v7 )
    MiReleaseNonPagedResources(v11, v7);
  if ( v31[0] )
    PsDereferencePartition(*(_QWORD *)(v11 + 184));
  return (ULONG *)PartitionNodePagesForMdl;
}
