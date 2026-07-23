/*
 * XREFs of RtlInitializeExtendedContext @ 0x1800C7C00
 * Callers:
 *     PsspInitializeContextOrExtendedContext @ 0x1800C7AF8 (PsspInitializeContextOrExtendedContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlInitializeExtendedContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT_EX *ContextEx)
{
  ULONG64 v4; // r9
  bool v5; // cl
  int v6; // ecx

  if ( (ContextFlags & 0x27FFFF80) != 0x10000
    && (ContextFlags & 0x7FFFF20) != 0x100000
    && (ContextFlags & 0x7FFFFF0) != 0x200000
    && (ContextFlags & 0x7FFFFC0) != 0x400000 )
  {
    return -1073741811;
  }
  v4 = 0LL;
  v5 = 0;
  if ( (ContextFlags & 0x400020) != 0x400020 )
    v5 = (ContextFlags & 0x10040) != 65600 && (ContextFlags & 0x100040) != 1048640;
  if ( v5 )
  {
    v6 = 0;
  }
  else
  {
    if ( !MEMORY[0x7FFE03D8] )
      return -1073741637;
    v6 = 2;
  }
  if ( (ContextFlags & 0x100080) == 0x100080 )
    return -1073741637;
  if ( v6 )
    v4 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
  return RtlInitializeExtendedContext2(Context, ContextFlags, ContextEx, v4);
}
