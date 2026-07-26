/*
 * XREFs of ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x14015F590
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x14015F2C0 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140036C80 (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x14003A580 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400866C0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline @ 0x14008F740 (Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400C3328 (-ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?TryAcquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAA_NW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x140164000 (-TryAcquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAA_NW4NDIS_MINIPORT_POLICY_OWNE.c)
 */

void __fastcall ndisMDisableOpportunisticPowerSavings(struct _NDIS_MINIPORT_BLOCK *a1, bool *a2)
{
  bool v4; // zf

  *a2 = 0;
  ndisCancelMediaDisconnectTimer(a1);
  if ( !(unsigned int)Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !a1->SelectiveSuspend )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( a1->SelectiveSuspend )
  {
    if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) == 0LL )
    {
LABEL_3:
      ndisSelectiveSuspendStop(a1, 8u);
      goto LABEL_4;
    }
    ndisSelectiveSuspendStopWdf(a1, 8);
  }
LABEL_4:
  if ( !(unsigned __int8)Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::TryAcquire(&a1->MiniportOwner, 2LL) )
  {
    v4 = a1->AoAc == 0LL;
    a1->PmInterruptedByPnp = 1;
    *a2 = 1;
    if ( !v4 )
      ndisAoAcStop(a1, 8, RunAsynchronous);
    if ( !a1->DoNotBlockOnMiniportLock )
    {
      while ( 1 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(&a1->MiniportOwner.m_lock, 0LL);
        if ( KeReadStateEvent(&a1->MiniportOwner.m_isUnowned.m_event) )
          break;
        ExReleasePushLockExclusiveEx(&a1->MiniportOwner.m_lock, 0LL);
        KeLeaveCriticalRegion();
        KeWaitForSingleObject(&a1->MiniportOwner.m_isUnowned, Executive, 0, 0, 0LL);
      }
      KeClearEvent(&a1->MiniportOwner.m_isUnowned.m_event);
      a1->MiniportOwner.m_owner = MiniportOwnedByBindEngine;
      ExReleasePushLockExclusiveEx(&a1->MiniportOwner.m_lock, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
