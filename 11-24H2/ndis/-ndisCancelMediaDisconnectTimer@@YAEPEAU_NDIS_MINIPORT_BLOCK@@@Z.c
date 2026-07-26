/*
 * XREFs of ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140036C80
 * Callers:
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x14002FEF0 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140036CE0 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14007BF40 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x14015F590 (-ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017AC30 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

BOOLEAN __fastcall ndisCancelMediaDisconnectTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int PnPFlags; // eax
  BOOLEAN result; // al
  unsigned __int8 v4; // di

  PnPFlags = a1->PnPFlags;
  if ( (PnPFlags & 8) == 0 )
    return 1;
  a1->PnPFlags = PnPFlags & 0xFFFFFDF7 | 0x200;
  result = KeCancelTimer(&a1->MediaDisconnectTimer.Timer);
  v4 = result;
  if ( result )
  {
    ndisDereferenceMiniport(a1, 0xBu);
    return v4;
  }
  return result;
}
