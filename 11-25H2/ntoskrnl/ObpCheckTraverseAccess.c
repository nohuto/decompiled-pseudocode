/*
 * XREFs of ObpCheckTraverseAccess @ 0x14091495C
 * Callers:
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 * Callees:
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     SeFastTraverseCheck @ 0x14036C4C4 (SeFastTraverseCheck.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     SeAppendPrivileges @ 0x140862AC0 (SeAppendPrivileges.c)
 *     ObReleaseObjectSecurityEx @ 0x140914900 (ObReleaseObjectSecurityEx.c)
 *     ObpGetObjectSecurity @ 0x1409160F0 (ObpGetObjectSecurity.c)
 *     SeLockSubjectContext @ 0x1409163C0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140916420 (SeUnlockSubjectContext.c)
 */

BOOLEAN __fastcall ObpCheckTraverseAccess(
        ULONG_PTR a1,
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
  BOOLEAN v12; // bl
  PPRIVILEGE_SET Privileges; // [rsp+50h] [rbp-10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+38h] BYREF
  char v16; // [rsp+A8h] [rbp+48h]

  v16 = a4;
  AccessMode = a5;
  GrantedAccess = 0;
  Privileges = 0LL;
  v9 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  v16 = 0;
  v10 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v9];
  ObjectSecurity = ObpGetObjectSecurity(a1);
  if ( ObjectSecurity < 0 )
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
  else
  {
    if ( SeFastTraverseCheck(0LL, (__int64)a3, 2) )
    {
      v12 = 1;
    }
    else
    {
      SeLockSubjectContext(&a3->SubjectSecurityContext);
      v12 = SeAccessCheck(
              0LL,
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
    ObReleaseObjectSecurityEx(0LL, v16, a1);
    return v12;
  }
}
