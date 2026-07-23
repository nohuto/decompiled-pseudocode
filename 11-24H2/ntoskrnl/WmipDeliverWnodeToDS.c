/*
 * XREFs of WmipDeliverWnodeToDS @ 0x140A92B18
 * Callers:
 *     WmipDisableCollectionForRemovedGuid @ 0x1409B0E04 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipEnableCollectionForNewGuid @ 0x1409B20EC (WmipEnableCollectionForNewGuid.c)
 *     WmipDereferenceEvent @ 0x140AB08D8 (WmipDereferenceEvent.c)
 * Callees:
 *     WmipSendWmiIrp @ 0x1409B2964 (WmipSendWmiIrp.c)
 */

__int64 __fastcall WmipDeliverWnodeToDS(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  return WmipSendWmiIrp(a1, *(unsigned int *)(a2 + 56), a3 + 24, a4, a3, &v5);
}
