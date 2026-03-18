/*
 * XREFs of RIMHidValidExclusive @ 0x1401E33D8
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x140063CD0 (RIMDirectStartStopDeviceRead.c)
 *     RIMHidTLCActive @ 0x14011577C (RIMHidTLCActive.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMHidValidExclusive(__int64 a1)
{
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 81);
  if ( *(_DWORD *)(a1 + 36) < *(_DWORD *)(a1 + 40) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 82);
  return (unsigned int)(*(_DWORD *)(a1 + 36) - *(_DWORD *)(a1 + 40));
}
