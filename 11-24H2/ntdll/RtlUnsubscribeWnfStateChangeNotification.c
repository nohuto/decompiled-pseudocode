/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x180099EA0
 * Callers:
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180099E20 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180111D10 (RtlUnsubscribeWnfNotificationWithCompletionCallback.c)
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x180099388 (RtlpRemoveUserSubFromNameSub.c)
 */

__int64 __fastcall RtlUnsubscribeWnfStateChangeNotification(__int64 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( *(_QWORD *)(a1 + 88)
    || *(_QWORD *)(a1 + 96)
    || LODWORD(NtCurrentTeb()->ClientId.UniqueThread) == *(_DWORD *)(a1 + 136) )
  {
    return RtlpRemoveUserSubFromNameSub(*(_QWORD *)(a1 + 24), a1, &v2);
  }
  else
  {
    return RtlUnsubscribeWnfNotificationWaitForCompletion(a1);
  }
}
