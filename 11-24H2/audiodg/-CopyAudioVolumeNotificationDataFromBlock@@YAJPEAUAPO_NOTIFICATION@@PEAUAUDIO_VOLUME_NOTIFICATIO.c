/*
 * XREFs of ?CopyAudioVolumeNotificationDataFromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14003EFE0
 * Callers:
 *     ?OnNotifyVolume@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14003ED54 (-OnNotifyVolume@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyNotificationDataFromBlock@@YAXPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@PEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14004BCCC (-CopyNotificationDataFromBlock@@YAXPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@PEAUAUDIO_VOLUME_NOTIFICA.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400593D0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CopyAudioVolumeNotificationDataFromBlock(
        struct APO_NOTIFICATION *a1,
        struct AUDIO_VOLUME_NOTIFICATION_BLOCK *a2)
{
  struct AUDIO_VOLUME_NOTIFICATION_DATA *v4; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct AUDIO_VOLUME_NOTIFICATION_DATA *)operator new[](
                                                  4LL * *((unsigned int *)a2 + 12) + 32,
                                                  (const struct std::nothrow_t *)&std::nothrow);
  *((_QWORD *)a1 + 2) = v4;
  if ( v4 )
  {
    CopyNotificationDataFromBlock(v4, a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x93,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
