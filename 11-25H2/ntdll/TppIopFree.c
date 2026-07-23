/*
 * XREFs of TppIopFree @ 0x18003B260
 * Callers:
 *     <none>
 * Callees:
 *     TpAdjustBindingCount @ 0x18003B580 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall TppIopFree(_QWORD *BaseAddress)
{
  TpAdjustBindingCount(BaseAddress[18], 0xFFFFFFFFLL);
  BaseAddress[32] = 0LL;
  TppCleanupGroupMemberDestroy(BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, BaseAddress);
}
