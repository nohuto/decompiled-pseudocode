/*
 * XREFs of Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408
 * Callers:
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x14005DD8C (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x14005E2E4 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x14006237C (-QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x140093270 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x140094030 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?AcquireOwnershipWorker@BLTQUEUE@@AEAAJXZ @ 0x14028154C (-AcquireOwnershipWorker@BLTQUEUE@@AEAAJXZ.c)
 *     ?AcquireVidPnSourceOwnership@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@@Z @ 0x140281634 (-AcquireVidPnSourceOwnership@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x14028170C (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 *     ?CleanupWorker@BLTQUEUE@@AEAAXXZ @ 0x14028189C (-CleanupWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DisableHwVSync@BLTQUEUE@@QEAAXXZ @ 0x1402821B4 (-DisableHwVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1402822D0 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?GlobalVmBusStatusChangeWorker@BLTQUEUE@@AEAAXXZ @ 0x1402825D8 (-GlobalVmBusStatusChangeWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ @ 0x14028266C (-HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?NotifyGlobalVmBusStatusChange@BLTQUEUE@@QEAAXE@Z @ 0x140282808 (-NotifyGlobalVmBusStatusChange@BLTQUEUE@@QEAAXE@Z.c)
 *     ?NotifyHostMonitorPowerState@BLTQUEUE@@QEAAXE@Z @ 0x1402828EC (-NotifyHostMonitorPowerState@BLTQUEUE@@QEAAXE@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x140282CF8 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x140282E60 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?RestartQueueWorker@BLTQUEUE@@AEAAXXZ @ 0x140282F6C (-RestartQueueWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x14028376C (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x14030D2F4 (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A7094 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1403D6D88 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x14042FC40 (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 *     ?EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ @ 0x140430030 (-EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1404300C8 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x14043016C (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140430240 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledFallback @ 0x140094440 (Feature_SafeDodBltQueueAccesses__private_IsEnabledFallback.c)
 */

__int64 Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SafeDodBltQueueAccesses__private_featureState & 0x10) != 0 )
    return Feature_SafeDodBltQueueAccesses__private_featureState & 1;
  else
    return Feature_SafeDodBltQueueAccesses__private_IsEnabledFallback(
             (unsigned int)Feature_SafeDodBltQueueAccesses__private_featureState,
             3LL);
}
