/*
 * XREFs of ?ndisIsPMProtocolOffloadSupported@@YAEW4_NDIS_PM_PROTOCOL_OFFLOAD_TYPE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400066A0
 * Callers:
 *     ?ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x140006230 (-ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID.c)
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400063B0 (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B4AA4 (-ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsPMProtocolOffloadSupported(
        enum _NDIS_PM_PROTOCOL_OFFLOAD_TYPE a1,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int v2; // eax
  int v4; // ecx
  int v5; // ecx

  if ( a1 == NdisPMProtocolOffload80211RSNRekeyV2 )
    goto LABEL_2;
  v4 = a1 - 1;
  if ( !v4 )
  {
    LOBYTE(v2) = a2->PMAdvertisedCapabilities.SupportedProtocolOffloads;
    return v2 & 1;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return (a2->PMAdvertisedCapabilities.SupportedProtocolOffloads & 2) != 0;
  if ( v5 == 1 )
  {
LABEL_2:
    v2 = a2->PMAdvertisedCapabilities.SupportedProtocolOffloads >> 7;
    return v2 & 1;
  }
  return 0;
}
