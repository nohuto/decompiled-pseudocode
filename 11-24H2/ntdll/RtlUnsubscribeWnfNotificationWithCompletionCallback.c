/*
 * XREFs of RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180111D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWithCompletionCallback(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)(a1 + 96) )
    return 3221227288LL;
  *(_QWORD *)(a1 + 96) = a2;
  *(_QWORD *)(a1 + 104) = a3;
  return RtlUnsubscribeWnfStateChangeNotification(a1);
}
