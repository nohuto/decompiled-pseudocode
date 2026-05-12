/*
 * XREFs of RaidGetQosEntryForDeviceEntry @ 0x140055F24
 * Callers:
 *     RiNormalizeDeviceQueue @ 0x1400138C0 (RiNormalizeDeviceQueue.c)
 *     RiEnqueueDeviceQueue @ 0x140014938 (RiEnqueueDeviceQueue.c)
 *     StorNextIoGatewayItem @ 0x140029150 (StorNextIoGatewayItem.c)
 *     StorRemoveIoGatewayItem @ 0x140050F10 (StorRemoveIoGatewayItem.c)
 *     RaidRemovePendingDeviceQueue @ 0x140053084 (RaidRemovePendingDeviceQueue.c)
 *     StorDrainPendingIoGatewayItems @ 0x1400A6420 (StorDrainPendingIoGatewayItems.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetQosEntryForDeviceEntry(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  if ( *(_BYTE *)(v1 + 2) == 40 )
    v2 = *(_QWORD *)(v1 + 96);
  else
    v2 = *(_QWORD *)(v1 + 48);
  return v2 + 24;
}
