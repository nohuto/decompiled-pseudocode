/*
 * XREFs of CmpDecommisssionKcb @ 0x140875040
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x140840AF0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpCommitDiscardReplacePost @ 0x140874DC4 (CmpCommitDiscardReplacePost.c)
 *     CmpCleanUpKCBCacheTable @ 0x14096478C (CmpCleanUpKCBCacheTable.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A46048 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x1402E6050 (ExFreeToLookasideListEx.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDecommisssionKcb(ULONG_PTR BugCheckParameter2)
{
  void *v2; // rcx
  unsigned __int64 v3; // rcx

  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
  {
    _InterlockedDecrement64(&CmPerfCounters);
    if ( *(_QWORD *)(BugCheckParameter2 + 120) != BugCheckParameter2 + 120 )
      KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 0LL, 0LL);
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x10000) != 0 )
      KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 1uLL, 0LL);
    v2 = *(void **)(BugCheckParameter2 + 200);
    if ( (unsigned __int64)v2 >= 2 )
      ExFreePoolWithTag(v2, 0x624E4D43u);
    v3 = *(_QWORD *)(BugCheckParameter2 + 296);
    if ( (v3 & 1) != 0 )
      v3 &= ~1uLL;
    if ( v3 )
      CmpFreeTransientPoolWithTag((void *)v3, 0x624E4D43u);
    *(_DWORD *)(BugCheckParameter2 + 8) |= 0x10000u;
    *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)&CmpKcbLookaside, (PVOID)BugCheckParameter2);
    _InterlockedDecrement64(qword_140FDA440);
  }
}
