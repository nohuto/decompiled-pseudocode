/*
 * XREFs of MiMirrorNodeFreeZeroPages @ 0x1404F8568
 * Callers:
 *     MiWalkPagesOnLists @ 0x14026E7E0 (MiWalkPagesOnLists.c)
 *     MiMirrorReduceBlackWrites @ 0x14041D3B0 (MiMirrorReduceBlackWrites.c)
 * Callees:
 *     MiWalkAllFreeZeroLists @ 0x1404ABCF8 (MiWalkAllFreeZeroLists.c)
 */

__int64 __fastcall MiMirrorNodeFreeZeroPages(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  int v6; // [rsp+2Ch] [rbp-Ch]

  v6 = 0;
  v4 = a1;
  v5 = a3;
  return MiWalkAllFreeZeroLists(a2, (__int64)MiMirrorZeroFreeListsCallback, (__int64)&v4);
}
