/*
 * XREFs of ?AllocateAudioVolumeNotificationData2@@YAJIPEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14004886C
 * Callers:
 *     ?CopyAudioVolumeNotificationData2FromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14004879C (-CopyAudioVolumeNotificationData2FromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATI.c)
 *     ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14004EAD4 (-GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z.c)
 *     ?CopyAudioVolumeNotificationData2FromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x1400636D0 (-CopyAudioVolumeNotificationData2FromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLU_ea_1400636D0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA@@@std@@@std@@QEAA@XZ @ 0x1400585F4 (--1-$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U-$default_delete@UAUDIO_VOLUME_NOTIFICATION_DA.c)
 *     ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA2@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA2@@@std@@@std@@QEAA@XZ @ 0x140058618 (--1-$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA2@@U-$default_delete@UAUDIO_VOLUME_NOTIFICATION_D.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400594C0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall AllocateAudioVolumeNotificationData2(unsigned int a1, struct AUDIO_VOLUME_NOTIFICATION_DATA2 **a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  struct AUDIO_VOLUME_NOTIFICATION_DATA2 *v5; // rbx
  void *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v9; // [rsp+50h] [rbp+18h] BYREF
  struct AUDIO_VOLUME_NOTIFICATION_DATA2 *v10; // [rsp+58h] [rbp+20h] BYREF

  v2 = a1;
  v4 = 0;
  v10 = (struct AUDIO_VOLUME_NOTIFICATION_DATA2 *)operator new[](
                                                    4LL * a1 + 40,
                                                    (const struct std::nothrow_t *)&std::nothrow);
  v5 = v10;
  if ( v10 )
  {
    v7 = operator new[](4 * v2 + 32, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v7;
    if ( v7 )
    {
      *(_QWORD *)v5 = v7;
      *a2 = v5;
      v9 = 0LL;
      v10 = 0LL;
    }
    else
    {
      v4 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA2,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
        (const char *)0x8007000ELL);
    }
    std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>(&v9);
    std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>(&v10);
  }
  else
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9E,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
      (const char *)0x8007000ELL);
  }
  return v4;
}
