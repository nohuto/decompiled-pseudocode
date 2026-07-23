/*
 * XREFs of ZwQuerySystemEnvironmentValue @ 0x1406AA130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySystemEnvironmentValue(
        PUNICODE_STRING VariableName,
        PWSTR VariableValue,
        USHORT ValueLength,
        PUSHORT ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VariableName);
}
