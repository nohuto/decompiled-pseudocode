/*
 * XREFs of ?ndisConvertPMCapabilitiesToPnp@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PNP_CAPABILITIES@@@Z @ 0x140165F40
 * Callers:
 *     ?ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140084010 (-ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisConvertPMCapabilitiesToPnp(struct _NDIS_PM_CAPABILITIES *a1, struct _NDIS_PNP_CAPABILITIES *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  *a2 = 0LL;
  a2->WakeUpCapabilities = *(_NDIS_PM_WAKE_UP_CAPABILITIES *)&a1->MinMagicPacketWakeUp;
  a2->Flags = 0;
  if ( (a1->SupportedWoLPacketPatterns & 2) != 0 )
  {
    v2 = 4;
    a2->Flags = 4;
  }
  if ( (a1->SupportedWoLPacketPatterns & 1) != 0 )
  {
    v2 |= 2u;
    a2->Flags = v2;
  }
  if ( v2 )
    a2->Flags = v2 | 1;
}
