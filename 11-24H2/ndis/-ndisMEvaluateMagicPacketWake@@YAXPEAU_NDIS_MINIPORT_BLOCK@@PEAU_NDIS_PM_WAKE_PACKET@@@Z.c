/*
 * XREFs of ?ndisMEvaluateMagicPacketWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x140054F20
 * Callers:
 *     ?ndisMValidatePMWakePacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140054B20 (-ndisMValidatePMWakePacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ?ndisMValidatePMWakePacketForMagicPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x140054E50 (-ndisMValidatePMWakePacketForMagicPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@.c)
 *     ?ndisCreatePMPdcTaskClientWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B265C (-ndisCreatePMPdcTaskClientWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMEvaluateMagicPacketWake(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PM_WAKE_PACKET *a2)
{
  if ( ndisAcOnLine
    && a1->AoAc
    && a1->MediaType == NdisMedium802_3
    && a1->ModernStandbyWoLMagicPacketEnable == 1
    && a1->PdcHandle
    && !a1->PdcTaskClientMode )
  {
    if ( ndisMValidatePMWakePacketForMagicPacket(a1, a2) )
      ndisCreatePMPdcTaskClientWorkItem(a1);
  }
}
