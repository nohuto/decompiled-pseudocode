/*
 * XREFs of MiCapturePfnVm @ 0x14045C04C
 * Callers:
 *     MiProcessCrcList @ 0x1409F43E8 (MiProcessCrcList.c)
 * Callees:
 *     MiCombineCandidate @ 0x140210C20 (MiCombineCandidate.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiProcessSuitableForCombining @ 0x140239DD8 (MiProcessSuitableForCombining.c)
 *     ObReferenceObjectSafeWithTag @ 0x140299100 (ObReferenceObjectSafeWithTag.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1402C9D00 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x1402C9D70 (MiGetTopLevelPfn.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiGetCombineDomain @ 0x14045C26C (MiGetCombineDomain.c)
 *     MiCheckProcessCombineSequence @ 0x14045C284 (MiCheckProcessCombineSequence.c)
 *     VmCheckPageCombine @ 0x140A4FC18 (VmCheckPageCombine.c)
 */

unsigned __int64 __fastcall MiCapturePfnVm(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // r14
  unsigned int v7; // r10d
  char v8; // bl
  __int64 v9; // r11
  __int64 v10; // rdx
  unsigned int v11; // ebp
  char v12; // r13
  unsigned int v13; // r15d
  int v14; // ecx
  __int64 TopLevelPfn; // r12
  PEPROCESS PageTablePfnBuddyRaw; // r14
  BOOL v17; // eax
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx

  v5 = *(_QWORD **)a1;
  v7 = *(_DWORD *)(a1 + 136);
  v8 = a3;
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
  *(_QWORD *)(a5 + 24) = qword_140E2FBD0;
LABEL_6:
  v12 = MiSafeLockPage(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4), v10, a3);
  if ( v12 == 17 )
    return 0LL;
  v13 = MiCombineCandidate(v5, v8, (_QWORD *)a2);
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
    v17 = MiProcessSuitableForCombining((__int64)PageTablePfnBuddyRaw);
    v19 = (v18 + 1024) & -(__int64)v17;
    if ( !v11
      && ((HIDWORD(PageTablePfnBuddyRaw[4].ThreadListHead.Flink) & 0x1000) != 0
       || !(unsigned int)MiCheckProcessCombineSequence(PageTablePfnBuddyRaw, *(unsigned int *)(a1 + 288))) )
    {
      v19 = 0LL;
    }
    if ( ObReferenceObjectSafeWithTag((__int64)PageTablePfnBuddyRaw, 0x62436D4Du) )
      *(_QWORD *)a5 = PageTablePfnBuddyRaw;
    else
      v19 = 0LL;
    if ( TopLevelPfn != a2 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v19 = (unsigned __int64)&unk_140E37D80 & -(__int64)(v11 != 0);
  }
  MiUnlockPage(a2, v12);
  if ( v19 )
  {
    if ( !v11 )
      *(_QWORD *)(a5 + 24) = MiGetCombineDomain(v13, v19);
    if ( v13 == 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)a5 + 1648LL) )
        v19 &= -(__int64)((unsigned int)VmCheckPageCombine(*(_QWORD *)a5, v11) != 0);
    }
  }
  return v19;
}
