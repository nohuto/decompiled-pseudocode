/*
 * XREFs of WmipDeliverWnodeToDS @ 0x140A962E8
 * Callers:
 *     WmipDereferenceEvent @ 0x1409C9CE0 (WmipDereferenceEvent.c)
 *     WmipEnableCollectionForNewGuid @ 0x1409CB9CC (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1409CFA88 (WmipDisableCollectionForRemovedGuid.c)
 * Callees:
 *     WmipSendWmiIrp @ 0x1409CD990 (WmipSendWmiIrp.c)
 */

__int64 __fastcall WmipDeliverWnodeToDS(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  return WmipSendWmiIrp(a1, *(unsigned int *)(a2 + 56), a3 + 24, a4, a3, &v5);
}
