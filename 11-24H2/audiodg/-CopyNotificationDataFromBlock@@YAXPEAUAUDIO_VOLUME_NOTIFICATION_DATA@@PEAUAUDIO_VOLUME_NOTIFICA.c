/*
 * XREFs of ?CopyNotificationDataFromBlock@@YAXPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@PEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14004BCCC
 * Callers:
 *     ?CopyAudioVolumeNotificationDataFromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14003EFE0 (-CopyAudioVolumeNotificationDataFromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATIO.c)
 *     ?CopyAudioVolumeNotificationData2FromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x1400635E0 (-CopyAudioVolumeNotificationData2FromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLU_ea_1400635E0.c)
 * Callees:
 *     <none>
 */

void __fastcall CopyNotificationDataFromBlock(
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a1,
        struct AUDIO_VOLUME_NOTIFICATION_BLOCK *a2)
{
  UINT v2; // r8d
  char *v3; // r10
  __int64 i; // rdx

  a1->guidEventContext = *(GUID *)((char *)a2 + 24);
  a1->bMuted = *((_DWORD *)a2 + 10);
  a1->fMasterVolume = *((float *)a2 + 11);
  v2 = *((_DWORD *)a2 + 12);
  a1->nChannels = v2;
  v3 = (char *)a2 + *((unsigned int *)a2 + 19);
  for ( i = 0LL; (unsigned int)i < a1->nChannels; i = (unsigned int)(i + 1) )
    a1->afChannelVolumes[i] = *(float *)&v3[4 * i + 80];
}
