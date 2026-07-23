/*
 * XREFs of UcpInitOnUnexpectedCodePathOnceCallBack @ 0x180158F70
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180173498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 __fastcall UcpInitOnUnexpectedCodePathOnceCallBack(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  __int64 result; // rax

  g_isUcpListInitialized = 1;
  qword_1801D5808 = (__int64)&UcpTriggeredList;
  UcpTriggeredList = (__int64)&UcpTriggeredList;
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CE6B8);
  result = 1LL;
  UcIsTraceLoggingInitialized = 1;
  return result;
}
