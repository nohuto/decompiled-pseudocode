/*
 * XREFs of ?ndisIovGetNumberOfQueuesForDefaultVPort@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014B8F0
 * Callers:
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140064190 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x14014B91C (-ndisIovHWvRSSSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 */

__int64 __fastcall ndisIovGetNumberOfQueuesForDefaultVPort(struct _NDIS_MINIPORT_BLOCK *a1)
{
  bool v1; // zf
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = ndisIovHWvRSSSupported(a1->NicSwitchCurrentCapabilities) == 0;
  result = 1LL;
  if ( !v1 )
    return *(unsigned int *)(v2 + 128);
  return result;
}
