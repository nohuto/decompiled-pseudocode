/*
 * XREFs of KeIsCoreIsolationMitigationPolicyEnforceable @ 0x14049D928
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

bool KeIsCoreIsolationMitigationPolicyEnforceable()
{
  return KiCoreIsolationEnforceable != 0;
}
