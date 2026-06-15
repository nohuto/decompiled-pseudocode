/*
 * XREFs of ?OnNotifyVolume@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14003ED54
 * Callers:
 *     ?OnNotify@CAPOEndpointNotificationsHandler@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14003EB60 (-OnNotify@CAPOEndpointNotificationsHandler@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z.c)
 * Callees:
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140008474 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400089AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     std::shared_ptr_APO_NOTIFICATION_::shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_34f3125d2a5da0aa5cf71fc88976a66f__0_ @ 0x14003EF3C (std--shared_ptr_APO_NOTIFICATION_--shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_34f3125.c)
 *     ??$query_to@UIPropertyStore@@@?$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIPropertyStore@@@Z @ 0x14003EFBC (--$query_to@UIPropertyStore@@@-$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEB.c)
 *     ?CopyAudioVolumeNotificationDataFromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14003EFE0 (-CopyAudioVolumeNotificationDataFromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATIO.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOEndpointNotificationsHandler::OnNotifyVolume(
        CAPOEndpointNotificationsHandler *this,
        struct AUDIO_VOLUME_NOTIFICATION_BLOCK *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  unsigned int v5; // edi
  void *v6; // rax
  __int64 v7; // r8
  struct APO_NOTIFICATION *v8; // rbx
  int v9; // eax
  unsigned int v10; // r14d
  int v11; // eax
  int v12; // ebx
  __int64 **i; // rbx
  struct APO_NOTIFICATION *v15; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v16; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v18 = v4;
  v5 = 0;
  if ( !*((_QWORD *)this + 19) )
    goto LABEL_26;
  v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  LOBYTE(v7) = 0;
  std::shared_ptr_APO_NOTIFICATION_::shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_34f3125d2a5da0aa5cf71fc88976a66f__0_(
    &v15,
    v6,
    v7);
  v8 = v15;
  if ( v15 )
  {
    memset_0(v15, 0, 0x48uLL);
    v9 = wil::com_ptr_t<IPropertyStore,wil::err_returncode_policy>::query_to<IPropertyStore>(
           (char *)this + 40,
           (char *)v8 + 8);
    v10 = v9;
    if ( v9 >= 0 )
    {
      *(_DWORD *)v8 = 1;
      v11 = CopyAudioVolumeNotificationDataFromBlock(v8, a2);
      v12 = v11;
      if ( v11 >= 0 )
      {
        for ( i = (__int64 **)*((_QWORD *)this + 19); i; i = (__int64 **)*i )
          CAPOProcessingHostObject::QueueNotification((struct _RTL_CRITICAL_SECTION *)i[1], (__int64 *)&v15);
        if ( v16 )
          std::_Ref_count_base::_Decref(v16);
        if ( v4 )
          LeaveCriticalSection(v4);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB8,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        (const char *)(unsigned int)v11);
      if ( v16 )
        std::_Ref_count_base::_Decref(v16);
      v5 = v12;
LABEL_26:
      CSAutoLock<1>::~CSAutoLock<1>(&v18);
      return v5;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB5,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      (const char *)(unsigned int)v9);
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    if ( v4 )
      LeaveCriticalSection(v4);
    return v10;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      (const char *)0x8007000ELL);
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 2147942414LL;
  }
}
