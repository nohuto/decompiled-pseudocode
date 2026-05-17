/*
 * XREFs of TppIopFree @ 0x1800BF640
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     TpAdjustBindingCount @ 0x1800BF960 (TpAdjustBindingCount.c)
 */

__int64 __fastcall TppIopFree(_QWORD *a1)
{
  TpAdjustBindingCount(a1[18], 0xFFFFFFFFLL);
  a1[32] = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, (unsigned __int64)a1);
}
