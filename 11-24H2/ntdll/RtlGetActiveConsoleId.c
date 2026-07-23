/*
 * XREFs of RtlGetActiveConsoleId @ 0x1800F02C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 */

ULONG RtlGetActiveConsoleId(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return *((_DWORD *)NtCurrentPeb()->SharedData + 1);
  else
    return MEMORY[0x7FFE02D8];
}
