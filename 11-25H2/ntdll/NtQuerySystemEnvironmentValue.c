/*
 * XREFs of NtQuerySystemEnvironmentValue @ 0x180165F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQuerySystemEnvironmentValue(
        PUNICODE_STRING VariableName,
        PWSTR VariableValue,
        USHORT ValueLength,
        PUSHORT ReturnLength)
{
  NTSTATUS result; // eax

  result = 364;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
