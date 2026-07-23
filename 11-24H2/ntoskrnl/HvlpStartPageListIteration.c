/*
 * XREFs of HvlpStartPageListIteration @ 0x140589934
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140586E58 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x140586FA0 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1405879D4 (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpInvokeGetPageListHypercall @ 0x1405897FC (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSetupPageListIteration @ 0x1405898AC (HvlpSetupPageListIteration.c)
 */

PHYSICAL_ADDRESS *__fastcall HvlpStartPageListIteration(int a1, char a2)
{
  PHYSICAL_ADDRESS *result; // rax

  result = HvlpSetupPageListIteration(a1, a2);
  if ( result )
    return (PHYSICAL_ADDRESS *)HvlpInvokeGetPageListHypercall((__int64)result, 0LL);
  return result;
}
