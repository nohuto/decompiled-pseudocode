/*
 * XREFs of KiUserCallbackDispatcherHandler @ 0x180165C10
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     RtlUnwindEx @ 0x180015480 (RtlUnwindEx.c)
 *     LdrpLogFatalUserCallbackException @ 0x1801602F0 (LdrpLogFatalUserCallbackException.c)
 *     ZwCallbackReturn @ 0x180161D30 (ZwCallbackReturn.c)
 */

__int64 __fastcall KiUserCallbackDispatcherHandler(
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID TargetFrame,
        PCONTEXT ContextRecord)
{
  int ExceptionCode; // [rsp+30h] [rbp-8h]
  int v5; // [rsp+30h] [rbp-8h]

  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x80000) != 0 )
  {
    if ( (ExceptionRecord->ExceptionFlags & 0x66) == 0 )
    {
      ExceptionCode = ExceptionRecord->ExceptionCode;
      RtlUnwindEx(
        TargetFrame,
        &KiUserCallbackDispatcherContinue,
        ExceptionRecord,
        (PVOID)(unsigned int)ExceptionRecord->ExceptionCode,
        ContextRecord,
        0LL);
      RtlRaiseStatus(ExceptionCode);
    }
    if ( (ExceptionRecord->ExceptionFlags & 0x20) == 0 )
    {
      v5 = ZwCallbackReturn();
      RtlRaiseStatus(v5);
    }
    return 1LL;
  }
  else
  {
    LdrpLogFatalUserCallbackException(ExceptionRecord, ContextRecord);
    return 0LL;
  }
}
