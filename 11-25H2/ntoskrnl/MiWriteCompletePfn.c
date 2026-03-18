/*
 * XREFs of MiWriteCompletePfn @ 0x14020D42C
 * Callers:
 *     MiUnlockStoreLockedPages @ 0x14020D220 (MiUnlockStoreLockedPages.c)
 *     MiGatherPagefilePages @ 0x1403C0730 (MiGatherPagefilePages.c)
 *     MiBuildMappedCluster @ 0x14040DB84 (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x14020D6D0 (MiCapturePageFileInfoInline.c)
 *     MiIsPfnOriginalPteLost @ 0x14020D7D0 (MiIsPfnOriginalPteLost.c)
 *     MiPfnReferenceCountIsZero @ 0x14021ADE0 (MiPfnReferenceCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRestoreTransitionPte @ 0x14024EBD8 (MiRestoreTransitionPte.c)
 *     MiClearPageFileReservation @ 0x1402CC084 (MiClearPageFileReservation.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiIsPfnCommitNotCharged @ 0x14033E4E0 (MiIsPfnCommitNotCharged.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 */

__int64 __fastcall MiWriteCompletePfn(ULONG_PTR a1, char a2, _DWORD *a3)
{
  __int64 v3; // rbx
  int IsPfnOriginalPteLost; // ebp
  __int64 v8; // rbx
  unsigned __int16 v9; // ax
  __int16 v10; // dx
  BOOL v11; // r10d
  _QWORD *v12; // r11
  int v13; // r10d
  bool v14; // zf
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+58h] [rbp+10h]

  v3 = 0LL;
  IsPfnOriginalPteLost = 0;
  if ( (a2 & 1) != 0 )
  {
    IsPfnOriginalPteLost = ((__int64 (*)(void))MiIsPfnOriginalPteLost)();
    if ( IsPfnOriginalPteLost )
    {
      if ( (a2 & 0x20) == 0 )
        v3 = MiCapturePageFileInfoInline(a3, 1LL, 0LL);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
      {
        v16 = *(_QWORD *)(a1 + 16);
        if ( (v16 & 4) != 0 )
        {
          *(_QWORD *)(a1 + 16) &= ~4uLL;
          MiClearPageFileReservation(&v16);
          v3 = v16;
        }
        else
        {
          v16 = 0LL;
        }
      }
      MiSetPfnModified(a1, 1LL);
    }
  }
  else if ( (a2 & 2) != 0 )
  {
    v8 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    IsPfnOriginalPteLost = MiIsPfnOriginalPteLost(a1);
    if ( IsPfnOriginalPteLost )
    {
      v11 = 0;
    }
    else
    {
      a3 = (_DWORD *)(a1 + 16);
      v9 = MI_READ_PTE_LOCK_FREE(a1 + 16);
      v10 = *(_WORD *)(*(_QWORD *)(v8 + 8LL * (v9 >> 12) + 18528) + 172LL);
      if ( (v10 & 0x10) != 0 || (v10 & 0x20) != 0 && (v9 & 2) != 0 )
      {
        v11 = 1;
      }
      else
      {
        v11 = 0;
        if ( (*a3 & 2) != 0 )
          v11 = ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 2;
      }
    }
    v3 = MiCapturePageFileInfoInline(a3, 1LL, v11);
    if ( v13 )
      *(_QWORD *)(a1 + 16) = *v12 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  v17 = *(_DWORD *)(a1 + 32);
  BYTE2(v17) &= ~8u;
  *(_DWORD *)(a1 + 32) = v17;
  if ( (a2 & 8) != 0 )
  {
    v17 = *(_DWORD *)(a1 + 32);
    HIBYTE(v17) &= 0xF8u;
    *(_DWORD *)(a1 + 32) = v17;
  }
  v17 = *(_DWORD *)(a1 + 32);
  v14 = (_WORD)v17 == 1;
  LOWORD(v17) = v17 - 1;
  *(_DWORD *)(a1 + 32) = v17;
  if ( v14 )
  {
    if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0
      && (IsPfnOriginalPteLost || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0)
      && !(unsigned int)MiIsPfnCommitNotCharged(a1) )
    {
      MiReturnCommit(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)), 1LL, 0LL);
    }
    if ( (a2 & 4) != 0 )
    {
      MiRestoreTransitionPte(a1);
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4));
    }
    else
    {
      MiPfnReferenceCountIsZero(a1, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4));
    }
  }
  return v3;
}
