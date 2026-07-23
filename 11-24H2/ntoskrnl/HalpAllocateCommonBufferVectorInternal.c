/*
 * XREFs of HalpAllocateCommonBufferVectorInternal @ 0x1403976A0
 * Callers:
 *     HalAllocateCommonBufferVector @ 0x14054C1D0 (HalAllocateCommonBufferVector.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     MmAllocatePagesForMdlEx @ 0x140395340 (MmAllocatePagesForMdlEx.c)
 *     MmAllocateNodePagesForMdlEx @ 0x1403953A0 (MmAllocateNodePagesForMdlEx.c)
 *     HalpDmaReferenceDomainObject @ 0x140396628 (HalpDmaReferenceDomainObject.c)
 *     HalpDmaDereferenceDomainObject @ 0x140397F8C (HalpDmaDereferenceDomainObject.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpAllocateCommonBufferVectorInternal(
        __int64 a1,
        PHYSICAL_ADDRESS a2,
        unsigned __int64 a3,
        MEMORY_CACHING_TYPE a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        char a9,
        __int64 *a10)
{
  __int64 v10; // rbx
  void *v11; // r12
  struct _MDL *v12; // r13
  __int64 v13; // r14
  unsigned __int8 CurrentIrql; // al
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // edi
  void *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r15
  ULONG_PTR v21; // rdi
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned __int64 v24; // r14
  ULONG Flags; // r9d
  __int64 v26; // r8
  PHYSICAL_ADDRESS v27; // r10
  PHYSICAL_ADDRESS v28; // rdx
  struct _MDL *PagesForMdl; // rax
  char *v30; // rax
  char *v31; // rdx
  _QWORD *v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rcx
  __int64 v35; // r14
  struct _MDL *v36; // r13
  struct _MDL *Next; // rax
  KIRQL v38; // al
  __int64 *v39; // rdx
  __int64 v40; // r8
  unsigned __int64 i; // rcx
  unsigned __int64 v43; // rax
  unsigned int v44; // ecx
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rdx
  __int64 v48; // rcx
  int v49; // [rsp+48h] [rbp-51h]
  _QWORD *v50; // [rsp+50h] [rbp-49h]
  ULONG_PTR v51; // [rsp+58h] [rbp-41h]
  PVOID v52; // [rsp+70h] [rbp-29h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1DCu, 1uLL, CurrentIrql, 0LL, 0LL);
  if ( a6 )
    return 3221225485LL;
  v15 = *(_QWORD *)(a1 + 512);
  v51 = v15;
  v49 = *(_DWORD *)(v15 + 48);
  if ( a9 )
    goto LABEL_4;
  if ( *(_DWORD *)(v15 + 48) != 2 )
    return 3221225485LL;
  v49 = 3;
LABEL_4:
  v17 = HalpDmaReferenceDomainObject(v15);
  if ( v17 < 0 )
    return (unsigned int)v17;
  v18 = (void *)HalpMmAllocCtxAlloc(v16, 80LL);
  v19 = (__int64)v18;
  if ( !v18 )
  {
    v17 = -1073741670;
LABEL_37:
    HalpDmaDereferenceDomainObject(v51);
    if ( v19 )
      HalpMmAllocCtxFree(v46, v19);
    if ( v13 )
      HalpMmAllocCtxFree(v46, v13);
    if ( v12 )
    {
      if ( v11 )
        MmUnmapLockedPages(v11, v12);
      MiFreePagesFromMdl((ULONG_PTR)v12, 0, 0, 0);
      ExFreePoolWithTag(v12, 0);
    }
    return (unsigned int)v17;
  }
  memset_0(v18, 0, 0x50uLL);
  v20 = a7;
  v21 = v51;
  *(_QWORD *)(v19 + 32) = v51;
  v23 = (_QWORD *)HalpMmAllocCtxAlloc(v22, 16LL * a7);
  v50 = v23;
  v13 = (__int64)v23;
  if ( !v23 )
  {
    v17 = -1073741670;
    v11 = 0LL;
    goto LABEL_37;
  }
  memset_0(v23, 0, 16LL * a7);
  *(_QWORD *)(v19 + 64) = v13;
  v24 = (a8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v49 == 3 )
  {
    Flags = 20;
    v26 = 0LL;
    v27.QuadPart = 0LL;
    v28.QuadPart = -1LL;
  }
  else
  {
    Flags = 36;
    for ( i = 0LL; ; ++i )
    {
      v43 = 1LL << i;
      if ( i >= 0x40 )
      {
        if ( v43 == v24 )
          goto LABEL_29;
        v17 = -1073741577;
LABEL_35:
        v11 = 0LL;
        goto LABEL_57;
      }
      if ( v43 >= v24 )
        break;
    }
    v24 = 1LL << i;
LABEL_29:
    v26 = v24;
    v27 = a2;
    v44 = *(_DWORD *)(a1 + 448);
    if ( v44 < 0x40 )
      v45 = (1LL << v44) - 1;
    else
      v45 = -1LL;
    v28.QuadPart = a3;
    if ( a3 >= v45 )
      v28.QuadPart = v45;
    if ( a2.QuadPart >= (unsigned __int64)v28.QuadPart )
    {
      v17 = -1073741584;
      goto LABEL_35;
    }
  }
  *(_DWORD *)(v19 + 24) = a7;
  *(_QWORD *)(v19 + 16) = v24;
  if ( a5 == 0x80000000 )
    PagesForMdl = MmAllocatePagesForMdlEx(v27, v28, (PHYSICAL_ADDRESS)v26, v24 * a7, a4, Flags);
  else
    PagesForMdl = (struct _MDL *)MmAllocateNodePagesForMdlEx(v27.LowPart, v28.LowPart, v26, v24 * a7, a4, a5, Flags);
  v12 = PagesForMdl;
  if ( !PagesForMdl )
  {
    v17 = -1073741670;
    v11 = 0LL;
LABEL_57:
    v13 = (__int64)v50;
    goto LABEL_37;
  }
  v30 = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, a4, 0LL, 0, 0x40000010u);
  v52 = v30;
  v31 = v30;
  if ( !v30 )
  {
    v17 = -1073741670;
    v11 = 0LL;
    goto LABEL_57;
  }
  *(_QWORD *)(v19 + 48) = v30;
  *(_QWORD *)(v19 + 40) = v12;
  if ( a7 )
  {
    v32 = v50;
    v33 = a7;
    do
    {
      *v32 = v31;
      v31 += v24;
      v32 += 2;
      --v33;
    }
    while ( v33 );
  }
  if ( v49 == 3 )
  {
    v17 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v51 + 40), 3LL);
    if ( v17 >= 0 )
    {
      if ( a7 )
      {
        v47 = v50 + 1;
        do
        {
          v48 = v10;
          v10 += v24;
          *v47 = v48;
          v47 += 2;
          --v20;
        }
        while ( v20 );
      }
      v21 = v51;
      *(_QWORD *)(v19 + 56) = 0LL;
      *(_BYTE *)(v19 + 72) = 1;
      goto LABEL_20;
    }
    v11 = v52;
    goto LABEL_57;
  }
  if ( a7 )
  {
    v34 = v50 + 1;
    v35 = 8 * (v24 >> 12);
    v36 = v12 + 1;
    do
    {
      Next = v36->Next;
      v36 = (struct _MDL *)((char *)v36 + v35);
      *v34 = (_QWORD)Next << 12;
      v34 += 2;
      --v20;
    }
    while ( v20 );
  }
LABEL_20:
  v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 104));
  v39 = (__int64 *)(v21 + 88);
  v40 = *(_QWORD *)(v21 + 88);
  if ( *(_QWORD *)(v40 + 8) != v21 + 88 )
    __fastfail(3u);
  *(_QWORD *)(v19 + 8) = v39;
  *(_QWORD *)v19 = v40;
  *(_QWORD *)(v40 + 8) = v19;
  *v39 = v19;
  KeReleaseSpinLock((PKSPIN_LOCK)(v21 + 104), v38);
  *a10 = v19;
  return 0LL;
}
