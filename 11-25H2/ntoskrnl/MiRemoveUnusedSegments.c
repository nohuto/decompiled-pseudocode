/*
 * XREFs of MiRemoveUnusedSegments @ 0x140459644
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x140459230 (MiSegmentDereferenceWorker.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     MiDeleteEmptySubsections @ 0x1402A6D2C (MiDeleteEmptySubsections.c)
 *     MiFreeClonePool @ 0x140459590 (MiFreeClonePool.c)
 *     MiWakeCommitRequest @ 0x140459864 (MiWakeCommitRequest.c)
 *     MiDeleteEmptyControlAreas @ 0x140459924 (MiDeleteEmptyControlAreas.c)
 *     MiDeleteCachedEntry @ 0x140459A0C (MiDeleteCachedEntry.c)
 *     MiComputeProportionalSystemCacheVaReduction @ 0x140459BAC (MiComputeProportionalSystemCacheVaReduction.c)
 *     CcUnmapInactiveViews @ 0x140459BE4 (CcUnmapInactiveViews.c)
 */

void __fastcall MiRemoveUnusedSegments(__int64 a1, __int64 a2)
{
  int v2; // r15d
  _QWORD *v3; // r12
  __int64 v4; // rsi
  _QWORD *v5; // r13
  unsigned int v7; // r14d
  unsigned int v8; // edi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = *(_DWORD *)(a2 + 56);
  v3 = (_QWORD *)(a1 + 1928);
  v4 = *(_QWORD *)(a1 + 2080);
  v5 = (_QWORD *)(a1 + 2112);
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    if ( (_QWORD *)*v3 != v3 )
      MiDeleteEmptyControlAreas(a1);
    if ( (_QWORD *)*v5 != v5 )
      MiDeleteEmptySubsections(a1);
    if ( *(_WORD *)(a1 + 2384) )
      MiFreeClonePool((_SLIST_HEADER *)a1);
    v10 = *(_QWORD *)(v4 + 8);
    if ( v10 )
    {
      v10 = *(_QWORD *)(v4 + 8);
      if ( *(_QWORD *)(a1 + 19264) <= v10 )
      {
        *(_QWORD *)(v4 + 8) = 0LL;
        v10 = 0LL;
      }
    }
    v11 = *(_QWORD *)(v4 + 16);
    v12 = v11;
    if ( v11 && *(_QWORD *)(a1 + 2088) >> 12 <= v11 )
    {
      *(_QWORD *)(v4 + 16) = 0LL;
      v12 = 0LL;
    }
    if ( !v10 && !v12 )
      break;
    if ( (++v7 & 0x3F) == 0 )
    {
      if ( v8 >= 0x20 )
      {
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        ++*(_DWORD *)(a2 + 60);
      }
      if ( v8 >= 0x30 && v7 >= 0x80 && *(_QWORD *)(a2 + 16) == 1LL )
      {
        v15 = MiComputeProportionalSystemCacheVaReduction(a1);
        if ( v15 )
          CcUnmapInactiveViews(*(_QWORD *)(a1 + 184), v15, 0LL, 0LL);
      }
      v8 = 0;
    }
    v13 = MiDeleteCachedEntry(a1, a2);
    if ( v13 >= 0 )
    {
      if ( v2 == 2 )
        MiWakeCommitRequest(a1, 1LL);
    }
    else
    {
      ++v8;
      if ( v13 == -1073741275 )
      {
        if ( *(_DWORD *)(a1 + 92) )
          break;
        v14 = MiComputeProportionalSystemCacheVaReduction(a1);
        if ( !v14
          || *(_QWORD *)(a2 + 16) == 1LL && !(unsigned int)CcUnmapInactiveViews(*(_QWORD *)(a1 + 184), v14, 0LL, 0LL) )
        {
          break;
        }
      }
    }
  }
  if ( v2 == 2 )
    MiWakeCommitRequest(a1, 0LL);
}
