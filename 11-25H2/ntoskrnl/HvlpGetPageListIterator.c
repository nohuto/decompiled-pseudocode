/*
 * XREFs of HvlpGetPageListIterator @ 0x140588DD0
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1405864F8 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x140586640 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x140587074 (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpEndSecurePageListIteration @ 0x140588C50 (HvlpEndSecurePageListIteration.c)
 *     HvlpGetPageList @ 0x140588D18 (HvlpGetPageList.c)
 *     HvlpSetupPageListIteration @ 0x140588E9C (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x140588F48 (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     <none>
 */

void *__fastcall HvlpGetPageListIterator(int a1)
{
  void *result; // rax

  result = &HvlpIteratorCrashdump;
  if ( !a1 )
    return &HvlpIteratorHibernate;
  return result;
}
