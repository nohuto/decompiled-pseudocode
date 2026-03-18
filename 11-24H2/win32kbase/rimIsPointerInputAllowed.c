/*
 * XREFs of rimIsPointerInputAllowed @ 0x14017AC68
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x140122404 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimIsPointerInputAllowed(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 456) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 221LL);
  if ( !*(_BYTE *)(W32GetUserSessionState(a1) + 169)
    || _bittest((const signed __int32 *)(a1 + 168), 0xDu)
    || _bittest((const signed __int32 *)(*(_QWORD *)(a1 + 456) + 368LL), 0xDu) )
  {
    return 1;
  }
  return v1;
}
