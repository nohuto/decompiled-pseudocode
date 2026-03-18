/*
 * XREFs of MiRecheckCombineVm @ 0x140224E0C
 * Callers:
 *     MiCombineWithStandbyExisting @ 0x140224A84 (MiCombineWithStandbyExisting.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 * Callees:
 *     MiCombineCandidate @ 0x140210C20 (MiCombineCandidate.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1402C9D00 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x1402C9D70 (MiGetTopLevelPfn.c)
 */

__int64 __fastcall MiRecheckCombineVm(_QWORD *a1, char a2, _QWORD *a3, void *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 TopLevelPfn; // rax
  __int64 v9; // rdx
  __int64 PageTablePfnBuddyRaw; // rax
  __int64 v11; // r8

  v6 = MiCombineCandidate(a1, a2, a3);
  v7 = 0;
  if ( !v6 )
    return 0LL;
  if ( v6 == 2 )
    return a4 == &unk_140E37D80;
  TopLevelPfn = MiGetTopLevelPfn((ULONG_PTR)a3);
  PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn, v9, TopLevelPfn);
  if ( (_QWORD *)v11 != a3 )
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v7) = a4 == (void *)(PageTablePfnBuddyRaw + 1024);
  return v7;
}
