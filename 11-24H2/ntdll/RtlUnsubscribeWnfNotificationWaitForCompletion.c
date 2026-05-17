/*
 * XREFs of RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180099E20
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800991AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x180099EA0 (RtlUnsubscribeWnfStateChangeNotification.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800F6A40 (RtlWaitForWnfMetaNotification.c)
 *     RtlpCtContextFree @ 0x180147998 (RtlpCtContextFree.c)
 * Callees:
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x180099EA0 (RtlUnsubscribeWnfStateChangeNotification.c)
 *     RtlpWaitOnAddress @ 0x18009B780 (RtlpWaitOnAddress.c)
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWaitForCompletion(__int64 a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF
  int v3; // [rsp+48h] [rbp+10h] BYREF

  if ( LODWORD(NtCurrentTeb()->ClientId.UniqueThread) == *(_DWORD *)(a1 + 136) )
    __fastfail(5u);
  v2 = 0;
  *(_QWORD *)(a1 + 88) = &v2;
  RtlUnsubscribeWnfStateChangeNotification();
  v3 = 0;
  do
  {
    if ( byte_1801D2908 )
      break;
    RtlpWaitOnAddress((unsigned int)&v2, (unsigned int)&v3, 4, 0, (_DWORD)RtlpWaitOnAddressSpinCycleCount, 0LL);
    v3 = v2;
  }
  while ( !v2 );
  return 0LL;
}
