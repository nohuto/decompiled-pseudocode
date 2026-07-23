/*
 * XREFs of IopReleaseResources @ 0x140722054
 * Callers:
 *     IopLegacyResourceAllocation @ 0x1409BE034 (IopLegacyResourceAllocation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     IopAllocateBootResourcesInternal @ 0x140722E38 (IopAllocateBootResourcesInternal.c)
 *     PipClearDevNodeFlags @ 0x1408B8F2C (PipClearDevNodeFlags.c)
 *     PnpReleaseResourcesInternal @ 0x140A89864 (PnpReleaseResourcesInternal.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopReleaseResources(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  int v4; // ecx
  void *v5; // rcx
  void *v6; // rcx

  PnpReleaseResourcesInternal();
  ExAcquireFastMutex(&PiResourceListLock);
  v2 = *(void **)(a1 + 416);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 416) = 0LL;
  }
  v3 = *(void **)(a1 + 424);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 424) = 0LL;
  }
  KeReleaseGuardedMutex(&PiResourceListLock);
  v4 = *(_DWORD *)(a1 + 396);
  if ( (v4 & 0x10001) == 1 )
  {
    if ( (v4 & 0x40) != 0 )
    {
      if ( *(_QWORD *)(a1 + 544) )
        IopAllocateBootResourcesInternal(4LL, *(_QWORD *)(a1 + 32));
    }
  }
  else
  {
    PipClearDevNodeFlags(a1, 192LL);
    v5 = *(void **)(a1 + 544);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *(_QWORD *)(a1 + 544) = 0LL;
    }
    v6 = *(void **)(a1 + 552);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      *(_QWORD *)(a1 + 552) = 0LL;
    }
  }
}
