/*
 * XREFs of ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1400860B0
 * Callers:
 *     NdisFDeregisterFilterDriver @ 0x1400A3DC0 (NdisFDeregisterFilterDriver.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x140141BCC (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 *     ?ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x14017CA70 (-ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     NdisDeregisterProtocol @ 0x14017D630 (NdisDeregisterProtocol.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1401893D0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140189A40 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ndisCloseRef(PKSPIN_LOCK SpinLock)
{
  KIRQL v2; // al
  bool v3; // zf
  bool v4; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v3 = *((_BYTE *)SpinLock + 10) == 0;
  *((_BYTE *)SpinLock + 10) = 1;
  v4 = v3;
  KeReleaseSpinLock(SpinLock, v2);
  return v4;
}
