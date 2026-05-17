/*
 * XREFs of UcpInitOnUnexpectedCodePathOnceCallBack @ 0x1801579C0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180171498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 UcpInitOnUnexpectedCodePathOnceCallBack()
{
  __int64 result; // rax

  g_isUcpListInitialized = 1;
  qword_1801D37A8 = (__int64)&UcpTriggeredList;
  UcpTriggeredList = (__int64)&UcpTriggeredList;
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CC6B8);
  result = 1LL;
  UcIsTraceLoggingInitialized = 1;
  return result;
}
