/*
 * XREFs of RtlReportException @ 0x180001490
 * Callers:
 *     LdrpCallTlsInitializers @ 0x180012F30 (LdrpCallTlsInitializers.c)
 *     LdrpInitializeNode @ 0x18006FB00 (LdrpInitializeNode.c)
 *     LdrpProcessDetachNode @ 0x1800E3114 (LdrpProcessDetachNode.c)
 *     LdrAppxHandleIntegrityFailure @ 0x180115D20 (LdrAppxHandleIntegrityFailure.c)
 *     RtlReportFatalFailure @ 0x18011716C (RtlReportFatalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18011F650 (RtlUnhandledExceptionFilter2.c)
 *     RtlpWnfUnexpectedCallbackExceptionFilter @ 0x1801327B4 (RtlpWnfUnexpectedCallbackExceptionFilter.c)
 *     RtlReportExceptionEx @ 0x1801342D0 (RtlReportExceptionEx.c)
 *     UcOnUnexpectedCodePath @ 0x180157500 (UcOnUnexpectedCodePath.c)
 *     TppReportExceptionFilter @ 0x18015C7BC (TppReportExceptionFilter.c)
 *     TppWorkerpInnerExceptionFilter @ 0x18015C914 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18015C9AC (TppWorkerpOuterExceptionFilter.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x18015EE10 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x180160578 (LdrpLogIntegrityContinuityTelemetry.c)
 * Callees:
 *     WerpBreakIntoDebuggerIfPresent @ 0x180001534 (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlReportExceptionHelper @ 0x18000226C (RtlReportExceptionHelper.c)
 *     WerpIsProcessNative @ 0x18011DD34 (WerpIsProcessNative.c)
 */

__int64 __fastcall RtlReportException(__int64 a1, __int64 a2, unsigned int a3)
{
  int IsProcessNative; // eax
  unsigned int v8; // ebx
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( (a3 & 0xFFFFFFE0) != 0 )
    return 3221225485LL;
  ((void (*)(void))WerpBreakIntoDebuggerIfPresent)();
  if ( LdrpIsSecureProcess )
    return 0LL;
  IsProcessNative = WerpIsProcessNative();
  if ( IsProcessNative )
    v9 = -300000000LL;
  v8 = RtlReportExceptionHelper(a1, a2, a3, (unsigned __int64)&v9 & -(__int64)(IsProcessNative != 0));
  WerpBreakIntoDebuggerIfPresent(a1, a2, a3);
  return v8;
}
