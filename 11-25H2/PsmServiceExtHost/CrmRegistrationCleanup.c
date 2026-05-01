/*
 * XREFs of CrmRegistrationCleanup @ 0x180030E84
 * Callers:
 *     CrmSrvRegister @ 0x18003DC60 (CrmSrvRegister.c)
 *     CrmGlobalsRegistrationsDeleteRoutine @ 0x1800789E0 (CrmGlobalsRegistrationsDeleteRoutine.c)
 *     CrmGlobalsCleanupCrmRegistrations @ 0x18007B5B8 (CrmGlobalsCleanupCrmRegistrations.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CrmRegistrationRemoveActivity @ 0x18003190C (CrmRegistrationRemoveActivity.c)
 *     CrmGlobalsRegistrationRemove @ 0x180064A0C (CrmGlobalsRegistrationRemove.c)
 */

__int64 __fastcall CrmRegistrationCleanup(_QWORD *a1, int a2)
{
  _QWORD *i; // rdi
  void *v4; // rcx

  if ( a2 && a1[6] != -1LL )
    CrmGlobalsRegistrationRemove();
  for ( i = a1 + 7; (_QWORD *)*i != i; CrmRegistrationRemoveActivity(a1, *i, 0LL) )
    ;
  v4 = (void *)a1[18];
  if ( v4 )
    HampFreeHeap(v4);
  return CrmLogRegistrationStop(a1[2]);
}
