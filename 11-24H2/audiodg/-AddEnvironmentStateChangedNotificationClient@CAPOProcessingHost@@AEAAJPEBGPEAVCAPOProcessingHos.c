/*
 * XREFs of ?AddEnvironmentStateChangedNotificationClient@CAPOProcessingHost@@AEAAJPEBGPEAVCAPOProcessingHostObject@@@Z @ 0x1400580CC
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG@Z @ 0x1400150B0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEnvironmentStateChangedNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAPEAVCAPOEnvironmentStateChangedNotificationsHandler@@@Z @ 0x14004CF50 (-GetEnvironmentStateChangedNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAPEAVCAPOEnvironme.c)
 *     ?AddNotificationClient@CAPOEnvironmentStateChangedNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x14005FA0C (-AddNotificationClient@CAPOEnvironmentStateChangedNotificationsHandler@@QEAAJPEAVCAPOProcessingH.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOProcessingHost::AddEnvironmentStateChangedNotificationClient(
        CAPOProcessingHost *this,
        const unsigned __int16 *a2,
        struct CAPOProcessingHostObject *a3)
{
  int EnvironmentStateChangedNotificationHandler; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CAPOEnvironmentStateChangedNotificationsHandler *v7; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v7 = 0LL;
    EnvironmentStateChangedNotificationHandler = CAPOProcessingHost::GetEnvironmentStateChangedNotificationHandler(
                                                   this,
                                                   a2,
                                                   &v7);
    if ( EnvironmentStateChangedNotificationHandler >= 0 )
    {
      CAPOEnvironmentStateChangedNotificationsHandler::AddNotificationClient(v7, a3);
      EnvironmentStateChangedNotificationHandler = 0;
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v7);
  }
  else
  {
    EnvironmentStateChangedNotificationHandler = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x119,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)0x80070057LL);
  }
  return (unsigned int)EnvironmentStateChangedNotificationHandler;
}
