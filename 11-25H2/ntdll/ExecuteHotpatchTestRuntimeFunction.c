/*
 * XREFs of ExecuteHotpatchTestRuntimeFunction @ 0x180133138
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     LdrQueryProcessModuleInformationEx @ 0x18006A0E0 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     <none>
 */

int *ExecuteHotpatchTestRuntimeFunction()
{
  int *result; // rax

  result = &RuntimeGlobal;
  if ( &RuntimeGlobal == (int *)32 )
    RuntimeGlobal = 20;
  RuntimeGlobal = 0;
  return result;
}
