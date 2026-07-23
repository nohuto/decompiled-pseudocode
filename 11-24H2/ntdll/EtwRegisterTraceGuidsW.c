/*
 * XREFs of EtwRegisterTraceGuidsW @ 0x1800E5940
 * Callers:
 *     EtwRegisterTraceGuidsA @ 0x1800E5900 (EtwRegisterTraceGuidsA.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048FD0 (RtlSetLastWin32Error.c)
 *     EtwNotificationRegister @ 0x180049E50 (EtwNotificationRegister.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     EtwpCreateRegGuidsContext @ 0x1800E5A60 (EtwpCreateRegGuidsContext.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
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
