/*
 * XREFs of MiDeleteVaTail @ 0x1402E3CF0
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MiReacquireHigherPageTableLock @ 0x1402E2E70 (MiReacquireHigherPageTableLock.c)
 *     MiYieldPageTableWalk @ 0x1402E3540 (MiYieldPageTableWalk.c)
 * Callees:
 *     MiDecommitPagesTail @ 0x1402DBE74 (MiDecommitPagesTail.c)
 */

__int64 __fastcall MiDeleteVaTail(__int64 a1)
{
  MiDecommitPagesTail(**(_QWORD **)(a1 + 184));
  return 0LL;
}
