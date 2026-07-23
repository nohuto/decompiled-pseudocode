/*
 * XREFs of MiEntireSubsectionIsPurged @ 0x1402043F4
 * Callers:
 *     MiDeleteCachedSubsection @ 0x140204084 (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiDecrementModifiedWriteCount @ 0x140259314 (MiDecrementModifiedWriteCount.c)
 *     MiDestroySection @ 0x140270330 (MiDestroySection.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140290A8C (MiUpdateSystemProtoPtesTree.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiRemoveUnusedSegment @ 0x14030303C (MiRemoveUnusedSegment.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiEntireSubsectionIsPurged(__int64 *a1, char a2)
{
  __int64 v3; // rbx
  int v5; // eax
  void *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx

  v3 = *a1;
  if ( a1[10] != 1 )
    return 3221226051LL;
  if ( (a1[4] & 1) != 0 )
    return 3221225608LL;
  v5 = *(_DWORD *)(v3 + 56);
  if ( (v5 & 1) != 0 )
    return 3221225865LL;
  if ( *((_DWORD *)a1 + 26) )
    return (v5 & 8) != 0 ? -1073741792 : -1073741267;
  MiUpdateSystemProtoPtesTree(a1 + 15, 2LL);
  v7 = (void *)a1[1];
  a1[1] = 0LL;
  a1[10] = 0LL;
  v8 = MiDecrementModifiedWriteCount(v3, 1LL);
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
    MiReleaseControlAreaWaiters(v8);
  ExFreePoolWithTag(v7, 0);
  return 0LL;
}
