/*
 * XREFs of ?QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x1400162C8
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG@Z @ 0x1400150B0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG.c)
 * Callees:
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140008474 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400089AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___ @ 0x1400321EC (std--_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___--__Temp.c)
 *     ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14004E744 (-GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z.c)
 *     ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x14004E988 (-GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140058D14 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall QueueInitialVolumeNotification(
        int a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64),
        struct _RTL_CRITICAL_SECTION *a3)
{
  _DWORD *v6; // rdi
  _DWORD *v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64); // rcx
  unsigned __int64 v11; // r9
  int v12; // eax
  int AudioVolumeNotificationData; // eax
  int v14; // eax
  int v15; // eax
  int v17[2]; // [rsp+20h] [rbp-48h] BYREF
  _DWORD *v18; // [rsp+28h] [rbp-40h]
  _QWORD v19[2]; // [rsp+30h] [rbp-38h] BYREF
  char v20; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v22; // [rsp+88h] [rbp+20h] BYREF

  v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = 0;
  v19[0] = v6;
  v19[1] = &v22;
  v7 = operator new(0x18uLL);
  *(_OWORD *)v7 = 0LL;
  v7[2] = 1;
  v7[3] = 1;
  *(_QWORD *)v7 = off_14009DDE0;
  *((_QWORD *)v7 + 2) = v6;
  *(_QWORD *)v17 = v6;
  v18 = v7;
  v20 = 0;
  std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___(v19);
  if ( v6 )
  {
    memset_0(v6, 0, 0x48uLL);
    *v6 = a1;
    v10 = *a2;
    if ( *a2 )
    {
      if ( a1 == 1 )
      {
        v12 = (**v10)(v10, &GUID_d666063f_1587_4e43_81f1_b948e807363f, (__int64)(v6 + 2));
        v8 = v12;
        if ( v12 < 0 )
        {
          v11 = (unsigned int)v12;
          v9 = 385LL;
          goto LABEL_6;
        }
        AudioVolumeNotificationData = GetAudioVolumeNotificationData(
                                        *((struct IMMDevice **)v6 + 1),
                                        (struct AUDIO_VOLUME_NOTIFICATION_DATA **)v6 + 2);
        v8 = AudioVolumeNotificationData;
        if ( AudioVolumeNotificationData < 0 )
        {
          v11 = (unsigned int)AudioVolumeNotificationData;
          v9 = 386LL;
          goto LABEL_6;
        }
      }
      else if ( a1 == 4 )
      {
        v14 = (**v10)(v10, &GUID_d666063f_1587_4e43_81f1_b948e807363f, (__int64)(v6 + 2));
        v8 = v14;
        if ( v14 < 0 )
        {
          v11 = (unsigned int)v14;
          v9 = 390LL;
          goto LABEL_6;
        }
        v15 = GetAudioVolumeNotificationData(
                *((struct IMMDevice **)v6 + 1),
                (struct AUDIO_VOLUME_NOTIFICATION_DATA2 **)v6 + 2);
        v8 = v15;
        if ( v15 < 0 )
        {
          v11 = (unsigned int)v15;
          v9 = 391LL;
          goto LABEL_6;
        }
      }
      CAPOProcessingHostObject::QueueNotification(a3, (__int64 *)v17);
      v8 = 0;
      goto LABEL_18;
    }
    v8 = -2147467261;
    v9 = 382LL;
  }
  else
  {
    v8 = -2147024882;
    v9 = 377LL;
  }
  v11 = v8;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
    (const char *)v11);
LABEL_18:
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
  return v8;
}
