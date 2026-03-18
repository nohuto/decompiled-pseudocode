/*
 * XREFs of MiDeleteVaTail @ 0x1404701A0
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MiReacquireHigherPageTableLock @ 0x1402E7AC0 (MiReacquireHigherPageTableLock.c)
 *     MiYieldPageTableWalk @ 0x1402E8120 (MiYieldPageTableWalk.c)
 * Callees:
 *     MiDecommitPagesTail @ 0x1402B2194 (MiDecommitPagesTail.c)
 */

__int64 __fastcall MiDeleteVaTail(__int64 a1, unsigned __int64 a2)
{
  MiDecommitPagesTail(**(_QWORD **)(a1 + 184), a2);
  return 0LL;
}
