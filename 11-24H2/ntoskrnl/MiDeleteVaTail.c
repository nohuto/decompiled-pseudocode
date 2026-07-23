/*
 * XREFs of MiDeleteVaTail @ 0x140462720
 * Callers:
 *     MiReacquireHigherPageTableLock @ 0x14020B170 (MiReacquireHigherPageTableLock.c)
 *     MiYieldPageTableWalk @ 0x14020B840 (MiYieldPageTableWalk.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiDecommitPagesTail @ 0x14023D754 (MiDecommitPagesTail.c)
 */

__int64 __fastcall MiDeleteVaTail(__int64 a1)
{
  MiDecommitPagesTail(**(_QWORD **)(a1 + 184));
  return 0LL;
}
