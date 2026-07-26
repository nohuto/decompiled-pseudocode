/*
 * XREFs of ?ndisOidPrePMCurrentCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BB1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidPrePMCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@E@Z @ 0x140083330 (-ndisOidPrePMCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@E@Z.c)
 */

__int64 __fastcall ndisOidPrePMCurrentCapabilities(struct _NDIS_REQ_TRACKER *a1)
{
  return ndisOidPrePMCapabilities(a1, 0);
}
