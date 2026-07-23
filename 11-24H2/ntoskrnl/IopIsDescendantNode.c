/*
 * XREFs of IopIsDescendantNode @ 0x1409BD468
 * Callers:
 *     PnpQueuePendingSurpriseRemoval @ 0x1409BCDB8 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409BD1E4 (PnpUnlinkDeviceRemovalRelations.c)
 * Callees:
 *     PipIsDeviceInDeviceObjectList @ 0x1409BDEE0 (PipIsDeviceInDeviceObjectList.c)
 */

__int64 __fastcall IopIsDescendantNode(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdx

  if ( a2 )
    v2 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  else
    v2 = 0LL;
  v3 = *(_QWORD *)(v2 + 16);
  if ( !v3 )
    v3 = *(_QWORD *)(v2 + 648) & 0xFFFFFFFFFFFFFFFEuLL;
  return PipIsDeviceInDeviceObjectList(*a1, *(_QWORD *)(v3 + 32), 0LL);
}
