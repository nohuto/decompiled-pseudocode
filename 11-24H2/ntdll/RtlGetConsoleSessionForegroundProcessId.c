/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x180143F30
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 */

ULONGLONG RtlGetConsoleSessionForegroundProcessId(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return *((_QWORD *)NtCurrentPeb()->SharedData + 1);
  else
    return MEMORY[0x7FFE0338];
}
