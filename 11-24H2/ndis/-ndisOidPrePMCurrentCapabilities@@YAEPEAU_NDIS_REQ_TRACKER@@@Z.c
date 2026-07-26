/*
 * XREFs of ?ndisOidPrePMCurrentCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B3440
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidPrePMCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@E@Z @ 0x140067A40 (-ndisOidPrePMCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@E@Z.c)
 */

__int64 __fastcall ndisOidPrePMCurrentCapabilities(struct _NDIS_REQ_TRACKER *a1)
{
  return ndisOidPrePMCapabilities(a1, 0);
}
