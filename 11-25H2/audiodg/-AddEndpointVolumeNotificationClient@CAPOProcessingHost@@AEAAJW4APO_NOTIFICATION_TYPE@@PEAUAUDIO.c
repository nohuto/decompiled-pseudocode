/*
 * XREFs of ?AddEndpointVolumeNotificationClient@CAPOProcessingHost@@AEAAJW4APO_NOTIFICATION_TYPE@@PEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140017200
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG@Z @ 0x140015220 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXW4APO_NOTIFICATION_TYPE@@PEAVCAPOProcessingHostObject@@@Z @ 0x140017178 (-AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXW4APO_NOTIFICATION_T.c)
 *     ?GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x140017FC8 (-GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCAPOEndpointNotif.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAPOProcessingHost::AddEndpointVolumeNotificationClient(
        CAPOProcessingHost *a1,
        int a2,
        struct IMMDevice **a3,
        __int64 a4)
{
  struct IMMDevice *v6; // rdx
  int EndpointNotificationHandler; // eax
  unsigned int v8; // ebx
  struct CAPOEndpointNotificationsHandler *v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CAPOEndpointNotificationsHandler *v12; // [rsp+40h] [rbp+18h] BYREF

  if ( !*a3 )
  {
    v8 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)0x80004003LL);
    return v8;
  }
  v6 = *a3;
  v12 = 0LL;
  EndpointNotificationHandler = CAPOProcessingHost::GetEndpointNotificationHandler(a1, v6, &v12);
  v8 = EndpointNotificationHandler;
  if ( EndpointNotificationHandler < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)EndpointNotificationHandler);
    if ( v12 )
      (*(void (__fastcall **)(struct CAPOEndpointNotificationsHandler *))(*(_QWORD *)v12 + 16LL))(v12);
    return v8;
  }
  v9 = v12;
  CAPOEndpointNotificationsHandler::AddEndpointVolumeNotificationClient((__int64)v12, a2, a4);
  if ( v9 )
    (*(void (__fastcall **)(struct CAPOEndpointNotificationsHandler *))(*(_QWORD *)v9 + 16LL))(v9);
  return 0LL;
}
