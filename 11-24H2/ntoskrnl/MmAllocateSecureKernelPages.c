/*
 * XREFs of MmAllocateSecureKernelPages @ 0x140689BF4
 * Callers:
 *     PspIumAllocatePhysicalPages @ 0x1405E39B4 (PspIumAllocatePhysicalPages.c)
 * Callees:
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x14021D558 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiReplenishSlabAllocator @ 0x14021E544 (MiReplenishSlabAllocator.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiUpdatePageFileHighInPte @ 0x1402EACE0 (MiUpdatePageFileHighInPte.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140394410 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiPartitionObjectToPartition @ 0x1403945BC (MiPartitionObjectToPartition.c)
 *     MiInitializeMdlPfn @ 0x1403954E8 (MiInitializeMdlPfn.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r12
  int IsPfnFromChargedSlabAllocation; // esi
  bool v27; // zf
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // r14
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rax
  char v33[4]; // [rsp+48h] [rbp-41h] BYREF
  int v34; // [rsp+4Ch] [rbp-3Dh]
  __int64 i; // [rsp+50h] [rbp-39h]
  unsigned int v36; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v37; // [rsp+5Ch] [rbp-2Dh]
  __int64 v38; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-21h]
  __int64 CurrentIrql; // [rsp+70h] [rbp-19h]
  unsigned __int64 v41; // [rsp+78h] [rbp-11h]
  unsigned __int64 v42; // [rsp+80h] [rbp-9h]
  __int128 v43; // [rsp+88h] [rbp-1h] BYREF
  unsigned __int8 v47; // [rsp+100h] [rbp+77h]

  v33[0] = 0;
  v5 = a2;
  v38 = 0LL;
  *a5 = 0;
  v43 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v39 = 0LL;
  v7 = 0LL;
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v43);
  v8 = _InterlockedExchangeAdd((volatile signed __int32 *)v43, 1u);
  v9 = DWORD2(v43) ^ (unsigned __int8)(BYTE8(v43) ^ (v8 % dword_140E2DD00[(*((_QWORD *)&v43 + 1) >> 16) & 3LL]));
  result = MiPartitionObjectToPartition(BugCheckParameter2, 0, v33);
  v11 = (__int64)result;
  if ( !result )
    return result;
  if ( (result[1] & 8) == 0 || (int)MiAcquireNonPagedResources(result, v5, 0LL, 2LL) < 0 )
    goto LABEL_37;
  v12 = 8 * v5;
  v41 = v5;
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
  v34 = 64;
  if ( (_BYTE)CurrentIrql != 2 )
    v15 = 6;
  v16 = (__int64 *)(Pool + 48);
  v37 = v15;
  v17 = v16;
  v42 = (unsigned __int64)v16 + v12;
  if ( v16 < (__int64 *)((char *)v16 + v12) )
  {
    v18 = a3;
    do
    {
      SlabPage = MiGetSlabPage(v11, MmSlabTypeToMiSlabType[v18], v9, v15, &v38, 0);
      *v17 = SlabPage;
      if ( SlabPage == -1 )
      {
        if ( !v38 )
          break;
        v23 = v12 >> 3;
        for ( i = v12 >> 3; !(unsigned int)MiReplenishSlabAllocator(v38, v23, v34); v23 = i )
        {
          v16 = PartitionNodePagesForMdl + 6;
          if ( v17 != PartitionNodePagesForMdl + 6 )
            goto LABEL_30;
          if ( (v34 & 0x40) == 0 )
            break;
          v34 &= ~0x40u;
        }
        --v17;
        v24 = v12 + 8;
      }
      else
      {
        v25 = 48 * SlabPage - 0x220000000000LL;
        if ( (_BYTE)CurrentIrql == 2 )
        {
          v47 = 17;
          v36 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v36);
            while ( *(__int64 *)(v25 + 24) < 0 );
          }
        }
        else
        {
          v47 = MiLockPageInline(v25, v20, v21, v22);
        }
        *(_QWORD *)v25 = 0LL;
        *(_QWORD *)(v25 + 16) = CLFS_LSN_NULL_EXT;
        MiInitializeMdlPfn(v25, 512);
        IsPfnFromChargedSlabAllocation = MiIsPfnFromChargedSlabAllocation(v25);
        *(_QWORD *)(v25 + 16) = MiUpdatePageFileHighInPte(
                                  *(_QWORD *)(v25 + 16),
                                  IsPfnFromChargedSlabAllocation != 0 ? 7LL : 3LL);
        MiUnlockPage(v25, v47);
        v27 = IsPfnFromChargedSlabAllocation == 0;
        v24 = i;
        v28 = v41 - 1;
        if ( !v27 )
          v28 = v41;
        v7 = v28;
        v41 = v28;
        v29 = v39 + 1;
        if ( !v27 )
          v29 = v39;
        v39 = v29;
      }
      v15 = v37;
      v12 = v24 - 8;
      v18 = a3;
      ++v17;
      i = v12;
    }
    while ( (unsigned __int64)v17 < v42 );
    v16 = PartitionNodePagesForMdl + 6;
  }
LABEL_30:
  v30 = v17 - v16;
  if ( !v30 )
  {
    v5 = a2;
    goto LABEL_33;
  }
  v31 = v30 << 12;
  *PartitionNodePagesForMdl = 0LL;
  PartitionNodePagesForMdl[4] = 0LL;
  *((_WORD *)PartitionNodePagesForMdl + 4) = 8 * ((v31 >> 12) + 6);
  v32 = v39;
  PartitionNodePagesForMdl[5] = (unsigned int)v31;
  *((_WORD *)PartitionNodePagesForMdl + 5) = 2;
  _InterlockedAdd64((volatile signed __int64 *)(v11 + 19688), v32);
  *a5 = 1;
LABEL_38:
  if ( v7 )
    MiReleaseNonPagedResources(v11, v7);
  if ( v33[0] )
    PsDereferencePartition(*(_QWORD *)(v11 + 184));
  return (ULONG *)PartitionNodePagesForMdl;
}
