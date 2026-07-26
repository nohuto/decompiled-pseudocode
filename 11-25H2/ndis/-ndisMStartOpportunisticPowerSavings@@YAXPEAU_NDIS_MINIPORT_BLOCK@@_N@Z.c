/*
 * XREFs of ?ndisMStartOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x14015DE60
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x14015DC00 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140064560 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140081E60 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140085AD0 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 */

void __fastcall ndisMStartOpportunisticPowerSavings(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  bool v4; // zf

  if ( a1->MediaConnectState == MediaConnectStateDisconnected )
    ndisSetMediaDisconnectTimer(a1);
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendClearStop(a1, 8);
  if ( a2 )
  {
    v4 = a1->AoAc == 0LL;
    a1->PmInterruptedByPnp = 0;
    if ( !v4 )
      ndisAoAcClearStop(a1, 8);
  }
}
