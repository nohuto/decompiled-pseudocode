/*
 * XREFs of ObpCheckTraverseAccess @ 0x140867E80
 * Callers:
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 * Callees:
 *     SeAccessCheck @ 0x14035A5B0 (SeAccessCheck.c)
 *     SeFastTraverseCheck @ 0x140365838 (SeFastTraverseCheck.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     ObpGetObjectSecurity @ 0x140853850 (ObpGetObjectSecurity.c)
 *     ObReleaseObjectSecurityEx @ 0x140867FD0 (ObReleaseObjectSecurityEx.c)
 *     SeLockSubjectContext @ 0x140868470 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408684D0 (SeUnlockSubjectContext.c)
 *     SeAppendPrivileges @ 0x1409D2470 (SeAppendPrivileges.c)
 */

BOOLEAN __fastcall ObpCheckTraverseAccess(
        ULONG_PTR *a1,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        char a4,
        KPROCESSOR_MODE a5,
        PNTSTATUS AccessStatus)
{
  KPROCESSOR_MODE AccessMode; // bl
  unsigned __int64 v9; // r9
  __int64 v10; // r13
  NTSTATUS ObjectSecurity; // eax
  __int64 v12; // rdx
  BOOLEAN v13; // bl
  PPRIVILEGE_SET Privileges; // [rsp+50h] [rbp-10h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+90h] [rbp+30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+38h] BYREF
  char v18; // [rsp+A8h] [rbp+48h] BYREF

  v18 = a4;
  AccessMode = a5;
  GrantedAccess = 0;
  Privileges = 0LL;
  SecurityDescriptor = 0LL;
  v9 = *((unsigned __int8 *)a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  v18 = 0;
  v10 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v9];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &v18, a5);
  if ( ObjectSecurity < 0 )
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
  else
  {
    if ( SeFastTraverseCheck((__int64)SecurityDescriptor, (__int64)a3, 2) )
    {
      v13 = 1;
    }
    else
    {
      SeLockSubjectContext(&a3->SubjectSecurityContext);
      v13 = SeAccessCheck(
              SecurityDescriptor,
              &a3->SubjectSecurityContext,
              1u,
              2u,
              0,
              &Privileges,
              (PGENERIC_MAPPING)(v10 + 76),
              AccessMode,
              &GrantedAccess,
              AccessStatus);
      if ( Privileges )
      {
        SeAppendPrivileges(a3, Privileges);
        CmSiFreeMemory(Privileges);
      }
      SeUnlockSubjectContext(&a3->SubjectSecurityContext);
    }
    LOBYTE(v12) = v18;
    ObReleaseObjectSecurityEx(SecurityDescriptor, v12, a1);
    return v13;
  }
}
