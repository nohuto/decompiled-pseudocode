/*
 * XREFs of ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA@@@std@@@std@@QEAA@XZ @ 0x1400584B4
 * Callers:
 *     ?AllocateAudioVolumeNotificationData2@@YAJIPEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14004856C (-AllocateAudioVolumeNotificationData2@@YAJIPEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z.c)
 *     ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x14004E988 (-GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     _GetAudioVolumeNotificationData_::_1_::dtor$1_0 @ 0x1400959FE (_GetAudioVolumeNotificationData_--_1_--dtor$1_0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
