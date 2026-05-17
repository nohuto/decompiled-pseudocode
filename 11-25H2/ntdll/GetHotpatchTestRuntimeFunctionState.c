/*
 * XREFs of GetHotpatchTestRuntimeFunctionState @ 0x180133164
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     LdrQueryProcessModuleInformationEx @ 0x18006A0E0 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     <none>
 */

__int64 GetHotpatchTestRuntimeFunctionState()
{
  return (unsigned int)RuntimeGlobal;
}
