/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA2@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA2@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x14005871C
 * Callers:
 *     ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14004EAD4 (-GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wil::details::out_param_t<std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>>::~out_param_t<std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>>(
        __int64 a1)
{
  void *v1; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(void ***)a1;
    **(_QWORD **)a1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      operator delete(v1);
  }
}
