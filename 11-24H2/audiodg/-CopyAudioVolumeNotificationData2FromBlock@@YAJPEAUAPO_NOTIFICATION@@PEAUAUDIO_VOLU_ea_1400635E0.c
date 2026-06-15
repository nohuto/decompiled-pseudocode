/*
 * XREFs of ?CopyAudioVolumeNotificationData2FromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x1400635E0
 * Callers:
 *     ?OnNotifyVolume2@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14003EBFC (-OnNotifyVolume2@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocateAudioVolumeNotificationData2@@YAJIPEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14004856C (-AllocateAudioVolumeNotificationData2@@YAJIPEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z.c)
 *     ?CopyNotificationDataFromBlock@@YAXPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@PEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14004BCCC (-CopyNotificationDataFromBlock@@YAXPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@PEAUAUDIO_VOLUME_NOTIFICA.c)
 */

__int64 __fastcall CopyAudioVolumeNotificationData2FromBlock(
        struct AUDIO_VOLUME_NOTIFICATION_DATA2 **a1,
        struct AUDIO_VOLUME_NOTIFICATION_BLOCK *a2)
{
  __int64 v2; // rbp
  struct AUDIO_VOLUME_NOTIFICATION_DATA ***v3; // rbx
  int AudioVolumeNotificationData2; // eax
  unsigned int v6; // edi
  __int64 v8; // r8
  __int64 v9; // rdx
  char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((unsigned int *)a2 + 12);
  v3 = (struct AUDIO_VOLUME_NOTIFICATION_DATA ***)(a1 + 2);
  AudioVolumeNotificationData2 = AllocateAudioVolumeNotificationData2(*((_DWORD *)a2 + 12), a1 + 2);
  v6 = AudioVolumeNotificationData2;
  if ( AudioVolumeNotificationData2 >= 0 )
  {
    CopyNotificationDataFromBlock(**v3, a2);
    v8 = v2;
    *((_DWORD *)*v3 + 2) = *((_DWORD *)a2 + 13);
    *((_DWORD *)*v3 + 3) = *((_DWORD *)a2 + 14);
    *((_DWORD *)*v3 + 4) = *((_DWORD *)a2 + 15);
    *((_DWORD *)*v3 + 5) = *((_DWORD *)a2 + 16);
    *((_DWORD *)*v3 + 6) = *((_DWORD *)a2 + 17);
    *((_DWORD *)*v3 + 7) = *((_DWORD *)a2 + 18);
    if ( (_DWORD)v2 )
    {
      v9 = 32LL;
      v10 = (char *)a2 + 4 * v2 + *((unsigned int *)a2 + 19);
      do
      {
        *(_DWORD *)((char *)*v3 + v9) = *(_DWORD *)&v10[v9 + 48];
        v9 += 4LL;
        --v8;
      }
      while ( v8 );
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
      (const char *)(unsigned int)AudioVolumeNotificationData2);
    return v6;
  }
}
