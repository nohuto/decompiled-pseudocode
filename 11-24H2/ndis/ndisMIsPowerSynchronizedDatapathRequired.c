/*
 * XREFs of ndisMIsPowerSynchronizedDatapathRequired @ 0x14007E900
 * Callers:
 *     ?ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017EDB0 (-ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisMIsPowerSynchronizedDatapathRequired(_DWORD *a1)
{
  if ( (a1[30] & 0x80u) == 0 )
  {
    if ( (a1[978] & 0x3000) == 0x2000 )
      return 1;
    if ( (int)a1[468] < 0 )
      return ndisNoPauseOnSuspend != 0;
  }
  return 0;
}
