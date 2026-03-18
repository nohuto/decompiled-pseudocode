/*
 * XREFs of ObCheckCreateObjectAccess @ 0x140915F70
 * Callers:
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 * Callees:
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     SeAppendPrivileges @ 0x140862AC0 (SeAppendPrivileges.c)
 *     ObDereferenceSecurityDescriptor @ 0x14086EF20 (ObDereferenceSecurityDescriptor.c)
 *     ObpGetObjectSecurity @ 0x1409160F0 (ObpGetObjectSecurity.c)
 *     SeLockSubjectContext @ 0x1409163C0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140916420 (SeUnlockSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char __fastcall ObCheckCreateObjectAccess(
        ULONG_PTR a1,
        __int64 a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        PNTSTATUS a7)
{
  int ObjectSecurity; // eax

  ObjectSecurity = ObpGetObjectSecurity(a1);
  if ( ObjectSecurity < 0 )
  {
    *a7 = ObjectSecurity;
    return 0;
  }
  else
  {
    SeLockSubjectContext(a3 + 1);
    SeUnlockSubjectContext(a3 + 1);
    return 1;
  }
}
