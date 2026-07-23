/*
 * XREFs of RtlInitializeExtendedContext @ 0x1800BB0B0
 * Callers:
 *     PsspInitializeContextOrExtendedContext @ 0x1800BAFAC (PsspInitializeContextOrExtendedContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlInitializeExtendedContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT_EX *ContextEx)
{
  char v5; // r11
  ULONG64 v6; // r9
  bool v7; // cl

  if ( (ContextFlags & 0x27FFFF80) != 0x10000
    && (ContextFlags & 0x7FFFF20) != 0x100000
    && (ContextFlags & 0x7FFFFF0) != 0x200000
    && (ContextFlags & 0x7FFFF00) != 0x400000 )
  {
    return -1073741811;
  }
  v5 = 1;
  v6 = 0LL;
  v7 = 0;
  if ( (ContextFlags & 0x400020) != 0x400020 )
    v7 = (ContextFlags & 0x10040) != 65600 && (ContextFlags & 0x100040) != 1048640;
  if ( !v7 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return -1073741637;
    v5 = 3;
  }
  if ( (ContextFlags & 0x100080) == 0x100080 )
    return -1073741637;
  if ( (v5 & 2) != 0 )
    v6 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
  return RtlInitializeExtendedContext2(Context, ContextFlags, ContextEx, v6);
}
