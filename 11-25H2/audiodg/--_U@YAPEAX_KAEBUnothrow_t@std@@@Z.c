/*
 * XREFs of ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400594C0
 * Callers:
 *     ?ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z @ 0x1400052C4 (-ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x140016644 (-GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x14001A09C (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?CopyAudioVolumeNotificationData@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x140032998 (-CopyAudioVolumeNotificationData@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@.c)
 *     ?CopyAudioVolumeNotificationDataFromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14003F2E0 (-CopyAudioVolumeNotificationDataFromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATIO.c)
 *     ?GetModuleVersion@@YAXPEBGPEAPEAG@Z @ 0x140044BB4 (-GetModuleVersion@@YAXPEBGPEAPEAG@Z.c)
 *     ?AllocateAudioVolumeNotificationData2@@YAJIPEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14004886C (-AllocateAudioVolumeNotificationData2@@YAJIPEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z.c)
 *     MIDL_user_allocate @ 0x140065A20 (MIDL_user_allocate.c)
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x14006B178 (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
 *     ?GetMeteringData@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_METER_DATA@@I@Z @ 0x140072F10 (-GetMeteringData@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_METER_DATA@@I@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall operator new[](size_t a1, const struct std::nothrow_t *a2)
{
  return operator new(a1, a2);
}
