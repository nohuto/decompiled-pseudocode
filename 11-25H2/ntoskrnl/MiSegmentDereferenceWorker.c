/*
 * XREFs of MiSegmentDereferenceWorker @ 0x140459230
 * Callers:
 *     MiIssueSegmentDereferenceWork @ 0x140458FA0 (MiIssueSegmentDereferenceWork.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     MiDeleteEmptySubsections @ 0x1402A6D2C (MiDeleteEmptySubsections.c)
 *     MiFreeClonePool @ 0x140459590 (MiFreeClonePool.c)
 *     MiDeleteControlAreaList @ 0x140459604 (MiDeleteControlAreaList.c)
 *     MiRemoveUnusedSegments @ 0x140459644 (MiRemoveUnusedSegments.c)
 *     MiDeleteCachedEntry @ 0x140459A0C (MiDeleteCachedEntry.c)
 *     MiComputeProportionalSystemCacheVaReduction @ 0x140459BAC (MiComputeProportionalSystemCacheVaReduction.c)
 *     CcUnmapInactiveViews @ 0x140459BE4 (CcUnmapInactiveViews.c)
 *     MiHandlePageFileSizeChanges @ 0x140459C18 (MiHandlePageFileSizeChanges.c)
 *     MiDistributeSystemCacheVaReductions @ 0x140666770 (MiDistributeSystemCacheVaReductions.c)
 *     MiProcessDeleteOnClose @ 0x140666ACC (MiProcessDeleteOnClose.c)
 */

LONG __fastcall MiSegmentDereferenceWorker(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // edx
  int v4; // edx
  int v6; // edx
  int v7; // edx
  __int64 v8; // rax

  v1 = *(_QWORD *)(a1 + 64);
  MiDeleteEmptySubsections(v1);
  MiFreeClonePool(v1);
  MiDeleteControlAreaList(v1);
  v3 = *(_DWORD *)(a1 + 56);
  if ( v3 )
  {
    v4 = v3 - 2;
    if ( !v4 )
    {
      if ( *(_QWORD *)(a1 + 16) == 1LL )
        MiHandlePageFileSizeChanges(v1);
      goto LABEL_5;
    }
    v6 = v4 - 1;
    if ( !v6 )
    {
LABEL_5:
      MiRemoveUnusedSegments(v1, a1);
      return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    }
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 3 )
      {
        if ( (ULONG *)v1 == &MiSystemPartition )
          MiDistributeSystemCacheVaReductions();
        v8 = MiComputeProportionalSystemCacheVaReduction(v1);
        if ( v8 )
          CcUnmapInactiveViews(*(_QWORD *)(v1 + 184), v8, 1LL, 0LL);
      }
    }
    else
    {
      MiProcessDeleteOnClose(v1, a1);
    }
  }
  else
  {
    while ( *(_QWORD *)(v1 + 2096) != v1 + 2096 && (int)MiDeleteCachedEntry(v1, a1) >= 0 )
      ;
    MiProcessDeleteOnClose(v1, a1);
    MiDeleteControlAreaList(v1);
  }
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
