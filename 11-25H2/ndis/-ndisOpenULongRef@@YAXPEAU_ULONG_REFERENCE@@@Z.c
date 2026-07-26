/*
 * XREFs of ?ndisOpenULongRef@@YAXPEAU_ULONG_REFERENCE@@@Z @ 0x1400CC9FC
 * Callers:
 *     ?ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017B6D0 (-ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisOpenULongRef(PKSPIN_LOCK SpinLock)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  *((_BYTE *)SpinLock + 12) = 0;
  KeReleaseSpinLock(SpinLock, v2);
}
