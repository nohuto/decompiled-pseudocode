/*
 * XREFs of MiCommitPageTableRangesForVad @ 0x1403C7634
 * Callers:
 *     MiInsertChildVads @ 0x14091A854 (MiInsertChildVads.c)
 * Callees:
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140362450 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1403C8D90 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiCommitPageTablesForVad @ 0x140919270 (MiCommitPageTablesForVad.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCommitPageTableRangesForVad(__int64 a1)
{
  _QWORD *v1; // rbx
  int v2; // esi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 Process; // r13
  _QWORD *v7; // r12
  unsigned __int64 v8; // rbp
  _QWORD *v9; // r14

  v1 = *(_QWORD **)(a1 + 8);
  v2 = 0;
  if ( !v1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --*(_QWORD *)(a1 + 16);
  LOCK_PAGE_TABLE_COMMITMENT(CurrentThread, Process);
  do
  {
    v7 = (_QWORD *)*v1;
    if ( v2 >= 0 )
    {
      v8 = 0LL;
      if ( v1[1] )
      {
        v9 = v1 + 2;
        do
        {
          v2 = MiCommitPageTablesForVad(
                 a1,
                 *v9 & 0xFFFFFFFFFFE00000uLL,
                 (*v9 & 0xFFFFFFFFFFE00000uLL) + ((*v9 & 0x1FFFFFLL) << 21) + 0x1FFFFF);
          if ( v2 < 0 )
            break;
          ++v8;
          ++v9;
        }
        while ( v8 < v1[1] );
      }
    }
    ExFreePoolWithTag(v1, 0);
    v1 = v7;
  }
  while ( v7 );
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  *(_QWORD *)(a1 + 8) = 0LL;
  result = (unsigned int)v2;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
