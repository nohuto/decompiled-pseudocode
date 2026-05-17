/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x180005510
 * Callers:
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180005490 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180114E10 (RtlUnsubscribeWnfNotificationWithCompletionCallback.c)
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x1800049F8 (RtlpRemoveUserSubFromNameSub.c)
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
