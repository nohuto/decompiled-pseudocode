/*
 * XREFs of ObCheckCreateObjectAccess @ 0x14086C5E0
 * Callers:
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 * Callees:
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     ObpGetObjectSecurity @ 0x14084FB10 (ObpGetObjectSecurity.c)
 *     SeLockSubjectContext @ 0x14086C760 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14086C7C0 (SeUnlockSubjectContext.c)
 *     ObDereferenceSecurityDescriptor @ 0x14087E040 (ObDereferenceSecurityDescriptor.c)
 *     SeAppendPrivileges @ 0x1409C22A0 (SeAppendPrivileges.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

BOOLEAN __fastcall ObCheckCreateObjectAccess(
        ULONG_PTR *a1,
        ACCESS_MASK a2,
        struct _ACCESS_STATE *a3,
        __int64 a4,
        __int64 a5,
        KPROCESSOR_MODE a6,
        PNTSTATUS AccessStatus)
{
  KPROCESSOR_MODE AccessMode; // r14
  unsigned __int64 v10; // r10
  __int64 v12; // r13
  NTSTATUS ObjectSecurity; // eax
  BOOLEAN v14; // r14
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-18h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-10h] BYREF
  char v21; // [rsp+A0h] [rbp+30h] BYREF

  AccessMode = a6;
  GrantedAccess = 0;
  Privileges = 0LL;
  SecurityDescriptor = 0LL;
  v10 = *((unsigned __int8 *)a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  v21 = 0;
  v12 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v10];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &v21, a6);
  if ( ObjectSecurity < 0 )
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
  else
  {
    SeLockSubjectContext(&a3->SubjectSecurityContext);
    if ( SecurityDescriptor )
    {
      v14 = SeAccessCheck(
              SecurityDescriptor,
              &a3->SubjectSecurityContext,
              1u,
              a2,
              0,
              &Privileges,
              (PGENERIC_MAPPING)(v12 + 76),
              AccessMode,
              &GrantedAccess,
              AccessStatus);
      if ( Privileges )
      {
        SeAppendPrivileges(a3, Privileges);
        CmSiFreeMemory(Privileges);
      }
    }
    else
    {
      v14 = 1;
    }
    SeUnlockSubjectContext(&a3->SubjectSecurityContext);
    if ( SecurityDescriptor )
    {
      if ( v21 )
      {
        ExFreePoolWithTag(SecurityDescriptor, 0);
      }
      else
      {
        _m_prefetchw(a1 - 1);
        v15 = *(a1 - 1);
        while ( ((unsigned __int64)SecurityDescriptor ^ v15) < 0xF )
        {
          v16 = v15;
          v15 = _InterlockedCompareExchange64((volatile signed __int64 *)a1 - 1, v15 + 1, v15);
          if ( v16 == v15 )
            return v14;
        }
        ObDereferenceSecurityDescriptor(SecurityDescriptor, 1LL);
      }
    }
    return v14;
  }
}
