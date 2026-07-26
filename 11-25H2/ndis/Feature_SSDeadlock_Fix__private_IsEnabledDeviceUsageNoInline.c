/*
 * XREFs of Feature_SSDeadlock_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1400A97F8
 * Callers:
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400848F0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14018BD20 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x14018BFF0 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     Feature_SSDeadlock_Fix__private_IsEnabledFallback @ 0x1400A9830 (Feature_SSDeadlock_Fix__private_IsEnabledFallback.c)
 */

__int64 Feature_SSDeadlock_Fix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SSDeadlock_Fix__private_featureState & 0x10) != 0 )
    return Feature_SSDeadlock_Fix__private_featureState & 1;
  else
    return Feature_SSDeadlock_Fix__private_IsEnabledFallback(
             (unsigned int)Feature_SSDeadlock_Fix__private_featureState,
             3LL);
}
