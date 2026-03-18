/*
 * XREFs of HvlpStartPageListIteration @ 0x14058C594
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140589B68 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x140589CB0 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x14058A6E4 (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpInvokeGetPageListHypercall @ 0x14058C45C (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSetupPageListIteration @ 0x14058C50C (HvlpSetupPageListIteration.c)
 */

PHYSICAL_ADDRESS *__fastcall HvlpStartPageListIteration(int a1, char a2)
{
  PHYSICAL_ADDRESS *result; // rax

  result = HvlpSetupPageListIteration(a1, a2);
  if ( result )
    return (PHYSICAL_ADDRESS *)HvlpInvokeGetPageListHypercall((__int64)result, 0LL);
  return result;
}
