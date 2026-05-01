/*
 * XREFs of CrmGlobalsRegistrationsDeleteRoutine @ 0x1800789E0
 * Callers:
 *     CrmGlobalsRegistrationRemoveAll @ 0x1800788F4 (CrmGlobalsRegistrationRemoveAll.c)
 * Callees:
 *     CrmRegistrationCleanup @ 0x180030E84 (CrmRegistrationCleanup.c)
 */

void __fastcall CrmGlobalsRegistrationsDeleteRoutine(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 32);
  CrmRegistrationCleanup((_QWORD *)(a1 - 32), 0);
  HampFreeHeap(v1);
}
