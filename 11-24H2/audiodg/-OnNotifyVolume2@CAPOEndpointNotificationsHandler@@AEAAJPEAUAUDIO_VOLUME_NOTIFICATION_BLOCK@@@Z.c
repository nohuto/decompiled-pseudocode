/*
 * XREFs of ?OnNotifyVolume2@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14003EBFC
 * Callers:
 *     ?OnNotify@CAPOEndpointNotificationsHandler@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14003EB60 (-OnNotify@CAPOEndpointNotificationsHandler@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z.c)
 * Callees:
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140008474 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400089AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ??$query_to@UIPropertyStore@@@?$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIPropertyStore@@@Z @ 0x14003EFBC (--$query_to@UIPropertyStore@@@-$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEB.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     std::shared_ptr_APO_NOTIFICATION_::shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_96bc077b0d5ed2f4f14aec6f3919a807__0_ @ 0x14005EDBC (std--shared_ptr_APO_NOTIFICATION_--shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_96bc077.c)
 *     ?CopyAudioVolumeNotificationData2FromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x1400635E0 (-CopyAudioVolumeNotificationData2FromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLU_ea_1400635E0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOEndpointNotificationsHandler::OnNotifyVolume2(
        CAPOEndpointNotificationsHandler *this,
        struct AUDIO_VOLUME_NOTIFICATION_BLOCK *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  void *v6; // rax
  struct APO_NOTIFICATION *v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  __int64 **i; // rbx
  struct APO_NOTIFICATION *v13; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v14; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v16 = v4;
  if ( *((_QWORD *)this + 20) )
  {
    v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    std::shared_ptr_APO_NOTIFICATION_::shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_96bc077b0d5ed2f4f14aec6f3919a807__0_(
      &v13,
      v6,
      0LL);
    v7 = v13;
    if ( v13 )
    {
      memset_0(v13, 0, 0x48uLL);
      v11 = wil::com_ptr_t<IPropertyStore,wil::err_returncode_policy>::query_to<IPropertyStore>(
              (char *)this + 40,
              (char *)v7 + 8);
      v8 = v11;
      if ( v11 >= 0 )
      {
        *(_DWORD *)v7 = 4;
        v11 = CopyAudioVolumeNotificationData2FromBlock(v7, a2);
        v8 = v11;
        if ( v11 >= 0 )
        {
          for ( i = (__int64 **)*((_QWORD *)this + 20); i; i = (__int64 **)*i )
            CAPOProcessingHostObject::QueueNotification((struct _RTL_CRITICAL_SECTION *)i[1], (__int64 *)&v13);
          if ( v14 )
            std::_Ref_count_base::_Decref(v14);
          v8 = 0;
          goto LABEL_20;
        }
        v10 = 212LL;
      }
      else
      {
        v10 = 209LL;
      }
      v9 = (unsigned int)v11;
    }
    else
    {
      v8 = -2147024882;
      v9 = 2147942414LL;
      v10 = 205LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      (const char *)v9);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
LABEL_20:
    CSAutoLock<1>::~CSAutoLock<1>(&v16);
    return v8;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
