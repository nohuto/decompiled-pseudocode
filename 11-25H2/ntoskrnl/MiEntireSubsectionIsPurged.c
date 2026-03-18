/*
 * XREFs of MiEntireSubsectionIsPurged @ 0x14033FC28
 * Callers:
 *     MiDeleteCachedSubsection @ 0x14033F8B4 (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x140218D9C (MiRemoveUnusedSegment.c)
 *     MiReleaseControlAreaWaiters @ 0x14022F630 (MiReleaseControlAreaWaiters.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402A87DC (MiUpdateSystemProtoPtesTree.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDecrementModifiedWriteCount @ 0x14035A754 (MiDecrementModifiedWriteCount.c)
 *     MiDestroySection @ 0x140419264 (MiDestroySection.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiEntireSubsectionIsPurged(__int64 a1, unsigned __int8 a2)
{
  __int64 v3; // rbx
  int v5; // eax
  void *v7; // rbp
  _QWORD *v8; // rdi
  __int64 v9; // rdx

  v3 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 80) != 1LL )
    return 3221226051LL;
  if ( (*(_DWORD *)(a1 + 32) & 1) != 0 )
    return 3221225608LL;
  v5 = *(_DWORD *)(v3 + 56);
  if ( (v5 & 1) != 0 )
    return 3221225865LL;
  if ( *(_DWORD *)(a1 + 104) )
    return (v5 & 8) != 0 ? -1073741792 : -1073741267;
  MiUpdateSystemProtoPtesTree(a1 + 120, 2);
  v7 = *(void **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v8 = (_QWORD *)MiDecrementModifiedWriteCount(v3, 1LL);
  if ( *(_QWORD *)(v3 + 24) | *(_QWORD *)(v3 + 32) | *(_QWORD *)(v3 + 40) || *(_DWORD *)(v3 + 76) )
  {
    MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), a2);
  }
  else
  {
    MiRemoveUnusedSegment(v3);
    LOBYTE(v9) = a2;
    MiDestroySection(v3, v9);
  }
  if ( v8 )
    MiReleaseControlAreaWaiters(v8);
  ExFreePoolWithTag(v7, 0);
  return 0LL;
}
