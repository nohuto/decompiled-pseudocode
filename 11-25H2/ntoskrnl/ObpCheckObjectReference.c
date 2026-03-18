/*
 * XREFs of ObpCheckObjectReference @ 0x1409156D0
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x140914400 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140915290 (ObReferenceObjectByName.c)
 * Callees:
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14078230C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x140856980 (SepAdtAuditThisEventWithContext.c)
 *     ObDereferenceSecurityDescriptor @ 0x14086EF20 (ObDereferenceSecurityDescriptor.c)
 *     ObpGetObjectSecurity @ 0x1409160F0 (ObpGetObjectSecurity.c)
 *     SeLockSubjectContext @ 0x1409163C0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140916420 (SeUnlockSubjectContext.c)
 *     SeExamineSacl @ 0x14092EA20 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x14092EC88 (SeExamineGlobalSacl.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

BOOLEAN __fastcall ObpCheckObjectReference(
        ULONG_PTR a1,
        __int64 a2,
        BOOLEAN a3,
        KPROCESSOR_MODE a4,
        PNTSTATUS AccessStatus)
{
  unsigned __int64 v6; // r10
  __int64 v8; // rbx
  NTSTATUS ObjectSecurity; // eax
  BOOLEAN v10; // r15
  ACCESS_MASK v11; // ecx
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-Ch] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-8h]
  BOOLEAN GenerateAudit; // [rsp+B0h] [rbp+50h]

  GenerateAudit = a3;
  v6 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  GrantedAccess = 0;
  SecurityDescriptor = 0LL;
  v8 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v6];
  ObjectSecurity = ObpGetObjectSecurity(a1);
  if ( ObjectSecurity < 0 )
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
  else
  {
    SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a2 + 32));
    v10 = SeAccessCheck(
            SecurityDescriptor,
            (PSECURITY_SUBJECT_CONTEXT)(a2 + 32),
            1u,
            *(_DWORD *)(a2 + 16),
            *(_DWORD *)(a2 + 20),
            0LL,
            (PGENERIC_MAPPING)(v8 + 76),
            a4,
            &GrantedAccess,
            AccessStatus);
    if ( v10 )
    {
      v11 = GrantedAccess;
      *(_DWORD *)(a2 + 20) |= GrantedAccess;
      *(_DWORD *)(a2 + 16) &= ~v11;
    }
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a2 + 32));
    return v10;
  }
}
