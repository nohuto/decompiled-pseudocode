/*
 * XREFs of PopDiagTraceIrpPended @ 0x1404D5AD0
 * Callers:
 *     PopSystemIrpCompletion @ 0x140B5A4B0 (PopSystemIrpCompletion.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
