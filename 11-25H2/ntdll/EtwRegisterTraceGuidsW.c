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
        __int64 a1,
        int a2,
        __int128 *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  __int128 v9; // xmm0
  __int64 RegGuidsContext; // rsi
  unsigned int LastErrorValue; // ebx
  __int64 v12; // r9
  unsigned __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  __int128 v15; // [rsp+38h] [rbp-30h] BYREF

  v14 = 0LL;
  if ( a1 && a8 && a3 && a4 <= 0x10000 )
  {
    v9 = *a3;
    *a8 = 0LL;
    v15 = v9;
    RegGuidsContext = EtwpCreateRegGuidsContext(a1, a2, (unsigned int)&v15, a4, a5);
    if ( RegGuidsContext )
    {
      LastErrorValue = EtwNotificationRegister(&v15, 2, a1, RegGuidsContext, &v14);
      if ( !LastErrorValue )
      {
        *a8 = v14;
        return LastErrorValue;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, RegGuidsContext, v12);
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
  RtlSetLastWin32Error(87LL);
  return 87LL;
}
