/*
 * XREFs of RtlGetExtendedContextLength @ 0x1800BB1C0
 * Callers:
 *     PsspCaptureThreadInformation @ 0x1800BA890 (PsspCaptureThreadInformation.c)
 *     PsspInitializeContextOrExtendedContext @ 0x1800BAFAC (PsspInitializeContextOrExtendedContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetExtendedContextLength(ULONG ContextFlags, PULONG ContextLength)
{
  char v4; // r11
  ULONG64 v5; // r10
  bool v6; // cl

  if ( (ContextFlags & 0x27FFFF80) != 0x10000
    && (ContextFlags & 0x7FFFF20) != 0x100000
    && (ContextFlags & 0x7FFFFF0) != 0x200000
    && (ContextFlags & 0x7FFFF00) != 0x400000 )
  {
    return -1073741811;
  }
  v4 = 1;
  v5 = 0LL;
  v6 = 0;
  if ( (ContextFlags & 0x400020) != 0x400020 )
    v6 = (ContextFlags & 0x10040) != 65600 && (ContextFlags & 0x100040) != 1048640;
  if ( !v6 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return -1073741637;
    v4 = 3;
  }
  if ( (ContextFlags & 0x100080) == 0x100080 )
    return -1073741637;
  if ( (v4 & 2) != 0 )
    v5 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
  return RtlGetExtendedContextLength2(ContextFlags, ContextLength, v5);
}
