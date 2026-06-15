/*
 * XREFs of ?QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140016438
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG@Z @ 0x140015220 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG.c)
 * Callees:
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140008444 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14000897C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::shared_ptr_APO_NOTIFICATION_::shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_93d1bd3494f7725f046ab0fa90992741__0_ @ 0x1400165C4 (std--shared_ptr_APO_NOTIFICATION_--shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_93d1bd3.c)
 *     ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x140016644 (-GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14004EAD4 (-GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall QueueInitialVolumeNotification(int a1, _QWORD *a2, struct _RTL_CRITICAL_SECTION *a3)
{
  void *v6; // rax
  void *v7; // rbx
  int v8; // edi
  int AudioVolumeNotificationData; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdx
  void *v13; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v14; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  std::shared_ptr_APO_NOTIFICATION_::shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_93d1bd3494f7725f046ab0fa90992741__0_(
    &v13,
    v6,
    0LL);
  v7 = v13;
  if ( !v13 )
  {
    AudioVolumeNotificationData = -2147024882;
    v12 = 377LL;
    goto LABEL_16;
  }
  memset_0(v13, 0, 0x48uLL);
  *(_DWORD *)v7 = a1;
  if ( a1 != 1 )
  {
    if ( a1 != 4 )
      goto LABEL_5;
    v8 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a2)(
           *a2,
           &GUID_d666063f_1587_4e43_81f1_b948e807363f,
           (__int64)v7 + 8);
    if ( v8 < 0 )
    {
      v11 = 389LL;
      goto LABEL_9;
    }
    AudioVolumeNotificationData = GetAudioVolumeNotificationData(
                                    *((struct IMMDevice **)v7 + 1),
                                    (struct AUDIO_VOLUME_NOTIFICATION_DATA2 **)v7 + 2);
    if ( AudioVolumeNotificationData >= 0 )
      goto LABEL_5;
    v12 = 390LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)AudioVolumeNotificationData);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    return (unsigned int)AudioVolumeNotificationData;
  }
  v8 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a2)(
         *a2,
         &GUID_d666063f_1587_4e43_81f1_b948e807363f,
         (__int64)v7 + 8);
  if ( v8 >= 0 )
  {
    AudioVolumeNotificationData = GetAudioVolumeNotificationData(
                                    *((struct IMMDevice **)v7 + 1),
                                    (struct AUDIO_VOLUME_NOTIFICATION_DATA **)v7 + 2);
    if ( AudioVolumeNotificationData >= 0 )
    {
LABEL_5:
      CAPOProcessingHostObject::QueueNotification(a3, (__int64 *)&v13);
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
      return 0LL;
    }
    v12 = 385LL;
    goto LABEL_16;
  }
  v11 = 384LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
    (const char *)(unsigned int)v8);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  return (unsigned int)v8;
}
