/*
 * XREFs of RtlUnhandledExceptionFilter_0 @ 0x14000EF94
 * Callers:
 *     __report_gsfailure @ 0x14000ED20 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG __stdcall RtlUnhandledExceptionFilter_0(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  return RtlUnhandledExceptionFilter(ExceptionInfo);
}
