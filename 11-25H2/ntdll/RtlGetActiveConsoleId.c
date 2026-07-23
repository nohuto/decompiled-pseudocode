/*
 * XREFs of RtlGetActiveConsoleId @ 0x1800F7320
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 */

ULONG RtlGetActiveConsoleId(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return *((_DWORD *)NtCurrentPeb()->SharedData + 1);
  else
    return MEMORY[0x7FFE02D8];
}
