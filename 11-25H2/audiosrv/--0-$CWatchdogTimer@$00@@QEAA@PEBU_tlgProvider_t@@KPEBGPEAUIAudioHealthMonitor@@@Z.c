/*
 * XREFs of ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180038EE0 (AudioServerIsFormatSupported.c)
 *     asm_GetApplicationSubmixes @ 0x1800477E0 (asm_GetApplicationSubmixes.c)
 *     AudioSessionGetAllVolumes @ 0x180047950 (AudioSessionGetAllVolumes.c)
 *     PolicyConfigSetDefaultEndpoint @ 0x180047A10 (PolicyConfigSetDefaultEndpoint.c)
 *     AudioServerResetEndpoint @ 0x180047AA0 (AudioServerResetEndpoint.c)
 *     AudioSessionSetDuckingPreference @ 0x180047D10 (AudioSessionSetDuckingPreference.c)
 *     s_pbmAllowMediaPlaybackForApp @ 0x180047DC0 (s_pbmAllowMediaPlaybackForApp.c)
 *     s_pbmUnregisterAppManagerNotification @ 0x180047E90 (s_pbmUnregisterAppManagerNotification.c)
 *     s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x180047F80 (s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive.c)
 *     AudioSessionSetMute @ 0x180048010 (AudioSessionSetMute.c)
 *     s_pbmReportAppClosing @ 0x1800480E0 (s_pbmReportAppClosing.c)
 *     s_pbmRegisterAppManagerNotification @ 0x180048190 (s_pbmRegisterAppManagerNotification.c)
 *     AudioVolumeStepUp @ 0x180048280 (AudioVolumeStepUp.c)
 *     s_apmDoesPlatformSupportVolumeGroups @ 0x180048360 (s_apmDoesPlatformSupportVolumeGroups.c)
 *     PolicyConfigSetEndpointVisibility @ 0x1800483F0 (PolicyConfigSetEndpointVisibility.c)
 *     AudioSessionManagerAddVolumeDuckNotification @ 0x180048480 (AudioSessionManagerAddVolumeDuckNotification.c)
 *     AudioSessionMeterGetMeteringChannelCount @ 0x180048580 (AudioSessionMeterGetMeteringChannelCount.c)
 *     AudioVolumeSetMasterVolumeLevelScalar @ 0x180048630 (AudioVolumeSetMasterVolumeLevelScalar.c)
 *     s_pbmReportApplicationState @ 0x180048730 (s_pbmReportApplicationState.c)
 *     AudioSessionGetStreamSwitchId @ 0x1800487E0 (AudioSessionGetStreamSwitchId.c)
 *     PolicyConfigReportSpatialLicenseChanged @ 0x180048890 (PolicyConfigReportSpatialLicenseChanged.c)
 *     AudioVolumeGetStepInfo @ 0x180048920 (AudioVolumeGetStepInfo.c)
 *     AudioSessionGetDisplayOptions @ 0x1800489C0 (AudioSessionGetDisplayOptions.c)
 *     AudioSessionGetIsComms @ 0x180048A50 (AudioSessionGetIsComms.c)
 *     AudioVolumeSetMute @ 0x180048B00 (AudioVolumeSetMute.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180048C00 (AudioSessionManagerGetSessionForStreamSwitch.c)
 *     AudioSessionGetChannelVolume @ 0x180048EB0 (AudioSessionGetChannelVolume.c)
 *     AudioServerGetChannelCount @ 0x180048F70 (AudioServerGetChannelCount.c)
 *     AudioSessionSetAllVolumes @ 0x180049160 (AudioSessionSetAllVolumes.c)
 *     AudioSessionGetId @ 0x180049230 (AudioSessionGetId.c)
 *     AudioSessionGetChannelCount @ 0x1800492D0 (AudioSessionGetChannelCount.c)
 *     AudioServerCreateStream @ 0x18008D370 (AudioServerCreateStream.c)
 *     AudioServerGetMixFormat @ 0x18008D5F0 (AudioServerGetMixFormat.c)
 *     AudioSessionMeterGetChannelsPeakValues @ 0x1800A7200 (AudioSessionMeterGetChannelsPeakValues.c)
 *     asm_ApplicationSubmixContextDestroy @ 0x1800B28C0 (asm_ApplicationSubmixContextDestroy.c)
 *     asm_ApplicationSubmixDestroy @ 0x1800B2940 (asm_ApplicationSubmixDestroy.c)
 *     asm_AudioServerGetApplicationSubmixPeriod @ 0x1800B29D0 (asm_AudioServerGetApplicationSubmixPeriod.c)
 *     asm_AudioServerInitializeStream @ 0x1800B2AD0 (asm_AudioServerInitializeStream.c)
 *     asm_GetApplicationSubmixContext @ 0x1800B2C90 (asm_GetApplicationSubmixContext.c)
 *     asm_GetApplicationSubmixContextForExcludedProcessTree @ 0x1800B2DC0 (asm_GetApplicationSubmixContextForExcludedProcessTree.c)
 *     asm_GetApplicationSubmixContextForProcessTree @ 0x1800B2F00 (asm_GetApplicationSubmixContextForProcessTree.c)
 *     asm_GetApplicationSubmixContextFromPID @ 0x1800B3040 (asm_GetApplicationSubmixContextFromPID.c)
 *     asm_GetApplicationSubmixFromId @ 0x1800B3180 (asm_GetApplicationSubmixFromId.c)
 *     s_afxCloseAudioEffectsWatcher @ 0x1800B5220 (s_afxCloseAudioEffectsWatcher.c)
 *     s_afxOpenAudioEffectsWatcher @ 0x1800B52E0 (s_afxOpenAudioEffectsWatcher.c)
 *     AudioSessionGetDuckingState @ 0x1800C53C0 (AudioSessionGetDuckingState.c)
 *     AudioSessionGetInstanceId @ 0x1800C5470 (AudioSessionGetInstanceId.c)
 *     AudioSessionGetLastActivation @ 0x1800C5510 (AudioSessionGetLastActivation.c)
 *     AudioSessionGetLastInactivation @ 0x1800C55C0 (AudioSessionGetLastInactivation.c)
 *     AudioSessionPropertyStoreCommit @ 0x1800C5670 (AudioSessionPropertyStoreCommit.c)
 *     AudioSessionPropertyStoreGetAt @ 0x1800C5710 (AudioSessionPropertyStoreGetAt.c)
 *     AudioSessionPropertyStoreGetCount @ 0x1800C57D0 (AudioSessionPropertyStoreGetCount.c)
 *     AudioSessionPropertyStoreGetValue @ 0x1800C5880 (AudioSessionPropertyStoreGetValue.c)
 *     AudioSessionPropertyStoreSetValue @ 0x1800C5940 (AudioSessionPropertyStoreSetValue.c)
 *     AudioSessionSetChannelVolume @ 0x1800C5A00 (AudioSessionSetChannelVolume.c)
 *     AudioSessionSetGroupingParam @ 0x1800C5AE0 (AudioSessionSetGroupingParam.c)
 *     AudioSessionSetVolume @ 0x1800C5B80 (AudioSessionSetVolume.c)
 *     AudioSessionSetWindowId @ 0x1800C5C60 (AudioSessionSetWindowId.c)
 *     AudioSessionManagerAddAudioSessionClientNotification @ 0x1800C79F0 (AudioSessionManagerAddAudioSessionClientNotification.c)
 *     AudioSessionManagerDeleteAudioSessionClientNotification @ 0x1800C7AD0 (AudioSessionManagerDeleteAudioSessionClientNotification.c)
 *     AudioSessionManagerDeleteVolumeDuckNotification @ 0x1800C7B70 (AudioSessionManagerDeleteVolumeDuckNotification.c)
 *     s_ccCreateHandsfreeHidFileFromAudioId @ 0x1800E5720 (s_ccCreateHandsfreeHidFileFromAudioId.c)
 *     s_apmClearAllPersistedApplicationDefaultEndpoints @ 0x1800F9850 (s_apmClearAllPersistedApplicationDefaultEndpoints.c)
 *     s_apmSetPersistedDefaultAudioEndpoint @ 0x1800F98E0 (s_apmSetPersistedDefaultAudioEndpoint.c)
 *     s_midiOpenPort @ 0x1800FADD0 (s_midiOpenPort.c)
 *     s_mmeNotifyDeviceAdded @ 0x1800FBEB0 (s_mmeNotifyDeviceAdded.c)
 *     s_mmeNotifyDeviceRemoved @ 0x1800FBFA0 (s_mmeNotifyDeviceRemoved.c)
 *     s_SetScreenReaderState @ 0x1800FEBE0 (s_SetScreenReaderState.c)
 *     s_apmRegisterProxyAudioProcess @ 0x1800FECF0 (s_apmRegisterProxyAudioProcess.c)
 *     s_apmResetPreferredChatApplication @ 0x1800FEDE0 (s_apmResetPreferredChatApplication.c)
 *     s_apmSetDuckingGainForId @ 0x1800FEF60 (s_apmSetDuckingGainForId.c)
 *     s_apmSetLayoutGainForId @ 0x1800FF090 (s_apmSetLayoutGainForId.c)
 *     s_apmSetPreferredChatApplication @ 0x1800FF140 (s_apmSetPreferredChatApplication.c)
 *     s_apmSetVolumeGroupGainScalarForId @ 0x1800FF290 (s_apmSetVolumeGroupGainScalarForId.c)
 *     s_apmSetVolumeGroupMuteForId @ 0x1800FF3A0 (s_apmSetVolumeGroupMuteForId.c)
 *     s_getEmergencyCallbackMode @ 0x1800FF490 (s_getEmergencyCallbackMode.c)
 *     s_getRingerVibrateState @ 0x1800FF510 (s_getRingerVibrateState.c)
 *     s_pbmCastingAppStateChanged @ 0x1800FF590 (s_pbmCastingAppStateChanged.c)
 *     s_pbmIsPlaying @ 0x1800FF6B0 (s_pbmIsPlaying.c)
 *     s_pbmLaunchBackgroundTask @ 0x1800FF750 (s_pbmLaunchBackgroundTask.c)
 *     s_pbmPlayToStreamStateChanged @ 0x1800FF870 (s_pbmPlayToStreamStateChanged.c)
 *     s_pbmRegisterAppClosureNotification @ 0x1800FF910 (s_pbmRegisterAppClosureNotification.c)
 *     s_pbmRegisterAsBackgroundTask @ 0x1800FF9A0 (s_pbmRegisterAsBackgroundTask.c)
 *     s_pbmRegisterPlaybackManagerNotifications @ 0x1800FFA80 (s_pbmRegisterPlaybackManagerNotifications.c)
 *     s_pbmUnregisterAppClosureNotification @ 0x1800FFC00 (s_pbmUnregisterAppClosureNotification.c)
 *     s_pbmUnregisterPlaybackManagerNotifications @ 0x1800FFC90 (s_pbmUnregisterPlaybackManagerNotifications.c)
 *     s_pbmVoipCallStateChanged @ 0x1800FFDA0 (s_pbmVoipCallStateChanged.c)
 *     s_setEmergencyCallbackMode @ 0x1800FFED0 (s_setEmergencyCallbackMode.c)
 *     s_setRingerVibrateState @ 0x1800FFF70 (s_setRingerVibrateState.c)
 *     PolicyConfigGetDeviceFormatAndSpatialSettings @ 0x180101C60 (PolicyConfigGetDeviceFormatAndSpatialSettings.c)
 *     PolicyConfigGetDeviceFormatForConnector @ 0x180102060 (PolicyConfigGetDeviceFormatForConnector.c)
 *     PolicyConfigGetEndpointExtendedSpatialLicenseInfo @ 0x1801021F0 (PolicyConfigGetEndpointExtendedSpatialLicenseInfo.c)
 *     PolicyConfigGetMixFormat @ 0x180102290 (PolicyConfigGetMixFormat.c)
 *     PolicyConfigGetProcessingPeriod @ 0x1801023C0 (PolicyConfigGetProcessingPeriod.c)
 *     PolicyConfigGetShareMode @ 0x180102470 (PolicyConfigGetShareMode.c)
 *     PolicyConfigResetDeviceFormat @ 0x180102520 (PolicyConfigResetDeviceFormat.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x180102610 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 *     PolicyConfigSetDeviceFormat @ 0x180102720 (PolicyConfigSetDeviceFormat.c)
 *     PolicyConfigSetDeviceSpatialSettings @ 0x180102970 (PolicyConfigSetDeviceSpatialSettings.c)
 *     PolicyConfigSetEndpointAbilityToBeDefault @ 0x180102C70 (PolicyConfigSetEndpointAbilityToBeDefault.c)
 *     PolicyConfigSetMixedRealitySpatialAudioFormatPolicy @ 0x180102D00 (PolicyConfigSetMixedRealitySpatialAudioFormatPolicy.c)
 *     PolicyConfigSetProcessingPeriod @ 0x180102DD0 (PolicyConfigSetProcessingPeriod.c)
 *     PolicyConfigSetShareMode @ 0x180102EF0 (PolicyConfigSetShareMode.c)
 *     PolicyConfigValidateSpatialAudioSettings @ 0x180102FA0 (PolicyConfigValidateSpatialAudioSettings.c)
 *     s_epmSetCurrentEffectPackForEndpoint @ 0x180103080 (s_epmSetCurrentEffectPackForEndpoint.c)
 *     AudioServerCloseVpoContext @ 0x180108D70 (AudioServerCloseVpoContext.c)
 *     AudioServerGetAudioEffectsChangedWnfStateName @ 0x1801090A0 (AudioServerGetAudioEffectsChangedWnfStateName.c)
 *     AudioServerGetBufferSizeLimits @ 0x1801094C0 (AudioServerGetBufferSizeLimits.c)
 *     AudioServerGetChannelVolume @ 0x180109680 (AudioServerGetChannelVolume.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180109760 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetEndpointVpoContext @ 0x18010A020 (AudioServerGetEndpointVpoContext.c)
 *     AudioServerGetStreamVpoContext @ 0x18010A340 (AudioServerGetStreamVpoContext.c)
 *     AudioServerIsPostVolumeLoopbackSupported @ 0x18010ABB0 (AudioServerIsPostVolumeLoopbackSupported.c)
 *     AudioServerPreStartStream @ 0x18010AD40 (AudioServerPreStartStream.c)
 *     AudioServerRequestSpatialDynamicObjects @ 0x18010AF30 (AudioServerRequestSpatialDynamicObjects.c)
 *     AudioServerSetAllInitialVolumesWithRamp @ 0x18010AFF0 (AudioServerSetAllInitialVolumesWithRamp.c)
 *     AudioServerSetAudioEffect @ 0x18010B2E0 (AudioServerSetAudioEffect.c)
 *     AudioServerSetChannelVolume @ 0x18010B410 (AudioServerSetChannelVolume.c)
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x18010B510 (AudioServerSetDuckingOptionsForCurrentStream.c)
 *     AudioServerSetEchoCancellationRenderEndpoint @ 0x18010B600 (AudioServerSetEchoCancellationRenderEndpoint.c)
 *     AudioServerSetLastBufferInProgress @ 0x18010B700 (AudioServerSetLastBufferInProgress.c)
 *     AudioServerSetStreamSampleRate @ 0x18010B7E0 (AudioServerSetStreamSampleRate.c)
 *     AudioServerStartStreamAborted @ 0x18010B970 (AudioServerStartStreamAborted.c)
 *     AudioVolumeSetChannelVolumeLevel @ 0x18010EBF0 (AudioVolumeSetChannelVolumeLevel.c)
 *     AudioVolumeSetChannelVolumeLevelScalar @ 0x18010ED00 (AudioVolumeSetChannelVolumeLevelScalar.c)
 * Callees:
 *     <none>
 */

struct _TP_TIMER **__fastcall CWatchdogTimer<1>::CWatchdogTimer<1>(
        struct _TP_TIMER **pv,
        struct _TP_TIMER *a2,
        unsigned int a3,
        struct _TP_TIMER *a4,
        __int64 pftDueTime)
{
  __int64 v5; // rsi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax

  v5 = a3;
  *pv = 0LL;
  pv[1] = a2;
  CurrentThreadId = GetCurrentThreadId();
  pv[3] = a4;
  *((_DWORD *)pv + 4) = CurrentThreadId;
  pv[4] = (struct _TP_TIMER *)pftDueTime;
  *((_BYTE *)pv + 40) = 0;
  *(struct _TP_TIMER **)((char *)pv + 44) = 0LL;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    *pv = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = -10000 * v5 / 3;
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&pftDueTime, (unsigned int)v5 / 3, 0);
    }
  }
  return pv;
}
