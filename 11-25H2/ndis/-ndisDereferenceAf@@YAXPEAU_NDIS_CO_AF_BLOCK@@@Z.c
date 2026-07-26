/*
 * XREFs of ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140053640
 * Callers:
 *     NdisCoOidRequest @ 0x140052810 (NdisCoOidRequest.c)
 *     NdisCoOidRequestComplete @ 0x1400535C0 (NdisCoOidRequestComplete.c)
 *     NdisCmRegisterSapComplete @ 0x140054530 (NdisCmRegisterSapComplete.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x14005B4D0 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCmDeregisterSapComplete @ 0x1400845C0 (NdisCmDeregisterSapComplete.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1400D6C20 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisClMakeCall @ 0x1400D70F0 (NdisClMakeCall.c)
 *     NdisCmCloseCallComplete @ 0x1400D7290 (NdisCmCloseCallComplete.c)
 *     NdisCmMakeCallComplete @ 0x1400D75B0 (NdisCmMakeCallComplete.c)
 *     NdisCoRequest @ 0x1400D99E0 (NdisCoRequest.c)
 *     NdisCoRequestComplete @ 0x1400D9DB0 (NdisCoRequestComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDereferenceAf(KSPIN_LOCK *P)
{
  KIRQL v2; // al
  int v3; // edi

  v2 = KeAcquireSpinLockRaiseToDpc(P + 48);
  v3 = --*((_DWORD *)P + 3);
  KeReleaseSpinLock(P + 48, v2);
  if ( !v3 )
    ExFreePoolWithTag(P, 0);
}
