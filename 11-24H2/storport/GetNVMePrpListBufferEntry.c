/*
 * XREFs of GetNVMePrpListBufferEntry @ 0x14011A3B0
 * Callers:
 *     NvmeProcessPendingLowPriorityIo @ 0x140123160 (NvmeProcessPendingLowPriorityIo.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall GetNVMePrpListBufferEntry(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  PSLIST_ENTRY v3; // rax

  v2 = 0LL;
  v3 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 880) + 8LL * a2));
  if ( v3 )
    return v3;
  return (PSLIST_ENTRY)v2;
}
