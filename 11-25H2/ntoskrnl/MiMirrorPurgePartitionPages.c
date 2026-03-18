/*
 * XREFs of MiMirrorPurgePartitionPages @ 0x1404B4CD0
 * Callers:
 *     <none>
 * Callees:
 *     MiPurgePartitionStandby @ 0x140342C30 (MiPurgePartitionStandby.c)
 *     MiWalkAllFreeZeroLists @ 0x1404B0468 (MiWalkAllFreeZeroLists.c)
 *     MiHugePurgeZeroList @ 0x140664DEC (MiHugePurgeZeroList.c)
 */

__int64 __fastcall MiMirrorPurgePartitionPages(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = MiPurgePartitionStandby(a1, a2);
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
