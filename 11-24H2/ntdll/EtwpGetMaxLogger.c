/*
 * XREFs of EtwpGetMaxLogger @ 0x1800EC918
 * Callers:
 *     EtwGetTraceLoggerHandle @ 0x1800EC810 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x1800EC880 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x1800EC8D0 (EtwGetTraceEnableFlags.c)
 * Callees:
 *     NtTraceControl @ 0x180163B00 (NtTraceControl.c)
 */

__int64 EtwpGetMaxLogger()
{
  __int64 result; // rax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  ReturnLength = 0;
  result = (unsigned int)EtwpMaxLoggers;
  if ( !EtwpMaxLoggers )
  {
    if ( NtTraceControl(EtwMaxLoggers, 0LL, 0, &EtwpMaxLoggers, 4u, &ReturnLength) || ReturnLength != 4 )
    {
      result = 128LL;
      EtwpMaxLoggers = 128;
    }
    else
    {
      return (unsigned int)EtwpMaxLoggers;
    }
  }
  return result;
}
