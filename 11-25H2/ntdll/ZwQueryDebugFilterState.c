/*
 * XREFs of ZwQueryDebugFilterState @ 0x180165B90
 * Callers:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800EC7EC (vDbgPrintExWithPrefixInternalHelper.c)
 *     DbgQueryDebugFilterState @ 0x1801380D0 (DbgQueryDebugFilterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  NTSTATUS result; // eax

  result = 332;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
