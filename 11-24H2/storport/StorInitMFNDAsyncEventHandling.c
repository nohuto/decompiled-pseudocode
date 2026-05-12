/*
 * XREFs of StorInitMFNDAsyncEventHandling @ 0x14018E610
 * Callers:
 *     StorInitializeMFND @ 0x1400C445C (StorInitializeMFND.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

__int64 __fastcall StorInitMFNDAsyncEventHandling(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdx

  v2 = (((unsigned int)*(unsigned __int16 *)(a1[769] + 8) + 31) >> 3) & 0x1FFFFFFC;
  *(_QWORD *)(a1[770] + 48) = RaidAllocatePool(64LL, 4 * v2, 1179476306LL, a1[1]);
  v3 = a1[770];
  v4 = *(_QWORD *)(v3 + 48);
  if ( !v4 )
    return 3221225626LL;
  *(_QWORD *)(v3 + 56) = v4 + v2;
  *(_QWORD *)(a1[770] + 64) = *(_QWORD *)(a1[770] + 48) + 2 * v2;
  *(_QWORD *)(a1[770] + 72) = *(_QWORD *)(a1[770] + 48) + 3 * v2;
  return 0LL;
}
