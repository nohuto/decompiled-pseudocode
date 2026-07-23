/*
 * XREFs of RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180005490
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18000481C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x180005510 (RtlUnsubscribeWnfStateChangeNotification.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800F86A0 (RtlWaitForWnfMetaNotification.c)
 *     RtlpCtContextFree @ 0x180148F48 (RtlpCtContextFree.c)
 * Callees:
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x180005510 (RtlUnsubscribeWnfStateChangeNotification.c)
 *     RtlpWaitOnAddress @ 0x180006DF0 (RtlpWaitOnAddress.c)
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWaitForCompletion(__int64 a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF
  int v3; // [rsp+48h] [rbp+10h] BYREF

  if ( LODWORD(NtCurrentTeb()->ClientId.UniqueThread) == *(_DWORD *)(a1 + 136) )
    __fastfail(5u);
  v2 = 0;
  *(_QWORD *)(a1 + 88) = &v2;
  RtlUnsubscribeWnfStateChangeNotification((PWNF_USER_CALLBACK)a1);
  v3 = 0;
  do
  {
    if ( byte_1801D4988 )
      break;
    RtlpWaitOnAddress(&v2, &v3, 4LL);
    v3 = v2;
  }
  while ( !v2 );
  return 0LL;
}
