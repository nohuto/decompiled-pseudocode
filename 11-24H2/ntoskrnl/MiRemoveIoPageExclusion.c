/*
 * XREFs of MiRemoveIoPageExclusion @ 0x140676A0C
 * Callers:
 *     MiMapNewPfns @ 0x1407E96AC (MiMapNewPfns.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     MiUnlockIoPfnTree @ 0x1403D0468 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x1403D0514 (MiLockIoPfnTree.c)
 */

void __fastcall MiRemoveIoPageExclusion(__int64 a1, __int64 a2)
{
  char v3; // bl

  v3 = MiLockIoPfnTree(2LL, a2);
  RtlAvlRemoveNode((unsigned __int64 *)&xmmword_140E37200 + 1, a1);
  MiUnlockIoPfnTree(v3, 2);
}
