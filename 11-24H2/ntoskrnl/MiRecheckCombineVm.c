/*
 * XREFs of MiRecheckCombineVm @ 0x1403140D4
 * Callers:
 *     MiCombineWithStandbyExisting @ 0x140313D4C (MiCombineWithStandbyExisting.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 * Callees:
 *     MiCombineCandidate @ 0x14020C0F0 (MiCombineCandidate.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x140227FA0 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x140228010 (MiGetTopLevelPfn.c)
 */

__int64 __fastcall MiRecheckCombineVm(_QWORD *a1, unsigned int a2, _QWORD *a3, struct _LIST_ENTRY **a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 TopLevelPfn; // rax
  PEPROCESS PageTablePfnBuddyRaw; // rax
  __int64 v10; // r8

  v6 = MiCombineCandidate(a1, a2, a3);
  v7 = 0;
  if ( !v6 )
    return 0LL;
  if ( v6 == 2 )
    return a4 == (struct _LIST_ENTRY **)&unk_140E37FC0;
  TopLevelPfn = MiGetTopLevelPfn((ULONG_PTR)a3);
  PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn);
  if ( (_QWORD *)v10 != a3 )
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v7) = a4 == &PageTablePfnBuddyRaw[2].ReadyListHead.Blink;
  return v7;
}
