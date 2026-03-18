/*
 * XREFs of KeIsCoreIsolationMitigationPolicyEnforceable @ 0x14049C968
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

bool KeIsCoreIsolationMitigationPolicyEnforceable()
{
  return KiCoreIsolationEnforceable != 0;
}
