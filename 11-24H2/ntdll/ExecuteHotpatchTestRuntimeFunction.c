/*
 * XREFs of ExecuteHotpatchTestRuntimeFunction @ 0x18012F888
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     LdrQueryProcessModuleInformationEx @ 0x18007CFC0 (LdrQueryProcessModuleInformationEx.c)
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
