/*
 * XREFs of MiRemoveIoPageExclusion @ 0x14066AFAC
 * Callers:
 *     MiMapNewPfns @ 0x1407D97EC (MiMapNewPfns.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     MiUnlockIoPfnTree @ 0x1403922D8 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x140392384 (MiLockIoPfnTree.c)
 */

void __fastcall MiRemoveIoPageExclusion(__int64 a1)
{
  char v2; // bl

  v2 = MiLockIoPfnTree(2LL);
  RtlAvlRemoveNode((unsigned __int64 *)&xmmword_140E36FC0 + 1, a1);
  MiUnlockIoPfnTree(v2, 2);
}
