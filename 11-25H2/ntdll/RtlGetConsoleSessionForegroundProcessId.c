/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x180147130
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 */

ULONGLONG RtlGetConsoleSessionForegroundProcessId(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return *((_QWORD *)NtCurrentPeb()->SharedData + 1);
  else
    return MEMORY[0x7FFE0338];
}
