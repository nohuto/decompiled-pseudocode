/*
 * XREFs of Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline @ 0x140094360
 * Callers:
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x14005DD8C (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x14005E2E4 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x14006237C (-QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x140093270 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x140094030 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     Feature_DodVsyncEnsureLocked__private_IsEnabledFallback @ 0x140094398 (Feature_DodVsyncEnsureLocked__private_IsEnabledFallback.c)
 */

__int64 Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DodVsyncEnsureLocked__private_featureState & 0x10) != 0 )
    return Feature_DodVsyncEnsureLocked__private_featureState & 1;
  else
    return Feature_DodVsyncEnsureLocked__private_IsEnabledFallback(
             (unsigned int)Feature_DodVsyncEnsureLocked__private_featureState,
             3LL);
}
