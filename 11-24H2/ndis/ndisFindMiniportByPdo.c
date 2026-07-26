/*
 * XREFs of ndisFindMiniportByPdo @ 0x14005D420
 * Callers:
 *     ndisMiniportDeviceReadyNotification @ 0x14016B220 (ndisMiniportDeviceReadyNotification.c)
 * Callees:
 *     <none>
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisFindMiniportByPdo(_DEVICE_OBJECT *a1)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *i; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  for ( i = ndisMiniportList; i; i = i->NextGlobalMiniport )
  {
    if ( i->PhysicalDeviceObject == a1 )
    {
      KeReleaseSpinLock(&ndisMiniportListLock, v2);
      return i;
    }
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v2);
  return 0LL;
}
