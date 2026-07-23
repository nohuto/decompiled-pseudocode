/*
 * XREFs of MiWriteCompletePfn @ 0x1402FA874
 * Callers:
 *     MiBuildMappedCluster @ 0x1402EC958 (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 *     MiUnlockStoreLockedPages @ 0x1402FA670 (MiUnlockStoreLockedPages.c)
 * Callees:
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiCapturePageFileInfoInline @ 0x1402FAB00 (MiCapturePageFileInfoInline.c)
 *     MiIsPfnOriginalPteLost @ 0x1402FABFC (MiIsPfnOriginalPteLost.c)
 *     MiPfnReferenceCountIsZero @ 0x140300260 (MiPfnReferenceCountIsZero.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
 *     MiIsPfnCommitNotCharged @ 0x140345F70 (MiIsPfnCommitNotCharged.c)
 */

__int64 __fastcall MiWriteCompletePfn(ULONG_PTR a1, char a2, ULONG_PTR a3)
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
    IsPfnOriginalPteLost = MiIsPfnOriginalPteLost(a1);
    if ( IsPfnOriginalPteLost )
    {
      if ( (a2 & 0x20) == 0 )
        v3 = MiCapturePageFileInfoInline(a3, 1LL);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
      {
        v12 = *(_QWORD *)(a1 + 16);
        if ( (v12 & 4) != 0 )
        {
          *(_QWORD *)(a1 + 16) &= ~4uLL;
          MiClearPageFileReservation(&v12);
          v3 = v12;
        }
        else
        {
          v12 = 0LL;
        }
      }
      MiSetPfnModified(a1, 1);
    }
  }
  else if ( (a2 & 2) != 0 )
  {
    IsPfnOriginalPteLost = MiIsPfnOriginalPteLost(a1);
    if ( !IsPfnOriginalPteLost )
    {
      a3 = a1 + 16;
      MI_READ_PTE_LOCK_FREE(a1 + 16);
    }
    v3 = MiCapturePageFileInfoInline(a3, 1LL);
    if ( v9 )
      *(_QWORD *)(a1 + 16) = *v8 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  v13 = *(_DWORD *)(a1 + 32);
  BYTE2(v13) &= ~8u;
  *(_DWORD *)(a1 + 32) = v13;
  if ( (a2 & 8) != 0 )
  {
    v13 = *(_DWORD *)(a1 + 32);
    HIBYTE(v13) &= 0xF8u;
    *(_DWORD *)(a1 + 32) = v13;
  }
  v13 = *(_DWORD *)(a1 + 32);
  v10 = (_WORD)v13 == 1;
  LOWORD(v13) = v13 - 1;
  *(_DWORD *)(a1 + 32) = v13;
  if ( v10 )
  {
    if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0
      && (IsPfnOriginalPteLost || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0)
      && !(unsigned int)MiIsPfnCommitNotCharged(a1) )
    {
      MiReturnCommit(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)), 1LL, 0);
    }
    if ( (a2 & 4) != 0 )
    {
      MiRestoreTransitionPte(a1, 1);
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4), 2LL);
    }
    else
    {
      MiPfnReferenceCountIsZero(a1, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4));
    }
  }
  return v3;
}
