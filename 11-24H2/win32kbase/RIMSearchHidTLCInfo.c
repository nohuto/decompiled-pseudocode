/*
 * XREFs of RIMSearchHidTLCInfo @ 0x1400C9484
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1400C8E60 (RIMIDECreateHIDDesc.c)
 *     RIMCreateHidDesc @ 0x1401DBCC8 (RIMCreateHidDesc.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1401E3074 (RIMAllocateAndLinkHidTLCInfo.c)
 *     rimObsStartStopDeviceRead @ 0x1401F0DA0 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 *__fastcall RIMSearchHidTLCInfo(__int64 a1, __int16 a2)
{
  __int16 v3; // bp
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // edi
  __int16 v8; // dx
  int v9; // eax

  v3 = a1;
  v4 = *(__int64 **)(W32GetUserSessionState(a1) + 192);
  if ( v4 == (__int64 *)(W32GetUserSessionState(v5) + 192) )
    return 0LL;
  while ( 1 )
  {
    v7 = 0;
    v8 = *((_WORD *)v4 + 9);
    if ( *((_WORD *)v4 + 8) != 1 )
      goto LABEL_7;
    if ( v8 == 2 || v8 == 6 )
      v7 = 1;
    v9 = 1;
    if ( ((v8 - 2) & 0xFFFB) != 0 )
LABEL_7:
      v9 = 0;
    if ( v7 != v9 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 43LL);
    if ( v7 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 124LL);
    if ( *((_WORD *)v4 + 8) == v3 && *((_WORD *)v4 + 9) == a2 )
      return v4;
    v4 = (__int64 *)*v4;
    if ( v4 == (__int64 *)(W32GetUserSessionState(v6) + 192) )
      return 0LL;
  }
}
