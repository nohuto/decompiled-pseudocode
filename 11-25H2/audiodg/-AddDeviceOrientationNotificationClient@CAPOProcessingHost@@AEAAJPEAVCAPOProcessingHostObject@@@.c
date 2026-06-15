/*
 * XREFs of ?AddDeviceOrientationNotificationClient@CAPOProcessingHost@@AEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x140056D8C
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG@Z @ 0x140015220 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::call_once__lambda_c3c562c1cb4a987d14005078cd1fca93___ @ 0x140056E28 (std--call_once__lambda_c3c562c1cb4a987d14005078cd1fca93___.c)
 *     ?AddNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x140056EE8 (-AddNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject.c)
 */

__int64 __fastcall CAPOProcessingHost::AddDeviceOrientationNotificationClient(
        CDeviceOrientationNotificationsHandler **this,
        struct CAPOProcessingHostObject *a2)
{
  CDeviceOrientationNotificationsHandler *v4; // rcx
  __int64 result; // rax
  int v6; // eax
  const char *v7; // r9
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CAPOProcessingHost *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = (CAPOProcessingHost *)this;
  std::call_once__lambda_c3c562c1cb4a987d14005078cd1fca93___(this + 38, &v10);
  v4 = this[37];
  if ( v4 )
  {
    try
    {
      v6 = CDeviceOrientationNotificationsHandler::AddNotificationClient(v4, a2);
      v8 = v6;
      if ( v6 >= 0 )
      {
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDD,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
          (const char *)(unsigned int)v6);
        result = v8;
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0xE0,
                             (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
                             v7);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDB,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
