/*
 * XREFs of HvlpStartPageListIteration @ 0x140588F24
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1405864F8 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x140586640 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x140587074 (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpInvokeGetPageListHypercall @ 0x140588DEC (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSetupPageListIteration @ 0x140588E9C (HvlpSetupPageListIteration.c)
 */

PHYSICAL_ADDRESS *__fastcall HvlpStartPageListIteration(int a1, char a2)
{
  PHYSICAL_ADDRESS *result; // rax

  result = HvlpSetupPageListIteration(a1, a2);
  if ( result )
    return (PHYSICAL_ADDRESS *)HvlpInvokeGetPageListHypercall((__int64)result, 0LL);
  return result;
}
