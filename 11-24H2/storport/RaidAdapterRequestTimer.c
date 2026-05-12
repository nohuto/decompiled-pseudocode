/*
 * XREFs of RaidAdapterRequestTimer @ 0x140001350
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x140001040 (RaidAdapterDeferredRoutine.c)
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidAdapterRequestTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( !a3 )
    return KeCancelTimer((PKTIMER)(a1 + 1584));
  *(_QWORD *)(a1 + 1840) = a2;
  return KeSetCoalescableTimer((PKTIMER)(a1 + 1584), (LARGE_INTEGER)(-10LL * a3), 0, 0, (PKDPC)(a1 + 1520));
}
