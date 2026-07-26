/*
 * XREFs of ?ndisLWM5RestartMinport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_RESTART_PARAMETERS@@@Z @ 0x14008D020
 * Callers:
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x14017F6D0 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisLWM5RestartMinport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_RESTART_PARAMETERS *a2)
{
  KIRQL v3; // al

  v3 = KeAcquireSpinLockRaiseToDpc(&a1->RecvLock);
  a1->RecvState = NdisMiniportRunning;
  a1->MiniportRecvLockThread = 0LL;
  KeReleaseSpinLock(&a1->RecvLock, v3);
  return 0LL;
}
