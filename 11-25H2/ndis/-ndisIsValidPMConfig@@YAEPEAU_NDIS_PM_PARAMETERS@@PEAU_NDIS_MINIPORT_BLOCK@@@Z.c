/*
 * XREFs of ?ndisIsValidPMConfig@@YAEPEAU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14005CA50
 * Callers:
 *     ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005C860 (-ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsValidPMConfig(struct _NDIS_PM_PARAMETERS *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int EnabledWoLPacketPatterns; // r8d

  EnabledWoLPacketPatterns = a1->EnabledWoLPacketPatterns;
  return ((EnabledWoLPacketPatterns & 2) == 0
       || (unsigned int)(a2->PMAdvertisedCapabilities.MinMagicPacketWakeUp - 2) <= 2)
      && (EnabledWoLPacketPatterns & 0xFFFFFFFD & a2->PMAdvertisedCapabilities.SupportedWoLPacketPatterns) == (EnabledWoLPacketPatterns & 0xFFFFFFFD)
      && (a1->EnabledProtocolOffloads & a2->PMAdvertisedCapabilities.SupportedProtocolOffloads) == a1->EnabledProtocolOffloads
      && ((a1->WakeUpFlags & 1) == 0 || (unsigned int)(a2->PMAdvertisedCapabilities.MinLinkChangeWakeUp - 2) <= 2);
}
