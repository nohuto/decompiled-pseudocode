/*
 * XREFs of ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140052CC0
 * Callers:
 *     NdisCoOidRequest @ 0x140052810 (NdisCoOidRequest.c)
 *     NdisCmNotifyCloseAddressFamily @ 0x140054260 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisClRegisterSap @ 0x140054430 (NdisClRegisterSap.c)
 *     NdisClMakeCall @ 0x1400D70F0 (NdisClMakeCall.c)
 *     NdisCmDispatchIncomingCall @ 0x1400D7460 (NdisCmDispatchIncomingCall.c)
 *     NdisCoRequest @ 0x1400D99E0 (NdisCoRequest.c)
 *     NdisMCmOidRequest @ 0x1400D9E80 (NdisMCmOidRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisReferenceAf(struct _NDIS_CO_AF_BLOCK *a1)
{
  unsigned __int8 v2; // di
  KIRQL v3; // al

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  if ( (a1->Flags & 0x80000000) == 0 )
  {
    ++a1->References;
    v2 = 1;
  }
  KeReleaseSpinLock(&a1->Lock, v3);
  return v2;
}
