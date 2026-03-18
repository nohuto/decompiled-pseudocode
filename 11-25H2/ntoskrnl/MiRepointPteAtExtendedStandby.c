/*
 * XREFs of MiRepointPteAtExtendedStandby @ 0x1406795EC
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiRestoreTransitionPte @ 0x14024EBD8 (MiRestoreTransitionPte.c)
 *     MiReleasePageListLock @ 0x1402C6160 (MiReleasePageListLock.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiReleaseFreshPageLocked @ 0x140342C10 (MiReleaseFreshPageLocked.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 */

_BOOL8 __fastcall MiRepointPteAtExtendedStandby(
        __int64 *BugCheckParameter2,
        __int16 a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5)
{
  BOOL v6; // ebp
  char v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rbx
  int v14; // [rsp+58h] [rbp+20h] BYREF

  v6 = 1;
  v10 = MiUnlinkPageFromListEx((ULONG_PTR)BugCheckParameter2, (*a4 != 0) + 1);
  MiReleasePageListLock(a3, (__int64)a4);
  if ( (v10 & 3) != 0 )
  {
    if ( (v10 & 2) != 0 )
      v6 = (a2 & 0x200) != 0;
    MiRestoreTransitionPte((ULONG_PTR)BugCheckParameter2, 0);
  }
  else
  {
    v11 = a5;
    v12 = 48LL * *(_QWORD *)(a5 + 8) - 0x220000000000LL;
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    if ( (unsigned int)MiReplaceTransitionPage(BugCheckParameter2, v12, 9, 3) )
    {
      MiInsertPageInList(v12, 4u);
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      MiReleaseFreshPageLocked(v12);
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiRestoreTransitionPte((ULONG_PTR)BugCheckParameter2, 0);
    }
    *(_QWORD *)(v11 + 8) = -1LL;
  }
  return v6;
}
