/*
 * XREFs of CmpInsertKeyHash @ 0x1407DB4D8
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpRehashKcbSubtree @ 0x1407DB734 (CmpRehashKcbSubtree.c)
 * Callees:
 *     CmpAddKeyHashToEntry @ 0x140A45748 (CmpAddKeyHashToEntry.c)
 */

__int64 __fastcall CmpInsertKeyHash(__int64 a1, _DWORD *a2)
{
  return CmpAddKeyHashToEntry(
           a2,
           *(_QWORD *)(a1 + 1648)
         + 24LL
         * ((*(_DWORD *)(a1 + 1656) - 1) & ((101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))),
           0LL);
}
