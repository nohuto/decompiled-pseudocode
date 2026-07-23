/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x180005510
 * Callers:
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180005490 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180114E10 (RtlUnsubscribeWnfNotificationWithCompletionCallback.c)
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x1800049F8 (RtlpRemoveUserSubFromNameSub.c)
 */

NTSTATUS __cdecl RtlUnsubscribeWnfStateChangeNotification(PWNF_USER_CALLBACK Callback)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_QWORD *)Callback + 11)
    || *((_QWORD *)Callback + 12)
    || LODWORD(NtCurrentTeb()->ClientId.UniqueThread) == *((_DWORD *)Callback + 34) )
  {
    return RtlpRemoveUserSubFromNameSub(*((char **)Callback + 3), Callback, &v2);
  }
  else
  {
    return RtlUnsubscribeWnfNotificationWaitForCompletion((__int64)Callback);
  }
}
