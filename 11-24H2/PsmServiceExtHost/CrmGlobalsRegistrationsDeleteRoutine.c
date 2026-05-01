/*
 * XREFs of CrmGlobalsRegistrationsDeleteRoutine @ 0x180078A40
 * Callers:
 *     CrmGlobalsRegistrationRemoveAll @ 0x180078954 (CrmGlobalsRegistrationRemoveAll.c)
 * Callees:
 *     CrmRegistrationCleanup @ 0x180030E04 (CrmRegistrationCleanup.c)
 */

void __fastcall CrmGlobalsRegistrationsDeleteRoutine(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 32);
  CrmRegistrationCleanup((_QWORD *)(a1 - 32), 0);
  HampFreeHeap(v1);
}
