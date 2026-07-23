/*
 * XREFs of MiRepointPteAtExtendedStandby @ 0x140685FA4
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiReleasePageListLock @ 0x140218800 (MiReleasePageListLock.c)
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiReleaseFreshPageLocked @ 0x14043C168 (MiReleaseFreshPageLocked.c)
 */

_BOOL8 __fastcall MiRepointPteAtExtendedStandby(ULONG_PTR a1, __int16 a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  BOOL v6; // ebp
  char v10; // r15
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned int v16; // [rsp+58h] [rbp+20h] BYREF

  v6 = 1;
  v10 = MiUnlinkPageFromListEx(a1, (*a4 != 0) + 1);
  MiReleasePageListLock(a3, (__int64)a4, v11, v12);
  if ( (v10 & 3) != 0 )
  {
    if ( (v10 & 2) != 0 )
      v6 = (a2 & 0x200) != 0;
    MiRestoreTransitionPte(a1, 0);
  }
  else
  {
    v13 = a5;
    v14 = 48LL * *(_QWORD *)(a5 + 8) - 0x220000000000LL;
    v16 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v16);
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    if ( (unsigned int)MiReplaceTransitionPage(a1, v14, 9, 3) )
    {
      MiInsertPageInList(v14, 4u);
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      MiReleaseFreshPageLocked(v14);
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiRestoreTransitionPte(a1, 0);
    }
    *(_QWORD *)(v13 + 8) = -1LL;
  }
  return v6;
}
