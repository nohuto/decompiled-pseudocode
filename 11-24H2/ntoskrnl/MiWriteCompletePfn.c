/*
 * XREFs of MiWriteCompletePfn @ 0x14039D574
 * Callers:
 *     MiBuildMappedCluster @ 0x14036ABB8 (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x14039C8C8 (MiGatherPagefilePages.c)
 *     MiUnlockStoreLockedPages @ 0x14039D370 (MiUnlockStoreLockedPages.c)
 * Callees:
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPfnReferenceCountIsZero @ 0x14022C950 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x14023C210 (MiIsPfnCommitNotCharged.c)
 *     MiRestoreTransitionPte @ 0x140271094 (MiRestoreTransitionPte.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiCapturePageFileInfoInline @ 0x14039D800 (MiCapturePageFileInfoInline.c)
 *     MiIsPfnOriginalPteLost @ 0x14039D8FC (MiIsPfnOriginalPteLost.c)
 */

__int64 __fastcall MiWriteCompletePfn(ULONG_PTR BugCheckParameter2, char a2, ULONG_PTR a3)
{
  __int64 v3; // rbx
  int IsPfnOriginalPteLost; // ebp
  _QWORD *v8; // r11
  int v9; // r10d
  bool v10; // zf
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+10h]

  v3 = 0LL;
  IsPfnOriginalPteLost = 0;
  if ( (a2 & 1) != 0 )
  {
    IsPfnOriginalPteLost = MiIsPfnOriginalPteLost(BugCheckParameter2);
    if ( IsPfnOriginalPteLost )
    {
      if ( (a2 & 0x20) == 0 )
        v3 = MiCapturePageFileInfoInline(a3, 1LL);
    }
    else
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0 )
      {
        v12 = *(_QWORD *)(BugCheckParameter2 + 16);
        if ( (v12 & 4) != 0 )
        {
          *(_QWORD *)(BugCheckParameter2 + 16) &= ~4uLL;
          MiClearPageFileReservation(&v12);
          v3 = v12;
        }
        else
        {
          v12 = 0LL;
        }
      }
      MiSetPfnModified(BugCheckParameter2, 1);
    }
  }
  else if ( (a2 & 2) != 0 )
  {
    IsPfnOriginalPteLost = MiIsPfnOriginalPteLost(BugCheckParameter2);
    if ( !IsPfnOriginalPteLost )
    {
      a3 = BugCheckParameter2 + 16;
      MI_READ_PTE_LOCK_FREE(BugCheckParameter2 + 16);
    }
    v3 = MiCapturePageFileInfoInline(a3, 1LL);
    if ( v9 )
      *(_QWORD *)(BugCheckParameter2 + 16) = *v8 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  v13 = *(_DWORD *)(BugCheckParameter2 + 32);
  BYTE2(v13) &= ~8u;
  *(_DWORD *)(BugCheckParameter2 + 32) = v13;
  if ( (a2 & 8) != 0 )
  {
    v13 = *(_DWORD *)(BugCheckParameter2 + 32);
    HIBYTE(v13) &= 0xF8u;
    *(_DWORD *)(BugCheckParameter2 + 32) = v13;
  }
  v13 = *(_DWORD *)(BugCheckParameter2 + 32);
  v10 = (_WORD)v13 == 1;
  LOWORD(v13) = v13 - 1;
  *(_DWORD *)(BugCheckParameter2 + 32) = v13;
  if ( v10 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0
      && (IsPfnOriginalPteLost || (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0)
      && !(unsigned int)MiIsPfnCommitNotCharged(BugCheckParameter2) )
    {
      MiReturnCommit(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL)), 1LL, 0);
    }
    if ( (a2 & 4) != 0 )
    {
      MiRestoreTransitionPte(BugCheckParameter2, 1);
      MiInsertPageInFreeOrZeroedList(
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
        2LL);
    }
    else
    {
      MiPfnReferenceCountIsZero(
        BugCheckParameter2,
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
    }
  }
  return v3;
}
