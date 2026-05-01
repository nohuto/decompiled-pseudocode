/*
 * XREFs of RmpClientWnfDestroySubscription @ 0x180004DD0
 * Callers:
 *     HampConnectionAllocateState @ 0x180004640 (HampConnectionAllocateState.c)
 *     HampConnectionStart @ 0x180004BF0 (HampConnectionStart.c)
 *     HampConnectionDestroy @ 0x180004D70 (HampConnectionDestroy.c)
 *     HamIpcChannelRundown @ 0x180005458 (HamIpcChannelRundown.c)
 * Callees:
 *     RmSubscriptionRundown @ 0x1800052AC (RmSubscriptionRundown.c)
 */

__int64 __fastcall RmpClientWnfDestroySubscription(__int64 a1)
{
  RmSubscriptionRundown();
  if ( *(_QWORD *)(a1 + 56) )
    TpReleaseWork();
  return HamFreeBuffer(a1);
}
