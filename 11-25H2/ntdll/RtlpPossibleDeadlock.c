/*
 * XREFs of RtlpPossibleDeadlock @ 0x1800072A0
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x180005E10 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x1800DBD10 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800DD8A0 (RtlAcquireResourceExclusive.c)
 * Callees:
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     RtlDecodePointer @ 0x180075450 (RtlDecodePointer.c)
 *     RtlReportExceptionHelper @ 0x1800CF388 (RtlReportExceptionHelper.c)
 *     WerpIsProcessNative @ 0x18011F604 (WerpIsProcessNative.c)
 *     RtlCaptureContext @ 0x1801226E0 (RtlCaptureContext.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpPossibleDeadlock(unsigned __int64 a1)
{
  PVOID v2; // rax
  signed __int32 v3; // eax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int IsProcessNative; // eax
  __int64 *v10; // r9
  __int64 v11; // [rsp+20h] [rbp-598h] BYREF
  PVOID v12; // [rsp+28h] [rbp-590h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-588h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+D0h] [rbp-4E8h] BYREF

  *(&ExceptionRecord.NumberParameters + 1) = 0;
  memset_thunk_772440563353939046(&ExceptionRecord.ExceptionInformation[1], 0, 0x70uLL);
  v2 = RtlDecodePointer(RtlpUnhandledExceptionFilter);
  if ( !v2 )
    v2 = RtlUnhandledExceptionFilter;
  v12 = v2;
  ExceptionRecord.ExceptionCode = -1073741420;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = a1;
  v3 = _InterlockedIncrement(&PossibleDeadlockReportCounter);
  if ( PossibleDeadlockReportThreshold && v3 == PossibleDeadlockReportThreshold )
  {
    v4 = 0;
    if ( ((5 * PossibleDeadlockReportThreshold) & 0x40000000) == 0 )
      v4 = 10 * PossibleDeadlockReportThreshold;
    PossibleDeadlockReportThreshold = v4;
    RtlCaptureContext(&ContextRecord);
    v11 = 0LL;
    if ( !LdrpIsSecureProcess )
    {
      IsProcessNative = WerpIsProcessNative(v6, v5, v7, v8, v11, v12, *(_QWORD *)&ExceptionRecord.ExceptionCode);
      if ( IsProcessNative )
        v11 = -300000000LL;
      v10 = &v11;
      if ( !IsProcessNative )
        v10 = 0LL;
      RtlReportExceptionHelper(&ExceptionRecord, &ContextRecord, 15LL, v10, v11);
    }
  }
  if ( RtlpRaiseExceptionOnPossibleDeadlock )
    RtlRaiseException(&ExceptionRecord);
}
