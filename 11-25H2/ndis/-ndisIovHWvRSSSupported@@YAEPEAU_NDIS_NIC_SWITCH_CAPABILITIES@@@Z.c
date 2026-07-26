/*
 * XREFs of ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1401565EC
 * Callers:
 *     ?ndisOidPreIovCreateNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E7730 (-ndisOidPreIovCreateNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E8C90 (-ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovGetNumberOfQueuesForDefaultVPort@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401565C0 (-ndisIovGetNumberOfQueuesForDefaultVPort@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIovHWvRSSSupported(struct _NDIS_NIC_SWITCH_CAPABILITIES *a1)
{
  char v1; // dl

  v1 = 0;
  if ( a1 )
    return (a1->NicSwitchCapabilities & 0x80u) != 0;
  return v1;
}
