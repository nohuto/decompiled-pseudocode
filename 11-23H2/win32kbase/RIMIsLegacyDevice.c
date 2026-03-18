/*
 * XREFs of RIMIsLegacyDevice @ 0x1C01919A8
 * Callers:
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C01913D4 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C0191A18 (RIMSearchHidTLCInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMIsLegacyDevice(__int16 a1, __int16 a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  v3 = 1;
  if ( a1 != 1 )
    goto LABEL_6;
  if ( a2 == 2 || a2 == 6 )
    v2 = 1;
  if ( ((a2 - 2) & 0xFFFB) != 0 )
LABEL_6:
    v3 = 0;
  if ( v2 != v3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 43);
  return v2;
}
