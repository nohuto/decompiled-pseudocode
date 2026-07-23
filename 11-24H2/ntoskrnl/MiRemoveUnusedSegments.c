/*
 * XREFs of MiRemoveUnusedSegments @ 0x1403EDF30
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x1403EDB20 (MiSegmentDereferenceWorker.c)
 * Callees:
 *     MiDeleteEmptySubsections @ 0x140292788 (MiDeleteEmptySubsections.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     MiFreeClonePool @ 0x1403EDE7C (MiFreeClonePool.c)
 *     MiWakeCommitRequest @ 0x1403EE13C (MiWakeCommitRequest.c)
 *     MiDeleteEmptyControlAreas @ 0x1403EE1FC (MiDeleteEmptyControlAreas.c)
 *     MiDeleteCachedEntry @ 0x1403EE484 (MiDeleteCachedEntry.c)
 *     MiComputeProportionalSystemCacheVaReduction @ 0x1403EE624 (MiComputeProportionalSystemCacheVaReduction.c)
 *     CcUnmapInactiveViews @ 0x1403EE744 (CcUnmapInactiveViews.c)
 */

unsigned __int64 __fastcall MiRemoveUnusedSegments(__int64 a1, __int64 a2)
{
  int v2; // r15d
  _QWORD *v3; // r12
  __int64 v4; // rsi
  _QWORD *v5; // r13
  unsigned __int64 result; // rax
  unsigned int v8; // r14d
  unsigned int v9; // edi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rax

  v2 = *(_DWORD *)(a2 + 56);
  v3 = (_QWORD *)(a1 + 1928);
  v4 = *(_QWORD *)(a1 + 2080);
  v5 = (_QWORD *)(a1 + 2112);
  result = 0LL;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    if ( (_QWORD *)*v3 != v3 )
      result = MiDeleteEmptyControlAreas(a1);
    if ( (_QWORD *)*v5 != v5 )
      result = MiDeleteEmptySubsections(a1);
    if ( *(_WORD *)(a1 + 2384) )
      result = (unsigned __int64)MiFreeClonePool((_SLIST_HEADER *)a1);
    v11 = *(_QWORD *)(v4 + 8);
    if ( v11 )
    {
      result = *(_QWORD *)(a1 + 19264);
      v11 = *(_QWORD *)(v4 + 8);
      if ( result <= v11 )
      {
        *(_QWORD *)(v4 + 8) = 0LL;
        v11 = 0LL;
      }
    }
    v12 = *(_QWORD *)(v4 + 16);
    v13 = v12;
    if ( v12 )
    {
      result = *(_QWORD *)(a1 + 2088) >> 12;
      if ( result <= v12 )
      {
        *(_QWORD *)(v4 + 16) = 0LL;
        v13 = 0LL;
      }
    }
    if ( !v11 && !v13 )
      break;
    if ( (++v8 & 0x3F) == 0 )
    {
      if ( v9 >= 0x20 )
      {
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        ++*(_DWORD *)(a2 + 60);
      }
      if ( v9 >= 0x30 && v8 >= 0x80 && *(_QWORD *)(a2 + 16) == 1LL )
      {
        v14 = MiComputeProportionalSystemCacheVaReduction(a1);
        if ( v14 )
          CcUnmapInactiveViews(*(_QWORD *)(a1 + 184), v14, 0LL, 0LL);
      }
      v9 = 0;
    }
    result = MiDeleteCachedEntry(a1, a2);
    if ( (result & 0x80000000) == 0LL )
    {
      if ( v2 == 2 )
        result = MiWakeCommitRequest(a1, 1LL);
    }
    else
    {
      ++v9;
      if ( (_DWORD)result == -1073741275 )
      {
        if ( *(_DWORD *)(a1 + 92) )
          break;
        result = MiComputeProportionalSystemCacheVaReduction(a1);
        if ( !result )
          break;
        if ( *(_QWORD *)(a2 + 16) == 1LL )
        {
          result = CcUnmapInactiveViews(*(_QWORD *)(a1 + 184), result, 0LL, 0LL);
          if ( !(_DWORD)result )
            break;
        }
      }
    }
  }
  if ( v2 == 2 )
    return MiWakeCommitRequest(a1, 0LL);
  return result;
}
