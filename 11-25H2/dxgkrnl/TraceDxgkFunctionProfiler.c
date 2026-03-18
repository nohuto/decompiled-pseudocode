/*
 * XREFs of TraceDxgkFunctionProfiler @ 0x140015580
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall TraceDxgkFunctionProfiler(__int64 a1, char a2)
{
  void *v2; // rdx
  __int64 result; // rax

  if ( a2 == 1 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      return McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter);
    return result;
  }
  if ( a2 == 2 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return result;
    v2 = &EventProfilerExit;
    return McTemplateK0q_EtwWriteTransfer(a1, v2);
  }
  if ( a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3093;
    result = DxgkLogInternalTriageEvent(
               0,
               262146,
               -1,
               (unsigned int)L"EventType == EVENT_TRACE_TYPE_INFO",
               3093LL,
               0LL,
               0LL,
               0LL,
               0LL);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
  {
    v2 = &EventProfilerInfo;
    return McTemplateK0q_EtwWriteTransfer(a1, v2);
  }
  return result;
}
