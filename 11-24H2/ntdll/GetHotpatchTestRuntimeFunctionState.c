/*
 * XREFs of GetHotpatchTestRuntimeFunctionState @ 0x18012F8B4
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     LdrQueryProcessModuleInformationEx @ 0x18007CFC0 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     <none>
 */

__int64 GetHotpatchTestRuntimeFunctionState()
{
  return (unsigned int)RuntimeGlobal;
}
