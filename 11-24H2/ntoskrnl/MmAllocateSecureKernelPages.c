/*
 * XREFs of MmAllocateSecureKernelPages @ 0x140688AC4
 * Callers:
 *     PspIumAllocatePhysicalPages @ 0x1405E63B4 (PspIumAllocatePhysicalPages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x140211200 (MiAcquireNonPagedResources.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetSlabPage @ 0x1402F3934 (MiGetSlabPage.c)
 *     MiUpdatePageFileHighInPte @ 0x140368F40 (MiUpdatePageFileHighInPte.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x14039F0B8 (MiIsPfnFromChargedSlabAllocation.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140411FD0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiPartitionObjectToPartition @ 0x14041217C (MiPartitionObjectToPartition.c)
 *     MiInitializeMdlPfn @ 0x140413588 (MiInitializeMdlPfn.c)
 *     MiReplenishSlabAllocator @ 0x140413B18 (MiReplenishSlabAllocator.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r12
  int IsPfnFromChargedSlabAllocation; // esi
  bool v24; // zf
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // r14
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rax
  char v30[4]; // [rsp+48h] [rbp-41h] BYREF
  int v31; // [rsp+4Ch] [rbp-3Dh]
  __int64 i; // [rsp+50h] [rbp-39h]
  unsigned int v33; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v34; // [rsp+5Ch] [rbp-2Dh]
  __int64 v35; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 v36; // [rsp+68h] [rbp-21h]
  __int64 CurrentIrql; // [rsp+70h] [rbp-19h]
  unsigned __int64 v38; // [rsp+78h] [rbp-11h]
  unsigned __int64 v39; // [rsp+80h] [rbp-9h]
  __int128 v40; // [rsp+88h] [rbp-1h] BYREF
  unsigned __int8 v44; // [rsp+100h] [rbp+77h]

  v30[0] = 0;
  v5 = a2;
  v35 = 0LL;
  *a5 = 0;
  v40 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v36 = 0LL;
  v7 = 0LL;
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v40);
  v8 = _InterlockedExchangeAdd((volatile signed __int32 *)v40, 1u);
  v9 = DWORD2(v40) ^ (unsigned __int8)(BYTE8(v40) ^ (v8 % dword_140E2DBC0[(*((_QWORD *)&v40 + 1) >> 16) & 3LL]));
  result = MiPartitionObjectToPartition(BugCheckParameter2, 0, v30);
  v11 = (__int64)result;
  if ( !result )
    return result;
  if ( (result[1] & 8) == 0 || (int)MiAcquireNonPagedResources(result, v5, 0LL, 2u) < 0 )
    goto LABEL_37;
  v12 = 8 * v5;
  v38 = v5;
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
  v31 = 64;
  if ( (_BYTE)CurrentIrql != 2 )
    v15 = 6;
  v16 = (__int64 *)(Pool + 48);
  v34 = v15;
  v17 = v16;
  v39 = (unsigned __int64)v16 + v12;
  if ( v16 < (__int64 *)((char *)v16 + v12) )
  {
    v18 = a3;
    do
    {
      SlabPage = MiGetSlabPage(v11, MmSlabTypeToMiSlabType[v18], v9, v15, &v35, 0);
      *v17 = SlabPage;
      if ( SlabPage == -1 )
      {
        if ( !v35 )
          break;
        v20 = v12 >> 3;
        for ( i = v12 >> 3; !(unsigned int)MiReplenishSlabAllocator(v35, v20, v31); v20 = i )
        {
          v16 = PartitionNodePagesForMdl + 6;
          if ( v17 != PartitionNodePagesForMdl + 6 )
            goto LABEL_30;
          if ( (v31 & 0x40) == 0 )
            break;
          v31 &= ~0x40u;
        }
        --v17;
        v21 = v12 + 8;
      }
      else
      {
        v22 = 48 * SlabPage - 0x220000000000LL;
        if ( (_BYTE)CurrentIrql == 2 )
        {
          v44 = 17;
          v33 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v33);
            while ( *(__int64 *)(v22 + 24) < 0 );
          }
        }
        else
        {
          v44 = MiLockPageInline(v22);
        }
        *(_QWORD *)v22 = 0LL;
        *(_QWORD *)(v22 + 16) = CLFS_LSN_NULL_EXT;
        MiInitializeMdlPfn(v22, 512);
        IsPfnFromChargedSlabAllocation = MiIsPfnFromChargedSlabAllocation(v22);
        *(_QWORD *)(v22 + 16) = MiUpdatePageFileHighInPte(
                                  *(_QWORD *)(v22 + 16),
                                  IsPfnFromChargedSlabAllocation != 0 ? 7LL : 3LL);
        MiUnlockPage(v22, v44);
        v24 = IsPfnFromChargedSlabAllocation == 0;
        v21 = i;
        v25 = v38 - 1;
        if ( !v24 )
          v25 = v38;
        v7 = v25;
        v38 = v25;
        v26 = v36 + 1;
        if ( !v24 )
          v26 = v36;
        v36 = v26;
      }
      v15 = v34;
      v12 = v21 - 8;
      v18 = a3;
      ++v17;
      i = v12;
    }
    while ( (unsigned __int64)v17 < v39 );
    v16 = PartitionNodePagesForMdl + 6;
  }
LABEL_30:
  v27 = v17 - v16;
  if ( !v27 )
  {
    v5 = a2;
    goto LABEL_33;
  }
  v28 = v27 << 12;
  *PartitionNodePagesForMdl = 0LL;
  PartitionNodePagesForMdl[4] = 0LL;
  *((_WORD *)PartitionNodePagesForMdl + 4) = 8 * ((v28 >> 12) + 6);
  v29 = v36;
  PartitionNodePagesForMdl[5] = (unsigned int)v28;
  *((_WORD *)PartitionNodePagesForMdl + 5) = 2;
  _InterlockedAdd64((volatile signed __int64 *)(v11 + 19688), v29);
  *a5 = 1;
LABEL_38:
  if ( v7 )
    MiReleaseNonPagedResources(v11, v7);
  if ( v30[0] )
    PsDereferencePartition(*(_QWORD *)(v11 + 184));
  return (ULONG *)PartitionNodePagesForMdl;
}
