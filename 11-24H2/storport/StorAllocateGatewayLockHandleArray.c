/*
 * XREFs of StorAllocateGatewayLockHandleArray @ 0x1400A62A8
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x140037B0C (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

bool __fastcall StorAllocateGatewayLockHandleArray(__int64 a1)
{
  __int64 v2; // rax
  __int64 Pool; // rax

  *(_QWORD *)(a1 + 6072) = 0LL;
  v2 = *(unsigned int *)(a1 + 968);
  if ( (unsigned int)v2 <= 1 )
    return 0;
  Pool = RaidAllocatePool(64LL, 24 * v2, 1095197010LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 6072) = Pool;
  return Pool != 0;
}
