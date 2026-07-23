/*
 * XREFs of KiUserCallbackDispatcherHandler @ 0x1801671A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     LdrpLogFatalUserCallbackException @ 0x180161840 (LdrpLogFatalUserCallbackException.c)
 *     ZwCallbackReturn @ 0x1801632C0 (ZwCallbackReturn.c)
 */

__int64 __fastcall KiUserCallbackDispatcherHandler(
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID TargetFrame,
        PCONTEXT ContextRecord)
{
  int Status; // [rsp+30h] [rbp-8h]
  NTSTATUS Statusa; // [rsp+30h] [rbp-8h]

  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x80000) != 0 )
  {
    if ( (ExceptionRecord->ExceptionFlags & 0x66) == 0 )
    {
      Status = ExceptionRecord->ExceptionCode;
      RtlUnwindEx(
        TargetFrame,
        &KiUserCallbackDispatcherContinue,
        ExceptionRecord,
        (PVOID)(unsigned int)ExceptionRecord->ExceptionCode,
        ContextRecord,
        0LL);
      RtlRaiseStatus(Status);
    }
    if ( (ExceptionRecord->ExceptionFlags & 0x20) == 0 )
    {
      Statusa = ZwCallbackReturn(0LL, 0, ExceptionRecord->ExceptionCode);
      RtlRaiseStatus(Statusa);
    }
    return 1LL;
  }
  else
  {
    LdrpLogFatalUserCallbackException(ExceptionRecord, (__int64)ContextRecord);
    return 0LL;
  }
}
