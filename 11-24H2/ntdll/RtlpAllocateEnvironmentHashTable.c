/*
 * XREFs of RtlpAllocateEnvironmentHashTable @ 0x180008CF8
 * Callers:
 *     RtlpInsertEnvironmentHashTableEntry @ 0x1800084E0 (RtlpInsertEnvironmentHashTableEntry.c)
 *     RtlpSetupEnvironmentHashTable @ 0x1801192CC (RtlpSetupEnvironmentHashTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateEnvironmentHashTable(SIZE_T a1)
{
  if ( NtCurrentPeb()->ProcessHeap )
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, a1);
  else
    return 0LL;
}
