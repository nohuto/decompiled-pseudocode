/*
 * XREFs of PopDiagTraceIrpPended @ 0x1404CE754
 * Callers:
 *     PopFxNotifyPostSIrpCompletion @ 0x1405CEF38 (PopFxNotifyPostSIrpCompletion.c)
 *     PopSystemIrpCompletion @ 0x140B71950 (PopSystemIrpCompletion.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIrpPended(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  __int64 v2; // [rsp+70h] [rbp+8h] BYREF

  v2 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRPPENDED) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 8;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_IRPPENDED, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
