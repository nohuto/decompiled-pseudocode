/*
 * XREFs of MiEntireSubsectionIsPurged @ 0x14023C6CC
 * Callers:
 *     MiDeleteCachedSubsection @ 0x14023C35C (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     MiRemoveUnusedSegment @ 0x14022F72C (MiRemoveUnusedSegment.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14026047C (MiUpdateSystemProtoPtesTree.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiDecrementModifiedWriteCount @ 0x140370FD4 (MiDecrementModifiedWriteCount.c)
 *     MiDestroySection @ 0x140417200 (MiDestroySection.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiEntireSubsectionIsPurged(__int64 a1, char a2)
{
  __int64 v3; // rbx
  int v5; // eax
  void *v7; // rbp
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8

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
  MiUpdateSystemProtoPtesTree(a1 + 120, 2LL);
  v7 = *(void **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v8 = (_QWORD *)MiDecrementModifiedWriteCount(v3, 1LL);
  v9 = *(_QWORD *)(v3 + 24) | *(_QWORD *)(v3 + 32) | *(_QWORD *)(v3 + 40);
  if ( v9 || *(_DWORD *)(v3 + 76) )
  {
    LOBYTE(v9) = a2;
    MiReleaseSpinLockExclusive(v3 + 72, v9);
  }
  else
  {
    MiRemoveUnusedSegment(v3);
    LOBYTE(v10) = a2;
    MiDestroySection(v3, v10);
  }
  if ( v8 )
    MiReleaseControlAreaWaiters(v8, v11, v12);
  ExFreePoolWithTag(v7, 0);
  return 0LL;
}
