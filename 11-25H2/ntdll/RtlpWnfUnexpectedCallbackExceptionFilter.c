/*
 * XREFs of RtlpWnfUnexpectedCallbackExceptionFilter @ 0x180134294
 * Callers:
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x1800043E0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180042A00 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlReportException @ 0x1800CF050 (RtlReportException.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpWnfUnexpectedCallbackExceptionFilter(__int64 a1)
{
  _EXCEPTION_RECORD *v1; // rbx
  __int64 v2; // rdi
  unsigned int v3; // eax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  v1 = *(_EXCEPTION_RECORD **)a1;
  v2 = *(_QWORD *)(a1 + 8);
  memset_thunk_772440563353939046(&ExceptionRecord.NumberParameters, 0, 0x80uLL);
  ExceptionRecord.ExceptionCode = -1073740771;
  v3 = v1->ExceptionFlags | 1;
  ExceptionRecord.ExceptionRecord = v1;
  ExceptionRecord.ExceptionFlags = v3;
  ExceptionRecord.ExceptionAddress = *(void **)(v2 + 248);
  RtlReportException(&ExceptionRecord, (PCONTEXT)v2, 9u);
  return 0LL;
}
