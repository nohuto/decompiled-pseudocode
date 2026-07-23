/*
 * XREFs of CmpDeleteHive @ 0x140840A1C
 * Callers:
 *     CmpFindSubkeyInHashByChildCell @ 0x14083F9C0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpGetNextHive @ 0x14084051C (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x140840680 (CmpDereferenceHive.c)
 *     CmpUnlockHashEntryByKcb @ 0x140840720 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockHashEntry @ 0x140840970 (CmpUnlockHashEntry.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140840AF0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x140843620 (CmpDeleteKeyObject.c)
 *     CmpWalkOneLevel @ 0x140876890 (CmpWalkOneLevel.c)
 *     CmpDelayCloseWorker @ 0x1409C6AD0 (CmpDelayCloseWorker.c)
 * Callees:
 *     CmpUnlockHiveList @ 0x140840614 (CmpUnlockHiveList.c)
 *     CmpFree @ 0x140882B20 (CmpFree.c)
 *     HvFreeDirtyData @ 0x140964C50 (HvFreeDirtyData.c)
 *     CmpDeleteKcbCache @ 0x140A50BF4 (CmpDeleteKcbCache.c)
 *     CmpLockHiveListExclusive @ 0x140A52D38 (CmpLockHiveListExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpDeleteHive(_QWORD *P)
{
  _QWORD *v1; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rax
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  v1 = P + 201;
  if ( (_QWORD *)*v1 != v1 )
  {
    CmpLockHiveListExclusive(P);
    v3 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v4 = (_QWORD *)v1[1], (_QWORD *)*v4 != v1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    CmpUnlockHiveList();
  }
  *(_DWORD *)P = -1160724768;
  HvFreeDirtyData(P);
  CmpDeleteKcbCache(P);
  v5 = (void *)P[231];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x624E4D43u);
  v6 = (void *)P[229];
  if ( v6 )
    ExFreePoolWithTag(v6, 0x20204D43u);
  v7 = (void *)P[233];
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v8 = (void *)P[602];
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return CmpFree(P);
}
