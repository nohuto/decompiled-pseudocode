/*
 * XREFs of HalpDmaFreeChildAdapter @ 0x14054CEA0
 * Callers:
 *     <none>
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     MmFreeContiguousMemory @ 0x140398060 (MmFreeContiguousMemory.c)
 *     HalpDmaFreeCrashdumpRegistersInternal @ 0x1404A9334 (HalpDmaFreeCrashdumpRegistersInternal.c)
 *     CvmDebugLog @ 0x1404F8EB8 (CvmDebugLog.c)
 *     HalpDmaReturnPageToSource @ 0x14054D20C (HalpDmaReturnPageToSource.c)
 *     HalpLeaveDmaDomain @ 0x14054EAFC (HalpLeaveDmaDomain.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HalpDmaCvmMakeMdlDevicePrivate @ 0x1406FDA68 (HalpDmaCvmMakeMdlDevicePrivate.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall HalpDmaFreeChildAdapter(__int64 a1, __int64 a2)
{
  struct _MDL *v3; // rcx
  __int64 v4; // rbx
  KIRQL v5; // al
  __int64 v6; // r8
  _QWORD *v7; // rdx
  unsigned int v8; // ebx
  unsigned int *v9; // rsi
  void *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  void *v15; // rbx
  unsigned int i; // ebx
  __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rbx
  void *v23; // rbx
  __int64 v24; // rdx

  v3 = *(struct _MDL **)(a1 + 304);
  if ( v3 )
  {
    IoFreeMdl(v3);
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  v4 = a1 + 464;
  if ( *(_QWORD *)(a1 + 464) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&HalpDmaAdapterListLock);
    v6 = *(_QWORD *)v4;
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || (v7 = *(_QWORD **)(a1 + 472), *v7 != v4) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    KeReleaseSpinLock(&HalpDmaAdapterListLock, v5);
  }
  v8 = 0;
  v9 = (unsigned int *)(a1 + 280);
  do
  {
    if ( *v9 )
      HalpDmaFreeCrashdumpRegistersInternal(a1, v8, *v9);
    ++v8;
    ++v9;
  }
  while ( v8 < 2 );
  if ( *(_QWORD *)(a1 + 512) )
  {
    *(_BYTE *)(a1 + 524) = 0;
    HalpLeaveDmaDomain(a1);
  }
  v10 = *(void **)(a1 + 544);
  if ( v10 )
  {
    guard_dispatch_icall_no_overrides(v10, a2);
    *(_QWORD *)(a1 + 544) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 440) && !*(_BYTE *)(a1 + 345) )
  {
    if ( !*(_BYTE *)(a1 + 442) )
    {
      v11 = *(_QWORD *)(a1 + 48);
      v12 = *(_QWORD *)(v11 + 16);
      if ( (*(_BYTE *)(v12 + 48) & 1) != 0 )
      {
        do
        {
          for ( i = 0; i < *(_DWORD *)(v11 + 8); ++i )
            HalpDmaReturnPageToSource(a1);
          v17 = *(_QWORD *)v11;
          HalpMmAllocCtxFree((__int64)v10, v11);
          v11 = v17;
        }
        while ( v17 );
      }
      else
      {
        HalpMmAllocCtxFree((__int64)v10, v12);
        HalpMmAllocCtxFree(v13, v11);
        v15 = *(void **)(a1 + 328);
        if ( *(_BYTE *)(a1 + 344) )
        {
          if ( v15 )
          {
            v10 = *(void **)(a1 + 336);
            if ( v10 )
              MmUnmapLockedPages(v10, *(PMDL *)(a1 + 328));
            if ( HalpDmaCvmConfiguration )
            {
              if ( (int)HalpDmaCvmMakeMdlDevicePrivate(v15, v14) < 0 )
              {
                CvmDebugLog();
                MiFreePagesFromMdl((ULONG_PTR)v15, 0, 0, 0);
                ExFreePoolWithTag(v15, 0);
              }
            }
          }
        }
        else
        {
          MmFreeContiguousMemory(*(PVOID *)(a1 + 328));
        }
      }
      v18 = *(_QWORD *)(a1 + 24);
      goto LABEL_43;
    }
    v19 = *(_DWORD *)(a1 + 40);
    v20 = *(_QWORD *)(a1 + 32);
    if ( v19 )
    {
      v21 = v19;
      do
      {
        v22 = *(_QWORD *)(v20 + 8);
        HalpDmaReturnPageToSource(a1);
        v20 = v22;
        --v21;
      }
      while ( v21 );
    }
    v23 = *(void **)(a1 + 328);
    if ( v23 )
    {
      v10 = *(void **)(a1 + 336);
      if ( v10 )
        MmUnmapLockedPages(v10, *(PMDL *)(a1 + 328));
      if ( HalpDmaCvmConfiguration && (int)HalpDmaCvmMakeMdlDevicePrivate(v23, v20) < 0 )
      {
        CvmDebugLog();
        MiFreePagesFromMdl((ULONG_PTR)v23, 0, 0, 0);
        ExFreePoolWithTag(v23, 0);
      }
    }
    v24 = *(_QWORD *)(a1 + 56);
    if ( v24 )
    {
      HalpMmAllocCtxFree((__int64)v10, *(_QWORD *)(v24 + 16));
      v18 = *(_QWORD *)(a1 + 56);
LABEL_43:
      HalpMmAllocCtxFree((__int64)v10, v18);
    }
  }
}
