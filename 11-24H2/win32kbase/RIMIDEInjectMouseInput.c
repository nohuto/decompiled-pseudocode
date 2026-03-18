/*
 * XREFs of RIMIDEInjectMouseInput @ 0x1401E6AFC
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x14017D9B0 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMQueueMouseInput @ 0x1401E72D4 (RIMQueueMouseInput.c)
 */

__int64 __fastcall RIMIDEInjectMouseInput(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  unsigned int v3; // edi

  v1 = *(_QWORD *)(a1 + 392);
  v2 = (a1 + 72) & -(__int64)(a1 != 0);
  RIMLockExclusive(v1 + 104);
  if ( *(_BYTE *)(v1 + 81) )
  {
    v3 = -1073741637;
  }
  else
  {
    if ( (*(_DWORD *)(v2 + 168) & 0x2000) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2282);
    RIMLockExclusive(v1 + 760);
    v3 = RIMQueueMouseInput((struct RawInputManagerObject *)v1, (struct RIMDEV *)v2);
    RIMUnlockExclusive(v1 + 760);
  }
  RIMUnlockExclusive(v1 + 104);
  return v3;
}
