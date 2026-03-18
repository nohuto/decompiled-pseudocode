/*
 * XREFs of HalpDmaFreeChildAdapter @ 0x14054F560
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 *     MmFreeContiguousMemory @ 0x1403A93D0 (MmFreeContiguousMemory.c)
 *     HalpDmaFreeCrashdumpRegistersInternal @ 0x1404AEA24 (HalpDmaFreeCrashdumpRegistersInternal.c)
 *     CvmDebugLog @ 0x1404FB5F4 (CvmDebugLog.c)
 *     HalpDmaReturnPageToSource @ 0x14054F8CC (HalpDmaReturnPageToSource.c)
 *     HalpLeaveDmaDomain @ 0x1405511BC (HalpLeaveDmaDomain.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpDmaCvmMakeMdlDevicePrivate @ 0x1406FFE28 (HalpDmaCvmMakeMdlDevicePrivate.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall HalpDmaFreeChildAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _MDL *v5; // rcx
  __int64 v6; // rbx
  KIRQL v7; // al
  __int64 v8; // r8
  _QWORD *v9; // rdx
  unsigned int v10; // ebx
  unsigned int *v11; // rsi
  __int64 v12; // r8
  void *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  void *v18; // rbx
  unsigned int i; // ebx
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rbx
  void *v26; // rbx
  __int64 v27; // rdx

  v5 = *(struct _MDL **)(a1 + 304);
  if ( v5 )
  {
    IoFreeMdl(v5);
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  v6 = a1 + 464;
  if ( *(_QWORD *)(a1 + 464) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&HalpDmaAdapterListLock);
    v8 = *(_QWORD *)v6;
    if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || (v9 = *(_QWORD **)(a1 + 472), *v9 != v6) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    KeReleaseSpinLock(&HalpDmaAdapterListLock, v7);
  }
  v10 = 0;
  v11 = (unsigned int *)(a1 + 280);
  do
  {
    v12 = *v11;
    if ( (_DWORD)v12 )
      HalpDmaFreeCrashdumpRegistersInternal(a1, v10, v12, a4);
    ++v10;
    ++v11;
  }
  while ( v10 < 2 );
  if ( *(_QWORD *)(a1 + 512) )
  {
    *(_BYTE *)(a1 + 524) = 0;
    HalpLeaveDmaDomain(a1);
  }
  v13 = *(void **)(a1 + 544);
  if ( v13 )
  {
    guard_dispatch_icall_no_overrides(v13, a2, v12, a4);
    *(_QWORD *)(a1 + 544) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 440) && !*(_BYTE *)(a1 + 345) )
  {
    if ( !*(_BYTE *)(a1 + 442) )
    {
      v14 = *(_QWORD *)(a1 + 48);
      v15 = *(_QWORD *)(v14 + 16);
      if ( (*(_BYTE *)(v15 + 48) & 1) != 0 )
      {
        do
        {
          for ( i = 0; i < *(_DWORD *)(v14 + 8); ++i )
            HalpDmaReturnPageToSource(a1);
          v20 = *(_QWORD *)v14;
          HalpMmAllocCtxFree((__int64)v13, v14);
          v14 = v20;
        }
        while ( v20 );
      }
      else
      {
        HalpMmAllocCtxFree((__int64)v13, v15);
        HalpMmAllocCtxFree(v16, v14);
        v18 = *(void **)(a1 + 328);
        if ( *(_BYTE *)(a1 + 344) )
        {
          if ( v18 )
          {
            v13 = *(void **)(a1 + 336);
            if ( v13 )
              MmUnmapLockedPages(v13, *(PMDL *)(a1 + 328));
            if ( HalpDmaCvmConfiguration )
            {
              if ( (int)HalpDmaCvmMakeMdlDevicePrivate(v18, v17) < 0 )
              {
                CvmDebugLog();
                MiFreePagesFromMdl((ULONG_PTR)v18, 0, 0, 0);
                ExFreePoolWithTag(v18, 0);
              }
            }
          }
        }
        else
        {
          MmFreeContiguousMemory(*(PVOID *)(a1 + 328));
        }
      }
      v21 = *(_QWORD *)(a1 + 24);
      goto LABEL_43;
    }
    v22 = *(_DWORD *)(a1 + 40);
    v23 = *(_QWORD *)(a1 + 32);
    if ( v22 )
    {
      v24 = v22;
      do
      {
        v25 = *(_QWORD *)(v23 + 8);
        HalpDmaReturnPageToSource(a1);
        v23 = v25;
        --v24;
      }
      while ( v24 );
    }
    v26 = *(void **)(a1 + 328);
    if ( v26 )
    {
      v13 = *(void **)(a1 + 336);
      if ( v13 )
        MmUnmapLockedPages(v13, *(PMDL *)(a1 + 328));
      if ( HalpDmaCvmConfiguration && (int)HalpDmaCvmMakeMdlDevicePrivate(v26, v23) < 0 )
      {
        CvmDebugLog();
        MiFreePagesFromMdl((ULONG_PTR)v26, 0, 0, 0);
        ExFreePoolWithTag(v26, 0);
      }
    }
    v27 = *(_QWORD *)(a1 + 56);
    if ( v27 )
    {
      HalpMmAllocCtxFree((__int64)v13, *(_QWORD *)(v27 + 16));
      v21 = *(_QWORD *)(a1 + 56);
LABEL_43:
      HalpMmAllocCtxFree((__int64)v13, v21);
    }
  }
}
