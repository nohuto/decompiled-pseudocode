/*
 * XREFs of ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x140016644
 * Callers:
 *     ?QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140016438 (-QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIF.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAudioVolumeNotificationDataInternal@@YAJIPEAUIAudioEndpointVolume@@PEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x14003E714 (-GetAudioVolumeNotificationDataInternal@@YAJIPEAUIAudioEndpointVolume@@PEAUAUDIO_VOLUME_NOTIFICA.c)
 *     ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA@@@std@@@std@@QEAA@XZ @ 0x1400585F4 (--1-$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U-$default_delete@UAUDIO_VOLUME_NOTIFICATION_DA.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400594C0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetAudioVolumeNotificationData(struct IMMDevice *a1, struct AUDIO_VOLUME_NOTIFICATION_DATA **a2)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct AUDIO_VOLUME_NOTIFICATION_DATA *v7; // rax
  struct AUDIO_VOLUME_NOTIFICATION_DATA *v8; // rbx
  int AudioVolumeNotificationDataInternal; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int v13; // [rsp+50h] [rbp+20h] BYREF
  struct AUDIO_VOLUME_NOTIFICATION_DATA *v14; // [rsp+60h] [rbp+30h] BYREF
  struct IAudioEndpointVolume *v15; // [rsp+68h] [rbp+38h] BYREF

  lpVtbl = a1->lpVtbl;
  v15 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))lpVtbl->Activate)(
         a1,
         &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
         23LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 308LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_11;
  }
  v13 = 0;
  v4 = ((__int64 (__fastcall *)(struct IAudioEndpointVolume *, unsigned int *))v15->lpVtbl->GetChannelCount)(v15, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 311LL;
    goto LABEL_5;
  }
  v7 = (struct AUDIO_VOLUME_NOTIFICATION_DATA *)operator new[](
                                                  4LL * v13 + 32,
                                                  (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  v14 = v7;
  if ( v7 )
  {
    AudioVolumeNotificationDataInternal = GetAudioVolumeNotificationDataInternal(v13, v15, v7);
    v10 = AudioVolumeNotificationDataInternal;
    if ( AudioVolumeNotificationDataInternal >= 0 )
    {
      v14 = 0LL;
      *a2 = v8;
      std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>(&v14);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13D,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)(unsigned int)AudioVolumeNotificationDataInternal);
      std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>(&v14);
      v5 = v10;
    }
  }
  else
  {
    v5 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13B,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)0x8007000ELL);
    std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>(&v14);
  }
LABEL_11:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v15);
  return v5;
}
