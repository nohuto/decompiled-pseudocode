/*
 * XREFs of IoWMISetNotificationCallback @ 0x140AB0120
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 */

NTSTATUS __stdcall IoWMISetNotificationCallback(PVOID Object, WMI_NOTIFICATION_CALLBACK Callback, PVOID Context)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  *((_QWORD *)Object + 9) = Callback;
  *((_QWORD *)Object + 10) = Context;
  KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  return 0;
}
