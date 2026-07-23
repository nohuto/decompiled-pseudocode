/*
 * XREFs of MiCapturePfnVm @ 0x1404507C4
 * Callers:
 *     MiProcessCrcList @ 0x1409E6C70 (MiProcessCrcList.c)
 * Callees:
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1402FB220 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x1402FB290 (MiGetTopLevelPfn.c)
 *     ObReferenceObjectSafeWithTag @ 0x14031DCB0 (ObReferenceObjectSafeWithTag.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiProcessSuitableForCombining @ 0x1403435EC (MiProcessSuitableForCombining.c)
 *     MiCombineCandidate @ 0x140344930 (MiCombineCandidate.c)
 *     MiGetCombineDomain @ 0x1404509E4 (MiGetCombineDomain.c)
 *     MiCheckProcessCombineSequence @ 0x1404509FC (MiCheckProcessCombineSequence.c)
 *     VmCheckPageCombine @ 0x140A4B300 (VmCheckPageCombine.c)
 */

unsigned __int64 __fastcall MiCapturePfnVm(__int64 a1, ULONG_PTR a2, char a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // r14
  unsigned int v7; // r10d
  __int64 v9; // r11
  __int64 v10; // rdx
  unsigned int v11; // ebp
  char v12; // r13
  unsigned int v13; // r15d
  int v14; // ecx
  __int64 TopLevelPfn; // r12
  PEPROCESS PageTablePfnBuddyRaw; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  BOOL v20; // eax
  __int64 v21; // rcx
  unsigned __int64 v22; // rbx

  v5 = *(_QWORD **)a1;
  v7 = *(_DWORD *)(a1 + 136);
  v9 = *(_QWORD *)(a1 + 120);
  v10 = 0LL;
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_DWORD *)(a5 + 16) = 24;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= v7 )
    {
      v11 = 0;
      goto LABEL_6;
    }
    if ( a4 == *(_QWORD *)(v9 + 8 * v10) )
      break;
    v10 = (unsigned int)(v10 + 1);
  }
  v11 = 1;
  *(_QWORD *)(a5 + 24) = qword_140E2FF50;
LABEL_6:
  v12 = MiSafeLockPage(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
  if ( v12 == 17 )
    return 0LL;
  v13 = MiCombineCandidate(v5, a3, (_QWORD *)a2);
  if ( !v13 )
  {
    MiUnlockPage(a2, v12);
    return 0LL;
  }
  v14 = (*(_DWORD *)(a2 + 16) >> 5) & 0x1F;
  *(_QWORD *)(a5 + 8) = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  *(_DWORD *)(a5 + 16) = v14;
  if ( v13 == 1 )
  {
    TopLevelPfn = MiGetTopLevelPfn(a2);
    PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn);
    v20 = MiProcessSuitableForCombining((__int64)PageTablePfnBuddyRaw, v17, v18, v19);
    v22 = (v21 + 1024) & -(__int64)v20;
    if ( !v11
      && ((HIDWORD(PageTablePfnBuddyRaw[4].ThreadListHead.Flink) & 0x1000) != 0
       || !(unsigned int)MiCheckProcessCombineSequence(PageTablePfnBuddyRaw, *(unsigned int *)(a1 + 288))) )
    {
      v22 = 0LL;
    }
    if ( ObReferenceObjectSafeWithTag((__int64)PageTablePfnBuddyRaw, 0x62436D4Du) )
      *(_QWORD *)a5 = PageTablePfnBuddyRaw;
    else
      v22 = 0LL;
    if ( TopLevelPfn != a2 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v22 = (unsigned __int64)&unk_140E38100 & -(__int64)(v11 != 0);
  }
  MiUnlockPage(a2, v12);
  if ( v22 )
  {
    if ( !v11 )
      *(_QWORD *)(a5 + 24) = MiGetCombineDomain(v13, v22);
    if ( v13 == 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)a5 + 1648LL) )
        v22 &= -(__int64)((unsigned int)VmCheckPageCombine(*(_QWORD *)a5, v11) != 0);
    }
  }
  return v22;
}
