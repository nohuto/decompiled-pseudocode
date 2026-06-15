/*
 * XREFs of ?AddMicBoostNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14005800C
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG@Z @ 0x1400150B0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddNotificationClient@CMicBoostNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x1400601FC (-AddNotificationClient@CMicBoostNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z.c)
 *     ?GetMicBoostNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCMicBoostNotificationsHandler@@@Z @ 0x14006221C (-GetMicBoostNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCMicBoostNotifica.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOProcessingHost::AddMicBoostNotificationClient(
        CAPOProcessingHost *this,
        struct IMMDevice **a2,
        struct CAPOProcessingHostObject *a3)
{
  struct IMMDevice *v4; // rdx
  int MicBoostNotificationHandler; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CMicBoostNotificationsHandler *v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a2;
  if ( v4 )
  {
    v8 = 0LL;
    MicBoostNotificationHandler = CAPOProcessingHost::GetMicBoostNotificationHandler(this, v4, &v8);
    if ( MicBoostNotificationHandler >= 0 )
    {
      CMicBoostNotificationsHandler::AddNotificationClient(v8, a3);
      MicBoostNotificationHandler = 0;
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v8);
  }
  else
  {
    MicBoostNotificationHandler = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFA,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)0x80004003LL);
  }
  return (unsigned int)MicBoostNotificationHandler;
}
