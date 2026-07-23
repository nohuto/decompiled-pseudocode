/*
 * XREFs of EtwpGetMaxLogger @ 0x1800F3808
 * Callers:
 *     EtwGetTraceLoggerHandle @ 0x1800F3700 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x1800F3770 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x1800F37C0 (EtwGetTraceEnableFlags.c)
 * Callees:
 *     NtTraceControl @ 0x180166CD0 (NtTraceControl.c)
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
      result = 80LL;
      EtwpMaxLoggers = 80;
    }
    else
    {
      return (unsigned int)EtwpMaxLoggers;
    }
  }
  return result;
}
