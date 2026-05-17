/*
 * XREFs of GetHotpatchTestRuntimeFunctionState @ 0x180131684
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800B0720 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     <none>
 */

__int64 GetHotpatchTestRuntimeFunctionState()
{
  return (unsigned int)RuntimeGlobal;
}
