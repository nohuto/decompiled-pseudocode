/*
 * XREFs of ?ndisIsUdpRscEnabled@@YA_NAEBU_NDIS_OFFLOAD@@@Z @ 0x1400C8DE8
 * Callers:
 *     ?ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014B868 (-ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsUdpRscEnabled(const struct _NDIS_OFFLOAD *a1)
{
  bool result; // al

  result = 0;
  if ( a1->Header.Size >= 0xD9u && a1->Header.Revision >= 8u )
    return a1->UdpRsc.Enabled != 0;
  return result;
}
