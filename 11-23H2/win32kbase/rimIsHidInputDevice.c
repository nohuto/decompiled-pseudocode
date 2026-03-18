/*
 * XREFs of rimIsHidInputDevice @ 0x1C00E0F92
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1C00789D8 (RIMStartDeviceSpecificRead.c)
 *     RIMAllocateHidDesc @ 0x1C017F534 (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C01837E8 (RIMVirtAllocateHidDesc.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimIsHidInputDevice(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 48) - 2) > 1u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2454);
  LOBYTE(v2) = *(_WORD *)(a2 + 44) != 0;
  return v2;
}
