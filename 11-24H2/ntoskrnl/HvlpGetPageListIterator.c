/*
 * XREFs of HvlpGetPageListIterator @ 0x1405897E0
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140586E58 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x140586FA0 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1405879D4 (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpEndSecurePageListIteration @ 0x140589660 (HvlpEndSecurePageListIteration.c)
 *     HvlpGetPageList @ 0x140589728 (HvlpGetPageList.c)
 *     HvlpSetupPageListIteration @ 0x1405898AC (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x140589958 (HvlpStartSecurePageListIteration.c)
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
