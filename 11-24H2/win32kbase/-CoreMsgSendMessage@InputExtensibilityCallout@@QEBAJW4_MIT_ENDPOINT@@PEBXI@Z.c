/*
 * XREFs of ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x140048F70
 * Callers:
 *     SendAppClipChanged @ 0x140048000 (SendAppClipChanged.c)
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x140048470 (-ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z.c)
 *     SendMessageTo @ 0x140048F20 (SendMessageTo.c)
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1400E1514 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 *     ?SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z @ 0x1400F3C74 (-SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z.c)
 *     SendVisibilityChanged @ 0x1401311C0 (SendVisibilityChanged.c)
 *     SynchronizeContext @ 0x140142650 (SynchronizeContext.c)
 *     SendCrosshairPropertiesChanged @ 0x140147BF0 (SendCrosshairPropertiesChanged.c)
 *     SendCrosshairEnabledStatusChanged @ 0x140147C40 (SendCrosshairEnabledStatusChanged.c)
 *     SendPositionChanged @ 0x140147CA0 (SendPositionChanged.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x140147DE0 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 *     SendOrientationChanged @ 0x140154150 (SendOrientationChanged.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x14015B610 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 * Callees:
 *     ?SendCoreMessagingK@Win32k@InputTraceLogging@@SAXW4_MIT_ENDPOINT@@@Z @ 0x14004902C (-SendCoreMessagingK@Win32k@InputTraceLogging@@SAXW4_MIT_ENDPOINT@@@Z.c)
 *     CoreMsgSend @ 0x140049098 (CoreMsgSend.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x14020B7F4 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 */

__int64 __fastcall InputExtensibilityCallout::CoreMsgSendMessage(__int64 a1, int a2)
{
  __int64 v2; // rsi
  void *v4; // rdi

  v2 = a2;
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1 + 8, 0LL);
  if ( (unsigned __int8)InputExtensibilityCallout::_CanSendMessageToDestinationInternal(a1, (unsigned int)v2) )
  {
    InputTraceLogging::Win32k::SendCoreMessagingK((unsigned int)v2);
    v4 = *(void **)(a1 + 40 * v2 + 24);
  }
  ExReleasePushLockSharedEx(a1 + 8, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 )
    return CoreMsgSend(v4);
  else
    return 2147946717LL;
}
