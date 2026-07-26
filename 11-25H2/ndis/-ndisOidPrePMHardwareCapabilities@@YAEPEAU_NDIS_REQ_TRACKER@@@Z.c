/*
 * XREFs of ?ndisOidPrePMHardwareCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14009AEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidPrePMCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@E@Z @ 0x140083330 (-ndisOidPrePMCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@E@Z.c)
 */

__int64 __fastcall ndisOidPrePMHardwareCapabilities(struct _NDIS_REQ_TRACKER *a1)
{
  return ndisOidPrePMCapabilities(a1, 1);
}
