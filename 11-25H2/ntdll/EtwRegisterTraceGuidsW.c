/*
 * XREFs of EtwRegisterTraceGuidsW @ 0x1800EB570
 * Callers:
 *     EtwRegisterTraceGuidsA @ 0x1800EB530 (EtwRegisterTraceGuidsA.c)
 * Callees:
 *     EtwNotificationRegister @ 0x180045640 (EtwNotificationRegister.c)
 *     RtlSetLastWin32Error @ 0x180046B80 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     EtwpCreateRegGuidsContext @ 0x1800EB690 (EtwpCreateRegGuidsContext.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall EtwRegisterTraceGuidsW(
        PETW_NOTIFICATION_CALLBACK Callback,
        int a2,
        GUID *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        ULONGLONG *a8)
{
  GUID v9; // xmm0
  void *RegGuidsContext; // rsi
  unsigned __int32 LastErrorValue; // ebx
  ULONGLONG RegHandle; // [rsp+30h] [rbp-38h] BYREF
  GUID Guid; // [rsp+38h] [rbp-30h] BYREF

  RegHandle = 0LL;
  if ( Callback && a8 && a3 && a4 <= 0x10000 )
  {
    v9 = *a3;
    *a8 = 0LL;
    Guid = v9;
    RegGuidsContext = (void *)EtwpCreateRegGuidsContext((_DWORD)Callback, a2, (unsigned int)&Guid, a4, a5);
    if ( RegGuidsContext )
    {
      LastErrorValue = EtwNotificationRegister(&Guid, 2u, Callback, RegGuidsContext, &RegHandle);
      if ( !LastErrorValue )
      {
        *a8 = RegHandle;
        return LastErrorValue;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, RegGuidsContext);
    }
    else
    {
      LastErrorValue = NtCurrentTeb()->LastErrorValue;
      if ( !LastErrorValue )
        return LastErrorValue;
    }
    RtlSetLastWin32Error(LastErrorValue);
    return LastErrorValue;
  }
  RtlSetLastWin32Error(87);
  return 87LL;
}
