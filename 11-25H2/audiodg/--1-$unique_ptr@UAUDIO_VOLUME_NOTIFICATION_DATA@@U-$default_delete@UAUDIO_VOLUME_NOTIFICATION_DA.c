/*
 * XREFs of ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA@@@std@@@std@@QEAA@XZ @ 0x1400585F4
 * Callers:
 *     ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x140016644 (-GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     ?AllocateAudioVolumeNotificationData2@@YAJIPEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14004886C (-AllocateAudioVolumeNotificationData2@@YAJIPEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z.c)
 *     _GetAudioVolumeNotificationData_::_1_::dtor$1 @ 0x140092DDC (_GetAudioVolumeNotificationData_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
