/*
 * XREFs of ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140054A90
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1400549A0 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1400817B0 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1400837D0 (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 * Callees:
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140054F10 (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400554F0 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014EAFC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x14015D720 (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x14015D9B0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x14015E040 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x14016BBB0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x14016D640 (-ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x14016D7D0 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall ndisPrepForLowPowerCommon(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_DEVICE_POWER_STATE a2)
{
  unsigned int FilterPnPFlags; // edx
  KIRQL v5; // al
  KIRQL v6; // si
  int v7; // edx
  char v8[168]; // [rsp+40h] [rbp-A8h] BYREF

  ndisMInvokeDevicePowerNotify(a1, (enum _DEVICE_POWER_STATE)a2);
  ndisNotifyDevicePowerStateChange(a1, a2);
  if ( (a1->PnPFlags & 0x20) != 0 )
    ndisIssueNetEventSetPowerEvent(a1, (enum _DEVICE_POWER_STATE)a2, 1u);
  FilterPnPFlags = a1->FilterPnPFlags;
  if ( (FilterPnPFlags & 0x80u) == 0 || (a1->PnPFlags & 0x20) == 0 )
  {
    a1->FilterPnPFlags = FilterPnPFlags | 0x100;
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathPaused, PauseReason_LowPower) )
    {
      memset(v8, 0, 0xA0uLL);
      if ( (unsigned __int8)byte_140126C63 >= 4u )
      {
        ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v8);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v7,
            28,
            92,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            *(__int64 *)&v8[8],
            v8[0]);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 0);
  }
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(&a1->MiniportOwner, 1LL);
  if ( (a1->PnPFlags & 0x20) != 0 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    v6 = v5;
    ndisMSwapOpenHandlers(a1, 4u);
    if ( a1->WaitWakeIrp )
      a1->PnPFlags &= ~0x400u;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v6);
  }
}
