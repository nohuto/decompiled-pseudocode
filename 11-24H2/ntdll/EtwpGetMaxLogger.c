/*
 * XREFs of EtwpGetMaxLogger @ 0x1800F1C98
 * Callers:
 *     EtwGetTraceLoggerHandle @ 0x1800F1B90 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x1800F1C00 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x1800F1C50 (EtwGetTraceEnableFlags.c)
 * Callees:
 *     NtTraceControl @ 0x180165740 (NtTraceControl.c)
 */

__int64 EtwpGetMaxLogger()
{
  __int64 result; // rax
  int v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  result = (unsigned int)EtwpMaxLoggers;
  if ( !EtwpMaxLoggers )
  {
    if ( (unsigned int)NtTraceControl(42LL, 0LL, 0LL, &EtwpMaxLoggers, 4, &v1) || v1 != 4 )
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
