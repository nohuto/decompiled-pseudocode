/*
 * XREFs of MiRemoveIoPageExclusion @ 0x140677BDC
 * Callers:
 *     MiMapNewPfns @ 0x1407E9C7C (MiMapNewPfns.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiUnlockIoPfnTree @ 0x14038F980 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x14038FA2C (MiLockIoPfnTree.c)
 */

void __fastcall MiRemoveIoPageExclusion(__int64 a1, __int64 a2)
{
  char v3; // bl

  v3 = MiLockIoPfnTree(2LL, a2);
  RtlAvlRemoveNode((unsigned __int64 *)&xmmword_140E37340 + 1, a1);
  MiUnlockIoPfnTree(v3, 2);
}
