/*
 * XREFs of MiSegmentDereferenceWorker @ 0x1403F7BB0
 * Callers:
 *     MiIssueSegmentDereferenceWork @ 0x1403F7920 (MiIssueSegmentDereferenceWork.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiRemoveUnusedSegments @ 0x1403F734C (MiRemoveUnusedSegments.c)
 *     MiFreeClonePool @ 0x1403F7F0C (MiFreeClonePool.c)
 *     MiDeleteControlAreaList @ 0x1403F7F80 (MiDeleteControlAreaList.c)
 *     MiDeleteEmptySubsections @ 0x1403F7FC0 (MiDeleteEmptySubsections.c)
 *     MiHandlePageFileSizeChanges @ 0x1403F81CC (MiHandlePageFileSizeChanges.c)
 *     MiDeleteCachedEntry @ 0x1403F836C (MiDeleteCachedEntry.c)
 *     MiComputeProportionalSystemCacheVaReduction @ 0x1403F850C (MiComputeProportionalSystemCacheVaReduction.c)
 *     CcUnmapInactiveViews @ 0x1403F8634 (CcUnmapInactiveViews.c)
 *     MiDistributeSystemCacheVaReductions @ 0x140672220 (MiDistributeSystemCacheVaReductions.c)
 *     MiProcessDeleteOnClose @ 0x14067257C (MiProcessDeleteOnClose.c)
 */

LONG __fastcall MiSegmentDereferenceWorker(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  int v4; // edx
  int v5; // edx
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rax

  v1 = *(_QWORD *)(a1 + 64);
  MiDeleteEmptySubsections(v1);
  MiFreeClonePool(v1);
  MiDeleteControlAreaList(v1);
  v4 = *(_DWORD *)(a1 + 56);
  if ( v4 )
  {
    v5 = v4 - 2;
    if ( !v5 )
    {
      if ( *(_QWORD *)(a1 + 16) == 1LL )
        MiHandlePageFileSizeChanges(v1);
      goto LABEL_5;
    }
    v7 = v5 - 1;
    if ( !v7 )
    {
LABEL_5:
      MiRemoveUnusedSegments(v1, a1);
      return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    }
    v8 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 == 3 )
      {
        if ( (ULONG *)v1 == &MiSystemPartition )
          MiDistributeSystemCacheVaReductions();
        v9 = MiComputeProportionalSystemCacheVaReduction(v1, v8, v3);
        if ( v9 )
          CcUnmapInactiveViews(*(_QWORD *)(v1 + 184), v9, 1LL, 0LL);
      }
    }
    else
    {
      MiProcessDeleteOnClose(v1, a1);
    }
  }
  else
  {
    while ( *(_QWORD *)(v1 + 2096) != v1 + 2096 && (int)MiDeleteCachedEntry(v1, a1, v3) >= 0 )
      ;
    MiProcessDeleteOnClose(v1, a1);
    MiDeleteControlAreaList(v1);
  }
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
