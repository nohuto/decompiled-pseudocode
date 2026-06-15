/*
 * XREFs of ?CopyAudioVolumeNotificationData@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x140032998
 * Callers:
 *     ?CopyVolumeChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x14003290C (-CopyVolumeChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400594C0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x14005B571 (memcpy_0.c)
 */

__int64 __fastcall CopyAudioVolumeNotificationData(
        struct APO_NOTIFICATION *a1,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2)
{
  unsigned __int64 v4; // rsi
  void *v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 4LL * a2->nChannels + 32;
  v5 = operator new[](v4, (const struct std::nothrow_t *)&std::nothrow);
  *((_QWORD *)a1 + 2) = v5;
  if ( v5 )
  {
    memcpy_0(v5, a2, v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
