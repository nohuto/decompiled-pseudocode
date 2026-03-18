/*
 * XREFs of MiMirrorPurgePartitionPages @ 0x1404B45F0
 * Callers:
 *     <none>
 * Callees:
 *     MiPurgePartitionStandby @ 0x140220D50 (MiPurgePartitionStandby.c)
 *     MiWalkAllFreeZeroLists @ 0x1404B1468 (MiWalkAllFreeZeroLists.c)
 *     MiHugePurgeZeroList @ 0x140670894 (MiHugePurgeZeroList.c)
 */

__int64 __fastcall MiMirrorPurgePartitionPages(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = MiPurgePartitionStandby(a1, a2, a3);
    *(_BYTE *)(a1 + 16100) = 0;
  }
  if ( *(_BYTE *)(a1 + 16101) )
  {
    MiWalkAllFreeZeroLists(a1, (__int64)MiPurgeZeroListHeads, 0LL);
    result = MiHugePurgeZeroList(a1);
    *(_BYTE *)(a1 + 16101) = 0;
  }
  return result;
}
