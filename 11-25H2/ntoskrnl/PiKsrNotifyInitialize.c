/*
 * XREFs of PiKsrNotifyInitialize @ 0x140C15290
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x1404B44B0 (ExRegisterCallback.c)
 *     ExCreateCallback @ 0x140A62280 (ExCreateCallback.c)
 */

__int64 PiKsrNotifyInitialize()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  PnpKsrNotifyLock.Owner = 0LL;
  PnpKsrNotifyLock.Contention = 0;
  PnpKsrNotifyLock.Event.Header.SignalState = 0;
  qword_140F89338 = (__int64)&PnpKsrNotifyList;
  PnpKsrNotifyList = &PnpKsrNotifyList;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  PnpKsrNotifyLock.Event.Header.WaitListHead.Blink = &PnpKsrNotifyLock.Event.Header.WaitListHead;
  PnpKsrNotifyLock.Event.Header.WaitListHead.Flink = &PnpKsrNotifyLock.Event.Header.WaitListHead;
  DestinationString = 0LL;
  PnpKsrNotifyLock.Count = 1;
  LOWORD(PnpKsrNotifyLock.Event.Header.Lock) = 1;
  PnpKsrNotifyLock.Event.Header.Size = 6;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 80;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ExCreateCallback(&PnpKsrCallbackObject, &ObjectAttributes, 0, 0) >= 0 )
    ExRegisterCallback(PnpKsrCallbackObject, (PCALLBACK_FUNCTION)PipKsrCallback, IopRootDeviceNode);
  return 0LL;
}
