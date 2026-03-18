/*
 * XREFs of HvlpGetPageListIterator @ 0x14058C440
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140589B68 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x140589CB0 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x14058A6E4 (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpEndSecurePageListIteration @ 0x14058C2C0 (HvlpEndSecurePageListIteration.c)
 *     HvlpGetPageList @ 0x14058C388 (HvlpGetPageList.c)
 *     HvlpSetupPageListIteration @ 0x14058C50C (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x14058C5B8 (HvlpStartSecurePageListIteration.c)
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
