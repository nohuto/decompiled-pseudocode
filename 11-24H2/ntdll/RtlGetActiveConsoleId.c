/*
 * XREFs of RtlGetActiveConsoleId @ 0x1800F57A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 */

__int64 RtlGetActiveConsoleId()
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    return *((unsigned int *)NtCurrentPeb()->SharedData + 1);
  else
    return MEMORY[0x7FFE02D8];
}
