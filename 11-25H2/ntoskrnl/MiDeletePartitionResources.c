/*
 * XREFs of MiDeletePartitionResources @ 0x1407EBEB4
 * Callers:
 *     MiDeletePartition @ 0x1407DC78C (MiDeletePartition.c)
 * Callees:
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeFlushQueuedDpcs @ 0x1402670A0 (KeFlushQueuedDpcs.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiAdjustCachedStacks @ 0x1403B1C48 (MiAdjustCachedStacks.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403C39B0 (MiCheckAndProcessCcAccessLog.c)
 *     MiUnlinkWorkingSet @ 0x14041773C (MiUnlinkWorkingSet.c)
 *     MiFreeClonePool @ 0x140459590 (MiFreeClonePool.c)
 *     ExFreeCacheAwareRundownProtection @ 0x140483950 (ExFreeCacheAwareRundownProtection.c)
 *     MiDeleteUnumappedSystemCacheViews @ 0x14066B148 (MiDeleteUnumappedSystemCacheViews.c)
 *     ZwWaitForSingleObject @ 0x14069B1C0 (ZwWaitForSingleObject.c)
 *     PfDeletePartition @ 0x14073B1F4 (PfDeletePartition.c)
 *     MiDeletePagingFiles @ 0x1407DF204 (MiDeletePagingFiles.c)
 *     MiDeletePfnBitMaps @ 0x1407EAD7C (MiDeletePfnBitMaps.c)
 *     MiDeletePartitionSlabState @ 0x1407EB6D0 (MiDeletePartitionSlabState.c)
 *     MiFreePartitionPhysicalPages @ 0x1407EC26C (MiFreePartitionPhysicalPages.c)
 *     MiDeleteSpecialPurposeMemory @ 0x1407EE36C (MiDeleteSpecialPurposeMemory.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartitionResources(__int64 a1)
{
  HANDLE *v2; // rbx
  __int64 v3; // rbp
  HANDLE v4; // rsi
  void *v5; // rcx
  __int64 v6; // rbx
  void *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rbx
  void *v10; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx

  KeSetEvent((PRKEVENT)(a1 + 88), 1, 0);
  if ( *(_BYTE *)(a1 + 18524) )
  {
    MiUnlinkWorkingSet(a1 + 18816);
    MiReturnResident(a1, *(_QWORD *)(a1 + 18928));
  }
  v2 = (HANDLE *)(a1 + 136);
  v3 = 6LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      ZwWaitForSingleObject(*v2, 0, 0LL);
      ObCloseHandle(v4, 0);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  if ( *(_BYTE *)(a1 + 18524) )
    MiDeleteUnumappedSystemCacheViews(a1);
  MiFreeClonePool((_SLIST_HEADER *)a1);
  MiAdjustCachedStacks(a1, 3);
  MiCheckAndProcessCcAccessLog(a1, 0LL, 1);
  KeFlushQueuedDpcs();
  v5 = *(void **)(a1 + 17464);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_QWORD *)(a1 + 17464) = 0LL;
  }
  PfDeletePartition(*(_QWORD *)(a1 + 184));
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 19608), -MiDeletePagingFiles(a1));
  MiDeletePartitionSlabState(a1);
  v6 = **(_QWORD **)(*(_QWORD *)(a1 + 184) + 72LL);
  MiRemoveLowestPriorityStandbyPage(a1, 8u, 0);
  MiFreePartitionPhysicalPages(a1, v6);
  v7 = *(void **)(a1 + 17600);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(a1 + 17600) = 0LL;
  }
  MiDeleteSpecialPurposeMemory(a1);
  MiDeletePfnBitMaps(a1);
  v8 = 11LL;
  v9 = a1 + 248;
  do
  {
    v10 = *(void **)(v9 + 88);
    if ( v10 )
      ObCloseHandle(v10, 0);
    if ( *(_QWORD *)v9 != a1 + 208 )
      ObfDereferenceObjectWithTag(*(PVOID *)v9, 0x6F506D4Du);
    v9 += 8LL;
    --v8;
  }
  while ( v8 );
  v11 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 2784);
  if ( v11 )
    ExFreeCacheAwareRundownProtection(v11);
  v12 = *(void **)(a1 + 240);
  if ( v12 )
    ObCloseHandle(v12, 0);
  v13 = *(void **)(a1 + 232);
  if ( v13 )
    ObCloseHandle(v13, 0);
}
