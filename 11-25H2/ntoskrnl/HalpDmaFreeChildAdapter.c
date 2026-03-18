/*
 * XREFs of HalpDmaFreeChildAdapter @ 0x14054CC00
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 *     HalpDmaFreeCrashdumpRegistersInternal @ 0x1404ADB04 (HalpDmaFreeCrashdumpRegistersInternal.c)
 *     CvmDebugLog @ 0x1404F8EE8 (CvmDebugLog.c)
 *     HalpDmaReturnPageToSource @ 0x14054CF6C (HalpDmaReturnPageToSource.c)
 *     HalpLeaveDmaDomain @ 0x14054E85C (HalpLeaveDmaDomain.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     HalpDmaCvmMakeMdlDevicePrivate @ 0x1406F4038 (HalpDmaCvmMakeMdlDevicePrivate.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall HalpDmaFreeChildAdapter(__int64 a1)
{
  struct _MDL *v2; // rcx
  __int64 v3; // rbx
  KIRQL v4; // al
  __int64 v5; // r8
  _QWORD *v6; // rdx
  unsigned int v7; // ebx
  unsigned int *v8; // rsi
  void *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  void *v14; // rbx
  unsigned int i; // ebx
  __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rbx
  void *v22; // rbx
  __int64 v23; // rdx

  v2 = *(struct _MDL **)(a1 + 304);
  if ( v2 )
  {
    IoFreeMdl(v2);
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  v3 = a1 + 464;
  if ( *(_QWORD *)(a1 + 464) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&HalpDmaAdapterListLock);
    v5 = *(_QWORD *)v3;
    if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v6 = *(_QWORD **)(a1 + 472), *v6 != v3) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    KeReleaseSpinLock(&HalpDmaAdapterListLock, v4);
  }
  v7 = 0;
  v8 = (unsigned int *)(a1 + 280);
  do
  {
    if ( *v8 )
      HalpDmaFreeCrashdumpRegistersInternal(a1, v7, *v8);
    ++v7;
    ++v8;
  }
  while ( v7 < 2 );
  if ( *(_QWORD *)(a1 + 512) )
  {
    *(_BYTE *)(a1 + 524) = 0;
    HalpLeaveDmaDomain(a1);
  }
  v9 = *(void **)(a1 + 544);
  if ( v9 )
  {
    guard_dispatch_icall_no_overrides(v9);
    *(_QWORD *)(a1 + 544) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 440) && !*(_BYTE *)(a1 + 345) )
  {
    if ( !*(_BYTE *)(a1 + 442) )
    {
      v10 = *(_QWORD *)(a1 + 48);
      v11 = *(_QWORD *)(v10 + 16);
      if ( (*(_BYTE *)(v11 + 48) & 1) != 0 )
      {
        do
        {
          for ( i = 0; i < *(_DWORD *)(v10 + 8); ++i )
            HalpDmaReturnPageToSource(a1);
          v16 = *(_QWORD *)v10;
          HalpMmAllocCtxFree((__int64)v9, v10);
          v10 = v16;
        }
        while ( v16 );
      }
      else
      {
        HalpMmAllocCtxFree((__int64)v9, v11);
        HalpMmAllocCtxFree(v12, v10);
        v14 = *(void **)(a1 + 328);
        if ( *(_BYTE *)(a1 + 344) )
        {
          if ( v14 )
          {
            v9 = *(void **)(a1 + 336);
            if ( v9 )
              MmUnmapLockedPages(v9, *(PMDL *)(a1 + 328));
            if ( HalpDmaCvmConfiguration )
            {
              if ( (int)HalpDmaCvmMakeMdlDevicePrivate(v14, v13) < 0 )
              {
                CvmDebugLog();
                MiFreePagesFromMdl((ULONG_PTR)v14, 0, 0, 0);
                ExFreePoolWithTag(v14, 0);
              }
            }
          }
        }
        else
        {
          MmFreeContiguousMemory(*(PVOID *)(a1 + 328));
        }
      }
      v17 = *(_QWORD *)(a1 + 24);
      goto LABEL_43;
    }
    v18 = *(_DWORD *)(a1 + 40);
    v19 = *(_QWORD *)(a1 + 32);
    if ( v18 )
    {
      v20 = v18;
      do
      {
        v21 = *(_QWORD *)(v19 + 8);
        HalpDmaReturnPageToSource(a1);
        v19 = v21;
        --v20;
      }
      while ( v20 );
    }
    v22 = *(void **)(a1 + 328);
    if ( v22 )
    {
      v9 = *(void **)(a1 + 336);
      if ( v9 )
        MmUnmapLockedPages(v9, *(PMDL *)(a1 + 328));
      if ( HalpDmaCvmConfiguration && (int)HalpDmaCvmMakeMdlDevicePrivate(v22, v19) < 0 )
      {
        CvmDebugLog();
        MiFreePagesFromMdl((ULONG_PTR)v22, 0, 0, 0);
        ExFreePoolWithTag(v22, 0);
      }
    }
    v23 = *(_QWORD *)(a1 + 56);
    if ( v23 )
    {
      HalpMmAllocCtxFree((__int64)v9, *(_QWORD *)(v23 + 16));
      v17 = *(_QWORD *)(a1 + 56);
LABEL_43:
      HalpMmAllocCtxFree((__int64)v9, v17);
    }
  }
}
