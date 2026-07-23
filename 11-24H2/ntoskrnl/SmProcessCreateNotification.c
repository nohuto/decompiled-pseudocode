/*
 * XREFs of SmProcessCreateNotification @ 0x140A38394
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x1404933CC (SmpGetProcessPartition.c)
 *     SmpKeyedStoreCreate @ 0x140A383F4 (SmpKeyedStoreCreate.c)
 */

__int64 __fastcall SmProcessCreateNotification(__int64 a1)
{
  __int64 ProcessPartition; // rdx
  char v2; // r9

  if ( (*(_DWORD *)(a1 + 1532) & 0x40000000) != 0 )
    return 3221225659LL;
  if ( !dword_140E28930 )
    return 3221225659LL;
  ProcessPartition = SmpGetProcessPartition(a1);
  if ( (*(_DWORD *)(ProcessPartition + 2224) & 0xC) == 0 )
    return 3221225659LL;
  if ( (v2 & 3) != 0 )
    return SmpKeyedStoreCreate(ProcessPartition + 2232);
  return 3221266944LL;
}
