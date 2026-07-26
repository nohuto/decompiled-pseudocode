/*
 * XREFs of ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140006DD0
 * Callers:
 *     NdisCmDeregisterSapComplete @ 0x140005470 (NdisCmDeregisterSapComplete.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1400068E0 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCoOidRequestComplete @ 0x140006D50 (NdisCoOidRequestComplete.c)
 *     NdisCmRegisterSapComplete @ 0x140060750 (NdisCmRegisterSapComplete.c)
 *     NdisCoOidRequest @ 0x140089750 (NdisCoOidRequest.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1400CF5E0 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisClMakeCall @ 0x1400CFAB0 (NdisClMakeCall.c)
 *     NdisCmCloseCallComplete @ 0x1400CFC50 (NdisCmCloseCallComplete.c)
 *     NdisCmMakeCallComplete @ 0x1400CFF70 (NdisCmMakeCallComplete.c)
 *     NdisCoRequest @ 0x1400D23A0 (NdisCoRequest.c)
 *     NdisCoRequestComplete @ 0x1400D2770 (NdisCoRequestComplete.c)
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
