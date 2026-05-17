/*
 * XREFs of TppJobpFree @ 0x1800BF2F0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x1800BF960 (TpAdjustBindingCount.c)
 */

__int64 __fastcall TppJobpFree(_QWORD *a1)
{
  TpAdjustBindingCount(a1[18], 0xFFFFFFFFLL);
  *(a1 - 2) = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, (unsigned __int64)(a1 - 9));
}
