/*
 * XREFs of MiFlushComplete @ 0x14035A670
 * Callers:
 *     IopCompletePageWrite @ 0x14035A5E0 (IopCompletePageWrite.c)
 *     MiIssueAsynchronousFlush @ 0x14035B6FC (MiIssueAsynchronousFlush.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14022F630 (MiReleaseControlAreaWaiters.c)
 *     MiUnlockMdlWritePages @ 0x14023DBA0 (MiUnlockMdlWritePages.c)
 *     MiRetardMdl @ 0x14023EDE8 (MiRetardMdl.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MiDecrementModifiedWriteCount @ 0x14035A754 (MiDecrementModifiedWriteCount.c)
 *     MiFreeOverlappedFlushEntry @ 0x14035A7F0 (MiFreeOverlappedFlushEntry.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiFlushComplete(__int64 a1, __int64 a2)
{
  struct _MDL *v2; // rbx
  _QWORD *v5; // rax
  LONG result; // eax
  __int64 v7; // rcx

  v2 = *(struct _MDL **)(a1 + 72);
  if ( _bittest16(&v2->MdlFlags, 9u) )
    MiRetardMdl(*(_QWORD *)(a1 + 72));
  if ( (v2->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v2->MappedSystemVa, v2);
  MiUnlockMdlWritePages(v2, (int *)a2);
  if ( *(int *)a2 < 0 )
    *(_QWORD *)(a2 + 8) = 0LL;
  v5 = (_QWORD *)MiDecrementModifiedWriteCount(*(_QWORD *)(a1 + 32), 0LL);
  if ( v5 )
    MiReleaseControlAreaWaiters(v5);
  if ( v2 != (struct _MDL *)(a1 + 80) )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 72) = a1 + 80;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 48), 0, 0);
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
  {
    if ( *(int *)a2 < 0 )
      *(_DWORD *)(v7 + 20) = *(_DWORD *)a2;
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 16), 0xFFFFFFFF);
    if ( result == 1 )
      return MiFreeOverlappedFlushEntry((PVOID)v7);
  }
  return result;
}
