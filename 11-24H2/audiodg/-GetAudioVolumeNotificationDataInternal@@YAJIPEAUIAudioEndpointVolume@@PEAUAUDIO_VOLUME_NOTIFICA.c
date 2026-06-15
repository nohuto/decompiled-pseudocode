/*
 * XREFs of ?GetAudioVolumeNotificationDataInternal@@YAJIPEAUIAudioEndpointVolume@@PEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x14003E414
 * Callers:
 *     ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14004E744 (-GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z.c)
 *     ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x14004E988 (-GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GetAudioVolumeNotificationDataInternal(
        UINT a1,
        struct IAudioEndpointVolume *a2,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a3)
{
  int v6; // ebx
  UINT v7; // ebx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  a3->nChannels = a1;
  v6 = ((__int64 (__fastcall *)(struct IAudioEndpointVolume *, BOOL *))a2->lpVtbl->GetMute)(a2, &a3->bMuted);
  if ( v6 < 0 )
  {
    v11 = 294LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = ((__int64 (__fastcall *)(struct IAudioEndpointVolume *, float *))a2->lpVtbl->GetMasterVolumeLevelScalar)(
         a2,
         &a3->fMasterVolume);
  if ( v6 < 0 )
  {
    v11 = 295LL;
    goto LABEL_10;
  }
  v7 = 0;
  a3->guidEventContext = GUID_00000000_0000_0000_0000_000000000000;
  while ( 1 )
  {
    if ( v7 >= a1 )
      return 0LL;
    v8 = ((__int64 (__fastcall *)(struct IAudioEndpointVolume *, _QWORD, float *))a2->lpVtbl->GetChannelVolumeLevelScalar)(
           a2,
           v7,
           &a3->afChannelVolumes[v7]);
    v9 = v8;
    if ( v8 < 0 )
      break;
    ++v7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12B,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
