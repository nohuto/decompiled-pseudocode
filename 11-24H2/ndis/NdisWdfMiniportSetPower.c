/*
 * XREFs of NdisWdfMiniportSetPower @ 0x140068290
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1400372C0 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1400683A0 (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x140082890 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400864C0 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 */

void __fastcall NdisWdfMiniportSetPower(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum POWER_ACTION a2,
        enum _DEVICE_POWER_STATE a3)
{
  enum _NDIS_MINIPORT_EVENT v6; // dx

  if ( a2 == PowerActionShutdownOff )
    goto LABEL_6;
  if ( a2 )
  {
    if ( a2 != PowerActionSleep && a2 != PowerActionHibernate && (unsigned int)(a2 - 4) > 1 )
    {
LABEL_11:
      if ( (unsigned int)(a2 - 2) <= 4 )
        ndisWdfNotifySystemPower(a1, a2, a3);
      goto LABEL_13;
    }
LABEL_6:
    if ( a3 != PowerDeviceD3 )
    {
      if ( a3 == PowerDeviceD0 )
      {
        v6 = NdisMEventD0_Sx;
        goto LABEL_10;
      }
      if ( (unsigned int)(a3 - 2) > 1 )
        goto LABEL_11;
    }
    v6 = NdisMEventDx_Sx;
LABEL_10:
    ndisLogMiniportEvent(a1, v6);
    goto LABEL_11;
  }
  if ( a3 == PowerDeviceD3 )
    goto LABEL_21;
  if ( a3 == PowerDeviceD0 )
  {
    ndisLogMiniportEvent(a1, NdisMEventD0_S0Idle);
    ndisWdfNotifyDevicePower(a1, a2, PowerDeviceD0);
    return;
  }
  if ( (unsigned int)(a3 - 2) <= 1 )
LABEL_21:
    ndisLogMiniportEvent(a1, NdisMEventDx_S0Idle);
LABEL_13:
  ndisWdfNotifyDevicePower(a1, a2, a3);
  if ( a3 == PowerDeviceD0 && (unsigned int)(a2 - 2) <= 1 )
  {
    if ( a1->SelectiveSuspend )
      ndisSelectiveSuspendClearStop(a1, 6LL);
  }
}
