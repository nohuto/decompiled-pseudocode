/*
 * XREFs of ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14004E744
 * Callers:
 *     ?QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x1400162C8 (-QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIF.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAudioVolumeNotificationDataInternal@@YAJIPEAUIAudioEndpointVolume@@PEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x14003E414 (-GetAudioVolumeNotificationDataInternal@@YAJIPEAUIAudioEndpointVolume@@PEAUAUDIO_VOLUME_NOTIFICA.c)
 *     ?AllocateAudioVolumeNotificationData2@@YAJIPEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14004856C (-AllocateAudioVolumeNotificationData2@@YAJIPEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z.c)
 *     ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA2@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA2@@@std@@@std@@QEAA@XZ @ 0x1400584D8 (--1-$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA2@@U-$default_delete@UAUDIO_VOLUME_NOTIFICATION_D.c)
 *     ??1?$out_param_t@V?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA2@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA2@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x14005862C (--1-$out_param_t@V-$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA2@@U-$default_delete@UAUDIO_VOLUME.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetAudioVolumeNotificationData(struct IMMDevice *a1, struct AUDIO_VOLUME_NOTIFICATION_DATA2 **a2)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  int AudioVolumeNotificationDataInternal; // eax
  unsigned __int64 v9; // r9
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  int v15; // edi
  struct AUDIO_VOLUME_NOTIFICATION_DATA2 *v16; // rax
  struct AUDIO_VOLUME_NOTIFICATION_DATA ***v18; // [rsp+30h] [rbp-20h] BYREF
  struct AUDIO_VOLUME_NOTIFICATION_DATA2 *v19; // [rsp+38h] [rbp-18h] BYREF
  char v20; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v22; // [rsp+70h] [rbp+20h] BYREF
  struct AUDIO_VOLUME_NOTIFICATION_DATA **v23; // [rsp+80h] [rbp+30h] BYREF
  struct IAudioEndpointVolume *v24; // [rsp+88h] [rbp+38h] BYREF

  lpVtbl = a1->lpVtbl;
  v24 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))lpVtbl->Activate)(
         a1,
         &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
         23LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 327LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_25;
  }
  v22 = 0;
  v4 = ((__int64 (__fastcall *)(struct IAudioEndpointVolume *, unsigned int *))v24->lpVtbl->GetChannelCount)(v24, &v22);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 330LL;
    goto LABEL_5;
  }
  v23 = 0LL;
  v18 = &v23;
  v19 = 0LL;
  v20 = 1;
  v5 = AllocateAudioVolumeNotificationData2(v22, &v19);
  wil::details::out_param_t<std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>>::~out_param_t<std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>>(&v18);
  if ( v5 < 0 )
  {
    v7 = 333LL;
LABEL_23:
    v9 = (unsigned int)v5;
    goto LABEL_24;
  }
  if ( !v23 )
  {
    v5 = -2147024882;
    v7 = 334LL;
    goto LABEL_23;
  }
  AudioVolumeNotificationDataInternal = GetAudioVolumeNotificationDataInternal(v22, v24, *v23);
  v5 = AudioVolumeNotificationDataInternal;
  if ( AudioVolumeNotificationDataInternal < 0 )
  {
    v9 = (unsigned int)AudioVolumeNotificationDataInternal;
    v7 = 336LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)v9);
    std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>(&v23);
    goto LABEL_25;
  }
  v10 = ((__int64 (__fastcall *)(struct IAudioEndpointVolume *, struct AUDIO_VOLUME_NOTIFICATION_DATA **))v24->lpVtbl->GetMasterVolumeLevel)(
          v24,
          v23 + 1);
  v5 = v10;
  if ( v10 < 0 )
  {
    v9 = (unsigned int)v10;
    v7 = 338LL;
    goto LABEL_24;
  }
  v11 = ((__int64 (__fastcall *)(struct IAudioEndpointVolume *, char *, struct AUDIO_VOLUME_NOTIFICATION_DATA **, char *))v24->lpVtbl->GetVolumeRange)(
          v24,
          (char *)v23 + 12,
          v23 + 2,
          (char *)v23 + 20);
  v5 = v11;
  if ( v11 < 0 )
  {
    v9 = (unsigned int)v11;
    v7 = 339LL;
    goto LABEL_24;
  }
  v12 = ((__int64 (__fastcall *)(struct IAudioEndpointVolume *, struct AUDIO_VOLUME_NOTIFICATION_DATA **, char *))v24->lpVtbl->GetVolumeStepInfo)(
          v24,
          v23 + 3,
          (char *)v23 + 28);
  v5 = v12;
  if ( v12 < 0 )
  {
    v9 = (unsigned int)v12;
    v7 = 340LL;
    goto LABEL_24;
  }
  v13 = 0LL;
  if ( !v22 )
  {
LABEL_20:
    v16 = (struct AUDIO_VOLUME_NOTIFICATION_DATA2 *)v23;
    v23 = 0LL;
    *a2 = v16;
    std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>(&v23);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v24);
    return 0LL;
  }
  while ( 1 )
  {
    v14 = ((__int64 (__fastcall *)(struct IAudioEndpointVolume *, _QWORD, char *))v24->lpVtbl->GetChannelVolumeLevel)(
            v24,
            (unsigned int)v13,
            (char *)v23 + 4 * v13 + 32);
    v15 = v14;
    if ( v14 < 0 )
      break;
    v13 = (unsigned int)(v13 + 1);
    if ( (unsigned int)v13 >= v22 )
      goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x157,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
    (const char *)(unsigned int)v14);
  std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>(&v23);
  v5 = v15;
LABEL_25:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v24);
  return (unsigned int)v5;
}
