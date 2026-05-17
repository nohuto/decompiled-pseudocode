/*
 * XREFs of TppIopFree @ 0x18003B260
 * Callers:
 *     <none>
 * Callees:
 *     TpAdjustBindingCount @ 0x18003B580 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall TppIopFree(__int64 a1)
{
  TpAdjustBindingCount(*(_QWORD *)(a1 + 144), 0xFFFFFFFFLL);
  *(_QWORD *)(a1 + 256) = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x40000), a1);
}
