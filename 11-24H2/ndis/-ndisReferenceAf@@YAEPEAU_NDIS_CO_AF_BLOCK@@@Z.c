/*
 * XREFs of ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1400606E0
 * Callers:
 *     NdisClRegisterSap @ 0x140060410 (NdisClRegisterSap.c)
 *     NdisCmNotifyCloseAddressFamily @ 0x140060510 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisClMakeCall @ 0x1400CFAB0 (NdisClMakeCall.c)
 *     NdisCmDispatchIncomingCall @ 0x1400CFE20 (NdisCmDispatchIncomingCall.c)
 *     NdisCoRequest @ 0x1400D23A0 (NdisCoRequest.c)
 *     NdisMCmOidRequest @ 0x1400D2840 (NdisMCmOidRequest.c)
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
