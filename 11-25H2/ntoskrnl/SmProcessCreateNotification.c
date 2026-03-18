/*
 * XREFs of SmProcessCreateNotification @ 0x1409C13D4
 * Callers:
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x140498E1C (SmpGetProcessPartition.c)
 *     SmpKeyedStoreCreate @ 0x1409C1434 (SmpKeyedStoreCreate.c)
 */

__int64 __fastcall SmProcessCreateNotification(__int64 a1)
{
  __int64 ProcessPartition; // rdx
  char v2; // r9

  if ( (*(_DWORD *)(a1 + 1532) & 0x40000000) != 0 )
    return 3221225659LL;
  if ( !dword_140E285B0 )
    return 3221225659LL;
  ProcessPartition = SmpGetProcessPartition(a1);
  if ( (*(_DWORD *)(ProcessPartition + 2224) & 0xC) == 0 )
    return 3221225659LL;
  if ( (v2 & 3) != 0 )
    return SmpKeyedStoreCreate(ProcessPartition + 2232);
  return 3221266944LL;
}
