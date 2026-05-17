/*
 * XREFs of RtlpAllocateEnvironmentHashTable @ 0x1800AF1D8
 * Callers:
 *     RtlpInsertEnvironmentHashTableEntry @ 0x1800AE9C0 (RtlpInsertEnvironmentHashTableEntry.c)
 *     RtlpSetupEnvironmentHashTable @ 0x1800E61A4 (RtlpSetupEnvironmentHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocateEnvironmentHashTable(unsigned __int64 a1)
{
  if ( NtCurrentPeb()->ProcessHeap )
    return RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, a1);
  else
    return 0LL;
}
