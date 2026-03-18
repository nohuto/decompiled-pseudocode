/*
 * XREFs of MiFlushComplete @ 0x140370EF0
 * Callers:
 *     IopCompletePageWrite @ 0x140370E60 (IopCompletePageWrite.c)
 *     MiIssueAsynchronousFlush @ 0x1403724FC (MiIssueAsynchronousFlush.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MiUnlockMdlWritePages @ 0x1402F1FF0 (MiUnlockMdlWritePages.c)
 *     MiRetardMdl @ 0x1402F323C (MiRetardMdl.c)
 *     MiDecrementModifiedWriteCount @ 0x140370FD4 (MiDecrementModifiedWriteCount.c)
 *     MiFreeOverlappedFlushEntry @ 0x140371070 (MiFreeOverlappedFlushEntry.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiFlushComplete(__int64 a1, __int64 a2)
{
  struct _MDL *v2; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  LONG result; // eax
  __int64 v9; // rcx

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
    MiReleaseControlAreaWaiters(v5, v6, v7);
  if ( v2 != (struct _MDL *)(a1 + 80) )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 72) = a1 + 80;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 48), 0, 0);
  v9 = *(_QWORD *)(a1 + 40);
  if ( v9 )
  {
    if ( *(int *)a2 < 0 )
      *(_DWORD *)(v9 + 20) = *(_DWORD *)a2;
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 16), 0xFFFFFFFF);
    if ( result == 1 )
      return MiFreeOverlappedFlushEntry((PVOID)v9);
  }
  return result;
}
