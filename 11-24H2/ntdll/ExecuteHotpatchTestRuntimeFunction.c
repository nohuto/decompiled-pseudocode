/*
 * XREFs of ExecuteHotpatchTestRuntimeFunction @ 0x180131658
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800B0720 (LdrQueryProcessModuleInformationEx.c)
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
