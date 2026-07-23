/*
 * XREFs of LdrpIsSecurityEtwLoggingEnabled @ 0x180092A4C
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180091810 (LdrpMapDllSearchPath.c)
 *     LdrpSearchPath @ 0x180091DD0 (LdrpSearchPath.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 */

char LdrpIsSecurityEtwLoggingEnabled()
{
  char v0; // bl
  __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rdi
  char *v4; // rcx

  v0 = 0;
  v1 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v2 = 2147353476LL;
  v3 = 2147353477LL;
  if ( *(_BYTE *)v2 )
  {
    v4 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v4 & 0x40) != 0 )
      return 1;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v1 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v3 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v3 & 0x20) != 0 )
      return 1;
  }
  return v0;
}
