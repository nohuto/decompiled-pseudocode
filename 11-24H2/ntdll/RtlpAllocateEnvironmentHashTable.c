/*
 * XREFs of RtlpAllocateEnvironmentHashTable @ 0x180086E48
 * Callers:
 *     RtlpInsertEnvironmentHashTableEntry @ 0x180086630 (RtlpInsertEnvironmentHashTableEntry.c)
 *     RtlpSetupEnvironmentHashTable @ 0x18011B09C (RtlpSetupEnvironmentHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocateEnvironmentHashTable(unsigned __int64 a1)
{
  if ( NtCurrentPeb()->ProcessHeap )
    return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, a1);
  else
    return 0LL;
}
